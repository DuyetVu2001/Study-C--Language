#include <iostream>
#include <string>
using namespace std;

int main(){
	string s = "hihi";
	string s1 = " haha";
	string s2 = s + s1;
	cout << s2 << endl;
	s2 = s.append(s1);	
	cout << s << endl;
	
	string hoa = "Hoa";
	string otherHoa = "Hoa";
	int res = hoa.compare(otherHoa);
	cout << res << endl;
	
	hoa.clear();
	cout << hoa << endl;
	cout << hoa.length() << endl;
	
	const char *a = s.c_str();// chuyen xau s sang mang char
	for(int i = 0;i < s.length(); i++){
		cout << *(a+i);
	}
	cout << endl;
	
	string emptyString = "";
	cout << emptyString.empty() << endl;
	
	
	return 0;
}


