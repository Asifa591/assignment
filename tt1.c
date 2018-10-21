#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
int arry[1000];

void * displayresult(void *arg){
int str=(int)arg;
int sum=0;
for(int i=str;i<str+100;i++){
 sum=sum+i;
}
return ((void*)sum);
}
int main(){
int status_t1[10];
pthread_t thread_t1[10];
for(int j=0;j<1000;j++){
arry[j]=j;
}
for(int j=0;j<10;j++){
pthread_create(&thread_t1[j],NULL,displayresult,(void*)(j*100));
pthread_join(thread_t1[j],(void**) & status_t1[j]);
}
int status_t2=0;
for(int i=0;i<10;i++){
   status_t2=status_t2+status_t1[i];
}

printf("Value returned by thread %d",status_t2);
return 0;
}
