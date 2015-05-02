#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

using namespace std;

int main()
{
	pid_t pid;
	int status;

	if( (pid=fork()) == 0){ //child
		if( pid=fork() > 0){
			exit(0);
		}

		//second child
		sleep(2);
		cout<<"second: "<<getppid()<<endl;
	}

	if(waitpid(pid, NULL, 0) == pid)
		cout<<pid<<endl;
	return 0;
}

