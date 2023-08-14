bool check(int i, int s, string &str){
    if(i >= s/2) {
        return true;
    }
    if(str[i] != str[s-i-1]){
        return false;
    }
    return check(i+1,s,str);
}

bool isPalindrome(string& str) {
    // Write your code here.
    int s = str.size();
    int i = 0;
    bool ans = check(i,s,str);
    return ans;
}
