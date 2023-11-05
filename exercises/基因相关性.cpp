#include <bits/stdc++.h>
using namespace std;

int main()
{
    double d, cut = 0, ans;
    string dna1, dna2;
    cin >> d >> dna1 >> dna2;
    for (int i = 0; i < dna1.length(); i++)
    {
        if (dna1[i] == dna2[i])
            cut++;
    }
    ans = cut / dna1.length();
    if (ans >= d)
        cout
            << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}
