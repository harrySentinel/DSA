int search(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) return mid;
        
        // Left half is sorted
        if (arr[low] <= arr[mid]) {
            if (arr[low] <= target && target < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        } 
        // Right half is sorted
        else {
            if (arr[mid] < target && target <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}
