class Solution {
public:
    stack<int> st; 
    int evalRPN(vector<string>& tokens) {
         for(string c:tokens){
            if (c != "+" && c != "-" && c != "*" && c != "/"){
                st.push(stoi(c));
            }
            else{
             int b = st.top(); st.pop();
             int a = st.top(); st.pop();
                if(c=="+"){
                    int result= a+b;
                    st.push(result);
                }
                else if(c=="-"){
                    int result=a-b;
                    st.push(result);
                }
                else if(c=="*"){
                    int result=a*b;
                    st.push(result);
                }
                else if(c=="/"){
                    int result=a/b;
                    st.push(result);
                }
            }
         }
        return st.top();
    }
};
