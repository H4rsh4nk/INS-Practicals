#include <bits/stdc++.h>

using namespace std;
int main(){
	
	cout<<"Enter the ciphertext : ";
	string str1; cin >> str1;

	cout<<"The substitution alphabet : ";
	string sub = "azertyuiopqsdfghjklmwxcvbn",
	      alfa = "abcdefghijklmnopqrstuvwxyz"; 
	cout << sub <<endl;
	map<char, char> m;
	for(int i=0; i< 26; i++){
		m[sub[i]] = alfa[i];
	
	}

	cout <<	"The plaintext is : ";
	for(auto a : str1) cout << m[a];

	return 0;
}

