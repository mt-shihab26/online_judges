#include <stdio.h>
#include <string.h>
#include <math.h>

void corrent_run_rate(double required_total, double corrent_total, double boll_baky) {
    double crr; // corrent_run_rate
    
    if (boll_baky != 0) {
        double c_over = (300 - boll_baky) / 6;
        crr = corrent_total / c_over;
    }
    else {
        crr = corrent_total / 50;
    }
    printf("%.2lf ", crr);
}

void required_run_rate(double required_total, double corrent_total, double boll_baky) {
    double rrr; // required_run_rate
    double b_over = boll_baky / 6;
    if (boll_baky != 0) {
        if (required_total < corrent_total) {
            rrr = 0.0;
        }
        else {
            rrr = ((required_total+1) - corrent_total) / b_over; 
        }
    }
    else {
        if (required_total < corrent_total) {
            rrr = 0;
        }
        else {
            rrr = (required_total + 1) - corrent_total;
        }
    }
    printf("%.2lf\n", rrr);

}

int main() {
//    freopen("input.txt", "rt", stdin);
//    freopen("output.txt", "wt", stdout);
    int t;
    double required_total, corrent_total, boll_baky;

    scanf("%d", &t);
    while (t--) {
        scanf(" %lf %lf %lf", &required_total, &corrent_total, &boll_baky);
        corrent_run_rate(required_total, corrent_total, boll_baky);
        required_run_rate(required_total, corrent_total, boll_baky);
    }

    return 0;
}
// Author: Shihab Mahamud
// Date: Sun 07 Feb 2021 12:29:37 PM +06
