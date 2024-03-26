#include <stdio.h>
#include <stdlib.h>

int PrintArray() {
	int arr[100],n,i;
	printf("Enter the no of elements:");
	scanf("%d",&n);
		printf("Enter the elements :");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("The elements are:\n");
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	
	return 0;
}
