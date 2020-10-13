
#include<bits/stdc++.h> 
using namespace std; 

string generateKey(string str, string key) 
{ 
	int x = str.size(); 

	for (int i = 0; ; i++) 
	{ 
		if (x == i) 
			i = 0; 
		if (key.size() == str.size()) 
			break; 
		key.push_back(str[i]); 
	} 
	return key; 
} 
 

string originalText(string cipher_text, string key) 
{ 
	string orig_text; 

	for (int i = 0 ; i < cipher_text.size(); i++) 
	{ 
		char x = (cipher_text[i] - key[i] + 26) %26; 

		x += 'A'; 
		orig_text.push_back(x); 
	} 
	return orig_text; 
} 

int main() 
{ 
	

	string str = "HELLOWORLD",str2 = "HFSPZHCNZU"; 
	string keyword = "AB"; 

	string key = generateKey(str, keyword); 
	string plain_text = originalText(str2, key); 

	cout << "Ciphertext : "
		<< str << "\n"; 
	cout << "Keyword : "
		<< key << "\n"; 

	cout << "Original/Decrypted Text : "
		<< plain_text; 
	return 0; 
} 
