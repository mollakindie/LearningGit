 //finonacci 
    #include<iostream>
    using namespace std;
    long fibonacci(long);//prototype
    int main()
    {
    int num;
    cout <<"enter a positive integer:";
    cin>>num;
    cout <<"fibonacci of " << num << "is"<<fibonacci(num);
    }
    //Code for the fibaonacci function
    long fibonacci(long n)
    {
    if(n == 0 || n == 1) // base case
    return n;
    else return fibonacci(n-1) + fibonacci(n-2);
    }

