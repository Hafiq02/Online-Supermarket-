#include <stdio.h>
 void payment(char);
 int main ()
 {
   int count=0, product_quantity, item_quantity, meth;  //declare variables
   float Price[5]={6.50 , 24.00 , 8.50 , 5.00 , 30.00};
   float total_price=0,price, name1, name2, name3, name4, name5;
  
   char code;
   char address [200];
       
	   printf("\tABID LEE SUPERMARKET\n");       //display items 
       printf("  -----------------------------\n");
       printf("  |a. Eggs (15pcs) RM6.50     |\n");
       printf("  |b. Cooking oil(5kg) RM24.00|\n");
       printf("  |c. Detergent (2.5kg) RM8.50|\n");
       printf("  |d. Milk (1L) RM5.00        |\n");
       printf("  |e. Rice (10kg) RM30.00     |\n");
       printf("  -----------------------------");
       printf("\n\tEnter your address:");           //user are requested to enter address
       gets(address);
       
    do{
	   
     printf("\nHow many products that you want to purchase?:");//user are requested enter how many products
     scanf("%d", &product_quantity);
     if (product_quantity<=0)
     printf("You have entered an invalid number");//user are requested to start from the beginning
    }while (product_quantity<=0);
    
	if (product_quantity!=0)
       {
        do
         {
           count++;
           printf("\n1. Enter code of item you wish to purchase: ", count);
           scanf(" %c", &code);
    
	if (code == 'a' || code == 'b' || code == 'c' || code == 'd' || code == 'e')
    {
      printf("2. Enter the amount of item you want to purchase: ", count);
      scanf("%d", &item_quantity);
      
	switch (code)                   //price of an item is mutiply by amount of item
     {  
        case 'a':
         price=Price[0]*item_quantity;
         name1=1;
        break;
        case 'b':
         price=Price[1]*item_quantity;
         name2=2;
        break;
        case 'c':
         price=Price[2]*item_quantity;
         name3=3;
        break;
        case 'd':
        price=Price[3]*item_quantity;
         name4=4;
        break;
        case 'e':
        price=Price[4]*item_quantity;
         name5=5;
        break;
    }
        total_price+=price;
       }
        else
     {
       printf("\n Invalid code detected. Please re-enter.");//user need to re enter
         count--;
      }
      
   }  while (count != product_quantity);
		printf("\n\t----------Receipt----------");
		printf("\n\tItem Name\t\tPrice");
		if(name1==1)
		printf("\n\tEggs (15pcs)\t\tRM%.2f", Price[0]);
		if(name2==2)
		printf("\n\tCooking oil (5kg)\tRM%.2f", Price[1]);
		if(name3==3)
		printf("\n\tDetergent (2.5kg)\tRM%.2f", Price[2]);
		if(name4==4)
		printf("\n\tMilk (1L)\tRM%.2f", Price[3]);
		if(name5==5)
		printf("\n\tRice (10kg)\tRM%.2f", Price[4]);
        printf("\n\tTotal price is RM%.2f", total_price);    //display outputs
        printf("\n\tDelivery fee is RM5.00");
        printf("\n\tTotal price is RM%.2f(Delivery fees included)", total_price+5);
        printf("\n\tYour address is: %s", address);
        printf("\n\t-----------------------------");
        /*printf("\n\n*Select Your Payment Method*");//user choose the payment method given
     	printf("\n Enter 1 for Credit OR Debit Card");
	    printf("\n Enter 2 for Cash On Delivery");
    	printf("\n Enter 3 for Online Banking ");
    	printf("\n Enter Number:");//user insert the payment method
	    scanf("%d",&method);*/
	    payment(meth);//a function call
        
    }
   return 0;
 }
void payment(char meth)     
{                             
	int card, password, CVV, banks, a;                // declare variables;
	char username;
	do 
	{ 
	 printf("\n\n*Select Your Payment Method*");//user choose the payment method given
     	printf("\n Enter 1 for Credit OR Debit Card");
	    printf("\n Enter 2 for Cash On Delivery");
    	printf("\n Enter 3 for Online Banking ");
    	printf("\n Enter Number:");//user insert the payment method
	    scanf("%d",&a);
	
		 if(a==1)                               //if method number 1 is chosen
		{
			printf("\n Enter Card Number: ");//user need to insert their card number
			scanf("%d",&card);
			printf(" Enter CVV number: ");//user need to enter 3 digit card verification value code
			scanf(" %d", &CVV);
			printf("\n*PAYMENT ACCEPTED*");//statement that the transaction is successful
		    printf("\n\n\tTHANK YOU AND HAVE A NICE DAY!");
			
			
		}
	 	    else if(a==2)//if method number 2 is chosen
		{
			printf("\n Make payments through our delivery man");
		    printf("\n\n\tTHANK YOU AND HAVE A NICE DAY!");
		}
		}while (a!=1&&a!=2||a!=3);
		     if(a==3)//if method number 3 is chosen
		{ 
	     do{
		
			printf("\n\t-----------------");
			printf("\n\t[1]. Bank Islam IB");
			printf("\n\t[2]. CIMB Bank");
			printf("\n\t[3]. Maybank2u");
			printf("\n\t[4]. RHB Bank");
	        printf("\n\t-----------------\n");
			printf("\n Enter the available Banks No[ ].: ");//user need to insert their choice based on the options given
			scanf(" %d", &banks);
			    if(banks >= 1 && banks <= 4) //if the user chose eiher one of the banks given						
			{
			printf("\nEnter User login:");//user need to login 
			scanf(" %s",&username);
			printf("\nEnter Password:");//user need to enter password 
			scanf("%d",&password);
			printf("\n*TRANSACTION SUCCEEDED*");//statement that the transaction is successful
		    printf("\n\n\tTHANK YOU AND HAVE A NICE DAY!");
			}
			    else if(banks!=1&&banks!=2&&banks!=3&&banks!=4);    //if neiher one of the options is chosen
			{
			printf("\nINVALID PAYMENT");//user will get an error message
			printf("\nReturn to Main Menu ");//user are requested to start from the beginning
						
			}	
		//}while (banks!=1&&banks!=2&&banks!=3&&banks!=4);
		}while (banks!=1&&banks!=2&&banks!=3&&banks!=4);
		 } /*else //if neiher one of the method is chosen
		{
		printf("\nINVALID METHOD");//user will get an error message
		printf("\n Return to Main Menu ");//user are requested to start from the beginning
		printf("\n\n\tTHANK YOU AND HAVE A NICE DAY!");
		}*/
	//} while (a!=1&&a!=2&&a!=3);
	
}
	

