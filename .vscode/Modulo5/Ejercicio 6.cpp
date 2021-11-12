#include <iostream>
using namespace std;
bool inversa(string a,string b){
    int n = a.length();
    for (int i = 0; i < n / 2; i++){
        swap(a[i], a[n - i - 1]);
    }
    if (a==b){
        return true;
    }else return false;
}
int main(){
    string palabra1;
    string palabra2;
    cout << "Escriba una palabra ";
    cin >> palabra1;
    cout << "Escriba otra palabra ";
    cin >> palabra2;
    if (inversa(palabra1,palabra2)==true){
        cout << "Son inversos";
    }else cout << "No son inversos";
    return 0;
}