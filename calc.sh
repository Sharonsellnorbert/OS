ch=9
while(($ch!=5))
do
echo -e "1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit"
echo Enter Two Numbers
read n1
read n2
echo Enter the Choice
read ch
s=0
case $ch in
1) s=$(($n1+$n2))
  echo Sum is $s;;
2)s=$(($n1-$n2))
  echo Difference is $s;;
3)s=$(($n1*$n2))
  echo Product is $s;;
4)s=$(($n1/$n2))
  echo Quotient is $s;;
5) break;;
esac
done

