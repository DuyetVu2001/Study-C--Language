#include <iostream>
#include <cmath>
#include <string.h>

using namespace std;

int main(){
	char a[90];
	fgets(a, 89, stdin);
	int str = strlen(a);
	printf("%d", str);
	return 0;
}


