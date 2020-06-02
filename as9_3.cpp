#include<stdio.h>
#include<string.h>

void SortArrayString(char ary[][100],int n){
	for(int i=0;i<n-1;i++){
		for(int j = 0;i< n-i-1;j++){
			if(strcmp(ary[j],ary[j+1]) > 0){
				char tmp[100];
				strcpy(tmp,ary[j]);
				strcpy(ary[j],ary[j+1]);
				strcpy(ary[j+1],tmp);
			}
		}
	}
}

int main(){
	int n;
	printf("Nhap n=\n");
	scanf("%d",&n);
	char ary[n][100];
	for(int i = 0;i < n; i++){
		printf("Nhap chuoi thu %d : ",i);
		scanf("%s",ary[i]);
	}
    SortArrayString(ary,n);
	printf("Mang sau khi sap xep:\n");
	for(int i = 0; i < n; i++){
		printf("%s",ary[i]);
 }
	return 0;
}
	
	


