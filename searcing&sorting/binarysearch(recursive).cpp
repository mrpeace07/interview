int bs(vector<int> &nums, int target, int l, int h) {
    if (l > h) {
        return -1;  // Base case: target not found
    }

    int m = l + (h - l) / 2;

    if (nums[m] == target) {
        return m;
    } else if (target > nums[m]) {
        return bs(nums, target, m + 1, h);  // Search in the right half
    } else {
        return bs(nums, target, l, m - 1);  // Search in the left half
    }
}


int search(vector<int> &nums, int target) {
    int l = 0;
    int h = nums.size() - 1;
    return bs(nums, target, l, h);  // Return the result of the recursive function
}


