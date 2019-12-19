
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
int main(int argc,char **argv)
{
int fd,nfd;
if(argc<2){
printf("usage:%s pathname\n",argv);
exit(1);
}
if((fd=open(argv[1],O_WRONLY))<0)
{
perror("Problem in opening the file");
exit(1);
}
if((nfd=fcntl(fd,F_DUPFD,0))==-1)
{
perror("Problem in duplicating fd");
exit(1);
}
printf("Fd %d duplicated with %d\n",fd,nfd);
close(fd);
close(nfd);
}


/* Output: gcc prgm.c

[UNIXLAB@localhost ~]$ ./a.out  ll.txt
Fd 3 duplicated with 4


gcc prgm.c
[UNIXLAB@localhost ~]$ ./a.out  ll.txt
Fd 3 duplicated with 4
*/
