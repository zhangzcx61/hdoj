#include<stdio.h>
int main(){
	int n,i,sum=0;
	while(scanf("%d",&n)!=EOF){
		for(i=0;i<=n;++i)
			sum+=i;
		printf("%d\n\n",sum);
		sum=0;
	}
	return 0;
}


