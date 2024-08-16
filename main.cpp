#include <iostream>
using namespace std;

#define MAX 100

void LuaChonTrucTiep (int a[],int n) {
    int min;
    for ( int i = 0; i < n - 1; i++ ) {
        min = i;
        for ( int j = i + 1; j < n; j++ ) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        swap (a[min],a[i]);
    }
}

void swap(int &a,int &b) {
    int c;
    c = a;
    a = b;
    b = c;
}

int main() {
    int n;
    int a = { 10,20,60,80,100,1,5 };
    LuaChonTrucTiep(a,n);
}