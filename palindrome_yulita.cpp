#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
 
    string kata;
 
    // menginputkan kata yang akan dicek

    cout << "Masukkan Kata\n: "; 
    getline(cin, kata);
 
    // buat variable baru dengan value sama dengan apa yang diinputkan
    // lalu ubah menjadi lowercase
   
    string Kataasli = kata;
    transform(Kataasli.begin(), Kataasli.end(), Kataasli.begin(), ::tolower);
 
    // buat variable baru lagi dengan value yang sudah dijadikan lowercase
    // kemudian reverse / balik nilainya
   
    string reversedWord = Kataasli;
    reverse(reversedWord.begin(), reversedWord.end());
 
    // bandingkan Kataasli dengan reversedWord
    // jika sama maka palindrome, selain itu bukan palindrome
   
    if(Kataasli == reversedWord) {
        cout << "\nKata '" << kata << "' adalah palindrome.\n" << endl;
    } else {
        cout << "\nKata '" << kata << "' bukan palindrome.\n" << endl;
    }
 
    return 0;
}