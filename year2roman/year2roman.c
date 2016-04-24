#include <stdio.h>
  int main () {
        int year;

         /* input year from the user */
        printf("Enter your input:");
        scanf("%d", &year);
        printf("Roman Number: ");
        while (year > 0) {
                if (year >= 1000) {
                        /* M - 1000 */
                        printf("M");
                        year = year - 1000;
                } else if (year >= 500) {
                        /*
                         * D is 500. CM is 900
                         * CM = M - C = 1000 - 100 => 900
                         */
                        if (year >= 900) {
                                printf("CM");
                                year = year - 900;
                        } else {
                                printf("D");
                                year = year - 500;
                        }
                } else if (year >= 100) {


                        /*

                         * C is 100. CD is 400

                         * CD = D - C = 500 - 100 => 400

                         */

                        if (year >= 400) {

                                printf("CD");

                                year = year - 400;

                        } else {

                                printf("C");

                                year = year - 100;

                        }

                } else if (year >= 50) {

                        /*

                         * L is 50. XC is 90

                         * XC = C - X = 100 - 10 => 90

                         */

                        if (year >= 90) {

                                printf("XC");

                                year = year - 90;

                        } else {

                                printf("L");

                                year = year - 50;

                        }

                } else if (year >= 9) {

                        /*

                         * XL is 40. IX is 9. X is 10

                         * XL = L - X = 50 - 10 = 40

                         * IX = X - I = 10 - 1 = 9

                         */


                        if (year >= 40) {

                                printf("XL");

                                year = year - 40;

                        } else if (year == 9) {

                                printf("IX");

                                year = year - 9;

                        } else {

                                printf("X");

                                year = year - 10;

                        }

                } else if (year >= 4) {

                        /*

                         * V is 5 and IV is 4

                         * IV = V - I = 5 - 1 => 4

                         */

                        if (year >= 5) {

                                printf("V");

                                year = year - 5;

                        } else {

                                printf("IV");

                                year = year - 4;

                        }

                } else {

                        printf("I");

                        year = year - 1;

                }

        }

        printf("\n");

  }
