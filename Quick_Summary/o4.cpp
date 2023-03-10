/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string init;
    cin>>init;
    // declare (char)vector to store string;
    list<char> L;
    for (auto e:init){L.push_back(e);}
    // declare cursur
    auto cursur=L.end();
    //get the number;
    int temp;
    cin>>temp;
    while(temp--)
    {
        char op;
        cin>>op;
        if(op=='L') // shift the cursur to the left(ignore if cursur located in the begin)
        {
            if(cursur!=L.begin()) cursur--;
        }
        if(op=='D') // shift the cursur to the right(ignore if cursur located in the end)
        {
            if(cursur!=L.end()) cursur++;
        }
        if(op=='P') // insert word to the left
        {
            char tem;
            cin>>tem;
            L.insert(cursur, tem);
        }
        if(op=='B') // delete the word on the left of cursur(ignore if cursur is in the begin)
        {
            if(cursur!=L.begin()){cursur--; cursur=L.erase(cursur);}
        }
    }
    for(auto c: L) cout<<c;
    
}