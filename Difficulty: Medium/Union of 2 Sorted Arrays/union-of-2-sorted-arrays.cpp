class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int> v;
        // Your code here
        int n1=a.size();
        int n2=b.size();
        int i=0,j=0;
        while(i<n1 && j<n2){
            if( a[i]<=b[j]  ){
                
                if(v.size()==0 || v.back()!=a[i]){
                    v.push_back(a[i]);
                }
                    
                i++;
            }
            else{
                 if(v.size()==0 || v.back()!=b[j]){
                    v.push_back(b[j]);
                }
                
                j++;
            }
        }
        
        
        while(i<n1){
             if(v.size()==0 || v.back()!=a[i]){
                    v.push_back(a[i]);
                }
                    
                i++;
        }
        
        while(j<n2){
             if(v.size()==0 || v.back()!=b[j]){
                    v.push_back(b[j]);
                }
                
                j++;
        }
        
        // return vector with correct order of elements
        return v;
    }
};