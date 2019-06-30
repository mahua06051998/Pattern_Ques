2):A
   AP
   APP
   APPL
   APPLE
   APPL
   APP
   AP
   A

#include <cmath>
#include<cstring>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    char s[20];
    cin >>s;
    cout<<"\n";
    for(int i = 0;i<strlen(s);i++){
        for(int j=0;j<=i;j++){
              cout<<s[j]<<"";
        }
        cout<<"\n";
    }
    for(int i=strlen(s)-1;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<s[j]<<"";
        }
        cout<<"\n";
      }
    // cout <<s[0];
    return 0;
}