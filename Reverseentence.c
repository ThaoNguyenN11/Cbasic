#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	//check argc
	if(argc < 2){
		printf("you have to enter at least one word.\n");
		return 1;
	}
	
	//print reverse sentence
	for(int i = argc - 1; i > 0; i++){
		printf("%s", argv[i]);
	}
	printf("\n");
	return 0;
} 
