#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
	printf("	  		           ____   ____       ___     _    _    __     ____          \n");
	printf("	  		          |    | |  __|     / __|   | |  |_|  /  \\   |    |       \n");
	printf("	  		          | || | | |       | |      | |__| | |    |  | || |       \n");
	printf("	  		          |  __| | |       | |___   |  __| | |    |  |  __|       \n");
	printf("			          | |    | |       \\____ \\  | |  |   |    |  | |         \n");
	printf("			          | |    | |__       ___||  | |  | | |    |  | |         \n");
	printf("			          |_|    |____|     |____/  |_|  |_|  \\__/   |_|         \n");

	int izbor = 1;
	while (izbor != 999)
	{
		izbor = menu();
	}

	return 0;
}