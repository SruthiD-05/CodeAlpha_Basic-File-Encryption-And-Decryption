#include <iostream>
#include <string>
using namespace std;

// Function to encrypt the message
string encryptText(string text, int key) {
    for(int i = 0; i < text.length(); i++) {
        text[i] = text[i] + key;
    }
    return text;
}

// Function to decrypt the message
string decryptText(string text, int key) {
    for(int i = 0; i < text.length(); i++) {
        text[i] = text[i] - key;
    }
    return text;
}

int main() {
    int choice, key;
    string message;

    cout << "\nSimple Text Encryption & Decryption Tool\n";
    cout << "1. Encrypt Message\n";
    cout << "2. Decrypt Message\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter the key (number): ";
    cin >> key;

    cin.ignore(); // clears input buffer
    cout << "Enter the message: ";
    getline(cin, message);

    if(choice == 1) {
        string encrypted = encryptText(message, key);
        cout << "\nEncrypted Message: " << encrypted << endl;
    }
    else if(choice == 2) {
        string decrypted = decryptText(message, key);
        cout << "\nDecrypted Message: " << decrypted << endl;
    }
    else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}