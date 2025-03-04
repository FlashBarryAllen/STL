// file: 2jjalloc.cpp

#include "jjalloc.h"
#include <vector>
#include <iostream>
using namespace std;

#define __ALIGN 8

int round_up(int b) {
    return (((b) + __ALIGN - 1) & ~(__ALIGN - 1));
}

int jjalloc_main() {
    int ia[5] = {0, 1, 2, 3, 4};
    int i;

    vector<int, JJ::allocator<int> > iv(ia, ia + 5);
    for (i = 0; i < iv.size(); i++) {
        cout << iv[i] << ' ';
    }
    cout << endl;

    cout << ~(__ALIGN - 1) << endl;
    cout << round_up(3) << endl;
    cout << round_up(15) << endl;

    vector<int> ivv(ia, ia + 5);
    for (i = 0; i < ivv.size(); i++) {
        cout << ivv[i] << ' ';
    }
    cout << endl;

    return 0;
}