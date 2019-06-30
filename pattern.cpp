3):
       A
      B B
     C   C
    D     D
   E       E
  F         F
 G           G
  F         F
   E       E
    D     D
     C   C
      B B
       A

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    char c;
    cin >> c;
    int n = c;
    for(int i=65;i<=n;i++){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        cout<<char(i)<<"";
        for(int k=i;k>65;k--){
            cout<<" ";
        }
        if(i==65){
            
        }
        else {
            for(int k=i-1;k>65;k--){
                cout<<" ";
            }
            cout<<char(i);
        }
        cout<<"\n";
            
    }
    for(int i = n-1;i>=65;i--){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        cout<<char(i)<<"";
        for(int j = i;j>65;j--){
            cout<<" ";
        }
        for(int k = i-1;k>65;k--){
            cout<<" ";
        }
        if(i==65)
            continue;
        else
            cout<<char(i);
        cout<<"\n";
    }
}
