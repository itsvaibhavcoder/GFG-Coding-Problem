//The code you've provided is meant to find the "leaders" in an array. Leaders are elements in the array that are greater than or equal to all the elements to their right
class Solution {
public:
    vector<int> leaders(int a[], int n) {
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            bool flag = true; // Reset the flag for each element
            for (int j = i + 1; j < n; j++) {
                if (a[i] < a[j]) {
                    flag = false;
                    break; // No need to check further for this element
                }
            }
            if (flag) {
                ans.push_back(a[i]);
            }
        }
        return ans;
    }
};
