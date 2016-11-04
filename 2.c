#include<stdio.h>
main()
{
	int i ,stat,child1,child2,childid;
	printf("my process id is %d\n",getpid());
	printf("i am creating 2 child process\n");
	child1 = fork();
	if(child1 == 0) {
		printf("this is child1 id %d\n",getpid());
		for (i = 0; i < 6; i++) {
			printf("%d\n",i + 1);
			sleep (10);
		}
	exit (2);
	}
	child2 = fork();
	if (child2 == 0) {
		printf("this is 2 child id %d\n",getpid());
		for(i = 0 ;i < 6; i++) {
			printf("%d\n",i+1);
			sleep(5);
		}
	exit(3);
	}
	else {
		childid = wait(&stat);
		childid = wait(&stat);
	}
}
