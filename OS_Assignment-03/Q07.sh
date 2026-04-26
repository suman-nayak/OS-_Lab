#!/bin/bash
echo "Enter Name:"
read name
echo "Enter Roll Number:"
read roll
echo "Enter marks of 4 subjects:"
read m1 m2 m3 m4
sum=$((m1 + m2 + m3 + m4))
avg=$((sum / 4))
echo "Average = $avg"
case $avg in
       	[0-4][0-9])
	       	grade="Fail" ;; 
	5[0-9])
	       	grade="C" ;;
       	6[0-9])
	       	grade="B" ;;
       	7[0-9])
	       	grade="A" ;;
       	8[0-9])
	       	grade="E" ;;
       	9[0-9]|100)
	       	grade="O" ;;
       	*)
	       	grade="Invalid Marks" ;;
esac

echo "-------------------------"
echo "Name : $name"
echo "Roll : $roll"
echo "Grade : $grade"


