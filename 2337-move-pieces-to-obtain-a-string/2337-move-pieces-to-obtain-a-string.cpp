class Solution {
public:
    bool canChange(string start, string target) {
        int i =0;
        int j =0;
        int n = start.length();
        int m = target.length();
        while(i<n && j<m){
            char a = start[i];
            char b = target[j];
            if(a == '_' && b == '_'){
                i++;
                j++;
            }else if(a == '_'){
                i++;
            }else if(b == '_'){
                j++;
            }else if( a==b && (
                a =='L' && i>=j || a=='R'&& i<=j
            )){
                i++;
                j++;
            }else{
                return false;
            }
        }
        while(i<n && start[i] == '_'){
            i++;
        }
        
        while(j<m && target[j] == '_'){
            j++;
        }

        return i ==n && j==m;

    }
};