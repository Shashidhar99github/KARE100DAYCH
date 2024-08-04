#include<bits/stdc++.h>
using namespace std;
int SumofNumbers(int n,int m){
    int sum = 0;
    for(int i = n; i <= m; i++){
        sum += i;
    }
    return sum;
}
int main(){
    int n,m;
    cout<<"Enter the range (n m): ";
    cin >> n >> m;
    int result = SumofNumbers(n,m);
    cout <<"Sum of numbers between "<<n<<" and "<<m<<": "<<result <<endl;
    return 0;
}