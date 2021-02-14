#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* set_rns(int length)
{
	int* rns = (int*)malloc(sizeof(int)*length);
	for(int i = 0; i < length; ++i)
	{
		again:rns[i] = (rand() % length) + 1;
		for(int j = 0; j < i; ++j)
		{
			if(rns[i] == rns[j])
			{
				goto again;
			}
		}
	}
	return rns;
}

int main(int argc, char *argv[])
{
	if(argc <= 1)
	{
		perror("Needs arguments\n");
		exit(-1);
	}
	int length = argc-1;
	srand((unsigned)time(0));
	int *rns = set_rns(length);
	for(int i = 0; i < length; ++i)
	{
		printf("%s ", argv[rns[i]]);
	}
	printf("\n");
	free(rns);
	return 0;
}
