#include<stdio.h>
#include<string.h>

void concat(char str1[],char str2[]){
	printf("Enter the first string :\n");
	scanf("%s",str1);
	printf("Enter the second string :\n");
	scanf("%s",str2);
	strcat(str1," ");
	strcat(str1,str2);
	
}
int main(){
	char str1[30],str2[30];
    concat(str1,str2);
    printf("The concatenated string: %s\n",str1,str2);
	return 0;
}
