/*
// بسم الله الرحمن الرحيم
#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
#define endn "\n"

//Solve
vector<int> primes;

bool is_prime(const int &num);
int next_prime();
void gen_prime(int n);

void test(void) {
    int n;
    cin >>n;
    if (primes.size() < n) {
        gen_prime(n);
    }
    cout <<primes[n-1] <<endn;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >>t;
    while (t--) {
        test();
    }

    return 0;
}


void gen_prime(int n) {
    for (int i = primes.size(); i < n; ) {
        if (primes.size() == 0) {
            primes.push_back(2);
        }
        else {
            primes.push_back(next_prime());
        }
        i++;
    }
}

int next_prime() {
    int num = primes[primes.size()-1] + 1;
    while (true) {
        if (is_prime(num)) {
            return num;
        }
        else {
            num++;
        }
    }
}

bool is_prime(const int &num) {
    if (num <= 1) {
       return false;
    }
    if (num == 2) {
        return true;
    }
    if (num % 2 == 0) {
        return false;
    }
    int root = sqrt(num);
    for (int i = 3; i <= root; i++)
        if (num % i == 0) {
            return false;
        }
    return true;
}
// Solved By: shihab4t
// Wednesday, June 30, 2021 | 08:05:00 AM (+06)



*/
#include <bits/stdc++.h>
using namespace std;

#define endn                '\n'
#define umap                unordered_map
#define uset                unordered_set
#define pb                  push_back

typedef short int               sint;
typedef unsigned int            uint;
typedef long long int           llint;
typedef unsigned long long int  ullint;

#define debug(...) __f(#__VA_ARGS__, __VA_ARGS__)
template < typename Arg1 >void __f(const char* name, Arg1&& arg1){cout << name << " = " << arg1 << std::endl;}
template < typename Arg1, typename... Args> void __f(const char* names, Arg1&& arg1, Args&&... args){ const char* comma = strchr(names+1, ','); cout.write(names, comma - names) << " = " << arg1 <<" | "; __f(comma+1, args...);}
inline void first_io() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
inline void file_io() {freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}
vector<int> get_randoms(int amount, int first, int last) {vector<int> tmp;srand(time(0));for (int i = 0; i < amount; i++)tmp.push_back(first + ((rand() % (last - first + 1))));return tmp;}
template <typename Tp> void print(Tp arr[], int n) {for (int i = 0; i < n; i++) cout << arr[i] << " "; cout << '\n';}
template <typename Tp> void print(const Tp &vc) {for (auto &ith : vc) cout << ith << " "; cout << '\n';}
template <typename Tp> void print(stack<Tp> st) {while (!st.empty()) { cout << st.top() << " "; st.pop();} cout << '\n';}
template <typename Tp, typename Tp2> void print(unordered_map<Tp, Tp2> ump) {for (auto &ith : ump) {cout << ith.first << " " << ith.second << '\n';} cout << '\n';}

#define GLOBAL_ARRAY_SIZE   10000005
#define LOCAL_ARRAY_SIZE    100005
#define PI                  acos(-1.0)
#define EPS                 1e-9


vector<int> primes;

bool is_prime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;

    int lim = sqrt(num);
    for (int i = 3; i <= lim; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int next_prime(int prime) {
    int i = prime+1;
    while (true) {
        if (is_prime(i)) {
            return i;
        }
        i++;
    }
}

void gen_primes(int n) {
    for (int i = primes.size(); i < n; i++) {
        primes.pb(next_prime(primes[i-1]));
    }
}

int main(void) {
    first_io();

    primes.pb(2);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (primes.size() < n) {
            gen_primes(n);
        }
        cout << primes[n-1] << endn;
    }

    print(primes);

    // O(n*sqrt(n))

    return 0;
}
// Solved by: Shihab Mahamud (github.com/shihab4t)
// Tuesday, October 12, 2021 | 10:27:43 AM (+06)
