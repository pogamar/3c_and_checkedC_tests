#include <stdio.h>
void* f(char *x : itype(_Nt_array_ptr<char>) count(6), int ischar){
	char *cr;
	if(ischar){
		cr = (char*)x;
		cr[0] = 'H';
		printf("%s\n", cr);
	}
	
	return (void*)cr;
}

int main()
{
//	int a = 10;
//	printf("%d",f(&a));
	_Nt_array_ptr<char> x : count(6) = ((void *)0);
_Ptr<char> y = ((void *)0);

	char a _Nt_checked[] = "hello";
	//x = f(a, 1);
	x = a;
	f(x, 1);
	//k = f(k, 1);
	printf("%s\n", x);

	_Ptr<char> c = "hello there!";
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



