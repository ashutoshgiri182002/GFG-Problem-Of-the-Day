class Solution{
public:	
	// Converts arr[0..n-1] to reduced form.
	void convert(int arr[], int n) {
	    // code here
	    map<int,int>mp;
	    vector<int>ans;
	    int arr1[n];
	    
	    for(int i = 0;i<n;i++){
	        arr1[i] = arr[i];
	    }
	    
	    sort(arr,arr+n);
	    
	    for(int i = 0;i<n;i++){
	        mp[arr[i]] = i;
	    }
	    
	    for(int i = 0;i<n;i++){
	        
	        arr[i] = mp[arr1[i]];
	    }
	    
	  
	    
	}

};
