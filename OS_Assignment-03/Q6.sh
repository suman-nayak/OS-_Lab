echo "Enter 3 number: "
read a b c
if [ $a -ge $b -a $a -ge $c ]
then 
echo "$a is larger"
elif [ $b -ge $a -a $b -ge $c ]
then "$b is larger"
else
echo "$c is larger"
fi

if [ $a -le $b -a $a -le $c ]
then
echo "$a is smaller"
elif [ $b -le $a -a $b -le $c ]
then "$b is smaller"
else
echo "$c is smaller"
fi
