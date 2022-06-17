#include <cstdio>

int main() {
    int pn[25];
    int i = 0;
    int num = 2;
    while (i < 25)
    {   
        for (int j = 1; j <= num; j++)        
        {
            // printf("num is %d, and j is %d,\n", num, j);
            int reminder = num % j;
            if (j != 1 && j != num && reminder == 0)
            {
                //Not a prime number
                // ++num;
                // printf("Break! Reminder is %d.\n", reminder);
                break;
            }
            if (j == num)
            {
                // Pass all test, primer number
                pn[i] = num;
                ++i;
                printf("%d is a prime number.\n", num);
            }
        }
        ++num;
    }
    
    
    return 0;
}