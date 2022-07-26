#include <bits/stdc++.h>
using namespace std;

#define endn '\n'
#define umap unordered_map
#define uset unordered_set
#define pb push_back

typedef short int sint;
typedef unsigned int uint;
typedef long long int llint;
typedef unsigned long long int ullint;
typedef const char cchar;

#define debug(...) __f(#__VA_ARGS__, __VA_ARGS__) 
template <typename Arg1>void __f(cchar *name,Arg1 &&arg1){cout<<name<<" = "<<arg1<<endn;}
template <typename Arg1, typename... Args>void __f(cchar *names,Arg1 &&arg1,Args &&...args){cchar *comma=strchr(names+1,',');cout.write(names,comma-names)<<" = "<<arg1<<" | ";__f(comma+1,args...);}
inline void first_io(){ios_base::sync_with_stdio(0);cin.tie(0); }
inline void file_io(){freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);}
vector<int> get_randoms(int amount,int first,int last){vector<int>tmp;srand(time(0));for(int i=0;i<amount;i++)tmp.pb(first+((rand()%(last-first+1))));return tmp;}
template <typename Tp>void print(Tp arr[],int n){for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<'\n';}
template <typename Tp>void print(const Tp &vc){for(auto &ith:vc)cout<<ith<<" ";cout<<'\n';}
template <typename Tp>void print(stack<Tp> st){while(!st.empty()){cout<<st.top()<<" ";st.pop();}cout<<'\n';}
template <typename Tp, typename Tp2>void print(umap<Tp, Tp2> ump){for(auto &ith:ump){cout<<ith.first<<" "<<ith.second<<'\n';}cout<<'\n';}

#define GLOBAL_ARRAY_SIZE 10000005
#define LOCAL_ARRAY_SIZE 100005
#define PI acos(-1.0)
#define EPS 1e-9
#define MOD 1000000007


void test_case() {
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    int tmp = abs((a1 + a3) - (2 * a2));
    tmp = tmp % 3;

    if (tmp == 2) tmp = 1;
    cout << tmp << endn;
}

int main(void) {
    first_io();

    int t;
    cin >> t;
    while (t--) {
        test_case();
    }

    return 0;
}
// Solved by: Shihab Mahamud (github.com/shihab4t)
// Wednesday, November 17, 2021 | 11:06:23 AM (+06)
