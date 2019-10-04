#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
int g=0;
//A normal C Function that is executed as a thread
//when its name is specified in pthread_create()

//The function has to be executed by all threads
void *myThreadFun(void* vargp)
{
 int *myid = (int *)vargp;//Store the value argument passed to this thread

 static int s=0;//A static variable to observe its change

 ++s;
 ++g;

 printf("Thread ID:%d,Static:%d,Global:%d\n",*myid,++s,++g);
 sleep(2000);
}

int main()
{
 int i;
 pthread_t tid;

 //Creating three threads
 for(i=0;i<6;i++)
 {
  pthread_create(&tid,NULL,myThreadFun,(void *)&tid);
  pthread_exit(NULL);
  return 0;
 }
}

