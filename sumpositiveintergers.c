#include<stdio.h>
int main(){
	int x;
	int sum=0;
	printf("请输入整数（输入0结束，负数不累加）：\n");
	while(1){
		scanf("%d",&x);
		if(x==0){
			break;
		}
		else if(x>0){
			sum+=x;
		}
	}
	printf("所有正数之和为:%d\n",sum);
	return 0;
}
