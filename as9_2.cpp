#include<stdio.h>
#include<string.h>

bool Contains(char s1[],char s2[]){
	if(strlen(s1)<strlen(s2)) return false;
	int j = 0;
	for(int i=0;i< strlen(s1);i++){
		if(s2[j] == s1[i]){
			j++;	
		if(j == strlen(s2)){
			return true;
		}
		}else{
			j = 0;
			i--;	
		}
    } 	
	    return false;
}
	
int main(){
	char s1[20],s2[20];
	printf("Nhap chuoi s1:\n");
	scanf("%s",s1);
	printf("Nhap chuoi s2:\n");
	scanf("%s",s2);
	
	if(Contains(s1,s2)){
		printf("Chuoi %s nam trong chuoi %s",s1,s2);
	}else{
		printf("Chuoi %s khong nam trong chuoi %s",s1,s2);
	}
	return 0;
	}	    
