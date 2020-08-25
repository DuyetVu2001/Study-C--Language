#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int x = 9, y = 13;
	
	for(int i = 1; i <= x; i++){
		for(int j = 1; j <= y; j++){
			if(i == 1 || i == x){
				cout << " * ";
			}
			else{
				if(j == 1 || j == y){
					cout << " * ";
				}
				else cout << "   ";
			}
		}
		cout << endl << endl;
	}
	return 0;
}


