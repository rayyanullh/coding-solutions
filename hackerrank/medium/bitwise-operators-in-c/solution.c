#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int max_and = 0;
    int max_or = 0;
    int max_xor = 0;

    // Iterate through all possible pairs (a, b) where 1 <= a < b <= n
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int and_val = i & j;
            int or_val = i | j;
            int xor_val = i ^ j;

            // Check and update maximum for AND
            if (and_val > max_and && and_val < k) {
                max_and = and_val;
            }
            // Check and update maximum for OR
            if (or_val > max_or && or_val < k) {
                max_or = or_val;
            }
            // Check and update maximum for XOR
            if (xor_val > max_xor && xor_val < k) {
                max_xor = xor_val;
            }
        }
    }

    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
