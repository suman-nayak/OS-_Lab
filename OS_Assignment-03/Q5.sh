echo "Enter any Number:"
read n
if [ ` expr $n % 2 ` == 0  ]
then
echo "Even"
else
echo "Odd"
fi
