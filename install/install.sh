#!/bin/bash

export PATH=/usr/bin:/bin:"$PATH"
export LC_ALL=UTF-8

BIN_DIR="$(cd "$(dirname "$0")" && pwd )"
BASE_DIR="$(dirname "$BIN_DIR")"
PROJECT_DIR=$(dirname "$BASE_DIR")

unset help exit
while getopts "h" option; do #{{{
  case $option in
    h)
      help=1
      ;;
    *)
      exit=1
      ;;
  esac
done #}}}
shift $(($OPTIND - 1))

[ -z "$help" ] || { #{{{
  cat << EOF
Usage:
$0 [<options>] <xcode_dir> <app_key>

  -h                     this help message
EOF
  exit
} #}}}

xcode_dir="$1"
app_key=$2

[ -d "$xcode_dir" ] || { echo "Can't find xcode project dir ($xcode_dir)"; exit=1; }
[ -n "$app_key" ] || { echo "app_key is required"; exit=1; }

[ -z "$exit" ] || exit 1

"$BIN_DIR"/Installer "$xcode_dir" "$app_key"
