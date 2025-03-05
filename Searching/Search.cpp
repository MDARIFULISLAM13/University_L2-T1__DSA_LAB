/*
 * Author : Md.Ariful Islam
 * Date : 05-03-2025
 */

#include <bits/stdc++.h>
using namespace std;
void load(int a[]);
void check(int a[]);
void linear(int a[]);
void binary(int a[]);

bool acc = false;
bool run_bi = false;

int n;

void check(int a[])
{

    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            run_bi = false;
            return;
        }
    }
    run_bi = true;
}

void linear(int a[])
{
    int x;
    cout << "Enter Value\n";
    cin >> x;

    cout << "1..Ckeck Value Found / not \n2...Count Value\n";
    int v;
    cin >> v;
    if (v == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                cout << "\nValue Found\n";
                load(a);
            }
        }
        cout << "\nNot Found\n";
        load(a);
    }
    else
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                ++cnt;
            }
        }
        cout << "\nTotal Count Value = " << cnt << endl;
        load(a);
    }
}
void binary(int a[])
{

    if (run_bi == false)
    {
        cout << "You Can Not use Binary Search\n";
        load(a);
        return;
    }

    int x;
    cout << "Enter Value\n";
    cin >> x;

    cout << "1..Ckeck Value Found / not \n2...Count Value\n";
    int v;
    cin >> v;
    int cnt = 0;

    int l = 0, h = n;

    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (a[mid] > x)
        {
            h = mid - 1;
        }
        else if (a[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            while (a[mid - 1] == x && mid >= 0)
            {
                --mid;
            }
            while (a[mid] == x)
            {
                ++cnt;
                ++mid;
            }
            break;
        }
    }

    if (v == 1)
    {
        if (cnt != 0)
        {
            cout << "Value Found\n";
            load(a);
        }
        else
        {
            cout << "Not Found\n";
            load(a);
        }
    }
    else
    {
        if (cnt != 0)
        {
            cout << "total count value = " << cnt << endl;
            load(a);
        }
        else
        {
            cout << "Not Found\n";
            load(a);
        }
    }
}
void load(int a[])
{
    cout << "1..check can we apply Binary Search!\n2.Linear Search\n3..Binary Search\n";
    int c;
    cin >> c;
    if (c == 1)
    {
        if (run_bi == true)
        {
            cout << "\nYes You can Use Binary Search\n";
            load(a);
        }
        else
        {
            cout << "\nNo, You Can't Apply Binary Search\n";
            load(a);
        }
    }
    else if (c == 2)
    {

        linear(a);
    }
    else if (c == 3)
    {
        binary(a);
    }
}
int main()
{

    cout << "Enter Array Size\n";
    cin >> n;
    cout << "Enter Array index Value\n";
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    check(a);
    load(a);

    return 0;
}