#include<iostream>
#include<conio.h>
using namespace std;
int cube(int n);
int qud(int n);
int main(){
int x,n;
cout<<"enter the a numbers"<<endl;
cin>>n;
cube(x);
qud(x);
return 0;	
}
int cube(int c){
	int k;
k= c*c*c;
cout<<k<<endl;
return k;
}
int qud(int q){
	int q1;
q1= q*q*q*q;
	cout<<q1<<endl;
	return q1;
}
