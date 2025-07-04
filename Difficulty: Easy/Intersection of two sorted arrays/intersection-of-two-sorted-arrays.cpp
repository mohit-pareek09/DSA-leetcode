class Solution {
  public:
    // Function to return a list containing the intersection of two arrays.
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        // Your code here
        int i=0,j=0;
        int n1=arr1.size();
        int n2=arr2.size();
        vector<int> v;
        while(i<n1 && j<n2){
            
            if(i>0 && arr1[i]==arr1[i-1] ){
                i++;
                continue;
            }
            if(arr1[i]<arr2[j]){
                    i++;
                }
                
            else if(arr1[i]>arr2[j]){
                j++;
                
            }

            else{
                v.push_back(arr1[i]);
                i++;
                j++;

            }

            
        }
        return v;
    }
};