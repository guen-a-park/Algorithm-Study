#include<iostream>

int BoxVolume(int length, int width=1, int height=1); //선언부에만 default값 표현해도 됨, 항상 오른쪽부터 채우기

int main()
{
	std::cout<<"[3, 3, 3] : "<<BoxVolume(3, 3, 3)<<std::endl;
	std::cout<<"[5, 5, D] : "<<BoxVolume(5, 5)<<std::endl; 
	//앞에서 부터 채워진다. length = 5, width = 5, height = 1  / 선언과 반대로 인자 전달은 왼쪽부터 
	std::cout<<"[7, D, D] : "<<BoxVolume(7)<<std::endl;
//	std::cout<<"[D, D, D] : "<<BoxVolume()<<std::endl;   -->ERROR!
	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length*width*height;
}
