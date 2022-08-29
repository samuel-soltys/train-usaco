/*
ID: samuels10
TASK: friday
LANG: C++
*/

#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main() {
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");
    
    // Initializing values and input
    int N;
    bool leap_year;
    int start_day = 0;
    int thirteenth_days[7] = {0, 0, 0, 0, 0, 0, 0};
    int num_of_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    fin >> N;
    
    for(int year = 1900; year < (1900 + N); year++) {
        // Leap year check
        if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
            leap_year = true;
        } else {
            leap_year = false;
        }
        if(leap_year) {
            num_of_days[1] = 29;
        } else {
            num_of_days[1] = 28;
        }
        
        // Checking 13th day by month
        for(int i = 0; i < 12; i++) {
            thirteenth_days[(((start_day + 12) % 7))]++;
            start_day = (start_day + num_of_days[i]) % 7;
        }
    }
    
    // Output
    fout << thirteenth_days[5] << " ";
    fout << thirteenth_days[6] << " ";
    for(int i = 0; i < 4; i++) {
        fout << thirteenth_days[i] << " ";
    }
    fout << thirteenth_days[4] << endl;
    
    return 0;
}