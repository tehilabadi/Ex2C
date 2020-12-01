#include "myBank.h"
#include <stdio.h>
int a[2][50];
void new(double money){
    for(int i=0; i<50; i++){
        if(a[1][i]==0){
            a[0][i] = money;
            int temp = 901+i;
            printf("account number: %d", temp);
            a[1][i]=1;
            i=51;
        }
    }
void info(int num){
int temp = num-901;
if(a[1][temp]==1){
double temp1 =a[0][temp];
    printf("money in your account:%lf",temp1);
}
}

void add(int num,double money){
if(a[1][num-901]==1){
    double sum = a[0][num-901]+money;
    a[0][num-901]=sum;
    printf("money in your account:%lf",sum);
}
}
void sub(int num , double money){
if(a[1][num-901]==1){
    double sum = a[0][num-901]-money;
    if(sum>=0){
    a[0][num-901]=sum;
    printf("money in your account:%lf",sum);
}
}
}
void close(int num){
    if(a[1][num-901]==1){
        a[0][num-901]=0;
        a[1][num-901]=0;
    }
}

void modol(double rate){
    double rate2  = rate/100;
    for(int i=0; i<50;i++){
        if(a[1][i]==1){
            double sum = a[0][i]*rate;
            double sum2 = sum+a[0][i];
            a[0][i]=sum2;
        }
    }
}


void print(){
 for(int i=0; i<50;i++){
        if(a[1][i]==1){
            int temp = 901-i;
            double amount = a[1][i];
            printf("your account number:%d your money:%lf",temp,amount);
        }
 
}
}

void end(){
    for(int i=0; i<50;i++){
         if(a[1][i-901]==1){
        a[0][i-901]=0;
        a[1][i-901]=0;
    } 
    }
}

