// What is an Unordered-multiset?
// An unordered_multiset in STL is an associative container just like an unordered set the only difference is it can store duplicate elements in it.

// Syntax:
// unordered_multiset<object_type> variable_name;
// Example:
// unordered_multiset<int> s;
// unordered_multiset<string> str;
// Functions in multiset:
// insert() – to insert an element in the unordered multiset.
// unordered_multiset<int> s;
// s.insert(1);
// s.insert(2);
// begin() – return an iterator pointing to the first element in the unordered multiset.
// s.begin();
// end() – returns an iterator to the theoretical element after the last element.
// s.end();
// count() – gives the count of a particular element in the unordered multiset.
// unordered_multiset<int> s;
// s.insert(1);
// s.insert(2);
// s.count(2); //returns 1
// clear() – deletes all the elements in the unordered multiset.
// s.clear();
// find() – to search an element in the unordered multiset.
// unordered_multiset<int> s;
// s.insert(1);
// s.insert(2);
// if(s.find(2)!=s.end())
// cout<<"true"<<endl;
// erase() – to delete a single element or elements between a particular range.
// s.erase();
// size() – returns the size of the unordered multiset.
// s.size();
// empty() – to check if the unordered multiset is empty or not.
// s.empty();

#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_multiset<int> s;
    for (int i = 1; i <= 10; i++)
    {
        s.insert(i);
    }
    s.insert(5);
    cout << "Elements present in the unordered multiset: ";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    int n = 2;
    if (s.find(2) != s.end())
        cout << n << " is present in unorderd multiset" << endl;

    s.erase(s.begin());
    cout << "Elements after deleting the first element: ";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << "The size of the unordered multiset is: " << s.size() << endl;

    if (s.empty() == false)
        cout << "The unordered multiset is not empty " << endl;
    else
        cout << "The unordered multiset is empty" << endl;
    s.clear();
    cout << "Size of the unordered multiset after clearing all the elements: " << s.size();
}

// Output:

// Elements present in the unordered multiset: 1 2 3 4 5 5 6 7 8 9 10
// 2 is present in unorderd multiset
// Elements after deleting the first element: 2 3 4 5 5 6 7 8 9 10
// The size of the unordered multiset is: 10
// The unordered multiset is not empty
// Size of the unordered multiset after clearing all the elements: 0

// cbegin() – it refers to the first element of the unordered multiset.
// cend() – it refers to the theoretical element after the last element of the unordered multiset.
// rbegin() – it points to the last element of the unordered multiset.
// rend() – it points to the theoretical element before the first element of the unordered multiset.
// emplace() – to insert an element in the unordered multiset.
// max_size() – the maximum elements an unordered multiset can hold.