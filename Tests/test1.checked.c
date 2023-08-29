#include <stdio.h>
_Array_ptr<int> f(_Array_ptr<int> x : count(3), int arr) : count(3)_Checked {
	_Array_ptr<int> r : count(3) = x+5;
	*r = *r + 1;
	return r;
}

int main()
_Checked {
//	int a = 10;
//	printf("%d",f(&a));
	_Array_ptr<int> x : count(3) = ((void *)0);
_Array_ptr<int> y : count(3) = ((void *)0);
_Array_ptr<int> z : count(3) = ((void *)0);
_Ptr<int> k = ((void *)0);

	int a _Checked[] = {1,2,3};
	//x = f(a, 1);
	x = a;
	y = x+1;
	z = y+1;
	//k = z+1;
	x = f(x, 1);
	y = f(y, 1);
	z = f(z, 1);
	//k = f(k, 1);
	_Unchecked { printf("%d\n%d\n%d\n", *x,*y,*z); };


	int b = 5;
	//x = f(&b, 0);
	_Unchecked { printf("%d\n", *x); };

	_Unchecked { printf("all ok\n"); };
	return 0;
}



