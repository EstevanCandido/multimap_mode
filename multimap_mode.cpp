#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int moda_chaves_inteiras(map<int, double> &m) {
    vector<int> chaves;
    for (auto const &par : m) {
        if (par.second < 2.0) {
            chaves.push_back(par.first);
        }
    }
    if (chaves.empty()) {
        return -1;  // valor sentinela indicando que não há moda
    }
    sort(chaves.begin(), chaves.end());

    int moda = 0;
    int moda_count = 0;
    int atual = 0;
    int atual_count = 0;
    for (int chave : chaves) {
        if (chave == atual) {
            atual_count++;
        } else {
            if (atual_count > moda_count) {
                moda = atual;
                moda_count = atual_count;
            }
            atual = chave;
            atual_count = 1;
        }
    }
    if (atual_count > moda_count) {
        moda = atual;
    }
    return moda;
}

int main() {
    multimap<int, double> m {{1, 2.0}, {2, 3.5}, {3, 1.2}, {4, 2.5}, {5, 2.5}, {6, 0.5}, {7, 1.9}, {8, 0.1}};

    int moda = moda_chaves_inteiras(m);

    if (moda == -1) {
        cout << "Não há moda no multimap." << endl;
    } else {
        cout << "Moda das chaves inteiras com valores de double menores que 2.0: " << moda << endl;
    }

    return 0;
}
