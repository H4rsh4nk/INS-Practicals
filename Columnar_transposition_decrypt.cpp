#include<bits/stdc++.h> 
using namespace std; 

string const key = "HARSH"; 
map<int,int> keyMap; 

void setPermutationOrder() 
{			 
	for(int i=0; i < key.length(); i++) 
	{ 
		keyMap[key[i]] = i; 
	} 
} 

string encryptMessage(string msg) 
{ 
	int row,col,j; 
	string cipher = ""; 

	col = key.length(); 
	
	row = msg.length()/col; 
	
	if (msg.length() % col) 
		row += 1; 

	char matrix[row][col]; 

	for (int i=0,k=0; i < row; i++) 
	{ 
		for (int j=0; j<col; ) 
		{ 
			if(msg[k] == '\0') 
			{ 
				matrix[i][j] = '_';	 
				j++; 
			} 
			
			if( isalpha(msg[k]) || msg[k]==' ') 
			{ 
				matrix[i][j] = msg[k]; 
				j++; 
			} 
			k++; 
		} 
	} 

	for (map<int,int>::iterator ii = keyMap.begin(); ii!=keyMap.end(); ++ii) 
	{ 
		j=ii->second; 
		
		for (int i=0; i<row; i++) 
		{ 
			if( isalpha(matrix[i][j]) || matrix[i][j]==' ' || matrix[i][j]=='_') 
				cipher += matrix[i][j]; 
		} 
	} 

	return cipher; 
} 
int main(void) 
{ 
	string msg = "Hi how are you"; 

	setPermutationOrder(); 
	
	string cipher = encryptMessage(msg); 
	cout << "Encrypted Message: " << cipher << endl; 
	

	return 0; 
} 
