#!/bin/sh
ps
echo "ps : process status"
ps -f
echo "ps -f : full listing"
ps -l
echo "ps -l : along listing showing memory related information"
ps -u
echo "ps -u : process of user only"
ps -e
echo "ps -e : all process including user and system process"
ps -a
echo "ps -a : process of all user including processes not listed with terminal"
ps -t
echo "ps -t : processes running on terminal -l along listing showing memory related information"


/*output:
 [LabExam@ISELAB1 ~]$ sh pr4.sh

[LabExam@ISELAB1 ~]$chmod a+x pr4.sh
[LabExam@ISELAB1 ~]$sh pr4.sh */
