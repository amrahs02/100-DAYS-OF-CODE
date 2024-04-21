void insert(vector<int> &v, int temp){
    if(v.empty() || v[v.size()-1] <= temp){
        v.push_back(temp);
        return;
    }
    int val = v[v.size()-1];
    v.pop_back();
    insert(v, temp);
    v.push_back(val);
}

vector<int> sortArr(vector<int>&arr, int n){
    if(n == 1){
        vector<int> result;
        result.push_back(arr[0]);
        return result;
    }
    int val = arr[n-1];
    arr.pop_back();
    vector<int> sorted = sortArr(arr, n-1);
    insert(sorted, val);
    return sorted;
}

// got TLE