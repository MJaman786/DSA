#include <iostream>
#include <set>
using namespace std;

void printSet(const set<int> &myset)
{
    for (auto elements : myset)
    {
        cout << elements << " ";
    }
    cout << endl;
}

int main()
{

    set<int> myset;

    // inserting elements
    myset.insert(10);
    myset.insert(10);
    myset.insert(10);
    myset.insert(9);
    myset.insert(20);
    myset.insert(8);
    myset.insert(7);
    myset.insert(6);

    // print elements
    cout << "Myset : ";
    for (auto elements : myset)
    {
        cout << elements << " ";
    }
    cout << endl;

    // finding elements
    if (myset.find(10) != myset.end())
    {
        cout << "10 is present in the set" << endl;
    }
    else
    {
        cout << "10 is not present in the set" << endl;
    }

    // erasing or deleting elements
    myset.erase(10);

    printSet(myset);

    // erasing  or deleting elements using iterator
    // begining element
    auto it = myset.begin();
    advance(it, 2);
    myset.erase(it);

    // is element preset
    cout << "Is element present : " << myset.count(20) << endl;

    // geting the iterator
    set<int>::iterator itr = myset.find(6);
    if (itr != myset.end())
    {
        cout << "Iterator : " << *itr << endl;

        for (auto it = itr; it != myset.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "Element 8 not found in the set." << endl;
    }
    return 0;
}