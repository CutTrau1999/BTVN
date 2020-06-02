#include<stdio.h>
#include<string.h>

bool TimKiemChuoi(char s[],char ary[][100],int n){
	for(int i = 0 ; i<n ;i++){
		if(strcmp(s,ary[i])==0){
			return true;
		}
	}
	return false;
}

int main(){
	char s[100], ary[5][100]; //mang 5 chuoi , moi chuoi toi da 100 ky tu
	printf("Nhap chuoi s=\n");
	scanf("%s",s);
	for(int i=0.;i<5;i++){
		printf("Nhap chuoi thu %d:\n",i);
		scanf("%s",ary[i]);
	}
	if(TimKiemChuoi(s,ary,5)){
		printf("Chuoi %s thuoc mang",s);
	}else{
		printf("Chuoi %s khong thuoc",s);
	}
	return 0;
}
