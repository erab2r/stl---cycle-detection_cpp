#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> l = {1100, 2002, 3004, 49, 49, 60, 60, 49, 78, 78, 67};
    
    l.sort(greater<int>()); // sort descending
    l.unique(); // remove duplicates
     //  l.sort(); ascending order
    for(int val : l){
        cout << val << endl;
    }

    return 0;
}
