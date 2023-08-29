#include <stdio.h>
int *f(int *x, int arr){
	int *r = x+4;
	*r = *r + 1;
	return r;
}

int main()
{
//	int a = 10;
//	printf("%d",f(&a));
	int *x, *y, *z, *k;
	int a[] = {1,2,3};
	//x = f(a, 1);
	x = a;
	y = x+1;
	z = y+1;
	//k = z+1;
	x = f(x, 1);
	y = f(y, 1);
	z = f(z, 1);
	//k = f(k, 1);
	printf("%d%d%d\n", *x,*y,*z);


	int b = 5;
	//x = f(&b, 0);
	printf("%d\n", *x);

	printf("all ok\n");
	return 0;
}



