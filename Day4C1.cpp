// #include<bits/stdc++.h>
// using namespace std;
// int Fact(int n){
//     if (n<0){
//         return -1;
//     }
//     else if (n==0 || n==1){
//         return 1;
//     }
//     else{
//         return n*Fact(n-1);
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin >> n;
//     int result = Fact(n);
//     cout << "Factorial of " << n << " is: " << result << endl;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,f=1;
    cout<<"Enter a number: ";
    cin >> n;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    cout << "Factorial of " << n << " is: " << f << endl;
}