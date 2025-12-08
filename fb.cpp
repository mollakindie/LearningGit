//write a c++ program that finds fib
	#include <iostream>
	using namespace std;
 int fb(int, int);
 int main(){
 	
 int f0=0, f1=1;
 cout<<f0<<" ,";
 fb(f0, f1);
	return 0; 
	}
int fb(int f0, int f1){
		if(f1<10){
	cout<<f1<<" ,";
return fb(f1, f0+f1);
		}
	}


