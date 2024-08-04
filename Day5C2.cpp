#include<bits/stdc++.h>
using namespace std;
string Leapyear(int year){
    if(year%400 == 0){
        return "Leap Year";
    }
    else if(year %100 == 0){
        return "Not a Leap Year";
    }
    else if(year%4 == 0){
        return "Leap Year";
    }
    else{
        return "Not a Leap Year";
    }
}
int main(){
    int year;
    cout <<"Enter the year: ";
    cin >> year;
    string result = Leapyear(year);
    cout << result << endl;
    return 0;
}