/*
 * Author : Md.Ariful Islam
 * Date : 19-02-2025
 */

#include <bits/stdc++.h>
using namespace std;

void arif(int ar[]);
void insert(int ar[]);
void delete_v(int ar[]);
void update(int ar[]);
void print(int ar[]);

int v;

void insert(int ar[])
{
    cout << "1.Insert At last Index\n2.Insert At fixed Index\n3.Enter Value At first INdex\n4.Back\n";

    int c;
    cin >> c;
    if (c == 1)
    {
        cout << "Enter Value\n";
        int val;

        cin >> val;
        v = v + 1;
        ar[v];
        ar[v - 1] = val;

        cout << "New Array \n";
        for (int i = 0; i < v; i++)
        {
            cout << ar[i] << " ";
        }
        cout << endl;
        arif(ar);
    }
    if (c == 2)
    {
        cout << "Enter index\n";
        int ind;
        cin >> ind;
        int val;
        cout << "Enter Value\n";
        cin >> val;
        v += 1;
        ar[v];
        ar[v - 1] = val;
        for (int i = ind; i < v; i++)
        {
            swap(ar[i], ar[v - 1]);
        }
        cout << "New Array \n";
        for (int i = 0; i < v; i++)
        {
            cout << ar[i] << " ";
        }
        cout << endl;
        arif(ar);
    }
    if (c == 3)
    {
        int val;
        cout << "Enter Value\n";
        cin >> val;
        v = v + 1;
        ar[v];
        ar[v - 1] = val;
        for (int i = 0; i < v; i++)
        {
            swap(ar[i], ar[v - 1]);
        }
        cout << "New Array \n";
        for (int i = 0; i < v; i++)
        {
            cout << ar[i] << " ";
        }
        cout << endl;
        arif(ar);
    }
    if (c == 4)
    {
        arif(ar);
    }
    else
    {
        cout << "Wrong Input\n";
        insert(ar);
    }
}

void delete_v(int ar[])
{
    cout << "\n1.Delete 1st Index\n2.Delete Last index\n3.Delete Fixed Index\n4.Back\n";
    int c;
    cin >> c;
    if (c == 1)
    {
        for (int i = 1; i < v; i++)
        {
            swap(ar[i - 1], ar[i]);
        }
        v -= 1;
        cout << "New Array \n";
        for (int i = 0; i < v; i++)
        {
            cout << ar[i] << " ";
        }
        cout << endl;
        arif(ar);
    }
    else if (c == 2)
    {

        v -= 1;
        cout << "New Array \n";
        for (int i = 0; i < v; i++)
        {
            cout << ar[i] << " ";
        }
        cout << endl;
        arif(ar);
    }
    else if (c == 3)
    {
        int in;
        cout << "Enter Index\n";
        cin >> in;
        for (int i = in + 1; i < v; i++)
        {
            swap(ar[i - 1], ar[i]);
        }
        v -= 1;
        cout << "New Array \n";
        for (int i = 0; i < v; i++)
        {
            cout << ar[i] << " ";
        }
        cout << endl;
        arif(ar);
    }
    else if (c == 4)
    {
        arif(ar);
    }
    else
    {
        cout << "Wrong Input\n";
        delete_v(ar);
    }
}

void update(int ar[])
{
    cout << "Enter Update Index\n";
    int in;
    cin >> in;
    cout << "Enter Value\n";
    int val;
    cin >> val;
    ar[in] = val;
    cout << "New Array \n";
    for (int i = 0; i < v; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
    arif(ar);
}

void print(int ar[])
{
    for (int i = 0; i < v; i++)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
    arif(ar);
}
void arif(int ar[])
{
    cout << "\n1.Insert\n2.delete\n3.Update\n4.Print Array\n5.Exit\n";
    int c;
    cin >> c;
    if (c == 1)
    {
        insert(ar);
    }
    else if (c == 2)
    {
        delete_v(ar);
    }
    else if (c == 3)
    {
        update(ar);
    }
    else if (c == 4)
    {
        print(ar);
    }
    if (c == 5)
    {
        exit(0);
    }
    else
    {
        cout << "Wrong Input\n";
        arif(ar);
    }
}

int main()
{
    cout << "Enter Array size\n";
    cin >> v;
    cout << "Enter Array Value\n";
    int ar[v];
    for (int i = 0; i < v; i++)
    {
        cin >> ar[i];
    }
    arif(ar);

    return 0;
}