#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	double A[10];
	int i;
	double avg, sum, diff;
	int arrayIndex;
	double mindiff = 1000000;
	printf("Enter 10 numbers: ");
	for(i = 0; i < 10; i++){
		scanf("%lf", &A[i]); 
	} 
	for(i = 0; i < 10; i++){
		sum += A[i];
	}
	avg = sum / 10;
	for(i = 0; i < 10; i++){
		diff = fabs(A[i] - avg);
		if(diff < mindiff){
			mindiff = diff;
			arrayIndex = i;
		}
	}
	printf("Phan tu gan nhat la: %.2lf", A[arrayIndex]);
	return 0; 
} 
