#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}



int (*retpf(int a, int b, int c))(int x, int y)
{
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);
	
        int (*pf)(int a, int b);
	pf = add;
	return pf;
}

int main()
{
	int a = 3;
	int b = 4;
	int ret = 0;
	
	int c = 10;
        int (*localpf)(int a, int b);
	localpf = retpf(a, b, c);
	ret = localpf(a, b);

	printf("a + b = %d\n", ret);
	return 0;
}
