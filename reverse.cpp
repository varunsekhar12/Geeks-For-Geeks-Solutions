#include<iostream.h>
void main() 
{
    int a[100],b,n,i,size,j;
    std::cin>>n;
    for(i=0;i<n;++i)
    {
        std::cin>>size;
        for(j=1;j<=size;++j)
        {
            std::cin>>a[j];
        }
         for(j=size;j>0;--j)
        {
            std::cout<<a[j]<<" ";
        }
        std::cout<<endl;
    }
}
