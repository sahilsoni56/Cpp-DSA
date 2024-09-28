//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        if(n==0){
            return 0;
        }
        if(n<0){
            return INT_MIN;
        }
        int output1 = 1+ maximizeTheCuts(n-x,  x,  y,  z);
        int output2 = 1+ maximizeTheCuts(n-y,  x,  y,  z);
        int output3 = 1+ maximizeTheCuts(n-z,  x,  y,  z);
        
        return max(output1 , max(output2,output3));
    }
};

//{ Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}