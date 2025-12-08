    //default argument
    #include<iostream>
    using namespace std;
	int sum(int a, int  b);
    int main () {
    int a=50 , b=60 , result;
    result = sum(a, b);
    cout << "Total value is :" << result << endl;
    result = sum(a,b);
    cout << "Total value is :" << result << endl;
    }
    int sum(int a =10, int b=20) {
    int result = a + b;
    return (result);
    }

