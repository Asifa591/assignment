#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
#include<sys/wait.h>
int main()
{
    int arry[1000];
int sum1, sum2,sum3,sum4,sum5,sum6,sum7,sum8,sum9,sum10,totalsum;
for(int i=0;i<1000;i++){
arry[i]=i;
}
int cpid=fork();
if(cpid==0){
for(int i=0;i<100;i++){
sum1=sum1+arry[i];
}
}
if(cpid==0){
for(int i=100;i<200;i++){
sum2=sum2+arry[i];
}
}
if(cpid==0){
for(int i=200;i<300;i++){
sum3=sum3+arry[i];
}
}
if(cpid==0){
for(int i=300;i<400;i++){
sum4=sum4+arry[i];
}
}
if(cpid==0){
for(int i=400;i<500;i++){
sum5=sum5+arry[i];
}
}
if(cpid==0){
for(int i=500;i<600;i++){
sum6=sum6+arry[i];
}
}
if(cpid==0){
for(int i=600;i<700;i++){
sum7=sum7+arry[i];
}
}
if(cpid==0){
for(int i=700;i<800;i++){
sum8=sum8+arry[i];
}
}
if(cpid==0){
for(int i=800;i<900;i++){
sum9=sum9+arry[i];
}
}
if(cpid==0){
for(int i=900;i<1000;i++){
sum10=sum10+arry[i];
}
}

if(cpid>=0){
totalsum=sum1+sum2+sum3+sum4+sum5+sum6+sum7+sum8+sum9+sum10;
printf(" total sum of given array is :%d" ,totalsum);
}
return 0;
}

