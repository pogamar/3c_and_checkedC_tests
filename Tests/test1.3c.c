#include <stdlib.h>

void baz(_Array_ptr<int> q : count(len), _Ptr<int> c, int len)
_Checked {
    for (int i = 0; i < len; i++)
    {
        q[i] += *c;
    }
}

extern void recordptr(void *x);

static int *g = 0;

void foo(int *p : itype(_Array_ptr<int>) count(n), int n)
{

    int m = 0;
    recordptr(p);
    g = p;
    baz(_Assume_bounds_cast<_Array_ptr<int>>(p,  count(len)), &m, n);
}

void bar(int z)
{
    _Array_ptr<int> r : count(z) =
        _Assume_bounds_cast<_Array_ptr<int>>(malloc(sizeof(int) * z), byte_count(0));
    foo(r, z);
    baz(r, _Assume_bounds_cast<_Ptr<int>>(g), z);
}