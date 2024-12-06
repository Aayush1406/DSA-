long long maxSubarraySum(vector<int> arr, int n)
{
    long long max = 0;

    long long sum = 0;

    for(int i=0;i<n;i++){

        sum = sum + arr[i];

        if(sum<0){
            sum = 0;
        }
        if(max<sum){
            max = sum;
        }
    }

    return max;
}
