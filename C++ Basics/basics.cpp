// #include<iostream>
// #include<math.h>
// #include<string>
#include<bits/stdc++.h> //imports all libraries at once
using namespace std;

int main() {
    cout << "Hey Priyam!\n";
    // cout << "Hey Pryam!" << "\n";
    // cout << "Hey Raj!" << endl;
    int x, y;
    cin >> x >> y;
    cout << "Value of x: " << x << " and y: " << y << endl;

    //For storing integers we have int, long and long long
    int x1 = 10;
    long x2 = 34;
    long long x3 = 56;

    //For decimals we have float, double and long double
    float y1 = 5.6;
    float y2 = 7.8;

    //For characters and strings, we have string and getline
    //string store just one word by default, if you give a space, it uses it as a delimiter and tries to put it inside another string variable
    string s;
    cin >> s;
    cout << s << endl;
    //If you want to force string to contain more than one word, use getline
    string str;
    getline(cin >> ws, str);
    cout << str << endl;
    return 0;
}