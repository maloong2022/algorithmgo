class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int n = digits.size();
        for(int i = n - 1;i >= 0;i--){
            int temp = digits[i] + 1;
            if(temp <= 9){
                digits[i] = temp;
                return digits;
            }else{
                digits[i]=0;
            }
        }
       
        vector<int> result(n+1, 0);
        result[0] =1;
        return result;
    }
};