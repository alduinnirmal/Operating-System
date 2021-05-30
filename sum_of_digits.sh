echo "Enter the number:"
read a
sum=0
rem=0
count=0
while [ $a -gt 0 ]
do 	
	rem=`expr $a % 10`
	sum=`expr $sum + $rem`
	a=`expr $a / 10`
	count=`expr $count + 1`
done
echo "sum of the digits = $sum"
echo "Number of digits = $count"
