class Solution {
public:

vector<string> splitString( string str){
    string word ="";
    vector<string> words;
    for(char c: str){
        if(isspace(c)){
            if(!word.empty()){
                words.push_back(word);
                word="";
            }
        }else{
            word +=c;
        }
    }
    if(!word.empty()){
        words.push_back(word);
    }
    return words;
}



    string reverseWords(string s) {
        vector<string> words = splitString(s);
        string reversed="";
        for (int i = words.size() - 1; i > 0; i--) {
            reversed += words[i] + " "; 
        }
        if(!words.empty()){

        reversed += words[0];
        }

        return reversed;


    }
};