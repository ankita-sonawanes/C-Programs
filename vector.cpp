// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec={1,2,3};
//     cout<<vec[0]<<endl;
//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     // Initialize a vector of size 5 with all elements set to 0
//     vector<int> vec(5, 0);

//     // Print the elements of the vector
//     cout << vec[0] << endl;
//     cout << vec[1] << endl;
//     cout << vec[2] << endl;
//     cout << vec[3] << endl;
//     cout << vec[4] << endl;

//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Initialize a vector of size 5 with all elements set to 0
    vector<int> vec;
    cout<<"size="<<vec.size()<<endl;//size
    vec.push_back(20);
    vec.push_back(22);
    vec.push_back(23);
    vec.push_back(25);
    cout<<"after push back size="<<vec.size()<<endl;//size
    vec.pop_back();
    cout<<vec.front()<<endl;//20
    cout<<vec.back()<<endl;//23
    cout<<vec.at(0)<<endl;

    
    return 0;
}
