#include<stdio.h>
 
void charReplace(char str[], char replaceWhat, char replaceWith){
	int i;
	for(i=0; str[i] !=0; i++){
		if(str[i] == replaceWhat){
			str[i] = replaceWith;
		}
	}
}

int main(){
	char string[100];
	char what;
	char with;
	printf("please enter string: ");
	gets(string);
	printf("replace what: ");
	scanf("%c", &what);
	printf("replace with: ");
	scanf("%c", &with);
	charReplace(string, what, with);
	printf("result is: %s", string);
	return 0;
}
