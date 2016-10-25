

#include <iostream>
#include <vector>

using namespace std;

bool isNum(char c) { return (c>='0' && c<='9');}
bool isChar(char c){ retur ((c>='A' && c<='Z')||(c >='a' || c<='z'));}
bool isUppar(char c) {return (c>='A' && c<='Z');}
bool isLower(char c) {return (c>= 'a' && c<='z');}

int main()
{
	char c='9';
	cout<< isNum(c)<<endl;
	cout<<"Next digit: "<<endl;
	c ='a';
	cout<< isNum(c)<<endl;	
	return 0;
}
