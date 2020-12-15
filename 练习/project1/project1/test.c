#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

struct student {
	char clss[32];
	char name[32];
	int score[];
};

int main()
{
	struct student *p = (struct student *)malloc(sizeof(struct student) + sizeof(int) * 10);
	assert(p);
	for (int i = 0; i < 10; i++) {
		p->score[i] = i;
		printf("%d\n",p->score[i]);
	}
	free(p);
	return 0;
}