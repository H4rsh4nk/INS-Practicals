#include <bits/stdc++.h>

using namespace std;
int main(){
	cout<<"Enter the ciphertext : ";
	string str1; cin >> str1;
	cout<<"Enter the plaintext : ";
	for(auto a:str1){
		if(a == 'a')
			cout << 'x';
		else if(a == 'b')
			cout << 'y';
		else if(a == 'c')
			cout << 'z';
		else {
			char ch = a;
			ch -= (int)3;
			cout << ch;
		}
	}
}