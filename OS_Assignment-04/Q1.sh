echo "Enter a number: "
read n
l=` echo $n | wc -c `
i=1
while [ $i -le $l ]
do
	t=` echo $n | cut -c $i `
	echo $t
	i=` expr $i + 2 ` 
done

