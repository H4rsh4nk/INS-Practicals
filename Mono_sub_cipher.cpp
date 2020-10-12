#include <bits/stdc++.h>

using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
    
	cout<<"Enter the plaintext : ";
	string str1; cin >> str1;

	cout<<"The substitution alphabet : ";
	string sub = "azertyuiopqsdfghjklmwxcvbn",
	      alfa = "abcdefghijklmnopqrstuvwxyz"; 
	cout << sub <<endl;
	map<char, char> m;
	for(int i=0; i< 26; i++){
		m[alfa[i]] = sub[i];
	
	}

	cout <<	"The ciphertext is : ";
	for(auto a : str1) cout << m[a];

	return 0;
}
