1):
ABCDEDCBA
ABCD DCBA
ABC   CBA
AB     BA
A       A
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cout << char(i+65)<<"";
    }
    for(int i=n-2;i>=0;i--){
      cout<<char(65+i)<<"";
    }
    for(int i=n-1;i>=0;i--){
        cout<<"\n";
        for(int j=0;j<i;j++){
            cout<<char(j+65)<<"";
        }
        for(int k=i;k<n;k++){
            cout<<" "<<"";
        }
        for(int k=5;k>i;k--){
           cout<<" "<<"";
        }
        for(int j=i-1;j>=0;j--){
            cout<<char(j+65);
}
                
}
    return 0;
}