#include <stdio.h>
#include <stdlib.h>

int First2D() {
	int arr[100][100],rows,cols,i,j;
	printf("Enter the no of rows and columns:");
	scanf("%d %d",&rows,&cols);
	printf("\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("Enter the value for %d%d\n",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The matrix is:\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	return 1;
}
