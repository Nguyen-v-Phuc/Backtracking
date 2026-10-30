#include <bits/stdc++.h>
using namespace std;

void grind()
{
    int n;
    cin >> n;
    vector<int> v(n+1);
    for(int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    bool pivot = false;
    for(int i = n - 1; i >= 1; i--) {
        if(v[i] > v[i+1]) { // đảo dấu này để có hoán vị liền trước
            pivot = true;
            int j = n;
            while(j > i) {
                if(v[j] < v[i]) { // đảo dấu này để có hoán vị liền trước
                    swap(v[i], v[j]);
                    break;
                }
                j--;
            }
            reverse(v.begin() + i + 1, v.end());
            break;
        }
    }
    if(!pivot) {
        cout << 0;
        return;
    }

    for(int i = 1; i <= n; i++) {
        cout << v[i] << " ";
    }

    cout << "\n";
}

int main() 
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        grind();
    }
    return 0;
}