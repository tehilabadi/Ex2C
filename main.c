#include "myBank.h"
#include <stdio.h>

int main(){
    printf("\nPlease choose a transaction type:\n O-Open Account \n B-Balance Inquiry\n D-Deposit\n W-Withdrawal \n C-Close Account\n I-Interest\n P-Print \n E-Exit\n");
    char temp;
    scanf(" %c", &temp);
    while(temp!='E'){
        if(temp=='O'){
            printf("Please enter amount for deposit:");
            double x;
            int flag = scanf("%lf",&x);
            if(flag == 1){
            new(x);
          }
            if(flag != 1){
            printf(" Failed to read the amount\n");
   }
 }     
       else if(temp=='B'){
        printf("Please enter account number:");
        int x;
      int flag = scanf("%d",&x);
       if(flag == 1){
        info(x);
        }
        if(flag != 1){
            printf(" Failed to read the account number\n");
    }
 }
    
    
        else if(temp=='D'){
           printf("Please enter account number:");
           int x;
          int flag = scanf("%d",&x);
          if(flag !=1){
          printf(" Failed to read the account number\n");
    }
    else{
    	
        add(x);
        }
    }  
        
        else if(temp=='W'){
           printf("Please enter account number:");
           int x;
           int flag = scanf("%d",&x);
           if(flag !=1){
           printf(" Failed to read the account number\n");
    }
    else {
           sub(x);  
           }
        }
        else if(temp=='C'){
          printf("Please enter account number:");
           int x;
           int flag = scanf("%d",&x);
                if(flag !=1){
           printf(" Failed to read the account number\n");
             
        } 
        else{
        close(x);
        }
        }
        else if(temp=='I'){
            printf("Please enter interest rate:");
            int in;
            int flag = scanf("%d",&in);
           if(flag == 1){
           if(in<0){
           printf("Invalid interest rate\n");
           }
        else{
        modol(in);
        }
        }
        if(flag != 1){
            printf(" Failed to read the interest rate\n");
    }
        }
        
        else if(temp=='P'){
            print();
        }
        
        else{
        printf("Invalid transaction type\n");

        }
	printf("\nPlease choose a transaction type:\n O-Open Account \n B-Balance Inquiry\n D-Deposit\n W-Withdrawal \n C-Close Account\n I-Interest\n P-Print \n E-Exit\n");
    scanf(" %c",&temp);

    }
  endd();
  return 0;
}

