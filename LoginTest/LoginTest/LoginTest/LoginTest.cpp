#include "LoginTest.h"

int ITK_user_main(int argc, char* argv[])
{
	int iStatus = ITK_ok;
	int iTLSecObjCount = 0;
	int iNamedRefCount = 0;

	char* cpUserName = NULL;
	char* cpPassword = NULL;
	char* cpGroup = NULL;
	

	cpUserName = ITK_ask_cli_argument("-u=");
	cpPassword = ITK_ask_cli_argument("-p=");
	cpGroup = ITK_ask_cli_argument("-g=");

	if (cpUserName == NULL || cpPassword == NULL || cpGroup == NULL ) {
		printf("\nUsage :-");
		printf("\n-u=username -p=password -g=dba");
		return iStatus;
	}
	else
	{
		printf("credential are correct\n");
	}

	iStatus = ITK_init_module(cpUserName, cpPassword, cpGroup);
	if (iStatus != ITK_ok)
	{
		printf("Login is Failed\n");
		return iStatus;
	}
	else {
		printf("Login is Successful \n");
	}
	
	return iStatus;
}
