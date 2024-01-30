// First array problem done using sets.We have to find the union of two arrays.Sets stores only unique elements that too
// in sorted order, so it is better to store the two arrays in a single set and then just join them together to get the
// union of the 2 arrays. (could not solve myself, first time using sets in a question)

#include<set>
vector<int> sortedArray(vector < int > a, vector < int > b) {
    set<int> st;
    int n = a.size(), m = b.size();
    for(int i=0; i<n; i++) {
        st.insert(a[i]);
    }
    for(int i=0; i<m; i++) {
        st.insert(b[i]);
    }
    vector<int> unionArray;
    for(const int & value : st) {      // The use of a reference (const int &) is a good practice to avoid unnecessary 
        unionArray.push_back(value);   // copying of elements if the container is large or if modifying elements is not 
    }                                  // required within the loop.
    return unionArray;
}
