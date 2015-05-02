#include "apue.h"
#include <iostream>
#include <pthread.h>

using namespace std;

void* thr_fn( void* arg)
{
	cout<<pthread_self()<<endl;
	return 0;
}
int main()
{
	pthread_t id;
	pthread_create(&id, NULL, thr_fn, NULL);
	sleep(1);
	cout<<pthread_self()<<endl;
}
