#include <stdio.h>
#define OFFSETOF(struct_name,member_name) (size_t)&(((struct_name*)0)->member_name)
struct S
{
	char c1;
	int a;
	char c2;
};
int main()
{
	printf("%zd\n", OFFSETOF(struct S, c1));
	printf("%zd\n", OFFSETOF(struct S, a));
	printf("%zd\n", OFFSETOF(struct S, c2));
	return 0;
}
