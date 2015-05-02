#include <unistd.h>
#include <iostream>

using namespace std;

int main()
{
	cout<<getpid()<<" "<<getppid();
	cout<<getuid()<<" "<<getgid();
	return 0;
}
