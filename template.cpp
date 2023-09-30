#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

const int INF = 2000000000;
const double PI =  3.1415926535897932384626433832795;

#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define len(x) x.size()
// #define count(arr, elem) count(arr.begin(), arr.end(), elem)
//#define in(arr, elem) find(arr.begin(), arr.end(), elem) != arr.end()
#define notin(arr, elem) find(arr.begin(), arr.end(), elem) == arr.end()
#define sum(arr) accumulate(arr.begin(), arr.end(), 0)
#define printVector(arr) for (auto elem : arr) cout << elem << " "; cout << endl;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vector<int>> vvi;
typedef vector<vector<string>> vvs;
typedef vector<vector<char>> vvc;
typedef map<string, int> msi;
typedef map<string, string> mss;
typedef vector<pair<int, int>> vpi;

void speed() {
  ios::sync_with_stdio(false);
  cin.tie(0);
}

void setFile(string name) {
  speed();
  freopen((name + ".in").c_str(), "r", stdin);
  freopen((name + ".out").c_str(), "w", stdout);
}

void yes() {
  cout << "YES" << endl;
}

void no() {
  cout << "NO" << endl;
}

bool MultCases = true;



void solve() {



}


int main() {

    // minimize/maximize: binary search
    // sum of range/binary array: prefix sum
    // range queries/setting values: difference array (remember that you can prefsum it to get original arr)
    // max subarray sum — iterate over every possible j (ending elem) and from it, subtract the min prefSum so far
    // answer is in decimal: cout<<fixed<<setprecision(8)<<ans;
    // maximize the min possible or minimize the max possible: binary search over answer range.
    // dfs/bfs: check if the states are being visited again (parent/visited)
    // you can also build a graph as you traverse it

  //setFile("");
  if (MultCases) {
    int t;
    cin >> t;
    while (t--) {
      solve();
    }
  } else {
    solve();
  }


  return 0;
}
