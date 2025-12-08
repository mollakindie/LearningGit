	#include <iostream>
	using namespace std;
 void pp(int n);
 void ps(int n);
 int main(){
 	
 int n;
 cout<<" Enter a number";
 cin>>n;
 pp(n);
	return 0; 
	}
	void pp(int n){
		if(n>=1){
			ps(n);
			pp(n-1);
			ps(n);
		}
	}
	void ps(int n){
		cout<<endl;
		for(int i=0;i<n;i++)
		cout<<" * ";
	}
	
	 

