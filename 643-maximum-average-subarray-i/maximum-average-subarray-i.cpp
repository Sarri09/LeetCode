class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxaverage = 0.0;
        double sum = 0.0;
        
        for (int i = 0; i < k; i++) sum = sum + nums[i]; // aqui hago la primera suma hasta el indice k

        maxaverage = sum;

        for (int i = k; i < nums.size(); i++) { // aqui hago el resto de sumas desde el indice k
            sum = sum + nums[i] - nums[i-k]; // formula es la suma + lo que entra [i] - lo que sale [indice que itera i - indice estatico k]
            maxaverage = max(maxaverage, sum);
        } 

        return maxaverage/k;
    }
};