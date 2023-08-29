#include <stdio.h>
int *f(int *x, int isarr){
	int *r = x;
	if(isarr)
		*(r+1) = *r+1;
	else
		*r = *r + 1;
	return r;
}

int main()
{
//	int a = 10;
//	printf("%d",f(&a));
	int *x, *y, *z, *k;
	int *a = (int*) malloc(sizeof(int)*3);
	a[0] = 1;
	a[1] = 2;
	a[1] = 3;
	
	//x = f(a, 1);
	x = a;
	y = x+1;
	z = y+1;
	//k = z+1;
	x = f(x, 1);
	y = f(y,1);
	z = f(z,1);
	//k = f(k, 1);
	printf("%d%d%d\n", *x,*y,*z);

	a = (int*) malloc(sizeof(int)*2);
	a[0] = 1;
	a[1] = 2;
	
	//x = f(a, 1);
	x = a;
	y = x+1;
	//k = z+1;
	x = f(x,1);
	y = f(y,1);
	//k = f(k, 1);
	printf("%d%d%d\n", *x,*y,*z);


	int b = 5;
	x = f(&b, 0);
	printf("%d\n", *x);

	printf("all ok\n");
	return 0;
}



