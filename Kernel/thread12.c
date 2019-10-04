#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main(int argc, char* argv[])
{
 if(argc!=3)
 {
  printf("Invalid no.of arg.\nEnter src and dest");
  exit(1);
 }
 char buff[1024];
 //create the target file descriptor in read write mode
 int destfd = open(argv[2],O_CREAT|O_RDWR|O_TRUNC,00600);
 if(destfd<0)
 {
  perror("open dest");
  exit(1);
 }

 int srcfd=open(argv[1],O_RDONLY);
 if(srcfd<0)
 {
  perror("open src");
  exit(1);
 }
 int n;
//read the source file and write in the destination file
 for(;;)
 {
  n = read(srcfd,buff,1024);
  if(n<=0)
  {
   close(srcfd);
   close(destfd);
   return 0;
  }
  write(destfd,buff,n);
 }
}

 
