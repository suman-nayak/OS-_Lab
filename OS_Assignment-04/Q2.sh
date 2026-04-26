#!/bin/bash
echo "Enter a Number: "
read n
rev=0
while [ $n -ne 0 ]
do
	rem=` expr $n % 10 `
	rev=` expr $rev \* 10 + $rem `
	n=` expr $n / 10 `
done
echo "The reverse number is: $rev"
