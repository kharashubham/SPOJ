/*
Variables : t, n, c == from question test cases, number of stalls and cows
			applying binary search on distance
			lo and hi correspond to min and max distance between stalls
			x (~mid) represents the minimum possible distance which we have to maximise
			
Functions : helper(int, vector<int>) 

			# returns 1 if it is possible to satisfy the condition 
			that YES x distance is minimum possible (for curent value of x) with all 
			the other cows in their respective stalls.
			
			# returns 0 if the assumed min. distance is not possible
			
			getMax returns the most recent (max) value of x that is possible
			
reference : https://www.topcoder.com/community/data-science/data-science-tutorials/binary-search/
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int t, n, c;

int helper(int x, vector<int>& stalls)
{
    int placed = 1, pos = stalls[0];
    for (int i = 1; i < n; i++) {
        if (stalls[i] - pos >= x) {
            pos = stalls[i];
            if (++placed == c)
                return 1;
        }
    }
    return 0;
}
int getMax(vector<int>& stalls) {
    int lo = 0;
   	int hi = stalls[n-1] - stalls[0];
    
    while (lo < hi) {
        int x = lo + (hi - lo)/2;
        if ( helper(x, stalls) == 1 )
            lo = x + 1;
        else
            hi = x;
    }
    return lo - 1;
}
int main() {
    cin>>t;
    while (t--) {
        cin>>n>>c;
        vector<int> stalls(n);
        for (int i=0; i<n; i++)
            cin>>stalls[i];
            
        sort(stalls.begin(), stalls.end());
		cout<<getMax(stalls)<<endl;
    }
    return 0;
}