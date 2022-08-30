/*
ID: samuels10
TASK: beads
LANG: C++
*/

#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main() {
    ofstream fout ("beads.out");
    ifstream fin ("beads.in");
    int N, beads_count = 0, beads_best = -1;
    bool broken = false;
    char bead = 'b';
    fin >> N;

    string beads;

    fin >> beads;

    for(int i = 0; i < N; i++) {
        if(i == 0) {
            beads_count++;
            if(beads[0] != 'w') {
                bead = beads[i];
            } else {
                
            }
        } else {
            if(beads[i] == bead) {
            beads_count++;
            } else if(beads[i] == 'w') {
                beads_count++;
            } else {
                beads_count++;
                if(bead == 'b') {
                    bead = 'r';
                } else {
                    bead = 'b';
                }
            }
        }
        
    }


}