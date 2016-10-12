#include<iostream>
using namespace std;

template <typename T>
void print(T a)
{
   cout << a << endl;
}

int main(void)
{
   print(1);
   print(2.345f);
   print("Hello World");
}