#include <iostream>
using namespace std;

#define MAX 100

void InsertSort (int a[], int n) {
	int x,j;
	for (int i = 1; i < n; i++) {
		x = a[i];
		j = i - 1;
		while (0 <= j && x < a[j]) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = x;
	}
}

int main() {
	int a[MAX];
	int n;
	InsertSort(a,n);
}
