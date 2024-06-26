#include <stdio.h>
#include <time.h>



int main()
{
    unsigned long amount=1000, Deposit, Withdraw;
    
     int choice,repeat,sum,add;
     
      
     for(;;){
         
    printf("********Welcome to ATM Service**************\n");
    
    printf("\n1.Withdraw Cash\n2.Check Balance \n3.Deposite Cash \n4.Quit \nplease select your options: ");
    scanf("%d",&choice);
   
   switch(choice){
       
       case 1:
            printf("\n ENTER THE AMOUNT TO WITHDRAW: ");
			scanf("%lu", &Withdraw);
			if (Withdraw % 100 != 0)
			{
				printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100 \n");
			}
			else if (Withdraw >(amount - 500))
			{
				printf("\n INSUFFICENT BALANCE \n");
			}
			else
			{
				amount = amount - Withdraw;
				printf("\n\n PLEASE COLLECT CASH \n");
				printf("\n YOUR CURRENT BALANCE IS %lu ", amount);
			}
            
             break;
             
       case 2:
            
            printf("\n YOUR BALANCE IN Rs : %lu \n",amount);
			break;
            break;
             
      case 3: 
           
            printf("ENTER THE AMOUNT TO DEPOSIT : ");
			scanf("%lu", &Deposit);
                        amount = amount + Deposit;
                        
			printf("YOUR BALANCE IS %lu \n", amount);
			break;
            
      
       case 4 : 
       
        printf("\n THANK YOU USING ATM \n");
			break;
     
      
      time_t t; 
      time(&t); 
      printf("\nCurrenr time : %s ", ctime(&t));
       
       break;
       
   }

    printf("Do you want continue your Transactions? \nYES=1 No=2 \nPlease select your options : ");
    scanf("%d",&repeat);
    
    if(repeat==2){
       
        printf("Thank you for your vist"); 
        break;
    }
}

    return 0;
}