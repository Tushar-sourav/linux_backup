#!/bin/bash


#for a in 1 2 3 4 5 6 7 8 9 10
#do
#	if [ $a == 5 ]
#	then
#		break
#	fi

#	echo "iteration no $a"
#done


a=0

while [ $a -lt 10 ]
do
	echo $a
	echo $?

	a=`expr  $a + 1`
done
