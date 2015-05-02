#include "apue.h"
#include <iostream>
#include <pthread.h>

using namespace std;

void* thr_fn( void* arg)
{
	cout<<"pthread 1 running"<<endl;
	return 0;
}
void* thr_fn2(void* arg)
{
	cout<<"pthread 2 running"<<endl;
}

int main()
{
	pthread_t id1, id2;
	pthread_create(&id1, NULL, thr_fn, NULL);
	
	pthread_create(&id2, NULL, thr_fn2, NULL);

	pthread_join(id1, NULL);

	pthread_join(id2, NULL);

	cout<<pthread_self()<<endl;
}
