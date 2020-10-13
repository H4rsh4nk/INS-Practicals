#include<bits/stdc++.h> 
using namespace std; 

string const key = "HACK"; 
map<int,int> keyMap; 

void setPermutationOrder() 
{			 
	for(int i=0; i < key.length(); i++) 
	{ 
		keyMap[key[i]] = i; 
	} 
} 
string decryptMessage(string cipher) 
{ 
	
	int col = key.length(); 

	int row = cipher.length()/col; 
	char cipherMat[row][col]; 

		for (int j=0,k=0; j<col; j++) 
		for (int i=0; i<row; i++) 
			cipherMat[i][j] = cipher[k++]; 

	int index = 0; 
	for( map<int,int>::iterator ii=keyMap.begin(); ii!=keyMap.end(); ++ii) 
		ii->second = index++; 

	char decCipher[row][col]; 
	map<int,int>::iterator ii=keyMap.begin(); 
	int k = 0; 
	for (int l=0,j; key[l]!='\0'; k++) 
	{ 
		j = keyMap[key[l++]]; 
		for (int i=0; i<row; i++) 
		{ 
			decCipher[i][k]=cipherMat[i][j]; 
		} 
	} 

	string msg = ""; 
	for (int i=0; i<row; i++) 
	{ 
		for(int j=0; j<col; j++) 
		{ 
			if(decCipher[i][j] != '_') 
				msg += decCipher[i][j]; 
		} 
	} 
	return msg; 
} 

int main(void) 
{ 
	string msg = "iweu   _Horohay_"; 

	setPermutationOrder(); 
	cout << "Decrypted Message: " << decryptMessage(msg) << endl; 

	return 0; 
} 
