#include <stdio.h>
#define x  5

#define y 10

#if x>y
int main()
{
	printf("x value = %d",x);
}
#elif x<y
int main()
{
	printf("y value = %d",y);
}
#else 
	int main()
{
	printf("equal");
}
#endif

