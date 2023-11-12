#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> que;
    srand(time(0));
    for (int i = 0; i < 10; i++)
        que.push(rand() % 100 + 1);
    sort(&que.front(), &que.back() + 1);
    while (!que.empty())
    {
        cout << que.front() << ' ';
        que.pop();
    }
    return 0;
}
