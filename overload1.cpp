//function overloading 
    #include <iostream>
    using namespace std;
    int addition(int x, int y);
    int addition(int x, int y, int z);
    int main()
    {
    int a=6, b=4, c=7;
    int s=addition(a,b,c);
    cout <<s<<endl;
    int x=8, y=5;
    int d=addition(x,y);
    cout <<d<<endl;
    return 0;
    }
    int addition(int x, int y)
    {
    cout <<"I am integer\n";
    return x + y;
    }
    int addition(int x, int y, int z)
    {
  int s= x+y+z;
  cout<<s;
    }

