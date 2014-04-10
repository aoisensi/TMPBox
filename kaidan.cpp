#include <iostream>

using namespace std;

template<int N>
struct FB {
	enum {
	v = N * FB<N - 1>::v
	};
};

template<>
struct FB<0> {
	enum {
		v = 1
	};
};

const int L = 10;

int main ()
{
	const int v = FB<L>::v;
	cout << v << endl;
	return 0;
}
