a=1
until [ ! $a -lt 11 ]
do
	echo $a
	a=`expr $a + 1 `
done
