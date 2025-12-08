// default argument
    #include <iostream>
    using namespace std;
    int val= 89;
    int sum(int a, int b=40, int c=20)  {
    int val=78;
    //cout <<::val<<endl;
    int result = a + b +c;
    return (result);
    }
    int main()  {
    int x=100,y=200,z=300, s;
   // cout <<val<<endl;
    s = sum(x, y, z);
    cout <<"The result is "<<s<<endl;
    s = sum(x, y);
    cout <<"The result is "<<s<<endl;
    s = sum(x);
    cout <<"The result is "<<s<<endl;
    return 0;
    }

