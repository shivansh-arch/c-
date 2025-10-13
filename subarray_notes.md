🧩 Subarray Basics — Quick Notes
🔹 Definition:

A subarray is a continuous part of an array.

👉 Example:
If arr = [1, 2, 3], then possible subarrays are:

[1]
[1, 2]
[1, 2, 3]
[2]
[2, 3]
[3]


✅ Notice — all elements are contiguous (no skipping allowed).

🔹 Subsequence vs Subarray
Term	Continuous?	Example from [1,2,3]
Subarray	✅ Yes	[1,2], [2,3]
Subsequence	❌ No	[1,3]

👉 So every subarray is a subsequence, but not every subsequence is a subarray.

🔹 Count of Subarrays

For an array of size n:

Total subarrays = n*(n+1)/2


Example: if n = 3,
= 3*(4)/2 = 6 ✅ (matches our earlier example)

🔹 Sum of all Subarrays (Brute Force Concept)

To print or find all subarray sums 👇

for(int i=0; i<n; i++){
    int sum = 0;
    for(int j=i; j<n; j++){
        sum += arr[j];
        cout << sum << " ";
    }
}


👉 Outer loop = start index
👉 Inner loop = end index

🔹 Important Subarray Topics (Must Know)
Concept	What it finds	Hint
Maximum Subarray Sum	Largest sum (Kadane’s Algorithm)	O(n)
Subarray with Given Sum	Check if such subarray exists	Prefix sum / Sliding window
Longest Subarray with Given Sum	Max length of subarray with sum = K	Hashmap technique
Subarray XOR	XOR based problems	Bit manipulation
🔹 Kadane’s Algorithm (⭐ Very Famous)

Used to find the maximum sum subarray.

int maxSubArray(vector<int>& nums) {
    int maxSum = nums[0];
    int currSum = 0;
    for(int x : nums){
        currSum += x;
        maxSum = max(maxSum, currSum);
        if(currSum < 0) currSum = 0;
    }
    return maxSum;
}


👉 Time: O(n)
👉 Idea: If current sum goes below 0, restart from next element.

🔹 Sliding Window Concept

For fixed-size subarrays (like “max sum of subarray of size K”):

int sum=0;
for(int i=0; i<k; i++) sum += arr[i];
int maxSum = sum;
for(int i=k; i<n; i++){
    sum += arr[i] - arr[i-k];
    maxSum = max(maxSum, sum);
}

🧠 Summary Cheatline:

Subarray = Continuous piece of array
Count = n(n+1)/2
Common ops = Sum, Max sum, Given sum, Length with K sum