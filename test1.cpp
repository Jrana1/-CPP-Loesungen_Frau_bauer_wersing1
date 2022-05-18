#include <iostream>
using namespace std;
#include <math.h>
#include <algorithm>

// int partition(int *a, int i, int j)
// {

//     int pivot = i;

//     while (i < j)
//     {

//         do
//         {
//             i++;

//         } while (a[i] < a[pivot]);
//         do
//         {
//             j--;
//         } while (a[j] > a[pivot]);
//         if (i < j)
//         {
//             int temp = a[i];
//             a[i] = a[j];
//             a[j] = temp;
//         }
//     }
//     int temp = a[pivot];
//     a[pivot] = a[j];
//     a[j] = temp;
//     return j;
// }

// void quick_sort(int *a, int l, int h)
// {

//     if (l < h)
//     {

// //         int index = partition(a, l, h);
// //         quick_sort(a, l, index);
// //         quick_sort(a, index + 1, h);
// //     }
// // }
// void merg(int l, int mid, int h, int *a)
// {

//     int i = l, j = mid + 1, k = 0;

//     while (i <= mid && j <= h)
//     {

//         if (a[i] < a[j])
//         {
//             a[k++] = a[i++];
//         }
//         else
//         {
//             a[k++] = a[j++];
//         }
//     }

//     while (i <= mid)
//     {
//         a[k++] = a[i++];
//     }
//     while (j <= h)
//     {
//         a[k++] = a[j++];
//     }
// }
// void merg_sort(int *a, int l, int h)
// {

//     if (l < h)
//     {

//         int mid = (l + h) / 2;
//         merg_sort(a, l, mid);
//         merg_sort(a, mid + 1, h);
//         merg(l, mid, h, a);
//     }
// // }
// int ex(int a, int b)
// {
//     int r = 1;
//     while (b > 0)
//     {
//         r = r * a;
//         b = b - 1;
//     }
// }
#include <string>
void sap(char *x, char *y)
{
    char tmp = *x;
    *x = *y;
    *y = tmp;
}
int main()
{
    string s1;
    getline(cin, s1);
    sap(&s1[0], &s1[s1.size() - 1]);
    cout << s1 << endl;
    return 0;
}