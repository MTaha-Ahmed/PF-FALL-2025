#include <stdio.h>
int main()
{
	int withdrawl,balance =10000;
	printf("Enter Amount: \n");
	scanf("%d",&withdrawl);
	while(withdrawl>balance){
		printf("Insufficent amount,Try again: \v");
		scanf("%d",&withdrawl);
	}
	balance-=withdrawl;
	printf("Successfull,Updated balance %d",balance);
	return 0;
}
