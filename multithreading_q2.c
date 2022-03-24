
 //Question-2 Write a program where thread cancel itself(use pthread_cancel())

#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void* (void* ptr)
{
	printf("Linux is interesting");
	pthread_cancel(pthread_self());
	return NULL;
}
int main()
{
	pthread_t thread;
	pthread_create(&thread, NULL, calls, NULL);
	pthread_join(thread, NULL);

	return 0;
}
