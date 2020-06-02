#include<stdio.h>
#include<string.h>

void concat(char str1[],char str2[]){
	printf("Nhap chuoi thu nhat :\n");
	scanf("%s",str1);
	printf("Nhap chuoi thu hai :\n");
	scanf("%s",str2);
	strcat(str1," ");
	strcat(str1,str2);
	
}
int main(){
	char str1[30],str2[30];
    concat(str1,str2);
    printf("Chuoi sau khi noi: %s\n",str1,str2);
	return 0;
}
