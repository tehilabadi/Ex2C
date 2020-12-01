#include "myBank.c"
#include <stdio.h>

int main(){
    printf("please choose a transaction type:\n O-Open Account \n B Balance inquiry\n D-Deposit\n W-Withdraawal \n C-Close Account\n I-Interst\n P-Print \n E-Exit");
    char temp;
    scanf("%c", &temp);
    while(temp!='E'){
        if(temp=='O'){
            printf("initial deposit?:");
            double x;
            scanf("%lf",&x);
            new(x);
 }     
        if(temp=='B'){
        printf("Account number?:");
        int x;
        scanf("%d",&x);
        info(x);
    }
        if(temp=='D'){
           printf("account number?:");
           int x;
           scanf("%d",&x);
           double h;
           printf("Amount?:");
           add(x,h);
        }
        if(temp=='W'){
           printf("account number?:");
           int x;
           scanf("%d",&x);
           double h;
           printf("Amount?:");
           sub(x,h);  
        }
        if(temp=='C'){
          printf("account number?:");
           int x;
           scanf("%d",&x);
           close(x);   
        }
        if(temp=='I'){
            printf("interest rate?:");
            double in;
            scanf("%lf",&in);
            model(in);

        }
        if(temp=='P'){
            print();
        }

    scanf("%c",temp);

    }
    end();

}
}

