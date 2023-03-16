#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in;
    in.open("in.txt");
    ofstream out;
    out.open("out.txt");

    int N, M;

    in >> N;
    cout << N << endl;

    int* arr = new int[N];

   
    for (int j = 0; j < N; j++){
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
    
    for (int i = M-1; i >= 0; i--) {
        cout << arr2[i] << " ";
        out << arr2[i] << " ";
        
    }
    cout << endl << N << endl;
    out << endl << N << endl;
    for (int j = N - 1; j >= 0; j--) {
        cout << arr[j] << " ";
        out << arr[j] << " ";
       
    }
        in.close();
        out.close();
        delete[]  arr;
        delete[] arr2;
}

