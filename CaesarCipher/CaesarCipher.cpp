// CaesarCipher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	cout << "Caesar Cipher main menu\n\nWould you like to:\nEncrypt(1)?\nDecrypt(2)?\n";
	int userChoice;
	int key;
	string textInput;
	cin >> userChoice;
	cout << "Enter the key to the cipher:\t";
	cin >> key;
	cout << "Enter the text you wish to encrypt or decrypt:\t";
	cin >> textInput;
	char ch;

	switch (userChoice) {
	case 1:
		for (int i = 0; i < textInput.length(); i++) {
			ch = textInput[i];
			if (ch >= 'a' && ch <= 'z') {
				ch = ch + key;
				if (ch > 'z')
				{
					ch = ch - 'z' + 'a' - 1;
				}
				textInput[i] = ch; 
			}
			else if (ch >= 'A' && ch <= 'Z') {
				ch = ch + key;
				if (ch > 'Z') {
					ch = ch - 'Z' + 'A' - 1;
				}
				textInput[i] = ch;
			}
		}
		cout <<("Encrypted message: %s", textInput);
		break;
	case 2:
		for (int i = 0; i < textInput.length(); i++) {
			ch = textInput[i];
			if (ch >= 'a' && ch <= 'z') {
				ch = ch - key;
				if (ch < 'a') {
					ch = ch + 'z' + 'a' + 1;
				}
				textInput[i] = ch;
			}
			else if (ch >= 'A' && ch <= 'Z') {
				ch = ch - key;
				if (ch < 'A') {
					ch = ch + 'Z' + 'A' + 1;
				}
				textInput[i] = ch;
			}
		}
		cout << ("Decrypted message: %s", textInput);
		break;
	case 3:
		break;
	}


}


