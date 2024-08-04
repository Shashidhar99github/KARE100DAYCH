#include<bits/stdc++.h>
using namespace std;
int GreatestOfThree(int a,int b,int c){
    if(a>=b && a>=c){
        return a;
    }else if(b>=a && b>=c){
        return b;
    }else{
        return c;
    }
}
int main(){
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin >> a>>b>>c;
    int result = GreatestOfThree(a,b,c);
    cout <<"Greatest of three numbers is: "<<result <<endl;
    return 0;
}