#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std; // c 표준함수들 역시 이름공간 std안에 선언되어있어 꼭 필요함.

int main(void)
{
	char str1[]="Result";
	char str2[30];

	strcpy(str2, str1);
	printf("%s: %f \n", str1, sin(0.14));
	printf("%s: %f \n", str2, abs(-1.25));
	return 0;
}