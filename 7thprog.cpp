//call by reference
#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp= *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x=5;
    int y=18;
    cout<<"before swap:x ="<< x <<",y="<< y << endl;
    swap(&x,&y);
    cout <<"after swap:x=" << x <<",y=" << y << endl;
    return 0;

}