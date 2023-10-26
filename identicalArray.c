#include<stdio.h>
#define SIZE 5

int arrayCheck(int array1[], int array2[], int size){
	int i;
	for(i=0; i<size; i++){
		if(array1[i]!=array2[i]){
			return 0;
		}
		return 1;
	}
	}
	
int main(){
	int i;
	int array1[SIZE], array2[SIZE];
	printf("Please enter array1: ");
	for(i=0; i<SIZE; i++){
		scanf("%d", &array1[i]);
	}
	printf("Please enter array2: ");
	for(i=0; i<SIZE; i++){
		scanf("%d", &array2[i]);
	}
	int check = arrayCheck(array1[SIZE], array2[SIZE], SIZE);
	printf("%d", check);
	if(check == 1) {
		printf("identical");
		}
	else printf("not identical");
	
	return 0;
}
 
