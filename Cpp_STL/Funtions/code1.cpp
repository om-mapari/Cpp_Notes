#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define MOD 1000000007
#define INF 1e18
#define endl "\n"
#define pb push_back
#define vl vector<ll>
#define vs vector<string>
#define pll pair<ll, ll>
#define ump unordered_map
#define mp make_pair
#define pq_max priority_queue<ll>
#define pq_min priority_queue<ll, vi, greater<ll>>
#define triplet pair<ll, pair<ll, ll>>
#define all(n) n.begin(), n.end()
#define ff first
#define ss second
#define mid(l, r) (l + (r - l) / 2)
#define bitc(n) __builtin_popcount(n)
#define forf(i, a, b) for (int(i) = (a); (i) < (b); ++(i))
#define forn(i, a, b) for (int(i) = (a); (i) <= (b); ++(i))
#define ford(i, a, b) for (int(i) = (a); (i) > b; i--)
#define fors(i, a, b, n) for (int(i) = (a); (i) < (b); i += n)
#define fore(i, a) for (auto &&i : a)
#define max(a, b) (a > b) ? a : b
#define iter(container, it) for (__typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define log(args...)                             \
    {                                            \
        string _s = #args;                       \
        replace(_s.begin(), _s.end(), ',', ' '); \
        stringstream _ss(_s);                    \
        istream_iterator<string> _it(_ss);       \
        err(_it, args);                          \
    }
#define logarr(arr, a, b)            \
    for (int z = (a); z <= (b); z++) \
        cout << (arr[z]) << " ";     \
    cout << endl;
template <typename T>
T gcd(T a, T b)
{
    if (a % b)
        return gcd(b, a % b);
    return b;
}
template <typename T>
T lcm(T a, T b) { return (a * (b / gcd(a, b))); }
template <typename T>
T iss(T a) { return ceil(sqrt(a)) == floor(sqrt(a)); }
vs tokenizer(string str, char ch)
{
    std::istringstream var((str));
    vs v;
    string t;
    while (getline((var), t, (ch)))
    {
        v.pb(t);
    }
    return v;
}
void fastcin()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
void init_code()
{
    fastcin();
    fast_io;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
// forf(i, 0, t) //input
// {

// }
// forf(i, 0, t) //output
// {

// }

/*=============== START WRITING HEAR == BY OM MAPARI ===============*/

// Q. input t stud with marks
// 4
// alice 78
// eve 78
// bob 99
// alice 78

// output => marks wise and same marks stud name wise
// bob 99
// alice 78
// alice 78
// eve 78

bool cmp(pair<int, string> a, pair<int, string> b)
{
    if (a.first != b.first)
        return (b.first < a.first);
    else
        return (b.second > a.second);
}

int main()
{

    init_code();
    int n;
    cin >> n;
    vector<pair<int, string>> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].second >> arr[i].first;
    }
    sort(arr.begin(), arr.end(), cmp);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].second << " " << arr[i].first << endl;
    }
}