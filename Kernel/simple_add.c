/*https://github.com/thejinxters/system-call-simple-add*/
#include<stdio.h>

int main()
{
 //Simple add System call test
 int add_result;
 int c;
 result = syscall(319,4,5,&c);
 printf("Simple_add stores 4+5, which is %d in variable c \n",c);
 return 0;
}
