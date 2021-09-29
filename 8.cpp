#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define MAX_DEPTH 10

class N {
    N_ *_n;
	public:
	N() : _n(0) {}
    void gen();
    void statistics() const;
};

class N_ {
    friend class N;
	size_t _d[1 << 17]; //1MB
	unsigned _refCnt;
	N _child1;
	N _child2;
	N_() : _refCnt(0) {}
};

N_* nlist[1 << MAX_DEPTH] = {0};

int main() {
    srandom(getpid());
	N root;
	root.gen();
    root.statistics();

}

void N::gen(){
    _n == 0;
	srand(time (NULL));
	int i = rand() % (1 << MAX_DEPTH);
	if(nList[i] == 0){
	  N_ x = new N_*;
	  *x = _n;
      nlist[i]._refCnt++;
	}
	else 
	  _n = nList[i];
	_refCnt ++;
}

void N::statistics(){
    


}
