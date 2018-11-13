//Известно, что на доске 8×8 можно расставить 8 ферзей так, чтобы они не били друг друга. Вам дана расстановка 8 ферзей на доске, определите, есть ли среди них пара бьющих друг друга.
//Формат входных данных
//
//        Программа получает на вход восемь пар чисел, каждое число от 1 до 8 - координаты 8 ферзей.
//Формат выходных данных
//        Если ферзи не бьют друг друга, выведите слово NO, иначе выведите YES.
//Sample Input 1:
//
//1 7
//2 4
//3 2
//4 8
//5 6
//6 1
//7 3
//8 5
//Sample Output 1:
//
//NO
//        Sample Input 2:
//
//1 8
//2 7
//3 6
//4 5
//5 4
//6 3
//7 2
//8 1
//Sample Output 2:
//
//YES

#include "t11_queen.h"
#include <iostream>
#include <cmath>


using namespace std;

int t11_queen() {
    int a,b,i,n,t;
  t=0;
    n=16;
    int arr[n];
    for (i=0;i<n;i++){cin>>a; arr[i]=a;}
    for (i=1;i<=n;i=i+2){
        for(b=i+2;b<=n;b+=2)
        {if (((abs(arr[i]-arr[b]))==(abs(arr[i+1]-arr[b+1]))) || (arr[i]==arr[b]||arr[i+1]==arr[b+1])) {t=1;}}
    }
if (t==1) {cout<<"YES";}
else {cout<<"NO";}
}
