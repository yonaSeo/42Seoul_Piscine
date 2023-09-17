#!/bin/bash
cat /etc/passwd | grep -v '^#' | sed -e '1d' | awk -F':' '{print $1}' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | xargs echo | sed 's/ /, /g' | sed 's/$/./'
