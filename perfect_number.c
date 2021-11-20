/*
*Description: C program to check if number is perfect or not 
 *Input      : Enter a number:6
 *Output     : Yes, entered number is perfect number
 *             Do you want to continue(y/Y): y
 */
#include<stdio.h>
int main()
{
    char option;  
    do
    {
        int num,sum=0; //initialising sum=0 and declaring num variable
        printf("Enter a number:"); //prints message to ask user for entering number
        scanf("%d",&num); //reads inputs from user
        if(num > 0 && num < 220) //checking if number is between 0 and 220
        {
	    for(int i=1;i<num;i++) //running loop upto the entered number
	    {
	        if(num%i == 0) //checks if num is divisible by present i value
	        {
		    sum=sum+i; //if true then it is added to sum
	        }
	    }
	    if(sum == num) //check if sum and num are equal or not
	    {
	        printf("Yes, entered number is perfect number\n"); //if true then prints the following message
	    }
	    else
	    {
	        printf("No, entered number is not a perfect number\n"); //if false prints the following message
	    }
	}
	else if(num < 0) //checks if number lessthan 0
	{
	    printf("Error : Invalid Input, Enter only positive number\n"); //prints the message
	}
	else
	{
	    printf("Number out of range\n"); //prints the message if otherwise
	}
	printf("Do you want to continue(y/Y):"); //asks user wether to contniue or not
	scanf(" %c",&option); //read the choice from user
    }while(option=='y' || option=='Y'); //repeats the loop if while condition is satisfied
}
