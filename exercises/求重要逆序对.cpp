#include <iostream>
using namespace std;

int arr[200005];
int tmp[200005];
int N;

long long mergesort(int start, int end)
{

    long long cnt = 0, mid = (start + end) / 2;

    if (start >= end)
        return 0;

    cnt += mergesort(start, mid);

    cnt += mergesort(mid + 1, end);

    int i = start, j = mid + 1;

    while (i <= mid && j <= end)
    {

        if (arr[i] > 2 * arr[j] && j <= end)
        {
            cnt += (mid - i + 1);
            j++;
        }
        else
        {
            i++;
        }
    }

    i = start, j = mid + 1;
    int idx = 0;
    while (i <= mid && j <= end)
    {
        if (arr[i] > arr[j])
        {
            tmp[idx++] = arr[j++];
        }
        else
        {
            tmp[idx++] = arr[i++];
        }
    }
    while (i <= mid)
        tmp[idx++] = arr[i++];

    while (j <= end)
        tmp[idx++] = arr[j++];

    for (int k = 0; k < idx; k++)
    {
        arr[start + k] = tmp[k];
    }
    return cnt;
}

int main()
{
    while (cin >> N)
    {
        if (N == 0)
            break;
        for (int i = 1; i <= N; i++)
        {
            cin >> arr[i];
        }
        cout << mergesort(1, N) << endl;
    }

    return 0;
}
