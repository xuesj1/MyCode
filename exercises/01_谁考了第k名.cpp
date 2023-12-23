#include <bits/stdc++.h>
using namespace std;
struct student
{
    int num;
    double grade;
} arr[105];
bool cmp(student a, student b)
{
    if (a.grade > b.grade)
        return true;
    else
        return false;
}
int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> arr[i].num >> arr[i].grade;
    sort(arr, arr + n, cmp);
    cout << arr[k - 1].num << ' ' << arr[k - 1].grade << endl;
    return 0;
}
