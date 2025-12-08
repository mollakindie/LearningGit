// default argument
    #include <iostream>
    using namespace std;
    int sum(int a, int b=50, int c=40);
    //int g=70;
    int main()  {
    	//int g=90;
    int x=150,y=100,z=200, s;
     //cout<<"The value of g is="<<::g<<endl;
    s = sum(x, y, z);
    cout <<"The result is "<<s<<endl;
    s = sum(x, y);
    cout <<"The result is "<<s<<endl;
    s = sum(x);
    cout <<"The result is "<<s<<endl;
    return 0;
    }
 int sum(int a, int b, int c) {
    int result = a + b +c;
    // cout<<"The value of g is="<<::g<<endl;
    return (result);
    }
