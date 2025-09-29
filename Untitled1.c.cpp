#include <stdio.h>
#include <string.h>
int main()
{
	int i=1;
	char Name[20] = "user";
	char pass[20] = "1234";
	char uname[20],upass[20];
	int flag=0;
	do{
		printf("Username: \n");
		scanf("%s",uname);
		printf("Pass: \n");
		scanf("%s",upass);
		if(strcmp(pass,upass)==0 && strcmp(Name,uname)==0){
		printf("Welcome");
		flag =1;
	} else
	printf("Try Again \n");
	}while(!flag);
	return 0;
}
