#include "apue.h"
#include <iostream>
#include <sys/syscall.h>
using namespace std;

static void sig_usr(int);

int main()
{

	if(signal(SIGUSR1, sig_usr) == SIG_ERR)
		cout<<"can not cacth SIGUSR1."<<endl;

	if(signal(SIGUSR2, sig_usr) == SIG_ERR)
		cout<<"can not catch SIGUSR2."<<endl;

	while(1)
	;
}

static void sig_usr(int signo)
{
	

	if(signo == SIGINT)
		cout<<"catch SIGUSR1"<<endl;

	if(signo == SIGUSR2)
		cout<<"catch SIGUSR2"<<endl;

}
