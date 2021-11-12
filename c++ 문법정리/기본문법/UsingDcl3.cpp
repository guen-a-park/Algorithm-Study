#include <iostream>
using namespace std; 
// using std :: cout 대신! 이름공간 std에 선언된 모든 것에 대해 이름공간 지정의 생략을 명령 but 이름충돌가능성 up

int main(void)
{
	int num=20;
	cout<<"Hello World!"<<endl;
	cout<<"Hello "<<"World!"<<endl;
	cout<<num<<' '<<'A';
	cout<<' '<<3.14<<endl;
	return 0;
}