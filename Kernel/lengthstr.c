#include<stdio.h>

void myStrUpper(char*);
int myStrlen(char*);

int main(int argc,char* argv[])
{
 if(argc<2)
 {
  printf("SYNTAX: %s <string>\n",argv[0]);
 }
 myStrUpper(argv[1]);
 printf("%s [%d]\n", argv[1],myStrlen(argv[1]));
 return 0;
}

int myStrlen(char* s)
{
 int count=0;
 while(*s!='\0')
 {
  count++;
  s++;
 }
 return count;
}

void myStrUpper(char* s)
{
 while(*s!='\0')
 {
  *s=*s-('a'-'A');
  s++;
 }
}
