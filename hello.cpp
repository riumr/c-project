#include <iostream>
using namespace std;

int main(){
    const string word = "Hello World";
    string x;
    cout << word << endl;
    cout << "Learning c++" << "\n";
    cin >> x;
    cout << "input is " << x << endl;
    cout << "length of x is " << x.length() << endl;
    cout << "size of x is " << x.size() << endl;
    cout << x[0] << endl;
    cout << x.at(x.length()-1);
    return 0;
}