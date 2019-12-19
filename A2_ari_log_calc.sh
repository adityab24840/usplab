#!/bin/sh
a=2
b=4
c=3
val=`expr $a + $b`
echo "Sum = $val"

val=`expr $a - $b`
echo "Difference= $val"
val=`expr $a \* $b`
echo "Product = $val"

val=`expr $b / $a`
echo "quotient = $val"

val=`expr $a % $b`
echo "Modulus = $val"
if [ $a == $b ]
then
echo “a is equal to b”
else
echo “a is not equal to b”
fi
if [ $a != $b ]
then
echo “a is equal to b”
else
echo “a is not equal to b”
fi
if [ $a -lt 10 -o $b -gt 20 ]   
then
echo “true”
else
echo “false”
fi

if [ $a -lt 10 -a $b -gt 20 ]   
then
echo “True”
else
echo “False”
fi


/* output[LabExam@ISELAB1 ~]$chmod a+x pr2.sh
[LabExam@ISELAB1 ~]$sh pr2.sh  */
