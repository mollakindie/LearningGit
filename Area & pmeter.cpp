		//function
		#include<iostream>
		using namespace std;
		//int print();
		//void display();
		float area(float width, float length);
		int main(){
		float w, l;
			cout<<" Pls enter witdh"<<endl;
			cin>>w;
			cout<<" Pls enter length";
			cin>>l;
			float p=area(w, l);
			cout<<p;
		  return 0;
		}
		float area(float w, float l){
			float a= w*l;
			return a;
		}
