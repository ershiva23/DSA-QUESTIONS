long long  maxSubarraySum(int arr[], int n){
        
        // Your code here
         int i;
        int curr_sum=0;
        int max_sum=arr[0];
        for(i=0;i<n;i++){
            curr_sum=curr_sum+arr[i];
            if(curr_sum>max_sum){
                max_sum=curr_sum;
            }
            if(curr_sum<0){
                curr_sum=0;
            }
        }
        return max_sum;
        
    }
};
