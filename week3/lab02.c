// a = ค่ามาก
// b = ค่าน้อย
// c = ผลลัพพ์จากการMod ของ a กับ b
// aต่อมา เอาbมาแทน
// bต่อมา เอาcมาแทน

#include <stdio.h>
#include <stdlib.h>

int main() {
    char s_gcd[11],s_lcm[11];
    long long int gcd,lcm = 0,most,min,hand = 1;
    fgets(s_gcd, 11, stdin);
    fgets(s_lcm, 11, stdin);
    most = atoll(s_gcd);
    min = atoll(s_lcm);
    lcm = most * min;
    while (min != 0) {
        hnad = most % min;
        most = min;
        min = hand;
    }
    gcd = most;
    lcm = lcm / gcd;
    printf("GCD: %lld\nLCM: %lld",gcd,lcm);
    return 0;
}