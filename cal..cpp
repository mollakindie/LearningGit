//write a c++ program that which adds, multiplies and average three numbers using
// function.The function shuld called 'swtch statments' . 
//the out put of the program sholud resembles the folowing
//enter the three number
// 5 7 9
//press 1 to get product
//press 2 to get sum
//press 3 to get average
#include<iostream>
#include<conio.h>
using namespace std;
int sum(int x, int y, int z);
int mul(int x, int y, int z);
int ave(int x, int y, int z);
int main(){
int n;
int a, b,c;
cout<<"press 1 to get sum"<<endl;
cout<<"press 2 to get product"<<endl;
cout<<"press 4 to get average"<<endl;
cin>>n;
cout<<"enter the three numbers"<<endl;
cin>>a>>b>>c;
switch(n){	
	case 1:sum(a,b,c);
	break;
	case 2:mul(a,b,c);
	break;
   case 3:ave(a,b,c);
	break;
}
return 0;
}
int sum(int x, int y, int z){
	int s= x+y+z;	
	cout<<s;
	return s;
}
int mul(int x, int y, int z){
	int p= x*y*z;
	cout<<p;
	return p;
}
int ave(int x, int y, int z){
	int d= (x+y+z/3);
	cout<<d;
	return d;
}


