class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        int size=arr.size();
        vector<int> v(size);
        
        int i=0 , j=0 ;
        for(i=0,j=0 ; i<size && j<size ; i++ ,j++)
        {
            if(arr[i]!=0)
            {
                v[j]=arr[i];                         
            }
            else
            {
                v[j]=0;
                j++;
                if(j<size)
                v[j]=0;                
            }
        }
        arr=v;
    }  
    
};