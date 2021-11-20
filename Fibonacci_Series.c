/*
 *Description: C program to print positive and negative fibonacci series 
 *Input      : Enter a number : 8
 *Output     : 0,1,2,3,5,8
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
	printf("Enter a number:"); //asking user to enter input
	scanf("%d",&num); //reading the entered input
	if(num < upper_limit && num > lower_limit) //checking if entered number is in specified range
	{
	    int first=0,second=1;
	    if(num > 0) //checking if number is greaterthan 0
	    {
		printf("%d,%d",first,second); //printing the first and second terms
                int result=1;
		while(result <= num) //loop runs until the condition satisfied
		{
		    result= first + second; //storing the addition of first and second in result variable
		    if( result <= num) //checking if result value is lessthan number
		    {
		       printf(",%d",result); //printing the result value if true
		    }
		    first=second;//storing second variable value in first variable
		    second=result;//storing the result value in second
		}
	    }
	    else if(num < 0)
	    {
		printf("%d,%d",first,second); //printing the first and second terms
                int result=1;
		while(result > num) //loop runs until the condition satisfied
                  {
                      result= first - second;//storing the addition of first and second in result variable
                      if( result >= num) //checking if result value is lessthan number
                      {
                         printf(",%d",result); //printing the result value if true
                      }
                      first=second; //storing second variable value in first variable
                      second=result; //storing the result value in second
                  }
	    }
	    else
	    {
		printf("0"); //print 0 if num is 0
	    }
	}
	else
	 {
	     printf("Error:Number out of range, please enter the value -2^20 < 'N' < 2^20"); //prints error message if entered number is not in the given range
	 }
	 printf("\nDo you want to continue(y/Y):"); //asks user to continue or not
	 scanf(" %c",&option); //reads input from user
    }while(option=='y' || option=='Y'); //if condition is satisfied loop repeats
}
