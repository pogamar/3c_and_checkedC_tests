#include <stdio.h>
void f(_Nt_array_ptr<char> x : count(6), int ischar)_Checked {
	_Nt_array_ptr<char> cr = ((void *)0);
	if(ischar)_Unchecked {
		cr = (_Nt_array_ptr<char>)x;
		cr[0] = 'H';
		printf("%s\n", cr);
	}
	
	//return (void*)cr;
}

int main()
_Checked {
//	int a = 10;
//	printf("%d",f(&a));
	_Nt_array_ptr<char> x : count(6) = ((void *)0);
_Ptr<char> y = ((void *)0);

	char a _Nt_checked[] = "hello";
	//x = f(a, 1);
	x = a; // compiler error in checked c
	f(x, 1);
	//k = f(k, 1);
	_Unchecked { printf("%s\n", x); };

	_Ptr<char> c = "hello there!";
	y = c; // no compiler error in checked c
	f(x, 1);
	//k = f(k, 1);
	_Unchecked { printf("%s\n", x); };


	int b = 5;
	//x = f(&b, 0);
	_Unchecked { printf("%d\n", *x); };

	_Unchecked { printf("all ok\n"); };
	return 0;
}



