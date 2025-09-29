#include <stdio.h>
#include <string.h>
int main()
{
	char Name[20] = "user";
	char pass[20] = "1234";
	char uname[20],upass[20];
	int flag;
	do{
		printf("Username: \n");
		scanf("%s",uname);
		printf("Pass: \n");
		scanf("%s",upass);
		if(strcmp(pass,upass)==0 && strcmp(Name,uname)==0){
		flag =1;
		printf("Welcome");
	} else
	printf("Try Again\n");
	}while(!flag);
	return 0;
}
