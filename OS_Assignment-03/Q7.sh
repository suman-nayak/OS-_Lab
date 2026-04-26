echo "Enter marks for 4 subjects: "
read m1 m2 m3 m4
total=$((m1 + m2 + m3 + m4))
echo "Total marks: $total"
case $total in
[0-1][0-9][0-9]|[0-4][0-9])
 echo "fail"  ;;
 2[0-3][0-9]|2[0-9][0-9])
 echo "grade c"      ;;
 3[0-3][0-9]|3[0-9][0-9])
 echo "grade b"    ;;
4[0-3][0-9]|4[0-9][0-9])
echo "grade a" ;;
5[0-3][0-9]|5[0-9][0-9])
echo "grade e"  ;;
6[0-9][0-9]|700|800|900|1000)
echo "grade "  ;;
esac
					 ~             
