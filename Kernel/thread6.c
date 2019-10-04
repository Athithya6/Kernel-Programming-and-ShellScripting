#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<errno.h>
#include<pthread.h>

void * f1(void *);
void * f2(void *);
int main()
{
 pthread_t tid1,tid2;
//create two child threads and wait for their termination
 pthread_create(&tid1, NULL, f1, NULL);
 pthread_create(&tid2, NULL, f2, NULL);
 pthread_join(tid1, NULL);
 pthread_join(tid2, NULL);
 printf("\nBye bye from main thread");
 return 0;
}

void * f1(void * arg)
{
 sleep(30);
 for(int i=0;i<5;i++)
 {
  printf("%s","PUCIT");
  fflush(stdout);
  sleep(1);
 }
 pthread_exit(NULL);
}

void * f2(void * arg)
{
 sleep(30);
 for(int i=0;i<5;i++)
 {
  printf("%s","ARIF");
  fflush(stdout);
  sleep(1);
 }
 return NULL;
}
