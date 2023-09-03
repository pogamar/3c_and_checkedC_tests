#include <stdio.h>
void f(char *x, int ischar){
	char *cr;
	if(ischar){
		cr = (char*)x;
		cr[0] = 'H';
		printf("%s\n", cr);
	}
	
	//return (void*)cr;
}

int main()
{
//	int a = 10;
//	printf("%d",f(&a));
	char *x, *y;
	char a[] = "hello";
	//x = f(a, 1);
	x = a;
	f(x, 1);
	//k = f(k, 1);
	printf("%s\n", x);

	char *c = "hello there!";
	y = c;
	f(x, 1);
	//k = f(k, 1);
	printf("%s\n", x);


	int b = 5;
	//x = f(&b, 0);
	printf("%d\n", *x);

	printf("all ok\n");
	return 0;
}



