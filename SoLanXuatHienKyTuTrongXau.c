#include<stdio.h>
#include<string.h>
#define ALPHABET_LEN 26

int main(void){
	char c = '\0';
	int count[ALPHABET_LEN] = {0};
	int i;
	printf("Enter a line of text: \n");
	c = getchar();
	
	while(c != '\n' && c >= 0){
		if(c <= 'z' && c >= 'a')
			count[c - 'a']++;
		if(c <= 'Z' && c >= 'A')
			count[c - 'A']++;
		c = getchar();
	}
	
	for(i = 0; i < ALPHABET_LEN; i++){
		if(count[i] > 0)
			printf("The letter %c appears %d time(s).\n", 'a' + i, count[i]);
	}
	return 0;
}
