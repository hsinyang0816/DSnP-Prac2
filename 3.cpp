#include <iostream>

using namespace std;

class T{
	public:
		T(int x):_d(x){};
		T f(){_d += 10; return (*this);}
		const void p(){cout << _d  << endl;}
	private:
		int _d;
};

int main(){
    const T a(10);
    //a.f();
	T(a).f().p(); a.p();
	//const_cast <T *> (&a) -> f() -> p(); a.p();
}


