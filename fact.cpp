
//Recursive factorial Function

    #include<iostream>
    using namespace std;
    long factorial(long);//prototype
    int main() {
    int num;
    cout <<"enter a positive integer:";
    cin>>num; cout <<"factorial="<<factorial(num);
    }
    long factorial(long n){
    if ( n <= 1) //the base case
    return 1;
    else{

	 return n * factorial (n -1);
    }}

