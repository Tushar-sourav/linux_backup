#!/bin/bash


read -p "enter your age" age

if [ $age -gt 17 ]
then
	echo "you are eligible to vote"
else if [ $age -lt 0 ]
then
	echo "enter valid age"
else
	echo "not eligivle to vote"
fi
fi
