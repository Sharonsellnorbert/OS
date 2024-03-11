echo Enter the number 
read n
f=1
for((i=n;i>=1;i--))
do
f=$(($f*$i))
done
echo The Factorial of $n is $f
