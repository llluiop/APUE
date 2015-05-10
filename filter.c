#include "apue.h"
#include <sys/wait.h>

int main()
{
	char line[MAXLINE];
	FILE* fpin;

	if((fpin = popen("./myuclc", "r")) == NULL)
		err_sys("popen error");
	for(;;)
	{
		fputs("promt> ", stdout);
		fflush(stdout);
	
		if(fgets(line, MAXLINE, stdout) == NULL)
			break;
		else
			printf("here");

		if(fputs(line, stdout) == EOF)
			err_sys("error");
	}

	printf("exit");
	if(pclose(fpin) == -1)
		err_sys("pclose");
	putchar('\n');
	exit(0);
}
