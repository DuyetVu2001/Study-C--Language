#include <iostream>

using namespace std;




void baiToan5(){
	int thang = 0, k = 0;
	cout << "Nhap mot thang trong nam: (nam 2020)\n" << endl;
	cin >> thang;
		k = 0;
		switch(thang){
			case 1:{
				thang = 31;
				break;
			}
			case 2:{
				thang = 29;
				break;
			}
			case 3:{
				thang = 31;
				break;
			}
			case 4:{
				thang = 30;
				break;
			}
			case 5:{
				thang = 31;
				break;
			}
			case 6:{
				thang = 30;
				break;
			}
			case 7:{
				thang = 31;
				break;
			}
			case 8:{
				thang = 31;
				break;
			}
			case 9:{
				thang = 30;
				break;
			}
			case 10:{
				thang = 31;
				break;
			}
			case 11:{
				thang = 30;
				break;
			}
			case 12:{
				thang = 31;
				break;
			}
			default:{
				cout << "Sai gia tri!";
				k = 1;
				break;
			}
		}		
	
	if(k == 0)
		cout << thang << " ngay.";
}
	
int main(){
	baiToan5();
	
	return 0;
}


