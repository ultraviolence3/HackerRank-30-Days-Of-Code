#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        
        string even="", odd="";
        
        for(int j=0; j<s.size(); j++)
        {
            if(j%2==0){
                even+=s[j];
            }
            else {
                odd+=s[j];
            }
        }
        cout<<even<<" "<<odd<<endl;
    }
    
    return 0;
}
