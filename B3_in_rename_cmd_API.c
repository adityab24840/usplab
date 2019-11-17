 #include <stdio.h>
#include<unistd.h>
int main(int argc, char *argv[])
{
if(argc!=3)
{
printf(“usage: %s <src_file><dest_file>\n”,argv[0]);
Return 0;
}
if(link(argv[1],argv[2])==-1)
{
printf(“link error\n”);
return 1;
}
printf(“files linked\n”);
printf(“Inode number of linked files\n”);
char str[100];
sprint(str,”ls –i %s %s \n”,argv[1],argv[2]);
system(str);
return 0;
}
