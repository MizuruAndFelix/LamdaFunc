#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> Vector = {4, 7, 9, 14, 12, 15}; // вторые значения vector<int> Vector = {4 , 21 , 27, 14 , 12 , 45};                      
    auto print = [](const int& n) { std::cout << n << '\t'; }; // 


    cout << "Input:\t";
    for_each(Vector.cbegin(), Vector.cend(), print);
    cout << '\n';

    for_each(Vector.begin(), Vector.end(), [&Vector](int& i)
        {
            if (i % 2 != 0)
            {
                (i) *= 3;
            }
        });

    cout << "Output:\t";
    for_each(Vector.cbegin(), Vector.cend(), print);


    cout << "\n\nEND!\n";
}