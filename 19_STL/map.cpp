#include <iostream>
#include <map>
// #include <string>

using namespace std;

int main() {
    // Create a map to store strings and integers
    map<string, int> myMap;

    // Insert elements into the map
    myMap.insert(make_pair("apple", 5));
    myMap.insert(make_pair("banana", 10));
    myMap.insert(make_pair("orange", 7));

    // Use the [] operator to insert or access elements
    myMap["grape"] = 12;
    cout << "Value of grape: " << myMap["grape"] << endl;

    // Use the at() function to access elements
    cout << "Value of banana: " << myMap.at("banana") << endl;

    // Check if an element exists in the map
    if (myMap.find("apple") != myMap.end()) {
        cout << "Apple exists in the map" << endl;
    } else {
        cout << "Apple does not exist in the map" << endl;
    }

    // Erase an element from the map
    myMap.erase("banana");
    cout << "Size of map after erasing banana: " << myMap.size() << endl;

    // Iterate over the map using an iterator
    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        cout << "Key: " << it->first << ", Value: " << it->second << endl;
    }

    // Use the count() function to check the number of elements with a specific key
    cout << "Count of elements with key 'orange': " << myMap.count("orange") << endl;

    // Use the lower_bound() and upper_bound() functions to find elements
    auto lower = myMap.lower_bound("grape");
    auto upper = myMap.upper_bound("orange");
    cout << "Lower bound of grape: " << lower->first << ", Upper bound of orange: " << upper->first << endl;

    // Use the equal_range() function to find a range of elements
    auto range = myMap.equal_range("apple");
    cout << "Equal range of apple: ";
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->first << " ";
    }
    cout << endl;

    // Clear the map
    myMap.clear();
    cout << "Size of map after clearing: " << myMap.size() << endl;

    return 0;
}