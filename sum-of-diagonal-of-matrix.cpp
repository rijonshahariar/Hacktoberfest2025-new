#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    int a[n][n];
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            cin >> a[i][j];
    int mainSum=0, secSum=0;
    for (int i=0;i<n;i++) {
        mainSum += a[i][i];
        secSum += a[i][n-i-1];
    }
    cout << "Main=" << mainSum << " Secondary=" << secSum;
}
