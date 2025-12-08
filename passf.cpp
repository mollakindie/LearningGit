// pass by value:

    #include <iostream>
    using namespace std;
    void swap(int x,int y);
    int main()
    {
    int a=10,b=6;
    cout <<"The values before swap are a="<<a<<" and b="<<b<<endl;
    swap(a,b);
    cout <<"The values after swap are a="<<a<<" and b="<<b<<endl;
    return 0;
    }
    void swap(int x,int y) {
    int temp;
    temp=x;  //temp = 10, x =10
    x=y;     //x=6, y=6
    y=temp; //y=10 temp=10
    cout <<"Swapped values at function swap are a="<<x<<" and b="<<y<<endl;
    }

