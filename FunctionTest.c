#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool IsEligible(int age);

void FunctionTest(){
	int age;
	printf("enter age:");
	scanf("%d", &age);
	bool flag = IsEligible(age);
	if(flag)
	{
		printf("eligible");
	}
	else{
		printf("not eligible");
	}
	
}
bool IsEligible(int age)
{
	if(age<18){
	   return false;
	}
	else{
		return true;
	}
	return true;
}


