/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143?
*/

int solution() {
    std::priority_queue<int> pq;
    long n = 600851475143;
    while(n != 1) {
        for(int i = 2; i <= n; i++) {
            if(n % i == 0) {
                pq.push(i);
                n /= i;
                std::cout << n << std::endl;
                break;
            }
        }
    }
    return pq.top();
}
