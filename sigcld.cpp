#include "apue.h"
#include <iostream>
#include <sys/wait.h>

using namespace std;

static void sig_cld(int signo)
{
	pid_t pid;

	if(signal(SIGCLD, sig_cld) == SIG_ERR)
		cout<<"sig error"<<endl;

	pid = wait(NULL);
	
	cout<<pid<<endl;

}


int main()
{
	pid_t pid;
	if(signal(SIGCLD, sig_cld) == SIG_ERR)
		cout<<"sig error"<<endl;

	if((pid = fork()) == 0)
	{
		sleep(2);
		exit(0);
	}

	pause();
	exit(0);
}
