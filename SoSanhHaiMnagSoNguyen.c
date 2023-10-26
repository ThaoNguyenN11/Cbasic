#include<stdio.h>
#define SIZE 5

int compareArray(int array1[], int array2[], int size){
	int i = 0;
	for(i = 0; i < size; i++){
		if(array1[i] == array2[i])
			return 1;
		else if(array1[i] == array2[size - i -1])
			return -1;
		else 
			return 0;
	}
}

int main(void){
	int array1[SIZE], array2[SIZE];
	int i;
	printf("enter array 1:\n");
	for(i = 0; i < SIZE; i++) scanf("%d", &array1[i]);
	
	printf("enter array 2: \n");
	for(i = 0; i < SIZE; i++) scanf("%d", &array2[i]);
	
	if(compareArray(array1, array2, SIZE) == 1) printf("1\n");
	else if(compareArray(array1, array2, SIZE) == -1) printf("-1\n");
	else printf("0");
	
	return 0;
}
