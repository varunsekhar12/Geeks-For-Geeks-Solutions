#include<iostream.h>
using namespace std;

int main() 
{
    int test,num,n;
    std::cin>>test;
    for(int i=0;i<test;++i)
    {
        std::cin>>num;
        int sum = 0;
        while(num>0)
        {
            n = num%10;  
            sum+=n;
            num = num/10; 
        }
        std::cout<<sum<<endl;
    }
	return 0;
}