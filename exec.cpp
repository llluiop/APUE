#include <iostream>
#include "apue.h"
#include <sys/wait.h>

using namespace std;

char* env[] = {"USER=unknow", "PATH=/tmp", NULL};

int main()
{
	pid_t pid;
	
	if((pid=fork()) == 0)
	{
		if(execle("/home/liuyu/bin/echoall", "echoall", "myarg1", "my arg2", (char*)0, env) < 0)
			cout<<"error";
	}

	waitpid(pid, NULL, 0);

	return 0;
}	
