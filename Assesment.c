#include<stdio.h>
#include<string.h>                                                         //header file for string manipulation function. like strcmp() used for comparing 2 strings.
int main()
{
	int total = 0;                                                         //variable declared to calculate the sub total of order to show at the end !!!
	char in[50];                                                           //variable declared to hold input of the menu using array function!!!
	char moreOrders[5];                                                    //variable declared to hold input of further order yes/no using array function!!!
		//using do while loop for asking the input again if the user wants to order more ---
		do{ 
			printf("\n-----------Menu---------------\n");
			printf("\nPizza          price = 200rs/pcs");
			printf("\nDosa           price = 120rs/pcs");
			printf("\nBurger         price = 60rs/pcs");
			printf("\nIdli           price = 40rs/pcs");
			printf("\nPasta          price = 180rs/pcs");
			
			
			printf("\nPlease Enter Your Choice : ");
			scanf(" %s", &in);                                              //stores the input in (in) variable!!!
		//using Conditional statements (ladder if else) for multiple input's result --- 
	    //if the user's input is Pizza or pizza --- 
			if(strcmp(in, "Pizza") == 0 || strcmp(in, "pizza") == 0)        //It checks if the input matches menu item (case-sensitive comparison by checking both lowercase and capitalized version)!!!
			{
    			int n;                                                      //variable declared for storing input of quantity!!!
				printf("Enter the quantity : ");  
				scanf("%d", &n);
				printf("\nYou ordered %d Pizza's, Total: %d rs", n, n*200); //shows the quantity of pizza ordered and total amout of bill for pizza!!!
				total=total+n*200;                                          //stores the total bill of pizza to (total) variable for sub total at the end!!!
			}
		
		//if the user's input is Dosa or dosa ---
			else if(strcmp(in, "Dosa")==0 || strcmp(in, "dosa")==0)        //It checks if the input matches menu item (case-sensitive comparison by checking both lowercase and capitalized version)!!!
			{
				int n;                                                     //variable declared for storing input of quantity!!!
				printf("Enter the quantity : ");
				scanf("%d", &n);
				printf("\nYou ordered %d Dosa's, Total: %d rs", n, n*120); //shows the quantity of dosa ordered and total amout of bill for dosa!!!
				total=total+n*120;                                         //stores the total bill of dosa to (total) variable for sub total at the end!!!
			}
		
		//if the user's input is Burger or burger ---
			else if(strcmp(in, "Burger")==0 || strcmp(in, "burger")==0)   //It checks if the input matches menu item (case-sensitive comparison by checking both lowercase and capitalized version)!!!
			{
				int n;                                                    //variable declared for storing input of quantity!!!
				printf("Enter the quantity : ");
				scanf("%d", &n);
				printf("\nYou ordered %d Burger's, Total: %d rs", n, n*60);//shows the quantity of burger ordered and total amout of bill for burger!!!
				total=total+n*60;                                         //stores the total bill of burger to (total) variable for sub total at the end!!!
			}
		
		//if the user's input is Idli or idli ---
			else if(strcmp(in, "Idli")==0 || strcmp(in, "idli")==0)       //It checks if the input matches menu item (case-sensitive comparison by checking both lowercase and capitalized version)!!! 
			{
				int n;                                                    //variable declared for storing input of quantity!!!
				printf("Enter the quantity : ");
				scanf("%d", &n);
				printf("\nYou ordered %d Idli's, Total: %d rs", n, n*40); //shows the quantity of idli ordered and total amout of bill for idli!!!
				total=total+n*40;                                         //stores the total bill of burger to (total) variable for sub total at the end!!!
			}
		
		//if the user's input is Pasta or pasta ---
			else if(strcmp(in, "Pasta")==0 || strcmp(in, "pasta")==0)    //It checks if the input matches menu item (case-sensitive comparison by checking both lowercase and capitalized version)!!!
			{
				int n;                                                   //variable declared for storing input of quantity!!!
				printf("Enter the quantity : ");
				scanf("%d", &n);
				printf("\nYou ordered %d Pasta's, Total: %d rs", n, n*180);//shows the quantity of Pasta ordered and total amout of bill for pasta!!!
				total=total+n*180;                                      //stores the total bill of pasta to (total) variable for sub total at the end!!!
			}
			
		//else for any other input than what's on the menu!!!
			else 
			{
				printf("INVALID INPUT TRY AGAIN !!!!");
			}
		//exits the conditional statement and asks for more order !!!	
			printf("\nDo you want to order more? (yes/no): ");
     	    scanf("%s", moreOrders);   
		
		}
		while (strcmp(moreOrders, "yes")==0 || strcmp(in, "Yes")==0);   //the loop will countinue to run if the input of moreOrders is yes or Yes (case-sensitive comparision by checking both Lowercase amd capitalised version)!!!

        //if the input of user is no or other than yes it will break the loop and print the final bill!!!
		printf("Your Final Bills is : %d", total);
		return 0;
}
