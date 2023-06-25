//this sorting method makes all the negative n to positive, and sort them as a square.
void sortedSquares(int* nums, int numsSize, int* result) {
    int left = 0;
    int right = numsSize - 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        if ((nums[left] * nums[left]) > (nums[right] * nums[right])) {
            result[i] = nums[left] * nums[left];
            left++;
        } else {
            result[i] = nums[right] * nums[right];
            right--;
        }
    }
}
