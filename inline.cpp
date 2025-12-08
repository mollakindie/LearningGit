#include<iostream>
using namespace std;
inline int square(int n)  {
return n*n;
}
inline int cube(int n)  {
return n*n*n;
}
int main()  {
int num=2,sq,cb;
sq = square(num);                  //Calling the function square(int n)
cb = cube(num);                    //Calling the function cube(int n)
cout<<sq<<endl;              //4
cout<<cb<<endl;              //8
return 0;
}

