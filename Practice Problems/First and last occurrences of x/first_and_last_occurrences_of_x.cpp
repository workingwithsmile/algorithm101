//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  private:
  
  void binary_search(int arr[], int low, int high, int x, vector < int > & ans) {
    int mid;
    int n = high + 1;

    while (low <= high) {
      mid = (low + high) / 2;

      if (arr[mid] == x) high = mid - 1;
      else if (arr[mid] < x) low = mid + 1;
      else high = mid - 1;

    }

    if (high < (n - 1)) {
      if (arr[high + 1] == x) ans.push_back(high + 1);
      else {
        ans.push_back(-1);
        ans.push_back(-1);
        return;
      }
    }

    low = 0;
    high = n - 1;

    while (low <= high) {
      mid = (low + high) / 2;

      if (arr[mid] == x) low = mid + 1;
      else if (arr[mid] > x) high = mid - 1;
      else low = mid + 1;
    }

    if (arr[low - 1] == x) ans.push_back(low - 1);
  }

  public:
  
  vector < int > find(int arr[], int n, int x) {
    vector < int > ans;
    binary_search(arr, 0, n - 1, x, ans);
    return ans;
  }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends
