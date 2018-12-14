#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec1;
    vec1.push_back(8);
    vec1.push_back(3);
    vec1.push_back(5);
    vec1.push_back(44);
    vec1.push_back(34);
    vec1.push_back(1);
    cout << "------before sort ---the value is ----" << endl;
    make_heap(vec1.begin(), vec1.end());

    for(vector<int>::iterator iter = vec1.begin(); iter != vec1.end(); iter++)
        cout << *iter << " ";
    
    cout << endl;
    cout << "------after sort---the value is---- " << endl;
    sort_heap(vec1.begin(), vec1.end());
    for(vector<int>::iterator iter = vec1.begin(); iter != vec1.end(); iter++)
        cout << *iter << " ";
    return 0;
}
