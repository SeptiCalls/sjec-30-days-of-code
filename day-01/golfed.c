#include <stdio.h>

int main(void){
	int a, b;
	scanf("%d%d", &a, &b);
	char *FooBarBaz[] = {"Foo", "Baz", "Bar", "Foo", "Bar", "Baz"};
	for (int i = a; i <= b; i++) puts(FooBarBaz[i % 6]);
	return 0;
}

