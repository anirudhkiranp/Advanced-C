/*
 *Name       : P.Anirudh Kiran
 *Date       : 4th Sep,2021
 *Description: C program to check if entered number is odd or even 
 *Input      : Enter the value of 'n' : -4
 *Output     : -4 is -ve even number
 *             Do you want to continue(y/Y): y
 */

#include<stdio.h>
int main()
{
    int mul=1;  
    for(int i=1;i<=20;i++) //running for loop for finding the range value of 2^20
    {
	mul=mul*2;
    }
    int upper_limit=mul;  //the positive value is the upper limit for given range
    int lower_limit= -1*mul; //the negative value is the lower limit for given range
    char option; 
    do
    {
	int num;
	printf("Enter the value of 'n': "); //printing message to enter the number
	scanf("%d", &num); //taking input from user stored in num variable
	if( num < upper_limit && num >lower_limit) //checking if the entered number is in -2^20<n<2^20 range
	{
	    if(num < 0) //checking if number is lessthan 0 
	    {
		if(num%2 == 0) //checking if it is even or not
		{
		    printf("%d is -ve even number\n",num); //if above conditions true it prints the following message
		}
		else
		{
		    printf("%d is -ve odd number\n",num); //if it is not even then it prints it as odd
		}
	    }
	    else if (num > 0) //checking if number is greaterthan 0 
	    {
	        if(num%2 == 0) //checking if number is even or not
                  {
                      printf("%d is +ve even number\n",num);  //if above conditions true it prints the following message
                  }
                else
                  {
		      printf("%d is +ve odd number\n",num);//if it is not even then it prints it as odd
                  }
	    }
	    else
	    {
		printf("%d is neither odd nor even\n",num); //prints the number 0 is neither even nor odd
	    }
	}
	else
	{
	    printf("Number out of range\n"); //prints the message if number entered is out of range
	}
	
	printf("Do you want to continue (y/Y):"); //asks user to continue or not
	scanf(" %c", &option); //reads input from user
    } while( option == 'y' || option == 'Y'); //if entered input is 'y' or 'Y' then the loop repeats otherwise not
}
