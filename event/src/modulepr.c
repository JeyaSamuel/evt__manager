#include<stdio.h>
#include"eventmanager.h"

void module1()
{
	printf("module 1\n");
}

void module2()
{
	printf("module 2\n");
}

void module3()
{
	printf("module 3\n");
}

void module4()
{
	printf("module 4\n");
}

void module5()
{
	printf("module 5\n");
}



fp get_fp(int i)
{
	switch (i) {
	case 1:
		return(module1);
		break;
	case 2:
		return(module2);
		break;
	case 3:
		return(module3);
		break;
	case 4:
		return(module4);
		break;
	case 5:
		return(module5);
		break;
	}
}
