class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        vector<int> v;
        vector <int> vc;
        int j=x;
        int k;
        while(j!=0){
            k = j%10;
            v.push_back(k);
            j= j/10;
            
        }
        vc = v;
        reverse(vc.begin(),vc.end());
        return(v == vc);
    }
};