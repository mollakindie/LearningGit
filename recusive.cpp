// recursive function
    #include <iostream>
    using namespace std;
    long fact(long n);
    int main()
    {
    int f,a;
    cout <<"enter a number \n";
    cin>>a; //2
    f = fact(a);
    cout <<"The factorial of a number is "<<f<<endl;
    return 0;
    }
    long fact(long n)
    {
    if ( n <= 1) //the base case
    return 1;
    else
    return n * fact (n -1);
    }
    /*
    fact(1) = 1
    fact(2) = 2*fact(1)=2*1=2
    fact(3) = 3*fact(2)=3*2=6
    fact(4) = 4*fact(3)=4*6=24
    fact(5) = 5*fact(4)=5*24=120
    */

