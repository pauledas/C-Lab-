#include <iostream>

int main()
{
    double a= 4, b=5, c=2;
    
    if(a > b && a > c)
{
    std::cout << "a is the largest";
}
else if (b > a && b > c)
{
    std::cout << "b is the largest";
}
else
{
    std::cout << "c is the largest";
}
return 0;
}