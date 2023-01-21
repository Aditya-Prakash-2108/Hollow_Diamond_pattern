#include<bits/stdc++.h>
using namespace std;
   
int main(){
    int n = 11, t;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(i>0 && i<n-1){
                t = abs(n/2 - i);
                if(j > t && j < n-t-1)
                    cout << " ";
                else
                    cout << "*";
            }
            else 
                cout << "*";
        }
        cout << endl;
    }
    return 0;
}
