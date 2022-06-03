#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>vec;
void pushfunc(string push)
{
    string num=push.substr(5,6);
    int numbr=num-"0";
    vector<int>a=vec[numbr];
    cout<<"Enter the number to pushback in the kth vector"<<"\n";
    int n;
    cin>>n;
    a.push_back(n);
}
void popfunc(string pop)
{
    return ;
}
int main()
{
    int k;
        cin>>k;
        vec.resize(k);
        while(k-->0)
        {
            string push,pop;
            cout<<"Enter 1 for push 2 for pop"<<endl;
            int no;
            cin>>no;
            if(no==1)
            cin>>push;
            else
            cin>>pop;
            cout<<push.substr(0,4)<<endl;
            if(push.substr(0,4)=="push")
            {
                pushfunc(push);
            }
            else{
                popfunc(pop);
            }
        }
}
