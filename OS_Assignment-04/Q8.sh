echo "Enter file name"
read f

c=`wc -m < $f`
w=`wc -w < $f`

s=`tr -cd ' ' < $f | wc -c`

sp=`tr -cd '[:punct:]' < $f | wc -c`

echo "Number of characters: $c"
echo "Number of words: $w"
echo "Number of white spaces: $s"
echo "Number of special symbols: $sp"

