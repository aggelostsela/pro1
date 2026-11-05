#!/usr/bin/env bash
# Homework helper for Programming I (University of the Peloponnese)
#
#   ./hw.sh new <group> <team> <hw> <count>
#       Creates folder grXYY_hwZZ/ containing grXYY_hwZZ_01.c ... grXYY_hwZZ_<count>.c
#
#   ./hw.sh zip <group> <team> <hw> <Surname1> <Surname2> <ex> [<ex> ...]
#       Packs the solved exercises into grXYY_hwZZ_Surname1_Surname2_aa_bb_....zip
#
# group = 1 or 2, team = your team number in the group, hw = homework series number
# Example: ./hw.sh new 2 5 4 10
#          ./hw.sh zip 2 5 4 Seklou Tselikas 1 7 8 10

set -euo pipefail

usage() {
    sed -n '2,13p' "$0" | sed 's/^# \{0,1\}//'
    exit 1
}

is_int() { [[ "$1" =~ ^[0-9]+$ ]]; }

# Validate and normalise the common arguments (group, team, hw)
parse_common() {
    is_int "$1" && is_int "$2" && is_int "$3" || { echo "Error: group, team and hw must be numbers." >&2; exit 1; }
    G=$((10#$1)); T=$((10#$2)); H=$((10#$3))
    (( G == 1 || G == 2 )) || { echo "Error: group must be 1 or 2." >&2; exit 1; }
    (( T >= 1 && T <= 99 )) || { echo "Error: team must be between 1 and 99." >&2; exit 1; }
    (( H >= 1 && H <= 99 )) || { echo "Error: hw must be between 1 and 99." >&2; exit 1; }
    PREFIX=$(printf "gr%d%02d_hw%02d" "$G" "$T" "$H")   # e.g. gr205_hw04
}

cmd_new() {
    [[ $# -eq 4 ]] || usage
    parse_common "$1" "$2" "$3"
    is_int "$4" || { echo "Error: count must be a number." >&2; exit 1; }
    local count=$((10#$4))
    (( count >= 1 && count <= 99 )) || { echo "Error: count must be between 1 and 99." >&2; exit 1; }

    mkdir -p "$PREFIX"
    for (( i = 1; i <= count; i++ )); do
        local f
        f=$(printf "%s/%s_%02d.c" "$PREFIX" "$PREFIX" "$i")
        if [[ -e "$f" ]]; then
            echo "Skipping (already exists): $f"
            continue
        fi
        cat > "$f" <<'EOF'
#include <stdio.h>

int main(void)
{

    return 0;
}
EOF
        echo "Created: $f"
    done
}

cmd_zip() {
    [[ $# -ge 6 ]] || usage
    command -v zip >/dev/null || { echo "Error: 'zip' not found. Install it with: sudo pacman -S zip" >&2; exit 1; }
    parse_common "$1" "$2" "$3"
    local s1="$4" s2="$5"
    shift 5

    # Surnames must be Latin characters only
    [[ "$s1" =~ ^[A-Za-z]+$ && "$s2" =~ ^[A-Za-z]+$ ]] || { echo "Error: surnames must use Latin letters only." >&2; exit 1; }

    [[ -d "$PREFIX" ]] || { echo "Error: folder $PREFIX not found. Run this from the directory containing it." >&2; exit 1; }

    local nums="" files=()
    for ex in "$@"; do
        is_int "$ex" || { echo "Error: exercise numbers must be numbers (got '$ex')." >&2; exit 1; }
        local n f
        n=$(printf "%02d" $((10#$ex)))
        f="${PREFIX}_${n}.c"
        [[ -f "$PREFIX/$f" ]] || { echo "Error: $PREFIX/$f does not exist." >&2; exit 1; }
        files+=("$f")
        nums+="_$n"
    done

    local zipname="${PREFIX}_${s1}_${s2}${nums}.zip"
    ( cd "$PREFIX" && zip -q "../$zipname" "${files[@]}" )
    echo "Created: $zipname"
    echo "Contents: ${files[*]}"
}

[[ $# -ge 1 ]] || usage
mode="$1"; shift
case "$mode" in
    new) cmd_new "$@" ;;
    zip) cmd_zip "$@" ;;
    *)   usage ;;
esac
