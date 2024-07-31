// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cout <<"Enter Your Number: ";
//     cin >> n;
//     int sum =0;
//     for(int i=1;i<=n;i++){
//         sum = sum + i;
//     }
//     cout <<"Sum of First N Natural Numbers: "<<sum<<endl;
// }
#include<bits/stdc++.h>
using namespace std;
int sumOfNaturalNumbers(int n){
    int sum =0;
    for(int i=1;i<=n;i++){
        sum = sum + i;
    }
    return sum;
}
int main(){
    int n;
    cout <<"Enter Your Number: ";
    cin >> n;
    int sum = sumOfNaturalNumbers(n);
    cout <<"Sum of First N Natural Numbers: "<<sum<<endl;
}