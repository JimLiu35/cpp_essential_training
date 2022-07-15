#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <iostream>

int main() {
    // srand((unsigned)time(NULL));
    // printf("rand() = %d\n", rand() % ((52 - 1) + 1));
    // int randarray[10];
    // int i = 0;
    // while (i < 10)
    // {
    //     randarray[i] = rand() % 10;
    //     if (i == 0)
    //     {
    //         i++;
    //     }
    //     else
    //     {
    //         int m = i;
    //         for (int j = 0; j < m; j++)
    //         {
    //             if (randarray[i] == randarray[j])
    //             {
    //                 j = m + 1;
    //             }
    //             if (j == m - 1 && randarray[i] != randarray[j])
    //             {
    //                 // no repeat numbers in randarray
    //                 i++;
    //             }
                
    //         }
            
    //     }
            
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Element No. %d is %d.\n", i, randarray[i]);
    // }
    char card[52][3] = 
    {
        "As", "Ah", "Ad", "Ac",
        "2s", "2h", "2d", "2c",
        "3s", "3h", "3d", "3c",
        "4s", "4h", "4d", "4c",
        "5s", "5h", "5d", "5c",
        "6s", "6h", "6d", "6c",
        "7s", "7h", "7d", "7c",
        "8s", "8h", "8d", "8c",
        "9s", "9h", "9d", "9c",
        "Ts", "Th", "Td", "Tc",
        "Js", "Jh", "Jd", "Jc",
        "Qs", "Qh", "Qd", "Qc",
        "Ks", "Kh", "Kd", "Kc"
    };
    std::cout << *card << std::endl;
    std::cout << *card + 3 << std::endl;
    std::cout << *card + 3 << std::endl;
    return 0;
}