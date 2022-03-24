// C program to demonstrates cancellation of self thread using thread id.

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void* fun(void* ptr)
{
	printf("Linux is Interesting");
	pthread_cancel(pthread_self());
	return NULL;
}

int main()
{
	pthread_t thread;
	pthread_create(&thread, NULL, fun, NULL);
	pthread_join(thread, NULL);
	return 0;
}