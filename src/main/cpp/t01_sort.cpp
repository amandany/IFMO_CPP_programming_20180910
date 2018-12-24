//Отсортируйте массив.
//
//Входные данные
//
//Первая строка входных данных содержит количество элементов в массиве N ≤ 10^5. 
// Далее идет N целых чисел, не превосходящих по абсолютной величине 10^9.
//
//Выходные данные
//
//Выведите эти числа в порядке неубывания.
//
//Sample Input:
//
//5
//5 4 3 2 1
//Sample Output:
//
//1 2 3 4 5

#include "t01_sort.h"
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int t01_sort() {
    int i,k,r;
    cin>>k;
    vector<int> V(k);
    for (i=0 ; i<V.size();i++ ){
        cin >> r;
        V[i] = r;
    };
    sort ( V.begin(),  V.end() );
    for (i=0;i<V.size();i++){
        cout << V[i]<<" ";
    }
};
