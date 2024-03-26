#include <stdio.h>
#include <stdlib.h>

int SumArrayItem() {
	int arr[100],n,i,sum=0;
	printf("Enter the no of elements:");
	scanf("%d",&n);
		printf("Enter the elements :");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("%d",sum);}
	
