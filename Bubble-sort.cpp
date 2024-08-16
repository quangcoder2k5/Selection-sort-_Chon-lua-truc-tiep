#include <iostream>
using namespace std;

#define MAX 100

void Bubble_Sort (int a[], int n) {
    for (int i = 0; i < n -1;i++) {
        for (int j = n - 1; j > i; j--) {
        if(a[j - 1] > a[j]) {
            swap(a[j-1],a[i]);
             }
        }
    }
}

int main() {
    int a[MAX];
    int n;
    Bubble_Sort(a,n);
}
