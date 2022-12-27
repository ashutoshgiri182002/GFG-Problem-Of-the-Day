long long maxArea(long long arr[], int len)
{
    // Your code goes here
    
    long long i = 0;
    long long j = len -1 ;
    long long maxi = 0;
    while(i<j){
        long long mini = min(arr[i],arr[j]);
        long long w = j - i;
        maxi = max(maxi,(mini*w));
        if(arr[i]<arr[j]) i++;
       else j--;
    }
    
    return maxi;
    
}
