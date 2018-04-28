#include <cstddef>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <utility>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::pair;
using std::string;
using std::vector;

int main(int argc, char *argv[])
{
    typedef pair<string, int> StorageItem;
    StorageItem item;

    vector<StorageItem> storage;
    
    while (cin >> item.first >> item.second)
    {
        storage.push_back(make_pair(item.first, item.second)); 
    }
    
    for (vector<StorageItem>::iterator it=storage.begin(); it!=storage.end(); ++it)
    {
        cout << it->first << " " << it->second << endl;
    }
    
    return 0;
}
