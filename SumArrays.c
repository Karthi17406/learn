#include <stdio.h>
#include <stdlib.h>

int SumArray() {
	int arr0[100],arr1[100],i,arr0size,arr1size;
	printf("Enter no of elements in array1:\n");
	scanf("%d",&arr0size);
	printf("Enter no of elements in array2:\n");
	scanf("%d",&arr1size);
	if(arr0size==arr1size){
		printf("Enter elements of array1:\n");
		for(i=0;i<arr0size;i++){
			scanf("%d",&arr0[i]);
		}
		printf("Enter elements of array2:\n");
		for(i=0;i<arr1size;i++){
			scanf("%d",&arr1[i]);
		}
		printf("The sum is:\n");
		for(i=0;i<arr0size;i++){
			printf("%d\n",arr0[i]+arr1[i]);
		}
		
	}
	else{
		printf("sorry,both array should be same");
	}
	
	
}
