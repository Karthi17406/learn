#include <stdio.h>
#include <stdlib.h>

int BigSmall() {
		int arr[10],n,i,big,small;
	printf("Enter the no of elements:");
	scanf("%d",&n);
		printf("Enter the elements :");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	big=arr[0];
	small=arr[0];
	for(i=1;i<n;i++)
	{
		if(big<arr[i])
		{
			big=arr[i];
		}
		if(small>arr[i])
		{
			small=arr[i];
		}
	}
	printf("The biggest element is %d\n",big);
	printf("The smallest element is %d",small);
	
	
}

