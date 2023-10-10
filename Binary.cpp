
class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
         // code here
        for (int i = 0; i<=n; i++){
            if (k == arr[i]){
                return i;
            }
        }
        return -1;
    
    }
};
