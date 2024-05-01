class Solution {
public:
    void getans(int i,int j,string &s){
        if(i<j){
        swap(s[i],s[j]);
        getans(i+1,j-1,s);
        }
    }
    string reversePrefix(string word, char ch) {
         int i=0,j=0;
    for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                break;
            }
        j++;
        }
        if(j<word.size())
        getans(i,j,word);
        else  return word;
        return word;
    }
};
