#include<iostream>        //Leet code 118
#include<vector>
using namespace std;

int main() {
    int m;
    cout << "Enter size:\n";
    cin >> m;

    vector<vector<int>> v;

    // Create rows
    for(int i = 0; i < m; i++) {
        vector<int> a(i + 1);
        v.push_back(a);
    }

    // Fill Pascal Triangle
    for(int i = 0; i < m; i++) {
        for(int j = 0; j <= i; j++) {
            if(j == 0 || j == i)
                v[i][j] = 1;
            else
                v[i][j] = v[i-1][j] + v[i-1][j-1];
        }
    }

    // Print
    cout << "Printing\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j <= i; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}