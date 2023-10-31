class Solution {
public:
    int maximum69Number (int num) {
       string numnew =to_string(num);
       for(int i =0; i<numnew.length();i++){
           if(numnew[i]=='6'){
               numnew[i]='9';
               break;
           }
       }
       int newnum = stoi(numnew);
       return newnum;
       

    }
};