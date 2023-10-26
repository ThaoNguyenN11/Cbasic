#include<stdio.h>
#include<string.h>

int main(){
	double A[10];
	int i; 
	printf("Enter 10 numbers: ");
	for(i = 0; i < 10; i++){
		scanf("%lf", &A[i]); 
	} 
	
	for(i = 9; i >= 0; i--){
		printf("%.2lf ", A[i]); 
	}
	return 0; 
} 
