#include <iostream>

using namespace std;

int main(){
	char c[33] = "0123456789abcdefghijklmnopqrstu";
	void *p = c;
    char *p1;
	short *p2;
	int *p3;
    cout << "p1 : " << p1 <<endl;
    cout << "p2 : " << p2 <<endl;
    cout << "p3 : " << p3 <<endl;
    cout << "p1 + 1 : " << p1 + 1 <<endl;
    cout << "p2 + 1 : " << p2 + 1 <<endl;
    cout << "p3 + 1 : " << p3 + 1 <<endl;
    short *q = p2 + 1;
	void *s = q;
	//*s = 0; 
    cout << "p1 : " << p1 <<endl;
    cout << "p1+2 : " << p1+2 <<endl;
    cout << "p1+4 : " << p1+4 <<endl;
    cout << "p1+6 : " << p1+6 <<endl;

}
