#!/bin/awk  -f
BEGIN {print “START”}
{print $1, “\t”, $3}
END {print “DONE”}
