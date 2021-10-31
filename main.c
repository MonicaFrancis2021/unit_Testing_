#include <stdio.h>
#include <stdlib.h>


//Software Engineer Name:Monica Francis

//All inputs are unsigned character

/*
- Define your global variables if needed here:
actual_result
expected_result
- Please concider the memoery optimization.
*/




/*
- Define your functional prototypes used here:
sum
unittest
- Please concider optimum Misra C when writing your functions.
*/
unsigned short sum(unsigned char num_1,unsigned char num_2);
void unittest(unsigned short actualResult ,unsigned short expected_result );




int main()
{
//Please declare your initializations here.
unsigned char num_1,num_2;
unsigned short expected_result;


//Please define your infinite loop here.
while(1)
{


//Please insert your screen visualization here.
printf("please enter two unsigned numbers = \n");

//Please write an expression that takes 2 numbers from the user here (concider screen readability).
scanf(" %c %c",&num_1,&num_2);
printf("please enter the expected sum of the two numbers = \n");
scanf("%hu",&expected_result);
//Please write an expression that calls the two function, the activation logic function and the unit test function in sequence.
unittest(sum(num_1,num_2),expected_result);

}
    return 0;
}


//Please write the functional description of the sum function here:
unsigned short sum(unsigned char num_1,unsigned char num_2)
{
	unsigned short result = (num_1-48) + (num_2-48);
	return result ;
}

//Pleas write the functional description of the unittest function here:
void unittest(unsigned short actualResult ,unsigned short expected_result )
{
	if(actualResult == expected_result)
	{
		printf("\nTest Pass\n");
	}
	else
	{
		printf("\nTest fail\n");
	}
}
