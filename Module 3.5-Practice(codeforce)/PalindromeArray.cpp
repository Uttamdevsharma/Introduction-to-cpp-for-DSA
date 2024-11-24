#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], temp[n]; // মূল অ্যারে এবং একটি টেম্পোরারি অ্যারে
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        temp[i] = a[i]; // temp অ্যারেতে মূল অ্যারের কপি রাখি
    }

    // swap ব্যবহার করে মূল অ্যারেটি উল্টানো
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        swap(a[i], a[j]);
    }

    // প্যালিনড্রোম চেক করা
    bool check = true;
    for (int i = 0; i < n; i++) {
        if (a[i] != temp[i]) { // মূল অ্যারে এবং উল্টানো অ্যারে তুলনা
            check = false;
            break;
        }
    }

    if (check) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
