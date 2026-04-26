#!/bin/bash
echo "enter any file name: "
read name
l=` wc -l < $name `
w=` wc -w < $name `
c=` wc -c < $name `
sp=` grep -o ' ' $name | wc -l `
ss=` grep -o [^A-Za-z0-9' '] $name | wc -l`
echo "No.of lines:" $l " No.of words: " $w " No.of characters: " $c "No.of spaces: " $sp
echo "nof ss" $ss
