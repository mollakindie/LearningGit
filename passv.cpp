//first pass by value:
    #include <iostream>
    using namespace std;
    void f(int);
    int main()
    {
    int x = 10;
    cout << "The value before change is " << x << endl; //
    f(x); //x=10
    cout << "The value after change is "<< x <<'\n';//
    return 0;
    }
    void f (int num) //x=10
    {
    num = 0;
    cout << "The value at a function Foo is " << num << "\n";//
    }

