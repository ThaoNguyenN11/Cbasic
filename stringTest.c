#include<stdio.h>
int main(){
	char s1[30]="abc", s2[30]="efgh";
	printf("%d", strlen(s1));
	strcat(s1, s2);
	puts(s1);
	printf("%d", strlen(s1));
	return 0;
}
