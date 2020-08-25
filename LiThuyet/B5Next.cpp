#include <iostream>
#include <string>
using namespace std;

template <class U, class V> class Pair{
	private:
		U key;
		V value;
	public:
		Pair(U key, V value);
		void showPair();
};

template <class U, class V> Pair<U, V>::Pair(U key, V value){
	this->key = key;
	this->value = value;
}


template <class U, class V> void Pair<U, V>::showPair(){
	cout << this->key << " - " << this->value << endl;
}

int main(){
	Pair<string, int> pair1("one", 1);
	pair1.showPair();
	Pair<string, int> pair2("two", 2);
	pair2.showPair();
	Pair<string, string> pair3("cat", "meo meo");
	pair3.showPair();
	return 0;
}


