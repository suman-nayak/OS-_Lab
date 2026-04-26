echo "Enter string"
read s

r=`echo $s | rev`

if [ "$s" = "$r" ]
then
    echo "Palindrome"
else
    echo "Not Palindrome"
fi

