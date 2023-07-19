void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        int mid = ceil(sizeOfStack / 2);
        stack<int> temp;
        while(mid--){
            temp.push(s.top());
            s.pop();
            
        }
        s.pop();
        while(!temp.empty()){
            s.push(temp.top());
            temp.pop();
        }
    }
