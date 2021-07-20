#include<bits/stdc++.h> 

using namespace std;

string if_possible(int n, int t)
{
    if (n <= 1 && t <= 0)
    {
        return "-1";
    }

    int minutes = t*60;

    int max_matches = n - 1;

    int max_time = max_matches*30;

    if (max_time <= minutes)
    {
        return "Possible";
    }

    int min_matches = n/2;
    min_matches = n - min_matches;
    int min_time = min_matches*30;

    if (min_time <= minutes)
    {
        return "Possible"; 
    }
    else
    {
        return "Not Possible";
    }
}

int main()
{
    int n;
    int t; 
    cin >> n >> t;

    string ans = if_possible(n, t);
    cout << ans << endl;

    return 0;

}