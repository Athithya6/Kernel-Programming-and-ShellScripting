/*
 *Author=Athithya Narayan
 *Date=19th Sept 2019
 *Description=Understanding process address 
*/

#include<stdio.h>

//global variables
int gvar_1;
int gvar_2=10;
static int sgvar_1;
static int sgvar_2=20;

//Entry point
int main(int argc,char* argv[])
{
 int i=10;
 printf(" local:%p\n ",&i);
 printf(" main:%p\n ",main);
 printf(" gvar_2:%p\n ",&gvar_2);
 printf(" sgvar_2:%p\n ",&sgvar_2);
 printf(" gvar_1:%p\n ",&gvar_1);
 printf(" sgvar_1:%p\n ",&sgvar_1);
 return 0;
}
