echo Enter two numbers
read n1
read n2
if (($n1==$n2))
 then
 echo The Numbers are equal
elif (($n1>$n2))
 then 
  echo $n1 is greatest
else
  echo $n2 is greatest
fi

