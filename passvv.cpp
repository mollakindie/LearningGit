// pass by value:
    #include <iostream>
    using namespace std;
    void swap(int x,int y);
    int main()
    {
    int a=7,b=4;
    cout <<"The values before swap are a="<<a<<" and b="<<b<<endl;
    swap(a,b);
    cout <<"The values after swap are a="<<a<<" and b="<<b<<endl;
    return 0;
    }
    void swap(int x,int y)
    {
    int temp;
    temp=x; //temp = 7, x =7
    x=y; //x=4, y=4
    y=temp; //y=7 temp=7
    cout <<"Swapped values at function swap are a="<<x<<" and b="<<y<<endl;
    }

