echo Enter the Limit
read l
echo -e "\n"
f=1
s=1
i=0
echo -e "$f\n$s" 
while(($i<$l-2))
do
t=$(($f+$s))
echo $t
f=$s
s=$t
i=$(($i+1))
done

