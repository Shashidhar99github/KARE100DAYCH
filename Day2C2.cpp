// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,m,sum=0;
//     cout <<"Natural Numbers From: ";
//     cin >> n;
//     cout <<"Natural Numbers To: ";
//     cin >> m;
//     cout <<"Sum of N Natural Numbers: ";
//     for(int i=n;i<=m;i++){
//         sum = sum +i;
//     }
//     cout << sum;
// }
#include<bits/stdc++.h>
using namespace std;
int sumofNaturalNumbers(int n,int m){
    int sum =0;
    for(int i=n;i<=m;i++){
        sum = sum + i;
    }
    return sum;
}
int main(){
    int n,m;
    cout <<"Natural Numbers From: ";
    cin>>n;
    cout <<"Naturl Numbers To: ";
    cin>>m;
    int sum = sumofNaturalNumbers(n,m);
    cout <<"Sum of N Natural Numbers: "<<sum<<endl;
}