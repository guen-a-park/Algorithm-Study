#include <iostream>
using namespace std;

namespace AAA
{
	namespace BBB
	{
		namespace CCC
		{
			int num1;
			int num2;
		}
	}
}
int val = 100;
int main(void)
{
	AAA::BBB::CCC::num1=20;
	AAA::BBB::CCC::num2=30;

	namespace ABC=AAA::BBB::CCC;

	cout<<ABC::num1<<endl;
	cout<<ABC::num2<<endl;
	return 0;

	//지역변수와 전역변수
	int val = 10;
	val += 3; //지역변수 접근
	::val + = 10; //전역변수 접근
}