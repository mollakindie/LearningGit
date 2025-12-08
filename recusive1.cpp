// recursive function 

    #include <iostream>
    using namespace std;
    void display(int n);
    int main()
    {
    int n; //1
    cout <<"enter a number\n";
    cin>>n;
    display(n);
    return 0;
    }
    void display(int n)
    {
    if( n <= 0 )
    return;
    cout << n << " ";
    //recurrence case
    display(n-1);
    }

