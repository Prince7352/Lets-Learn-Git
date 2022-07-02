//check wheather given string of parenthesis is valid or not
class Solution{
    public:

    bool match(char close, char open){
        if(close==')' && open=='(')
           return true;
        if(close=='}' && open=='{')
           return true;
        if(close==']' && open=='[')
           return true;
        return false;

    }
    bool isValid(String s)
    {
        stack<char> st;
        int len=s.length();
        if(len&1)
           return false;
        //open bracket
        for(int i=0; i<s.length(); i++){
            char ch=s[i];
            if(ch=='(' || ch=='{' || ch=='['){
                st.push(ch);
            }
            else{
                //close bracket
                if(!st.empty() && match(ch, st.top())){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        if(st.empty()){
            return true;
        else
            return false;
        }
    }
};