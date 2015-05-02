#include <unistd.h>
#include <iostream>

using namespace std;

int global = 6;

int main()
{
	int var = 1;

	int pid;
	if( (pid = fork()) < 0){
		cout<<"fork error";
	}else if(pid == 0){  //in child
		++global;
		++var;
	}else
	{
		sleep(2);
	}

	cout<<var<<" "<<global<<endl;
}
