#include<stdio.h>
int main (){
	int n;
	printf("Nhap day so: \n");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("Nhap vao so thu %d:\n",i);
		scanf("%d",a+i);
	}
    int max=0,count=0;
    for(int i=0;i<n;i++){
    	if(a[i]>0){
    		count++;
    		if(count>max) max = count;
		}else{
			count = 0;
		}
	}
	printf("So luong so duong lien tiep nhieu nhat: %d \n",max);
}
