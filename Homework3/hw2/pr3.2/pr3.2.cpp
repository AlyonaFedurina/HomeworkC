#include <algorithm>
#include <array>
#include <ctime>
#include <deque>
#include <forward_list>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    array<int, 1000000> a;
    deque<int> d;
    list<int> l;
    forward_list<int> f;

    for (int i = 0; i < 1000000; ++i) {
        v.push_back(rand());
        a.at(i) = rand();
        d.push_back(rand());
        l.push_front(rand());
        f.push_front(rand());
    }
    cout << "vector" << '\n';
    auto startv = clock();
    sort(v.begin(), v.end());
    auto endv = clock();
    cout << (double)(endv - startv) / CLOCKS_PER_SEC << '\n';

    cout << "array" << '\n';
    auto starta = clock();
    sort(a.begin(), a.end());
    auto enda = clock();
    cout << (double)(enda - starta) / CLOCKS_PER_SEC << '\n';

    cout << "deque" << '\n';
    auto startd = clock();
    sort(d.begin(), d.end());
    auto endd = clock();
    cout << (double)(endd - startd) / CLOCKS_PER_SEC << '\n';

    cout << "list" << '\n';
    auto startl = clock();
    l.sort();
    auto endl = clock();
    cout << (double)(endl - startl) / CLOCKS_PER_SEC << '\n';

    cout << "forward_list" << '\n';
    auto startf = clock();
    f.sort();
    auto endf = clock();
    cout << (double)(endf - startf) / CLOCKS_PER_SEC << '\n';
    return 0;
}