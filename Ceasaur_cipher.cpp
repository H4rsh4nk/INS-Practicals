#include <bits/stdc++.h>

using namespace std;
int main(){
	cout<<"Enter the plaintext : ";
	string str1; cin >> str1;
	cout<<"Enter the ciphertext : ";
	for(auto a:str1){
		if(a == 'x')
			cout << 'a';
		else if(a == 'y')
			cout << 'b';
		else if(a == 'z')
			cout << 'c';
		else {
			char ch = a;
			ch += (int)3;
			cout << a;
		}
	}
}