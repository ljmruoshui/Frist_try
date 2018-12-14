#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> vec1;
    
    for(int i = 0; i < 10; i++)
    {
        vec1.push_back(i);
    }

    vector<int>::iterator iter1 = find(vec1.begin(), vec1.end(), 12);
    if(iter1 == vec1.end()){
        cout << "can not find the number 6 in vec1" << endl;
    }
    else{
        cout << "find value in vec1" << endl;
    }
    
    vector<int> vec2;
    vec2.push_back(4);
    vec2.push_back(6);
    vec2.push_back(3);
    vector<int>::iterator iter2 = find_first_of(vec1.begin(), vec1.end(), vec2.begin(), vec2.end());
      if(iter2 == vec1.end()){
        cout << "can not find in vec1" << endl;
    }
        cout << "find the same vec2 value in vec1" << endl;
    

    vector<int>::iterator iter3 = lower_bound(vec1.begin(), vec1.end(),4);
    if(iter3 == vec1.end()){
        cout << "can not find a value is larger than 4 in vec1" << endl;
    }
        cout << "find large value in vec1" << endl;
    
    return 0;
}
