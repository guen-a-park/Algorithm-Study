#include<iostream>

int BoxVolume(int length, int width=1, int height=1); //����ο��� default�� ǥ���ص� ��, �׻� �����ʺ��� ä���

int main()
{
	std::cout<<"[3, 3, 3] : "<<BoxVolume(3, 3, 3)<<std::endl;
	std::cout<<"[5, 5, D] : "<<BoxVolume(5, 5)<<std::endl; 
	//�տ��� ���� ä������. length = 5, width = 5, height = 1  / ����� �ݴ�� ���� ������ ���ʺ��� 
	std::cout<<"[7, D, D] : "<<BoxVolume(7)<<std::endl;
//	std::cout<<"[D, D, D] : "<<BoxVolume()<<std::endl;   -->ERROR!
	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length*width*height;
}
