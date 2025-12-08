//valu by p
    #include<iostream>
    using namespace std;
    void display(int &);
    int main()
    {
    int x = 10;
    display(x);
    cout << "x = " << x << "\n";
    return 0;
    }
    void display(int &a)
    {
    a = 0;
    cout << "x = " << a << "\n";
    }



