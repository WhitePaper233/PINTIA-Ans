#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

#define append_output(result) {output.append(result).append("\n"); continue;}

void get_sum(int number, int *sum) {
    while (number) {
        int n = number % 10;
        *sum = *sum + n;
        number = number / 10;
    }
}

int main() {
    short round;
    scanf("%hd",&round);

    string output;

    for (short i = 0; i < round; i++) {

        int NA, NB, SA = 0, SB = 0;
        scanf("%d %d", &NA, &NB);

        get_sum(NA, &SA);
        get_sum(NB, &SB);

        int RA = !(NA % SB), RB = !(NB % SA);

        if (RA == RB) {
            if (NA > NB) append_output("A");
            if (NA < NB) append_output("B");
        }

        if (RA) append_output("A");
        if (RB) append_output("B");
    }

    cout << output;
    
    return 0;
}