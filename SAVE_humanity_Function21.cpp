#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int LIM = 111111;

char t[LIM];
int n;
int sa[LIM];
int sai[LIM<<1];
ll key[LIM];

void fill_sai() {
    sort(sa, sa + n, [](int i, int j) { return key[i] < key[j]; });
    sai[sa[0]] = 0;
    for (int i = 1; i < n; i++) {
        sai[sa[i]] = key[sa[i]] == key[sa[i - 1]] ? sai[sa[i - 1]] : i;
    }
}

void get_suffix_array() {
    for (int i = 0; i < n; i++) {
        sa[i] = i;
        sai[i] = sai[i+n] = -1;
        key[i] = t[i];
    }
    fill_sai();
    for (int p = 1; p <= n; p <<= 1) {
        for (int i = 0; i < n; i++) key[i] = sai[i]*(n+1LL) + sai[i + p];
        fill_sai();
    }
}

char v[LIM];
int tn, vn;
void precompute(int *res) {
    get_suffix_array();
    for (int i = 0, j = tn, k = 0; i <= j && k <= vn; k++) {
        while (i <= j && t[sa[i] + k] < v[k]) res[sa[i++]] = k;
        while (i <= j && t[sa[j] + k] > v[k]) res[sa[j--]] = k;
    }
}

void sufcompute(int *res) {
    reverse(t, t + tn);
    reverse(v, v + vn);
    precompute(res);
    reverse(res, res + tn);
}

int P[LIM];
int S[LIM];
vector<int> solve() {
    t[tn = strlen(t)] = '$';
    v[vn = strlen(v)] = '%';
    n = tn + 1;
    vector<int> res;
    if (tn >= vn) {
        precompute(P);
        sufcompute(S);
        for (int i = 0, j = vn - 1; j < tn; i++, j++) {
            if (P[i] + S[j] >= vn - 1) {
                res.push_back(i);
            }
        }
    }
    return res;
}

int main() {
    int z;
    scanf("%d", &z);
    while (z--) {
        scanf("%s%s", t, v);
        vector<int> res = solve();
        if (res.empty()) {
            puts("No Match!");
        } else {
            for (int i = 0; i < res.size(); i++) {
                printf("%d%c", res[i], " \n"[i == res.size() - 1]);
            }
        }
    }
}