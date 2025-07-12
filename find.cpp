#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l ={1100,2002,3004,60,49,78,78,67};
    auto it = find(l.begin(),l.end(),200);
    if(it ==l.end()){
        cout << "Not Found" <<endl;
    }
    else{
        cout << "Found" <<endl;
    }
   for(int val : l){
    cout <<val <<endl;
   }
}
