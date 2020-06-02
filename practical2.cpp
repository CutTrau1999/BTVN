#include <stdio.h>
#include <string.h>

void dem(char str[]){
	int a = 0, e = 0, i = 0, o = 0, u = 0, rest = 0;
	for(int j= 0;j < strlen(str);j++){
		if(str[j] == 'a'){
			a++;
			rest++;
		} 
		if(str[j] == 'e'){
			e++;
			rest++;
		} 
		if(str[j] == 'i'){
			i++;
			rest++;
		}
		if(str[j] == 'o'){
			o++;
			rest++;
		}
		if(str[j] == 'u'){
			u++;
			rest++;
		}
		rest = a+e+i+o+u;
	}
	printf("a: %d;e: %d;i: %d;o: %d;u: %d;rest: %d",a,e,i,o,u,rest);
}

void nhap(char str[]){
	printf("Enter string: \n");
	scanf("%s",str);
}
int main(){
	char str[100];
	int a,e,i,o,u;
	nhap(str);
	dem(str);

	return 0;
}
