#include <vector>
#include <set>
#include <algorithm>
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    set<int> s;
    cout << "Enter the number of elements N = ";
    int N;
    cin >> N;
    vector<int> v(N);


    for (int i = 0; i < N; ++i)
    {
        int j = rand() % (i + 1);
        v[i] = v[j];
        v[j] = i + 1;
    }

    clock_t start1 = clock();

    for (int i = 0; i < N; i++) {
        s.insert(v[i]);
    }

    clock_t end1 = clock();
    double time_for_set = (double)(end1 - start1) / CLOCKS_PER_SEC;


    clock_t start2 = clock();

    sort(v.begin(), v.end());

    clock_t end2 = clock();
    double time_for_vec = (double)(end2 - start2) / CLOCKS_PER_SEC;

    cout << time_for_set << endl;
    cout << time_for_vec << endl;

    if (time_for_set < time_for_vec) {
        cout << "Leader is set: time =  " << time_for_set << endl;
    }
    else {
        cout << "Leader is vector: time =  " << time_for_vec << "s" << endl;
    }
}