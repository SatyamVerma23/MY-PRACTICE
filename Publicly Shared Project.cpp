#include<iostream>
#include<vector>
#include<climits>
#include<algorithm> 
using namespace std;
int main()
{
    int g[]={2,3,1};
    int s[]={3,2,1};
    int c=0;
    int n = sizeof(g)/sizeof(g[0]);
    int m = sizeof(s)/sizeof(s[0]);

    sort(g, g + n);   
    sort(s, s + m);   
    int i=0;
    int j=0;
    while(i<n && j<m)
    {
        if(s[j]>=g[i])
        {
            c++;
            i++;
            j++;
        }
        else j++;
    }
    cout<<"ans is "<<c;
    return 0;
}