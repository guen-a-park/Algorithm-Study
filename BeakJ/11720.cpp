#include <iostream>

using namespace std;

int main(void)
{
    int num1;
    cin>>num1;
    
    char arr[num1];

    cin>>arr;
    int sum = 0;

    for(int i=0; i<num1; i++)
    {
        sum += arr[i] - '0';   
    }

    cout<<sum<<endl;

    return 0;
}
