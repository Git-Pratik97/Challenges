#include<bits/stdc++.h>

using namespace std;

//Merge two sorted arrays using Priority queue

void merge_array(int a1[], int a2[], int n, int m)
{
    int res[n+m];

    priority_queue<int, vector<int>, greater<int> > pq;

    for (int i = 0; i < n; i++)
    {
        pq.push(a1[i]);
    }

    for (int i = 0; i < m; i++)
    {
        pq.push(a2[i]);
    }

    int j = 0;

    while(!pq.empty())
    {
        res[j++] = pq.top();
        pq.pop();
    }

    for (int i = 0; i < n+m; i++)
    {
        cout << res[i] <<" ";
    }

}

int main()
{
    int n1 = 3;
    int n2 = 4;

    int a1[n1] = {1, 2, 7};
    int a2[n2] = {4, 5, 3, 9};

    merge_array(a1, a2, n1, n2);


    return 0;
}