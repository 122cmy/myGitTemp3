#include<stdio.h> 
#define MAX 100
int main(void){
	int a[MAX];
	int n,x;
	int flag=0;
	scanf("%d %d",&n,&x);
	printf("«Î∞¥À≥–Ú ‰»Î£∫");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int j=0;j<n;j++){
		if(a[j]==x){
		printf("%d",j);
		flag=1;
		break;
	    }
	}
	if(flag==0)
	printf("j=0");
}
