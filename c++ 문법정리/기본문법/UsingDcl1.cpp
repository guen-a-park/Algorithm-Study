#include <iostream>

namespace Hybrid
{
	void HybFunc(void)
	{
		std::cout<<"So simple function!"<<std::endl;
		std::cout<<"In namespace Hybrid!"<<std::endl;
	}
}

int main(void)
{
	using Hybrid::HybFunc; //이름공간 Hybrid에 정의된 HybFunc을 호출할때는 이름공간을 지정하지 않고 호출하겠다!
	HybFunc();
	return 0;
}
