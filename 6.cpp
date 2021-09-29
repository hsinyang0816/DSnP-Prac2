#include <iostream>

using namespace std;

class N {
    void *_P;
	public :
	N(void*p): _P(p) {}
	bool mark;
};

void setMark(N x){
	x.mark = true;
}
bool checkMark(N x) const{
   if (x.mark == true)
	 return true;
   else return false;
}
void *getPtr(N x) const{
    return x._P;

}

int main(){
	int *a;
	char *b;
    N n1(a);
    N n2(b);
}
