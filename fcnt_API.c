#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h> 
#include<stdlib.h>
int main(int argc,char *argv[])
{
int accmode,val;
if(argc!=2)
{
fprintf(stderr,"usage:%s <description>",argv[0]);
exit(1);
}
val=fcntl(atoi(argv[1]),F_GETFL,0);
if(val<0)
{
perror("fcntl error for fd");
exit(1);
}
accmode=val & O_ACCMODE;

if(accmode==O_RDONLY)
printf("read only");
else if(accmode==O_WRONLY) 
printf("Write only");
else if(accmode==O_RDWR)
printf("read write");
else
{
fprintf(stderr,"unknown access mode");
exit(1);
}
if(val & O_APPEND)
printf(",append");
if(val & O_NONBLOCK)
printf(",nonblocking");
if(val & O_SYNC)
printf(",synchronous write");
putchar('\n');
exit(0);

}
