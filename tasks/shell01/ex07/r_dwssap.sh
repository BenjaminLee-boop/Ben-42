cat /etc/passwd | sed '/^[[:blank:]]*#/d;s/#.*//' | cut -d: -f1 | sed -e n\;d | rev | sort -r | sed -e 'H;${x;s/\n/,/g;s/^,//;p;};d'
