/**
 *
 * Author : Md.Ariful Islam
 * Date : 11-03-2025
 * time : 13:18:11
 * Topic Name : Bubble and Insertion sort
 **/

#include <bits/stdc++.h>
using namespace std;
void input_again();
void load(int a[], int n);

void bubble(int a[], int n)
{
    cout << "Given Array\n";
    for (int k = 0; k < n; k++)
    {
        cout << a[k] << " ";
    }
    cout << endl;

    cout << "Working Process\n";
    for (int i = 0; i < n - 1; i++)
    {
        bool f = 0;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                f = 1;
            }
        }
        for (int k = 0; k < n; k++)
        {
            cout << a[k] << " ";
        }
        cout << endl;
        if (f == 0)
        {
            break;
        }
    }
    cout << "Final Array \n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    input_again();
}

void insertion(int a[], int n)
{
    cout << "Given Array\n";
    for (int k = 0; k < n; k++)
    {
        cout << a[k] << " ";
    }
    cout << endl;

    cout << "Working Process\n";
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        while (j >= 0 && a[j] > a[j + 1])
        {
            swap(a[j], a[j + 1]);
            j--;
        }

        for (int k = 0; k < n; k++)
        {
            cout << a[k] << " ";
        }
        cout << endl;
    }
    cout << "Final Array \n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    input_again();
}
void input_again()
{
    int n;
    cout << "\n\nEnter New Array size\n";
    cin >> n;
    cout << "Enter Array Index\n";
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    load(a, n);
}
void load(int a[], int n)
{
    cout << "\n1..Bubble Sort\n2..Insertion Sort\n";
    int x;
    cin >> x;
    if (x == 1)
    {

        bubble(a, n);
    }
    else if (x == 2)
    {
        insertion(a, n);
    }
}
int main()
{
    int n;
    cout << "Enter Array size\n";
    cin >> n;
    cout << "Enter Array Index\n";
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    load(a, n);

    return 0;
}