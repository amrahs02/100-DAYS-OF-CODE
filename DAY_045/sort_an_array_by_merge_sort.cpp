void merge(vector<int> &nums, int low, int mid, int high) {
    vector<int> temp(high - low + 1); 
    int left = low;
    int right = mid + 1;
    int index = 0; 

    while (left <= mid && right <= high) {
        if (nums[left] <= nums[right]) {
            temp[index] = nums[left];
            left++;
        } else {
            temp[index] = nums[right];
            right++;
        }
        index++;
    }

    while (left <= mid) {
        temp[index] = nums[left];
        left++;
        index++;
    }
    while (right <= high) {
        temp[index] = nums[right];
        right++;
        index++;
    }

    for (int i = low; i <= high; i++) {
        nums[i] = temp[i - low];
    }
}


void mergeSort(vector<int> &nums ,int low ,int high ){
    if(low >= high )
        return;
    int mid = (low + high)/2;
    mergeSort( nums , low , mid);
    mergeSort(nums , mid+1 , high);
    merge(nums , low , mid , high);
}

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums , 0 , nums.size()-1 );
        return nums;
    }
};