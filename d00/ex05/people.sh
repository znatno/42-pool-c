ldapsearch -x "(uid=z*)" cn | grep -i "cn:" | cut -c 5- | sort -r
