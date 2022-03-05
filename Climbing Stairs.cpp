#include <iostream>
#include <list>
#include <cstring>
#include <math.h>
#include<stdio.h>
#include <sstream>
#include <string.h>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <unordered_map>
#include <stack>
#include <bitset>

using namespace std;
#define ll           long long
#define all(v)       (v).begin() , (v).end()
#define v			 vector <int>
#define vi           vector <ll>
#define vii          vector <pair<ll,ll>>
#define ii           pair<ll,ll>
#define sz(v)	     ((int)((v).size()))
#define lp(i,a,b)    for(int i=a;i<b;i++)
#define pb           push_back
#define pf           push_front
#define F            first
#define S            second
#define EPS			 1e-9
#define endl         "\n"
const double PI = 3.14159265358979323846;
const ll MOD = 1000000007 , OO = 0x3f3f3f3f;
int dx[] = { 0 , 1 , 0 , -1 };
int dy[] = { 1 , 0 , -1 , 0 };

void init() {
	cin.tie(0);
	cin.sync_with_stdio(0);
}


const int N = (int) 1e5 + 2;
int n;
int dp[46]; 

int backtracking(int idx)
{
    if (idx == n)
        return 1;
   
    if (idx > n)
        return 0;

    if (dp[idx] != -1)
        return dp[idx];


    dp[idx] = backtracking(idx + 1) + backtracking(idx + 2);


    return dp[idx];
}


void RGB()
{
    cin >> n;
    memset(dp, -1, sizeof(dp));
    cout << backtracking(0);
}
           

  
int main()
{
    init();
    int tt = 1; //cin >> tt;
    while (tt--)
        RGB();
}
    
