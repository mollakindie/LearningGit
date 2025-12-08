
    #include <iostream>
    // every C++ program should have main function & every C++ program starts in main function and ends in main function
    using namespace std;
    void display(); //function declaration
    void showResult();
    float mul();
    double area(double, double);
    int main()
    {
    display(); //function call
    showResult();
    display();
    float p = mul();
    cout <<"the product is "<<p<<endl;
    double width, height;
    cout <<"enter width\n";
    cin>>width; //6
    cout <<"enter height \n";
    cin>>height; //4
    double a = area(width, height);
    cout <<"the area of a rectangle is "<<a<<endl;
    return 0;
    }
    void display() //function definition
    {
    cout <<"Hello World\n";
    }
    void showResult()
    {
    int a,b;
    cout <<"enter two number\n";
    cin>>a>>b;
    int sum = a+b;
    cout <<"the sum is "<<sum<<endl;
    return;
    }
    float mul()
    {
    float x,y, pro;
    cout <<"Enter two floating point numbers \n";
    cin>>x>>y;
    pro = x*y;
    return pro;
    }
    double area(double w, double h)
    {
    double a;
    a = w*h;
    return a;
    }

