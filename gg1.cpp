
//square and cube 
    #include <iostream>
        using namespace std;
    int cube(int a);
    int square(int a);

    int main()
    {
    int x, c, s;
    cout <<"enter a number \n";
    cin>>x; //2
    s=square(x);
    c=cube(x);
    cout <<"the square of a number is "<<s<<endl;
    cout <<"the cube of a number is "<<c<<endl;
    return 0;
    }
    int cube(int a)
    {
    return (a*a*a);
    }
    int square(int a)
    {
    return (a*a);
    }

