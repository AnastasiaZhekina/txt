#include <iostream>
#include <fstream>

using namespace std;

void right(int* a, int m);
void left(int* a, int m);

int main()
{
    ifstream in;
    in.open("in.txt");
    ofstream out;
    out.open("out.txt");

    int N, M, tmp;

    in >> N;
    cout << N << endl;

    int* arr = new int[N];


    for (int j = 0; j < N; j++) {
        in >> arr[j];
        cout << arr[j] << " ";
    }
    cout << endl;

    in >> M;
    cout << M << endl;

    int* arr2 = new int[M];

    for (int i = 0; i < M; i++) {
        in >> arr2[i];
        cout << arr2[i] << " ";
    }
    cout << endl << M << endl;

    out << M << endl;

    right(arr2, M);

    for (int j = 0; j < M; ++j) {
        cout << arr2[j] << " ";
        out << arr2[j] << " ";
    }

    cout << endl << N << endl;
    out << endl << N << endl;

    left(arr, N);

    for (int j = 0; j < N; ++j) {
        cout << arr[j] << " ";
        out << arr[j] << " ";
    }

    in.close();
    out.close();
    delete[]  arr;
    delete[] arr2;
};
void right(int* a, int m) {
    int n = a[m - 1];
    for (int i = m - 1; i > 0; i--)
        a[i] = a[i - 1];
    a[0] = n;
}
void left(int* a, int m) {
    int n = a[0];
    for (int i = 0; i < m-1; i++)
        a[i] = a[i + 1];
    a[m - 1] = n;
}
