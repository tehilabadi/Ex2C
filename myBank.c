#include "myBank.h"
#include <stdio.h>
double a[2][50];


void new(double money){
if(money>=0){
    for(int i=0; i<50; ++i){
        if(a[1][i]==0){
            a[0][i] = money;
            int temp = 901+i;
            printf(" New account number is: %d\n", temp);
            a[1][i]=1;
            i=51;
        }
      }
    }
    else{
    printf(" Invalid Amount\n");
  }
}
  
  
void info(int num){
int temp = num-901;
    if(temp>49||temp<0){
	printf("Invalid account number\n");
    }
    else if(a[1][temp]==0){
	printf(" This account is closed\n");
    }
    else if(a[1][temp]==1){
	double temp1 =a[0][temp];
        printf("The balance of account number %d is: %.2lf\n",num ,temp1);
      }
   }


void add(int num){
int temp = num-901;
    if(temp>49||temp<0){
	printf(" Invalid account number\n");
    }
  else if(a[1][num-901]==0){
   printf(" This account is closed\n");
}
   
else if(a[1][num-901]==1){
	double money;
    printf(" Please enter the amount to deposit:");
    int flag2 = scanf("%lf",&money);
    if(flag2==0){
    printf("Failed to read the amount\n");
    }
    else if(money>=0){
    double sum = a[0][num-901]+money;
    a[0][num-901]=sum;
    printf(" The new balance is:%.2lf\n",sum);
}
    else if(money<0){
    printf(" Cannot deposit a negative amount\n");
  }
}

}


void sub(int num ){
int temp =num-901;
 if(temp>49||temp<0){
	printf(" Invalid account number\n");
    }
 else if(a[1][num-901]==0){
 printf(" This account is closed\n");
 }
 else{
    double money;
    
    printf(" Please enter the amount to withdraw:");
    scanf("%lf.2",&money);
    if(a[1][num-901]==1){
    double sum = a[0][num-901]-money;
    if(sum<0)
    {
    printf(" Cannot withdraw more than the balance\n");
    }
    else if(sum>=0){
    a[0][num-901]=sum;
    printf(" The new balance is: %.2lf\n",sum);
    }
  }
 }
}


void close(int num){
 int temp =num-901;
 if(temp>49||temp<0){
	printf(" Failed to read the account number\n");
	}
    else if(a[1][num-901]==1){
        a[0][num-901]=0;
        a[1][num-901]=0;
        printf("Closed account number %d\n", num);
    }
    else if(a[1][num-901]==0){
    printf(" This account is already closed\n");
    }
}



void modol(int rate){
    for(int i=0; i<50;i++){
        if(a[1][i]==1){
            a[0][i]+=(a[0][i]*rate)/100;
        }
    }
}


void print(){
 for(int i=0; i<50;i++){
        if(a[1][i]==1){
            int temp = (901+i);
            double amount = a[0][i];
            printf(" The balance of account number %d is: %.2lf\n",temp, amount);
      }
   }
}


void endd(){
    for(int i=0; i<50;i++){
         if(a[1][i-901]==1){
        a[0][i]=0;
        a[1][i]=0;
    } 
  }
}

