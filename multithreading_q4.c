
 // Question-4 Write a program where pthread task displays the thread id and also prints the calling process pid. 

#include<stdio.h>
#include<unistd.h>

int main(){
	printf("My process pid=%d\n",getpid());//current process pid
	printf("my parent pid=%d\n",getppid());

	printf("linux kernel\n");

	while(1);
	return 0;
}


