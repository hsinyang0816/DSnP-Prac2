#include <iostream>

using namespace std;

void f(int a=0);

int main(){
	//int x = 0;
    f();
    return 0;
}

void f(int a/*=1*/) { cout << "Hello world";}
