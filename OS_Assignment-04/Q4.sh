echo "Enter the main string:"
read str

echo "Enter the substring:"
read sub

l=$(echo -n "$str" | wc -c)

len=$(echo -n "$sub" | wc -c)

i=1
found=0

while [ $i -le $((l - len + 1)) ]
do
    t=$(echo "$str" | cut -c $i-$((i+len-1)))

        if [ "$t" = "$sub" ]
       	then
	        echo "Substring found at position $i"
		        found=1
			        break
				    fi

				        i=$((i+1))
	done

	if [ $found -eq 0 ]
       	then
	    echo "Substring not found in the string."
	    fi

