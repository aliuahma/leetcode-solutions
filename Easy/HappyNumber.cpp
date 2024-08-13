class Solution {
public:
    bool isHappy(int n) {
        set<int> storedNums;
        return isHappyHelper(n, storedNums);
    }
private:
    int sumDigitsSquared(int n) {
        int sum = 0;
        while(n != 0) {
            sum += pow(n % 10, 2);
            n /= 10;
        }
        return sum;
    }
    bool isHappyHelper(int n, set<int>& storedNums) {
        n = sumDigitsSquared(n);
        if(storedNums.contains(n)) {
            return false;
        } else if(n != 1) {
            storedNums.insert(n);
            return isHappyHelper(n, storedNums);
        } else {
            return true;
        }
    }

};
