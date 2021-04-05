//sourse.cpp
#include <iostream>
#include "Rational.h"

int main()
{
    Rational A, B, C;

    cout << "\nNumber A" << endl;
    cin >> A;
   

    cout << "\nNumber B" << endl;
    cin >> B;
    

    cout << "\nNumber C" << endl;
    cin >> C;
    


    cout << "\nA and B" << endl;
    A.ComparePairsResult(A.ComparePairs(A, B));

    cout << "\nA and C" << endl;
    A.ComparePairsResult(A.ComparePairs(A, C));

    cout << "\nB and C" << endl;
    A.ComparePairsResult(A.ComparePairs(B, C));


    return 0;
}