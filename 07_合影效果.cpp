#include <bits/stdc++.h>
using namespace std;
struct people
{
    string xb;
    double sg;
} parr[45];
double male[45], female[45];
int mmale, ffemale;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> parr[i].xb >> parr[i].sg;
        if (parr[i].xb == "male")
            male[mmale] = parr[i].sg, mmale++;
        else
        {
            female[ffemale] = parr[i].sg, ffemale++;
            // cout << parr[i].sg << endl;
        }
    }
    sort(male, male + mmale), sort(female, female + ffemale);
    // cout << mmale << endl;
    for (int i = 0; i < mmale; i++)
        printf("%.2lf ", male[i]);
    for (int i = ffemale - 1; i >= 0; i--)
        printf("%.2lf ", female[i]);
    return 0;
}
