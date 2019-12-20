#!/bin/awk  -f
BEGIN {print "START"}
{print $1, "\t", $3}
END {print "DONE"}


/*output:
 [LabExam@ISELAB1 ~]$ awk -f pr5.awk a.txt
And am
You can
Me you

LabExam@ISELAB1 ~]$ cat a.txt
And is am I was
You they can take
Me as you print */
