#include<stdio.h> 
#define MAX 100
int binarySearch(int a[],int n,int x){
	int left=0;
	int right=n-1;
	while(left<=right){
		int middle=(left+right)/2;
		if(a[middle]<x)
		left=middle+1;
		else if(a[middle]>x)
		right=middle-1;
		else
		return middle;
		 
		
	}
	return -1;
}
int main(void){
	int a[MAX];
	int n,x;
	int flag=0;
	scanf("%d %d",&n,&x);
	printf("请按从小到大顺序输入：");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	if(binarySearch(a,n,x)==-1)
	   printf("j=0");
	else
	   printf("%d",binarySearch(a,n,x));
}

