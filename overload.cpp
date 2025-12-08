//function overloading
    #include <iostream>
    using namespace std;
    int square(int x);
    float square(float x);
    int main()
    {
    float a = 6.6;
    float s = square(a);
    cout << s << endl;
    return 0;
    }
    int square(int x)
    {
    cout << "I am an Integer\n";
    return x * x;
    }
    float square(float x)
    {
    cout << "I am a float\n";
    return x * x;
    }

