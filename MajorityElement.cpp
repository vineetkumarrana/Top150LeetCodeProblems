#169.Majority Element [EASY]

           [TOPICS]
Array
Hash Table
Divide and Conquer
Sorting
Counting

### S O L U T I O N ####
class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int candidate = 0, count = 0;

        // Step 1: Find a candidate for the majority element
        for (int num : nums) {
            if (count == 0) {
                // If count is 0, we select the current element as the candidate
                candidate = num;
            }
            // Adjust the count: increment if current element matches candidate,
            // otherwise decrement
            count += (num == candidate) ? 1 : -1;
        }

        // Step 2: Verify that the candidate is indeed the majority element
        count = 0;
        for (int num : nums) {
            // Count the occurrences of the candidate
            if (num == candidate) {
                count++;
            }
        }

        // If candidate appears more than n/2 times, it's the majority element
        return count > nums.size() / 2 ? candidate : -1; 
        // Return -1 if there's no majority element (optional)
    }
};
