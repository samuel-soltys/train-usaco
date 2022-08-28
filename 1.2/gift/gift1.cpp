/*
ID: samuels10
TASK: gift1
LANG: C++
*/
#include<iostream>
#include<string>
#include<fstream>
#include<map>

using namespace std;

int main() {
    int NP;
    
    int give_amount, num_of_recievers, amount_to_give;
    string name, giver, reciever;
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");

    fin >> NP;

    string names_order[NP];
    map<string, int> names;
    
    for(int i = 0; i < NP; i++) {
        fin >> name;
        names[name] = 0;
        names_order[i] = name;
    }

    for(int i = 0; i < NP; i++) {
        fin >> giver;
        fin >> give_amount >> num_of_recievers;

        if(give_amount != 0) {
            amount_to_give = (give_amount - (give_amount % num_of_recievers)) / num_of_recievers;
            names[giver] = names[giver] + (give_amount % num_of_recievers) - give_amount;
            for(int j = 0; j < num_of_recievers; j++) {
                fin >> reciever;
                names[reciever] = names[reciever] + amount_to_give;
            }
        }
    }

    for(int i = 0; i < NP; i++) {
        fout << names_order[i] << " "<< names[names_order[i]] << endl;
    }

    return 0;
}