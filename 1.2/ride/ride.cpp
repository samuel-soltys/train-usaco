/*
ID: samuels10
TASK: ride
LANG: C++                 
*/
#include<iostream>
#include <fstream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

typedef vector<int> vi;
typedef long long ll;
#define REP(a,b) for (int i = a; i < b; i++)
void print_vector(vi v) { for(auto x : v) cout << x << ' '; cout << endl; }
void print_array(int *a, int len) { REP(0, len) cout << a[i] << ' '; cout << endl; }

int main() {
    string comet;
    string group;
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    int result_comet, result_group;

    fin >> comet;
    fin >> group;

    for(int i = 0; i < comet.length(); i++) {
        if(i == 0) {
            result_comet = ((int)comet[i] - (int)'A' + 1);
        } else {
            result_comet = ((int)comet[i] - (int)'A' + 1) * result_comet;
        }
    }

    for(int i = 0; i < group.length(); i++) {
        if(i == 0) {
            result_group = ((int)group[i] - (int)'A' + 1);
        } else {
            result_group = ((int)group[i] - (int)'A' + 1) * result_group;
        }
    }

    if(result_comet % 47 == result_group % 47) {
        fout << "GO" << endl;
    } else {
        fout << "STAY" << endl;
    }

    return 0;
}