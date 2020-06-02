#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,*p;
	printf("Nhap n=\n");
	scanf("%d",&n);
	p= (int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		printf("Nhap pt thu %d:\n",i);
		scanf("%d",p+i);
	}
	int max = 0, count = 0;
	for(int i=0;i<n;i++){
		if(*(p+i) > 0){
			count++;
			if(count>max) max = count;
		}else{
			count = 0;
		}
	}
	printf("So duong lien tiep nhieu nhat : %d",max);
}
