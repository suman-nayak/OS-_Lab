echo "Enter two numbers"
read a b

while [ $b -ne 0 ]
do
    rem=`expr $a % $b`
    a=$b
    b=$rem
done

echo "GCD is $a"

