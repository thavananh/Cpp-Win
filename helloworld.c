// //tổng hiệu thương tích// #include<stdio.h>
// // int main(){
// //     double a;
// //     double b;
// //     printf("Input a: ");
// //     scanf("%lf", &a);
// //     printf("Input b: ");
// //     scanf("%lf", &b);
// //     if ( a,b >= 10^-9 && a,b <= 10^9 )
// //     {
// //        printf("%.0lf", a + b);
// //        printf("\n%.0lf", a - b);
// //        printf("\n%.0lf", a * b);
// //        printf("\n%.2lf", a/b);
// //     }

// // }


// // Bài 2. Tính chu vi, diện tích hình tròn
// // Input
// // Bán kính r của hình tròn là một số nguyên. (1≤r≤106)

// // Output
// // Chu vi và diện tích của hình tròn lấy độ chính xác với 2 chữ số
// // #include <stdio.h>
// // const float pi = 3.14;
// // int main(){
// //     float r;
// //     printf("Input r: ");
// //     scanf("%f", &r);
// //     printf("Diện tích = %.2f", 2*r*pi);
// // }


// // Bài 3. Tính khoảng cách
// // Tính khoảng cách Euclid giữa 2 điểm trong hệ tọa độ Oxy
// // Input
// // Tọa độ của 2 điểm (x1, y1) và (x2, y2) là các số nguyên.( -106 ≤xi, yi ≤106)

// // Output
// // Khoảng cách giữa 2 điểm lấy độ chính xác với 2 chữ số

// // #include <stdio.h>
// // #include <math.h>
// // int main(){
// //     int toadoA1;
// //     int toadoB1;
// //     int toadoA2;
// //     int toadoB2;
// //     printf("Nhap Toa Do: ");
// //     scanf("%d %d %d %d", &toadoA1, &toadoB1, &toadoA2, &toadoB2);
// //     printf("%d %d %d %d", toadoA1, toadoB1, toadoA2, toadoB2);
// //     float TinhToan = sqrt(pow(1.0*(toadoA2 - toadoA1),2.0) + pow((toadoB2 - toadoB1)*1.0,2.0));
// //     printf("Khoang cách = %.2f", TinhToan);
// // }

// // #include <stdio.h>
// // #include <math.h>
// // int main(){
// //     int __Celcius;
// //     float __Farenheit;
// //     printf("Nhập Celcius: ");
// //     scanf("%d", &__Celcius);
// //     if(__Celcius < 0 || __Celcius == pow(1.0*__Celcius*10, 1.0*6)){
// //     while (__Celcius < 0 || __Celcius == pow(1.0*__Celcius*10, 1.0*6))
// //         {
// //         printf("Bạn nhập sai rồi, vui lòng nhập lại a: ");
// //         scanf("%d", &__Celcius);
// //         }
// //     }
// //     __Farenheit = (1.0*__Celcius * 9 / 5) + 32;
// //     printf("C -> F = %.2f",__Farenheit);
// // }


// // #include <stdio.h>
// // #include <math.h>
// // int main(){
// //     int a;
// //     int b;
// //     printf("Nhap a: ");
// //     scanf("%d",&a);
// //     printf("Nhập b: ");
// //     scanf("%d", &b);
// //     if (a < -10 || b > 10){
// //         while (a < -10 || b > 10)
// //         {
// //             printf("Bạn nhập sai rồi, vui lòng nhập lại");
// //             printf("\nNhập a: ");
// //             scanf("%d", &a);
// //             printf("Nhập b: ");
// //             scanf("%d", &b);
// //         }
// //     }
// //     int tinhtoan = pow(1.0*a, 1.0*b);
// //     printf("Kết quả a^b = %d", tinhtoan);
// // }


// // #include <stdio.h>
// // #include <math.h>
// // int main(){
// //     int n;
// //     printf("Nhập n: ");
// //     scanf("%d", &n);
// //     if (n < -pow(10*1.0, 1.0*9) || n > pow(10*1.0, 1.0*9))
// //     {
// //         while (n < -pow(10*1.0, 1.0*9) || n > pow(10*1.0, 1.0*9))
// //         {
// //             printf("bạn Nhập sai rồi, vui lòng nhập lại n: ");
// //             scanf("%d", &n);
// //         }
// //     }
// //     int tinhtoan = abs(n);
// //     printf("Trị tuyệt đối của |n| = %d", tinhtoan);
// // }

// // #include <stdio.h>
// // #include <math.h>
// // int main(){
// //     int n;
// //     printf("Nhập n: ");
// //     scanf("%d", &n);
// //     if (n < 0 || n >= pow(1.0*10, 1.0*18))
// //     {
// //         while (n < 0 || n >= pow(1.0*10, 1.0*8))
// //         {
// //             printf("Bạn nhập sai rồi, vui lòng nhập lại n: ");
// //             scanf("%d", &n);
// //         }
// //     }
// //     float tinhtoan = sqrt(n);
// //     printf("Căn bậc 2 của n = %.2f", tinhtoan);
// // }

// // #include <stdio.h>
// // int main(){
// //     int n;
// //     printf("Nhap n: ");
// //     scanf("%d", &n);
// //     long long int sum = 0;
// //     for (size_t i = 0; i <= n; i++)
// //     {
// //         sum = sum + i;
// //     }
// //     printf("Sn = %lld", sum);
// // }

// // #include <stdio.h>
// // #include <math.h>
// // int main(){
// //     int n;
// //     long long int sum = 0;
// //     printf("Nhập n: ");
// //     scanf("%d", &n);
// //     if (n <= 0 || n > pow(1.0*10, 1.0*5))
// //     {
// //         while (n <= 0 || n > pow(1.0*10, 1.0*5))
// //         {
// //             printf("Bạn nhập sai rồi, vui lòng nhập lại n: ");
// //             scanf("%d", &n);
// //         }
// //     }
// //     for (size_t i = 0; i <= n; i++)
// //     {
// //         sum = sum + pow(1.0*i, 2*1.0);
// //     }
// //     printf("Sn = %lld", sum);
// // }

// // #include <stdio.h>
// // #include <math.h>

// // int main(){
// //     int n;
// //     float sum = 0;
// //     printf("Nhập n: ");
// //     scanf("%d", &n);
// //     if (n <= 0 || n > pow(1.0*10, 1.0*5))
// //     {
// //         while (n <= 0 || n> pow(1.0*10, 1.0*5))
// //         {
// //             printf("Bạn nhập sai rồi, vui lòng nhập lại n: ");
// //             scanf("%d", &n);
// //         }

// //     }
// //     for (size_t i = 1; i <= n; i++)
// //     {
// //         sum = sum + 1/(i*(i+1)*1.0);
// //     }
// //     printf("Sn = %.2f", sum);
// // }

// // #include <stdio.h>
// // #include <math.h>
// // int main(){
// //     int n;
// //     long long int sum = 0;
// //     printf("Nhập n: ");
// //     scanf("%d", &n);
// //     if (n < 1 || n > pow(1.0*10, 1.0*9))
// //     {
// //         while (n < 1 || n > pow(1.0*10, 1.0*9))
// //         {
// //             printf("Bạn nhập sai rồi, vui lòng nhập lại n: ");
// //             scanf("%d", &n);
// //         }

// //     }

// //     for (size_t i = 0; i <= n; i++)
// //     {
// //         sum = sum + 2*i;
// //     }
// //     printf("Sn = %lld", sum);
// // }

// // #include <stdio.h>
// // #include <math.h>

// // int main(){
// //     long long int n;
// //     long long int sum = 0;
// //     printf("Nhập n: ");
// //     scanf("%lld", &n);
// //     if (n < 1 || n > pow(1.0*10, 1.0*16))
// //     {
// //         while (n < 1 || n > pow(1.0*10, 1.0*16))
// //         {
// //             printf("Bạn nhập sai rồi, vui lòng nhập lại n: ");
// //             scanf("%lld", &n);
// //         }
// //     }
// //     for (size_t i = 1; i <= n; i++)
// //     {
// //         sum = sum + pow((-1)*1.0, i*1.0)*i;
// //     }
// //     printf("Sn = %lld", sum);
// // }

// // #include <stdio.h>
// // #include <math.h>
// // int main(){
// //     int a;
// //     int b;
// //     printf("Nhập a: ");
// //     scanf("%d", &a);
// //     printf("Nhập b: ");
// //     scanf("%d", &b);
// //     if (a < b || b < 1 || a > pow(1.0*10, 1.0*8))
// //     {
// //         while (a < b || b < 1 || a > pow(1.0*10, 1.0*8))
// //         {
// //             printf("Bạn nhập sai rồi, vui lòng nhập lại");
// //             printf("\nNhập a: ");
// //             scanf("%d", &a);
// //             printf("Nhập b: ");
// //             scanf("%d", &b);
// //         }
// //     }
// //     int tinhtoan = a/b;
// //     int SoChiaLonNhat = tinhtoan*b;
// //     printf("Số chia lớn nhất: %d", SoChiaLonNhat);
// // }

// // #include <stdio.h>
// // #include <math.h>

// // int main(){
// //     int a;
// //     int b;
// //     printf("Nhập a: ");
// //     scanf("%d", &a);
// //     printf("Nhập b: ");
// //     scanf("%d", &b);
// //     if (a < b || a > pow(1.0*10, 1.0*8) || b < 1)
// //     {
// //         while (a < b || a > pow(1.0*10, 1.0*8) || b < 1)
// //         {
// //             printf("Bạn nhập sai rồi, vui lòng nhập lại");
// //             printf("\nNhập a: ");
// //             scanf("%d", &a);
// //             printf("Nhập b: ");
// //             scanf("%d", &b);
// //         }
// //     }
// //     float tinhtoan = (float)a/b;
// //     if (tinhtoan > (int)tinhtoan)
// //     {
// //          printf("%d",(int)tinhtoan*b + b);
// //     }
// //     else {
// //          printf("%d",(int)tinhtoan*b);
// //     }
// // }

// // #include <stdio.h>
// // #include <math.h>
// // int main(){
// //     int n;
// //     printf("Nhập n: ");
// //     scanf("%d", &n);
// //     if (n < -pow(10*1.0, 18*1.0) || n > pow(1.0*10, 1.0*18))
// //     {
// //         while (n < -pow(10*1.0, 18*1.0) || n > pow(1.0*10, 1.0*18))
// //         {
// //             printf("Bạn nhập sai rồi, vui lòng nhập lại");
// //             printf("\nNhập n: ");
// //             scanf("%d", &n);
// //         }
// //     }
// //     if (abs(n)%2 == 0)
// //     {
// //         printf("%d", 1);
// //     }
// //     else
// //     {
// //         printf("%d", 0);
// //     }
// // }

// // #include <stdio.h>
// // #include <math.h>

// // int main(){
// //     int n;
// //     printf("Nhập n: ");
// //     scanf("%d", &n);
// //     if (n < -pow(1.0*10, 1.0*18) || n > pow(1.0*10, 1.0*18))
// //     {
// //         while (n < -pow(1.0*10, 1.0*18) || n > pow(1.0*10, 1.0*18))
// //         {
// //             printf("Bạn nhập sai rồi, vui lòng nhập lại");
// //             printf("\nNhập n: ");
// //             scanf("%d", &n);
// //         }
// //     }
// //     if (n % 3 == 0 && n % 5 == 0)
// //     {
// //         printf("%d", 1);
// //     }
// //     else
// //     {
// //         printf("%d", 0);
// //     }
// // }

// // #include <stdio.h>
// // #include <math.h>

// // int main(){
// //     int n;
// //     printf("Nhập n: ");
// //     scanf("%d", &n);
// //     if (n < -pow(1.0*10, 1.0*6) || n > pow(1.0*10, 1.0*6))
// //     {
// //         while (n < -pow(1.0*10, 1.0*6) || n > pow(1.0*10, 1.0*6))
// //         {
// //             printf("Bạn nhập sai rồi, vui lòng nhập lại");
// //             printf("\nNhập n: ");
// //             scanf("%d", &n);
// //         }
// //     }
// //     if (n % 400 == 0 || (n % 4 == 0 && n % 100 !=0))
// //     {
// //         printf("YES");
// //     }
// //     else if (n < 0)
// //     {
// //         printf("INVALID");
// //     }
// //     else
// //     {
// //         printf("NO");
// //     }


// // }

// // #include <stdio.h>
// // #include <math.h>

// // int main(){
// //     int thang;
// //     int nam;
// //     printf("Nhập Tháng: ");
// //     scanf("%d", &thang);
// //     printf("Nhập Năm: ");
// //     scanf("%d", &nam);
// //     if (thang < -pow(1.0*10, 1.0*6) || nam > pow(1.0*10, 1.0*6) || nam < 0)
// //     {
// //         while (thang < -pow(1.0*10, 1.0*6) || nam > pow(1.0*10, 1.0*6) || nam < 0)
// //         {
// //             printf("Bạn nhập sai rồi, vui lòng nhập lại");
// //             printf("\nNhập tháng: ");
// //             scanf("%d",&thang);
// //             printf("Nhập năm: ");
// //             scanf("%d", &nam);
// //         }
// //     }
// //     if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0))
// //     {
// //         switch (thang)
// //         {
// //         case 1:
// //             printf("31");
// //             break;
// //         case 2:
// //             printf("29");
// //             break;
// //         case 3:
// //             printf("31");
// //             break;
// //         case 4:
// //             printf("30");
// //             break;
// //         case 5:
// //             printf("31");
// //             break;
// //         case 6:
// //             printf("30");
// //             break;
// //         case 7:
// //             printf("31");
// //             break;
// //         case 8:
// //             printf("31");
// //             break;
// //         case 9:
// //             printf("30");
// //             break;
// //         case 10:
// //             printf("31");
// //             break;
// //         case 11:
// //             printf("30");
// //             break;
// //         case 12:
// //             printf("31");
// //             break;
// //         default:
// //             printf("INVALID");
// //             break;
// //         }
// //     }
// //     else
// //     {
// //         switch (thang)
// //         {
// //         case 1:
// //             printf("31");
// //             break;
// //         case 2:
// //             printf("28");
// //             break;
// //         case 3:
// //             printf("31");
// //             break;
// //         case 4:
// //             printf("30");
// //             break;
// //         case 5:
// //             printf("31");
// //             break;
// //         case 6:
// //             printf("30");
// //             break;
// //         case 7:
// //             printf("31");
// //             break;
// //         case 8:
// //             printf("31");
// //             break;
// //         case 9:
// //             printf("30");
// //             break;
// //         case 10:
// //             printf("31");
// //             break;
// //         case 11:
// //             printf("30");
// //             break;
// //         case 12:
// //             printf("31");
// //             break;
// //         default:
// //             printf("INVALID");
// //             break;
// //         }
// //     }
// // }

// // #include <stdio.h>
// // #include <ctype.h>

// // int main(){
// //     char letter;
// //     printf("Nhập ký tự: ");
// //     scanf("%c", &letter);
// //     if (letter =! toupper(letter))
// //     {
// //         printf("Yes");
// //     }
// //     else
// //     {
// //         printf("No");
// //     }
// // }

// // #include <stdio.h>
// // #include <ctype.h>

// // int main(){
// //     char letter;
// //     printf("Nhập ký tự: ");
// //     scanf("%c", &letter);
// //     if (letter == toupper(letter))
// //     {
// //         printf("Yes");
// //     }
// //     else
// //     {
// //         printf("No");
// //     }
// // }

// // #include <stdio.h>
// // #include <ctype.h>

// // int main(){
// //     char letter;
// //     printf("Nhập ký tự: ");
// //     scanf("%c", &letter);
// //     if (((int)letter >= 65 && (int)letter <= 95) || ((int)letter >= 97 && (int)letter <= 122))
// //     {
// //         printf("YES");
// //     }
// //     else
// //     {
// //         printf("NO");
// //     }
// // }

// // #include <stdio.h>
// // #include <ctype.h>

// // int main(){
// //     char letter;
// //     printf("Nhập ký tự: ");
// //     scanf("%c", &letter);
// //     printf("%c -> %c", letter, tolower(letter));
// // }

// // #include <stdio.h>
// // #include <ctype.h>

// // int main(){
// //     char letter;
// //     printf("Nhập ký tự: ");
// //     scanf("%c", &letter);
// //     printf("%c -> %c", letter, toupper(letter));
// // }

// // #include <stdio.h>
// // #include <ctype.h>
// // int main(){
// //     char letter;
// //     printf("Nhập ký tự: ");
// //     scanf("%c", &letter);
// //     if ((letter >= 65 && letter <= 90) || (letter >= 97 && letter <= 122 ))
// //     {
// //         if (letter = toupper(letter))
// //         {
// //             if (letter == 90)
// //             {
// //                 printf("a");
// //             }
// //             else
// //             {
// //                 printf("%c", (letter += 33));
// //             }
// //         }
// //         else
// //         {
// //             if (letter == 122)
// //             {
// //                 printf("a");
// //             }
// //             else
// //             {
// //             printf("%c",(letter += 1));
// //             }
// //         }
// //     }
// //     else
// //     {
// //         printf("INVALID");
// //     }
// // }


// // #include <stdio.h>
// // #include <math.h>
// // int main(){
// //     int a;
// //     int b;
// //     int c;
// //     int max;
// //     printf("Nhập a: ");
// //     scanf("%d", &a);
// //     printf("Nhập b: ");
// //     scanf("%d", &b);
// //     printf("Nhập c: ");
// //     scanf("%d", &c);
// //     if (a, b, c < -pow(1.0*10, 1.0*6) || a, b, c > pow(1.0*10, 1.0*6))
// //     {
// //         while (a, b, c < -pow(1.0*10, 1.0*6) || a, b, c > pow(1.0*10, 1.0*6))
// //         {
// //             printf("Bạn nhập sai rồi, vui lòng nhập lại");
// //             printf("\nNhập a: ");
// //             scanf("%d", &a);
// //             printf("Nhập b: ");
// //             scanf("%d", &b);
// //             printf("Nhập c: ");
// //             scanf("%d", &c);
// //         }
// //     }
// //     if (a+b > c && a+c > b && b+c > a)
// //     {
// //         printf("YES");
// //     }
// //     else
// //     {
// //         printf("NO");
// //     }
// // }

// // #include <stdio.h>
// // #include <math.h>

// // int main(){
// //     int a;
// //     int b;
// //     int c;
// //     printf("Nhập a: ");
// //     scanf("%d", &a);
// //     printf("Nhập b: ");
// //     scanf("%d", &b);
// //     printf("Nhập c: ");
// //     scanf("%d", &c);
// //     if (a, b, c < -pow(1.0*10, 1.0*6) || a, b, c > pow(1.0*10, 1.0*6))
// //     {
// //         while (a, b, c < -pow(1.0*10, 1.0*6) || a, b, c > pow(1.0*10, 1.0*6))
// //         {
// //             printf("Bạn nhập sai rồi, vui lòng nhập lại");
// //             printf("\nNhập a: ");
// //             scanf("%d", &a);
// //             printf("Nhập b: ");
// //             scanf("%d", &b);
// //             printf("Nhập c: ");
// //             scanf("%d", &c);
// //         }
// //     }
// //     if (a+b > c && a+c > b && b+c > a)
// //     {
// //         if (a == b && b == c && c == a)
// //         {
// //             printf("Tam giác đều");
// //         }
// //         else if (a == b || b == c || c == a)
// //         {
// //             printf("Tam giác cân");
// //         }
// //         else if (pow(c, 2) == pow(a, 2) + pow(b, 2) || pow(b, 2) == pow(c, 2) + pow(a, 2) || pow(a, 2) == pow(b,2) + pow(c, 2))
// //         {
// //             printf("Tam giác vuông");
// //         }
// //         else if ((pow(c, 2) == pow(a, 2) + pow(b, 2) && a == b) || (pow(b, 2) == pow(c, 2) + pow(a, 2) && c == a) || (pow(a, 2) == pow(b,2) + pow(c, 2) && b == c))
// //         {
// //             printf("Tam giác vuông cân");
// //         }
// //         else
// //         {
// //             printf("Tam giác thường");
// //         }
// //     }
// //     else
// //     {
// //         printf("INVALID");
// //     }
// // }

// // #include <stdio.h>
// // #include <math.h>

// // int main(){
// //     float a;
// //     float b;
// //     float c;
// //     float delta;
// //     printf("Nhập a: ");
// //     scanf("%f", &a);
// //     printf("Nhập b: ");
// //     scanf("%f", &b);
// //     printf("Nhập c: ");
// //     scanf("%f", &c);
// //     delta = pow(b, 2) - 4*a*c;
// //     if (delta < 0)
// //     {
// //         printf("Phương trình vô nghiệm");
// //     }
// //     else if (delta == 0)
// //     {
// //         printf("Phương trình có nghiệm kép x1 = x2 = %.2f", (-b/(2*a)));
// //     }
// //     else
// //     {
// //         float x1 = (-b + sqrt(delta))/(2*a);
// //         float x2 = (-b - sqrt(delta))/(2*a);
// //         printf("X1 = %.2f", x1);
// //         printf("\nX2 = %.2f", x2);
// //     }
// // }

// // #include <stdio.h>
// // #include <math.h>
// // int main(){
// //     int n;
// //     int dem = 0;
// //     int i = 2;
// //     printf("Nhập n: ");
// //     scanf("%d", &n);
// //     if (n == 2)
// //     {
// //         printf("Số Nguyên tố");
// //     }
// //     else
// //     {
// //         while (n > i)
// //         {
// //             if (n % i == 0)
// //             {
// //                 dem++;
// //                 break;
// //             }
// //             i++;
// //         }
// //     }
// //     if (dem > 0)
// //     {
// //         printf("Không phải số nguyên tố");
// //     }
// //     else
// //     {
// //         printf("Số Nguyên Tố");
// //     }
// // }
// // #include <stdio.h>
// // int main(){
// //     int a;
// //     int b;
// //     printf("Nhập a: ");
// //     scanf("%d", &a);
// //     printf("Nhập b: ");
// //     scanf("%d", &b);
// //     if (a == b)
// //     {
// //         printf("Ước chung lớn nhất của a và b: %d", a);
// //     }
// //     else
// //     {
// //         while (a!= 0 && b != 0)
// //         {
// //             if (a > b)
// //             {
// //                 a = a % b;
// //             }
// //             else if (a < b)
// //             {
// //                 b = b % a;
// //             }
// //         }
// //     }
// //     if (a != 0)
// //     {
// //         printf("Ước chung lớn nhất của a và b: %d", a);
// //     }
// //     else
// //     {
// //         printf("Ước chung lớn nhất của a và b: %d", b);
// //     }

// // }


// //tổng hiệu thương tích// #include<stdio.h>
// // int main(){
// //     double a;
// //     double b;
// //     printf("Input a: ");
// //     scanf("%lf", &a);
// //     printf("Input b: ");
// //     scanf("%lf", &b);
// //     if ( a,b >= 10^-9 && a,b <= 10^9 )
// //     {
// //        printf("%.0lf", a + b);
// //        printf("\n%.0lf", a - b);
// //        printf("\n%.0lf", a * b);
// //        printf("\n%.2lf", a/b);
// //     }

// // }


// // Bài 2. Tính chu vi, diện tích hình tròn
// // Input
// // Bán kính r của hình tròn là một số nguyên. (1≤r≤106)

// // Output
// // Chu vi và diện tích của hình tròn lấy độ chính xác với 2 chữ số
// // #include <stdio.h>
// // const float pi = 3.14;
// // int main(){
// //     float r;
// //     printf("Input r: ");
// //     scanf("%f", &r);
// //     printf("Diện tích = %.2f", 2*r*pi);
// // }


// // Bài 3. Tính khoảng cách
// // Tính khoảng cách Euclid giữa 2 điểm trong hệ tọa độ Oxy
// // Input
// // Tọa độ của 2 điểm (x1, y1) và (x2, y2) là các số nguyên.( -106 ≤xi, yi ≤106)

// // Output
// // Khoảng cách giữa 2 điểm lấy độ chính xác với 2 chữ số

// // #include <stdio.h>
// // #include <math.h>
// // int main(){
// //     int toadoA1;
// //     int toadoB1;
// //     int toadoA2;
// //     int toadoB2;
// //     printf("Nhap Toa Do: ");
// //     scanf("%d %d %d %d", &toadoA1, &toadoB1, &toadoA2, &toadoB2);
// //     printf("%d %d %d %d", toadoA1, toadoB1, toadoA2, toadoB2);
// //     float TinhToan = sqrt(pow(1.0*(toadoA2 - toadoA1),2.0) + pow((toadoB2 - toadoB1)*1.0,2.0));
// //     printf("Khoang cách = %.2f", TinhToan);
// // }

// // #include <stdio.h>
// // #include <math.h>
// // int main(){
// //     int __Celcius;
// //     float __Farenheit;
// //     printf("Nhập Celcius: ");
// //     scanf("%d", &__Celcius);
// //     if(__Celcius < 0 || __Celcius == pow(1.0*__Celcius*10, 1.0*6)){
// //     while (__Celcius < 0 || __Celcius == pow(1.0*__Celcius*10, 1.0*6))
// //         {
// //         printf("Bạn nhập sai rồi, vui lòng nhập lại a: ");
// //         scanf("%d", &__Celcius);
// //         }
// //     }
// //     __Farenheit = (1.0*__Celcius * 9 / 5) + 32;
// //     printf("C -> F = %.2f",__Farenheit);
// // }


// // #include <stdio.h>
// // #include <math.h>
// // int main(){
// //     int a;
// //     int b;
// //     printf("Nhap a: ");
// //     scanf("%d",&a);
// //     printf("Nhập b: ");
// //     scanf("%d", &b);
// //     if (a < -10 || b > 10){
// //         while (a < -10 || b > 10)
// //         {
// //             printf("Bạn nhập sai rồi, vui lòng nhập lại");
// //             printf("\nNhập a: ");
// //             scanf("%d", &a);
// //             printf("Nhập b: ");
// //             scanf("%d", &b);
// //         }
// //     }
// //     int tinhtoan = pow(1.0*a, 1.0*b);
// //     printf("Kết quả a^b = %d", tinhtoan);
// // }


// // #include <stdio.h>
// // #include <math.h>
// // int main(){
// //     int n;
// //     printf("Nhập n: ");
// //     scanf("%d", &n);
// //     if (n < -pow(10*1.0, 1.0*9) || n > pow(10*1.0, 1.0*9))
// //     {
// //         while (n < -pow(10*1.0, 1.0*9) || n > pow(10*1.0, 1.0*9))
// //         {
// //             printf("bạn Nhập sai rồi, vui lòng nhập lại n: ");
// //             scanf("%d", &n);
// //         }
// //     }
// //     int tinhtoan = abs(n);
// //     printf("Trị tuyệt đối của |n| = %d", tinhtoan);
// // }

// // #include <stdio.h>
// // #include <math.h>
// // int main(){
// //     int n;
// //     printf("Nhập n: ");
// //     scanf("%d", &n);
// //     if (n < 0 || n >= pow(1.0*10, 1.0*18))
// //     {
// //         while (n < 0 || n >= pow(1.0*10, 1.0*8))
// //         {
// //             printf("Bạn nhập sai rồi, vui lòng nhập lại n: ");
// //             scanf("%d", &n);
// //         }
// //     }
// //     float tinhtoan = sqrt(n);
// //     printf("Căn bậc 2 của n = %.2f", tinhtoan);
// // }

// // #include <stdio.h>
// // int main(){
// //     int n;
// //     printf("Nhap n: ");
// //     scanf("%d", &n);
// //     long long int sum = 0;
// //     for (size_t i = 0; i <= n; i++)
// //     {
// //         sum = sum + i;
// //     }
// //     printf("Sn = %lld", sum);
// // }

// // #include <stdio.h>
// // #include <math.h>
// // int main(){
// //     int n;
// //     long long int sum = 0;
// //     printf("Nhập n: ");
// //     scanf("%d", &n);
// //     if (n <= 0 || n > pow(1.0*10, 1.0*5))
// //     {
// //         while (n <= 0 || n > pow(1.0*10, 1.0*5))
// //         {
// //             printf("Bạn nhập sai rồi, vui lòng nhập lại n: ");
// //             scanf("%d", &n);
// //         }
// //     }
// //     for (size_t i = 0; i <= n; i++)
// //     {
// //         sum = sum + pow(1.0*i, 2*1.0);
// //     }
// //     printf("Sn = %lld", sum);
// // }

// // #include <stdio.h>
// // #include <math.h>

// // int main(){
// //     int n;
// //     float sum = 0;
// //     printf("Nhập n: ");
// //     scanf("%d", &n);
// //     if (n <= 0 || n > pow(1.0*10, 1.0*5))
// //     {
// //         while (n <= 0 || n> pow(1.0*10, 1.0*5))
// //         {
// //             printf("Bạn nhập sai rồi, vui lòng nhập lại n: ");
// //             scanf("%d", &n);
// //         }

// //     }
// //     for (size_t i = 1; i <= n; i++)
// //     {
// //         sum = sum + 1/(i*(i+1)*1.0);
// //     }
// //     printf("Sn = %.2f", sum);
// // }

// // #include <stdio.h>
// // #include <math.h>
// // int main(){
// //     int n;
// //     long long int sum = 0;
// //     printf("Nhập n: ");
// //     scanf("%d", &n);
// //     if (n < 1 || n > pow(1.0*10, 1.0*9))
// //     {
// //         while (n < 1 || n > pow(1.0*10, 1.0*9))
// //         {
// //             printf("Bạn nhập sai rồi, vui lòng nhập lại n: ");
// //             scanf("%d", &n);
// //         }

// //     }

// //     for (size_t i = 0; i <= n; i++)
// //     {
// //         sum = sum + 2*i;
// //     }
// //     printf("Sn = %lld", sum);
// // }

// // #include <stdio.h>
// // #include <math.h>

// // int main(){
// //     long long int n;
// //     long long int sum = 0;
// //     printf("Nhập n: ");
// //     scanf("%lld", &n);
// //     if (n < 1 || n > pow(1.0*10, 1.0*16))
// //     {
// //         while (n < 1 || n > pow(1.0*10, 1.0*16))
// //         {
// //             printf("Bạn nhập sai rồi, vui lòng nhập lại n: ");
// //             scanf("%lld", &n);
// //         }
// //     }
// //     for (size_t i = 1; i <= n; i++)
// //     {
// //         sum = sum + pow((-1)*1.0, i*1.0)*i;
// //     }
// //     printf("Sn = %lld", sum);
// // }

// // #include <stdio.h>
// // #include <math.h>
// // int main(){
// //     int a;
// //     int b;
// //     printf("Nhập a: ");
// //     scanf("%d", &a);
// //     printf("Nhập b: ");
// //     scanf("%d", &b);
// //     if (a < b || b < 1 || a > pow(1.0*10, 1.0*8))
// //     {
// //         while (a < b || b < 1 || a > pow(1.0*10, 1.0*8))
// //         {
// //             printf("Bạn nhập sai rồi, vui lòng nhập lại");
// //             printf("\nNhập a: ");
// //             scanf("%d", &a);
// //             printf("Nhập b: ");
// //             scanf("%d", &b);
// //         }
// //     }
// //     int tinhtoan = a/b;
// //     int SoChiaLonNhat = tinhtoan*b;
// //     printf("Số chia lớn nhất: %d", SoChiaLonNhat);
// // }

// // #include <stdio.h>
// // #include <math.h>

// // int main(){
// //     int a;
// //     int b;
// //     printf("Nhập a: ");
// //     scanf("%d", &a);
// //     printf("Nhập b: ");
// //     scanf("%d", &b);
// //     if (a < b || a > pow(1.0*10, 1.0*8) || b < 1)
// //     {
// //         while (a < b || a > pow(1.0*10, 1.0*8) || b < 1)
// //         {
// //             printf("Bạn nhập sai rồi, vui lòng nhập lại");
// //             printf("\nNhập a: ");
// //             scanf("%d", &a);
// //             printf("Nhập b: ");
// //             scanf("%d", &b);
// //         }
// //     }
// //     float tinhtoan = (float)a/b;
// //     if (tinhtoan > (int)tinhtoan)
// //     {
// //          printf("%d",(int)tinhtoan*b + b);
// //     }
// //     else {
// //          printf("%d",(int)tinhtoan*b);
// //     }
// // }

// // #include <stdio.h>
// // #include <math.h>
// // int main(){
// //     int n;
// //     printf("Nhập n: ");
// //     scanf("%d", &n);
// //     if (n < -pow(10*1.0, 18*1.0) || n > pow(1.0*10, 1.0*18))
// //     {
// //         while (n < -pow(10*1.0, 18*1.0) || n > pow(1.0*10, 1.0*18))
// //         {
// //             printf("Bạn nhập sai rồi, vui lòng nhập lại");
// //             printf("\nNhập n: ");
// //             scanf("%d", &n);
// //         }
// //     }
// //     if (abs(n)%2 == 0)
// //     {
// //         printf("%d", 1);
// //     }
// //     else
// //     {
// //         printf("%d", 0);
// //     }
// // }

// // #include <stdio.h>
// // #include <math.h>

// // int main(){
// //     int n;
// //     printf("Nhập n: ");
// //     scanf("%d", &n);
// //     if (n < -pow(1.0*10, 1.0*18) || n > pow(1.0*10, 1.0*18))
// //     {
// //         while (n < -pow(1.0*10, 1.0*18) || n > pow(1.0*10, 1.0*18))
// //         {
// //             printf("Bạn nhập sai rồi, vui lòng nhập lại");
// //             printf("\nNhập n: ");
// //             scanf("%d", &n);
// //         }
// //     }
// //     if (n % 3 == 0 && n % 5 == 0)
// //     {
// //         printf("%d", 1);
// //     }
// //     else
// //     {
// //         printf("%d", 0);
// //     }
// // }

// // #include <stdio.h>
// // #include <math.h>

// // int main(){
// //     int n;
// //     printf("Nhập n: ");
// //     scanf("%d", &n);
// //     if (n < -pow(1.0*10, 1.0*6) || n > pow(1.0*10, 1.0*6))
// //     {
// //         while (n < -pow(1.0*10, 1.0*6) || n > pow(1.0*10, 1.0*6))
// //         {
// //             printf("Bạn nhập sai rồi, vui lòng nhập lại");
// //             printf("\nNhập n: ");
// //             scanf("%d", &n);
// //         }
// //     }
// //     if (n % 400 == 0 || (n % 4 == 0 && n % 100 !=0))
// //     {
// //         printf("YES");
// //     }
// //     else if (n < 0)
// //     {
// //         printf("INVALID");
// //     }
// //     else
// //     {
// //         printf("NO");
// //     }


// // }

// // #include <stdio.h>
// // #include <math.h>

// // int main(){
// //     int thang;
// //     int nam;
// //     printf("Nhập Tháng: ");
// //     scanf("%d", &thang);
// //     printf("Nhập Năm: ");
// //     scanf("%d", &nam);
// //     if (thang < -pow(1.0*10, 1.0*6) || nam > pow(1.0*10, 1.0*6) || nam < 0)
// //     {
// //         while (thang < -pow(1.0*10, 1.0*6) || nam > pow(1.0*10, 1.0*6) || nam < 0)
// //         {
// //             printf("Bạn nhập sai rồi, vui lòng nhập lại");
// //             printf("\nNhập tháng: ");
// //             scanf("%d",&thang);
// //             printf("Nhập năm: ");
// //             scanf("%d", &nam);
// //         }
// //     }
// //     if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0))
// //     {
// //         switch (thang)
// //         {
// //         case 1:
// //             printf("31");
// //             break;
// //         case 2:
// //             printf("29");
// //             break;
// //         case 3:
// //             printf("31");
// //             break;
// //         case 4:
// //             printf("30");
// //             break;
// //         case 5:
// //             printf("31");
// //             break;
// //         case 6:
// //             printf("30");
// //             break;
// //         case 7:
// //             printf("31");
// //             break;
// //         case 8:
// //             printf("31");
// //             break;
// //         case 9:
// //             printf("30");
// //             break;
// //         case 10:
// //             printf("31");
// //             break;
// //         case 11:
// //             printf("30");
// //             break;
// //         case 12:
// //             printf("31");
// //             break;
// //         default:
// //             printf("INVALID");
// //             break;
// //         }
// //     }
// //     else
// //     {
// //         switch (thang)
// //         {
// //         case 1:
// //             printf("31");
// //             break;
// //         case 2:
// //             printf("28");
// //             break;
// //         case 3:
// //             printf("31");
// //             break;
// //         case 4:
// //             printf("30");
// //             break;
// //         case 5:
// //             printf("31");
// //             break;
// //         case 6:
// //             printf("30");
// //             break;
// //         case 7:
// //             printf("31");
// //             break;
// //         case 8:
// //             printf("31");
// //             break;
// //         case 9:
// //             printf("30");
// //             break;
// //         case 10:
// //             printf("31");
// //             break;
// //         case 11:
// //             printf("30");
// //             break;
// //         case 12:
// //             printf("31");
// //             break;
// //         default:
// //             printf("INVALID");
// //             break;
// //         }
// //     }
// // }

// // #include <stdio.h>
// // #include <ctype.h>

// // int main(){
// //     char letter;
// //     printf("Nhập ký tự: ");
// //     scanf("%c", &letter);
// //     if (letter =! toupper(letter))
// //     {
// //         printf("Yes");
// //     }
// //     else
// //     {
// //         printf("No");
// //     }
// // }

// // #include <stdio.h>
// // #include <ctype.h>

// // int main(){
// //     char letter;
// //     printf("Nhập ký tự: ");
// //     scanf("%c", &letter);
// //     if (letter == toupper(letter))
// //     {
// //         printf("Yes");
// //     }
// //     else
// //     {
// //         printf("No");
// //     }
// // }

// // #include <stdio.h>
// // #include <ctype.h>

// // int main(){
// //     char letter;
// //     printf("Nhập ký tự: ");
// //     scanf("%c", &letter);
// //     if (((int)letter >= 65 && (int)letter <= 95) || ((int)letter >= 97 && (int)letter <= 122))
// //     {
// //         printf("YES");
// //     }
// //     else
// //     {
// //         printf("NO");
// //     }
// // }

// // #include <stdio.h>
// // #include <ctype.h>

// // int main(){
// //     char letter;
// //     printf("Nhập ký tự: ");
// //     scanf("%c", &letter);
// //     printf("%c -> %c", letter, tolower(letter));
// // }

// // #include <stdio.h>
// // #include <ctype.h>

// // int main(){
// //     char letter;
// //     printf("Nhập ký tự: ");
// //     scanf("%c", &letter);
// //     printf("%c -> %c", letter, toupper(letter));
// // }

// // #include <stdio.h>
// // #include <ctype.h>
// // int main(){
// //     char letter;
// //     printf("Nhập ký tự: ");
// //     scanf("%c", &letter);
// //     if ((letter >= 65 && letter <= 90) || (letter >= 97 && letter <= 122 ))
// //     {
// //         if (letter = toupper(letter))
// //         {
// //             if (letter == 90)
// //             {
// //                 printf("a");
// //             }
// //             else
// //             {
// //                 printf("%c", (letter += 33));
// //             }
// //         }
// //         else
// //         {
// //             if (letter == 122)
// //             {
// //                 printf("a");
// //             }
// //             else
// //             {
// //             printf("%c",(letter += 1));
// //             }
// //         }
// //     }
// //     else
// //     {
// //         printf("INVALID");
// //     }
// // }


// // #include <stdio.h>
// // #include <math.h>
// // int main(){
// //     int a;
// //     int b;
// //     int c;
// //     int max;
// //     printf("Nhập a: ");
// //     scanf("%d", &a);
// //     printf("Nhập b: ");
// //     scanf("%d", &b);
// //     printf("Nhập c: ");
// //     scanf("%d", &c);
// //     if (a, b, c < -pow(1.0*10, 1.0*6) || a, b, c > pow(1.0*10, 1.0*6))
// //     {
// //         while (a, b, c < -pow(1.0*10, 1.0*6) || a, b, c > pow(1.0*10, 1.0*6))
// //         {
// //             printf("Bạn nhập sai rồi, vui lòng nhập lại");
// //             printf("\nNhập a: ");
// //             scanf("%d", &a);
// //             printf("Nhập b: ");
// //             scanf("%d", &b);
// //             printf("Nhập c: ");
// //             scanf("%d", &c);
// //         }
// //     }
// //     if (a+b > c && a+c > b && b+c > a)
// //     {
// //         printf("YES");
// //     }
// //     else
// //     {
// //         printf("NO");
// //     }
// // }

// // #include <stdio.h>
// // #include <math.h>

// // int main(){
// //     int a;
// //     int b;
// //     int c;
// //     printf("Nhập a: ");
// //     scanf("%d", &a);
// //     printf("Nhập b: ");
// //     scanf("%d", &b);
// //     printf("Nhập c: ");
// //     scanf("%d", &c);
// //     if (a, b, c < -pow(1.0*10, 1.0*6) || a, b, c > pow(1.0*10, 1.0*6))
// //     {
// //         while (a, b, c < -pow(1.0*10, 1.0*6) || a, b, c > pow(1.0*10, 1.0*6))
// //         {
// //             printf("Bạn nhập sai rồi, vui lòng nhập lại");
// //             printf("\nNhập a: ");
// //             scanf("%d", &a);
// //             printf("Nhập b: ");
// //             scanf("%d", &b);
// //             printf("Nhập c: ");
// //             scanf("%d", &c);
// //         }
// //     }
// //     if (a+b > c && a+c > b && b+c > a)
// //     {
// //         if (a == b && b == c && c == a)
// //         {
// //             printf("Tam giác đều");
// //         }
// //         else if (a == b || b == c || c == a)
// //         {
// //             printf("Tam giác cân");
// //         }
// //         else if (pow(c, 2) == pow(a, 2) + pow(b, 2) || pow(b, 2) == pow(c, 2) + pow(a, 2) || pow(a, 2) == pow(b,2) + pow(c, 2))
// //         {
// //             printf("Tam giác vuông");
// //         }
// //         else if ((pow(c, 2) == pow(a, 2) + pow(b, 2) && a == b) || (pow(b, 2) == pow(c, 2) + pow(a, 2) && c == a) || (pow(a, 2) == pow(b,2) + pow(c, 2) && b == c))
// //         {
// //             printf("Tam giác vuông cân");
// //         }
// //         else
// //         {
// //             printf("Tam giác thường");
// //         }
// //     }
// //     else
// //     {
// //         printf("INVALID");
// //     }
// // }

// // #include <stdio.h>
// // #include <math.h>

// // int main(){
// //     float a;
// //     float b;
// //     float c;
// //     float delta;
// //     printf("Nhập a: ");
// //     scanf("%f", &a);
// //     printf("Nhập b: ");
// //     scanf("%f", &b);
// //     printf("Nhập c: ");
// //     scanf("%f", &c);
// //     delta = pow(b, 2) - 4*a*c;
// //     if (delta < 0)
// //     {
// //         printf("Phương trình vô nghiệm");
// //     }
// //     else if (delta == 0)
// //     {
// //         printf("Phương trình có nghiệm kép x1 = x2 = %.2f", (-b/(2*a)));
// //     }
// //     else
// //     {
// //         float x1 = (-b + sqrt(delta))/(2*a);
// //         float x2 = (-b - sqrt(delta))/(2*a);
// //         printf("X1 = %.2f", x1);
// //         printf("\nX2 = %.2f", x2);
// //     }
// // }

// // #include <stdio.h>
// // #include <math.h>
// // int main(){
// //     int n;
// //     int dem = 0;
// //     int i = 2;
// //     printf("Nhập n: ");
// //     scanf("%d", &n);
// //     if (n == 2)
// //     {
// //         printf("Số Nguyên tố");
// //     }
// //     else
// //     {
// //         while (n > i)
// //         {
// //             if (n % i == 0)
// //             {
// //                 dem++;
// //                 break;
// //             }
// //             i++;
// //         }
// //     }
// //     if (dem > 0)
// //     {
// //         printf("Không phải số nguyên tố");
// //     }
// //     else
// //     {
// //         printf("Số Nguyên Tố");
// //     }
// // }
// // #include <stdio.h>
// // int main(){
// //     int a;
// //     int b;
// //     printf("Nhập a: ");
// //     scanf("%d", &a);
// //     printf("Nhập b: ");
// //     scanf("%d", &b);
// //     if (a == b)
// //     {
// //         printf("Ước chung lớn nhất của a và b: %d", a);
// //     }
// //     else
// //     {
// //         while (a!= 0 && b != 0)
// //         {
// //             if (a > b)
// //             {
// //                 a = a % b;
// //             }
// //             else if (a < b)
// //             {
// //                 b = b % a;
// //             }
// //         }
// //     }
// //     if (a != 0)
// //     {
// //         printf("Ước chung lớn nhất của a và b: %d", a);
// //     }
// //     else
// //     {
// //         printf("Ước chung lớn nhất của a và b: %d", b);
// //     }

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#define pi 3.14159265359;
float Sum();
float Subtraction();
float Multiplecation();
float Division();
float Perimeter_Circle();
float Area_Circle();
float Distance();
float C_To_F();
float Absolute_Value();
float Power();
float N_Root();
float Sum_N_Plus_One();
float Sum_N_Pow_Two();
float Sum_N_Nth();
float Sum_Two_Pow_N();
float Sum_Pow_Multiple_N();
float Largest_Divisor();
float Smallest_Divisor();
void Even_And_Odd_Number();
void Divisor_To3_Or_To5();
void Checking_Leap_Year();
void Checking_How_Many_Days_In_Month();
void Checking_LowerCase();
void Checking_UpperCase();
void Checking_Letter();
void Checking_Number();
void Convert_UpperCase_To_LowerCase();
void Convert_LowerCase_To_UpperCase();
void GoTo_Next_Char();
void Valid_Triangel();
void Quadratic_Equation();
void Prime_Number();
void GCD();
void Print_Empty_Rectangle();
void Print_Empty_Oval();
void Print_Arrow();
void Print_Empty_Rhombus();
void Print_Triangle_Left();
void Print_Isosceles_Triangle();
void Print_Empty_Isosceles_Triangle();
void Print_Triangle_Right();
void Print_Triangle_Left_Rotate_Down();
void Print_Isosceles_Triangle_Rotate_Down();
void Print_Triangle_Right_Rotate_Down();
void Print_Empty_Isoceles_Triagle_Rotate_Down();

int main() {
    int Choice;
    printf_s("Chào mừng tới Big Program");
    printf_s("\n***************************************************");
    printf_s("\n*1. Tính tổng, hiệu, tích, thương                 *");
    printf_s("\n*2. Tính chu vi, diện tích hình tròn              *");
    printf_s("\n*3. Tính khoảng cách vecto                        *");
    printf_s("\n*4. Chuyển đổi đơn vị đo C và F                   *");
    printf_s("\n*5. Tìm giá trị tuyệt đối của số nguyên           *");
    printf_s("\n*6. Luỹ Thừa                                      *");
    printf_s("\n*7. Tìm căn bậc 2                                 *");
    printf_s("\n*8. tính tổng tăng dần Sn = 1 + 2 + 3 + ... + n   *");
    printf_s("\n*9. Tính tổng luỹ thừa 2 tăng dần                 *");
    printf_s("\n*10. Tính tổng tăng dần phân số                   *");
    printf_s("\n*11. Tính Tổng nhân tăng dần                      *");
    printf_s("\n*12. Tính tổng luỹ thừa có âm tăng dần            *");
    printf_s("\n*13. Tìm số chia hết lớn nhất                     *");
    printf_s("\n*14. Số chia hết nhỏ nhất                         *");
    printf_s("\n*15. Kiểm tra số chẵn lẻ                          *");
    printf_s("\n*16. Kiểm tra số chia hết cho 3 và 5              *");
    printf_s("\n*17. Kiểm tra năm nhuận                           *");
    printf_s("\n*18. In ra số ngày của tháng                      *");
    printf_s("\n*19. Kiểm tra chữ in thường                       *");
    printf_s("\n*20. Kiểm tra chữ in hoa                          *");
    printf_s("\n*21. Kiểm tra chữ cái                             *");
    printf_s("\n*22. Kiểm tra chữ số                              *");
    printf_s("\n*23. Chuyển ký tự in hoa thành in thường          *");
    printf_s("\n*24. Chuyển ký tự in thường thành in hoa          *");
    printf_s("\n*25. Chữ cái kế tiếp                              *");
    printf_s("\n*26. Số lớn số nhỏ                                *");
    printf_s("\n*27. Tam giác hợp lệ                              *");
    printf_s("\n*28. Kiểm tra tam giác                            *");
    printf_s("\n*29. Chuyển đổi ngày sang tháng, năm, ngày        *");
    printf_s("\n*30. Phương trình bậc 2                           *");
    printf_s("\n*31. Xác định số nguyên tố                        *");
    printf_s("\n*31. Tìm GCD (UCLN)                               *");
    printf_s("\n*32. In ra các hình 2d với *                      *");
    printf_s("\n***************************************************");
    printf_s("\nXin mời nhập lựa chọn = ");
    scanf_s("%d", &Choice);
    if (Choice <= 0 || Choice > 32)
    {
        while (Choice <= 0 || Choice > 32)
        {
            printf_s("Bạn nhập sai rồi, vui lòng nhập lại");
            printf_s("\n***************************************************");
            printf_s("\n*1. Tính tổng, hiệu, tích, thương                 *");
            printf_s("\n*2. Tính chu vi, diện tích hình tròn              *");
            printf_s("\n*3. Tính khoảng cách vecto                        *");
            printf_s("\n*4. Chuyển đổi đơn vị đo C và F                   *");
            printf_s("\n*5. Tìm giá trị tuyệt đối của số nguyên           *");
            printf_s("\n*6. Luỹ Thừa                                      *");
            printf_s("\n*7. Tìm căn bậc 2                                 *");
            printf_s("\n*8. tính tổng tăng dần Sn = 1 + 2 + 3 + ... + n   *");
            printf_s("\n*9. Tính tổng luỹ thừa 2 tăng dần                 *");
            printf_s("\n*10. Tính tổng tăng dần phân số                   *");
            printf_s("\n*11. Tính Tổng nhân tăng dần                      *");
            printf_s("\n*12. Tính tổng luỹ thừa có âm tăng dần            *");
            printf_s("\n*13. Tìm số chia hết lớn nhất                     *");
            printf_s("\n*14. Số chia hết nhỏ nhất                         *");
            printf_s("\n*15. Kiểm tra số chẵn lẻ                          *");
            printf_s("\n*16. Kiểm tra số chia hết cho 3 và 5              *");
            printf_s("\n*17. Kiểm tra năm nhuận                           *");
            printf_s("\n*18. In ra số ngày của tháng                      *");
            printf_s("\n*19. Kiểm tra chữ in thường                       *");
            printf_s("\n*20. Kiểm tra chữ in hoa                          *");
            printf_s("\n*21. Kiểm tra chữ cái                             *");
            printf_s("\n*22. Kiểm tra chữ số                              *");
            printf_s("\n*23. Chuyển ký tự in hoa thành in thường          *");
            printf_s("\n*24. Chuyển ký tự in thường thành in hoa          *");
            printf_s("\n*25. Chữ cái kế tiếp                              *");
            printf_s("\n*26. Số lớn số nhỏ                                *");
            printf_s("\n*27. Tam giác hợp lệ                              *");
            printf_s("\n*28. Kiểm tra tam giác                            *");
            printf_s("\n*29. Chuyển đổi ngày sang tháng, năm, ngày        *");
            printf_s("\n*30. Phương trình bậc 2                           *");
            printf_s("\n*31. Xác định số nguyên tố                        *");
            printf_s("\n*31. Tìm GCD (UCLN)                               *");
            printf_s("\n*32. In ra các hình 2d với *                      *");
            printf_s("\n***************************************************");
            printf_s("\nXin mời nhập lựa chọn = ");
            scanf_s("%d", &Choice);
            getchar();
        }

    }

    switch (Choice)
    {
    case 1:
    {
        int Case1_Choice;
        system("cls");
        printf_s("*1. Tính tổng                                     *");
        printf_s("\n*2. Tính hiệu                                     *");
        printf_s("\n*3. Tính tích                                     *");
        printf_s("\n*4. Tính thương                                   *");
        printf_s("\nLựa chọn = ");
        scanf_s("%d", &Case1_Choice);
        switch (Case1_Choice)
        {
        case 1:
        {
            system("cls");
            printf_s("Bạn chọn tính tổng của n tham số");
            printf_s("Tổng các phần tử là: %.2f", Sum());
            break;
        }
        case 2:
        {
            system("cls");
            printf_s("Bạn chọn tính hiệu của n tham số");
            printf_s("Hiệu các phần tử là: %.2f", Subtraction());
            break;
        }
        case 3:
        {
            system("cls");
            printf_s("Bạn chọn tính nhân của n tham số");
            printf_s("Tích của các phần tử là: %.2f", Multiplecation());
            break;
        }
        case 4:
        {
            system("cls");
            printf_s("Bạn chọn tính thương của n tham số");
            printf_s("Thương của các phần tử là: %.2f");
        }

        default:
            break;
        }
    }
    case 2:
    {
        int Case2_Choice;
        system("cls");
        printf_s("*1. Tính chu vi hình tròn                          *");
        printf_s("*2. Tính diện tích hình tròn                       *");
        printf_s("Lựa chọn = ");
        scanf_s("%d", &Case2_Choice);
        switch (Case2_Choice)
        {
        case 1:
        {   system("cls");
            printf_s("Bạn chọn tính chu vi hình tròn");
            printf_s("\n");
            printf_s("Chu vi hình tròn là: %2f", Perimeter_Circle());
            break;
        }
        case 2:
        {
            system("cls");
            printf_s("Bạn chọn tính diện tích hình tròn");
            printf_s("\n");
            printf_s("Diện tích hình tròn là: %.2f", Area_Circle());
            break;
        }
        default:
            break;
        }
    }
    case 3:
    {
        system("cls");
        printf_s("Bạn chọn tính khoảng cách Vecto");
        printf_s("\n");
        printf_s("Khoảng cách của 2 vecto là: %.2f", Distance());
        break;
    }
    case 4:
    {
        system("cls");
        printf_s("Bạn chọn chuyển đổi từ độ C sang độ F");
        printf_s("\n");
        printf_s("C -> F: %.2f", C_To_F());
        break;
    }
    case 5:
    {
        system("cls");
        printf_s("Bạn chọn tìm trị tuyệt đối của tham số");
        printf_s("\n");
        printf_s("Trị tuyệt đối của tham số là: %.2f", Absolute_Value());
        break;
    }
    case 6:
    {
        system("cls");
        printf_s("Bạn chọn tìm luỹ thừa n của tham số");
        printf_s("\n");
        printf_s("Luỹ thừa của tham số là: %.2f", Power());
        break;
    }
    case 7:
    {
        system("cls");
        printf_s("Bạn chọn tìm căn bậc n của tham số");
        printf_s("\n");
        printf_s("Căn bậc n của tham số là: %.2f", N_Root());
        break;
    }
    case 8:
    {
        printf_s("Bạn chọn tính tổng Sn = 1 + 2 + 3 + ... + n");
        printf_s("\n");
        printf_s("Sn = %.2f", Sum_N_Plus_One());
        break;
    }
    case 9:
    {
        system("cls");
        printf_s("Bạn chọn tính tổng Sn = 1^2 + 2^2 + 3^2 + 4^2 + 5^2 + ... + n^2");
        printf_s("\n");
        printf_s("Sn = %.2f", Sum_N_Pow_Two());
        break;
    }
    case 10:
    {
        system("cls");
        printf_s("Bạn chọn tính tổng Sn = 1/(1*2) + 1/(2*3) + 1/(3*4) + ... + 1/(n*(n+1))");
        printf_s("\n");
        printf_s("Sn = %.2f", Sum_N_Nth());
        break;
    }
    case 11:
    {
        system("cls");
        printf_s("Bạn chọn tính tổng Sn = 2 + 4 + 6 + 8 + ... + 2^n");
        printf_s("\n");
        printf_s("Sn = %.2f", Sum_N_Pow_Two);
        break;
    }
    case 12:
    {
        system("cls");
        printf_s("Bạn chọn tính tổng Sn = -1 + 2 - 3 + 4 - 5 + 6 + .... + (-1)^n*n ");
        printf_s("\n");
        printf_s("Sn = %.2f", Sum);
        break;
    }
    case 13:
    {
        system("cls");
        printf_s("Bạn chọn tìm số chia hết lớn nhất");
        printf_s("\n");
        printf_s("Số chia hết lớn nhất là: %.2f", Largest_Divisor());
        break;
    }
    case 14:
    {
        system("cls");
        printf_s("Bạn chọn tìm số chia hết nhỏ nhất");
        printf_s("\n");
        printf_s("Số chia hết nhỏ nhất là: %.2f", Smallest_Divisor());
        break;
    }
    case 15:
    {
        system("cls");
        printf_s("Bạn chọn kiểm tra số chẵn lẻ: ");
        printf_s("\n");
        Even_And_Odd_Number();
        break;
    }
    case 16:
    {
        system("cls");
        printf_s("Bạn chọn kiểm tra số chia hết cho 3 và 5");
        printf_s("\n");
        Divisor_To3_Or_To5();
        break;
    }
    case 17:
    {
        system("cls");
        printf_s("Bạn chọn kiểm tra năm nhuận");
        printf_s("\n");
        Checking_Leap_Year();
        break;
    }
    case 18:
    {
        system("cls");
        printf_s("Bạn chọn in ra số ngày của tháng");
        printf_s("\n");
        Checking_How_Many_Days_In_Month();
        break;
    }
    case 19:
    {
        system("cls");
        printf_s("Bạn chọn kiểm tra chữ in thường");
        printf_s("\n");
        Checking_LowerCase();
        break;
    }
    case 20:
    {
        system("cls");
        printf_s("Bạn chọn kiểm tra chữ in hoa");
        printf_s("\n");
        Checking_UpperCase();
        break;
    }
    case 21:
    {
        system("cls");
        printf_s("Bạn chọn kiểm tra chữ cái");
        printf_s("\n");
        Checking_Letter();
        break;
    }
    case 22:
    {
        system("cls");
        printf_s("Bạn chọn kiểm tra chữ số");
        printf_s("\n");
        Checking_Number();
        break;
    }
    case 23:
    {
        system("cls");
        printf_s("Bạn chọn chuyển ký tự in hoa thành in thường");
        printf_s("\n");
        Convert_UpperCase_To_LowerCase();
        break;
    }
    case 24:
    {
        system("cls");
        printf_s("Bạn chọn chuyển ký tự in thường thành in hoa");
        printf_s("\n");
        Convert_LowerCase_To_UpperCase();
        break;
    }
    case 25:
    {
        system("cls");
        printf_s("Bạn chọn tìm chữ cái kế tiếp");
        printf_s("\n");
        GoTo_Next_Char();
        break;
    }
    case 28:
    {
        system("cls");
        printf_s("Bạn chọn kiểm tra tam giác hợp lệ");
        printf_s("\n");
        Valid_Triangel();
        break;
    }
    case 29:
    {
        system("cls");
        printf_s("Bạn chọn tính phương trình bậc 2");
        printf_s("\n");
        Quadratic_Equation();
        break;
    }
    case 30:
    {
        system("cls");
        printf_s("Bạn chọn tìm số nguyên tố: ");
        printf_s("\n");
        Prime_Number();
        break;
    }
    case 31:
    {
        system("cls");
        printf_s("Bạn chọn tìm Ước chung lớn nhất");
        printf_s("\n");
        GCD();
        break;
    }
    case 32:
    {
        system("cls");
        printf_s("Bạn chọn In ra hình 2d với *");
        printf_s("\n*1. In hình chữ nhật                              *");
        printf_s("\n*2. In hình bầu dục                               *");
        printf_s("\n*3. In hình tam giác sát lề trái                  *");
        printf_s("\n*4. In hình tam giác cân                          *");
        printf_s("\n*5. In hình tam giác cân rỗng                     *");
        printf_s("\n*6. In hình tam giác sát phải                     *");
        printf_s("\n*7. In hình tam giác sát lề trái ngược            *");
        printf_s("\n*8. In hình tam giác cân ngược                    *");
        printf_s("\n*9. In hình tam giác cân rỗng ngược               *");
        printf_s("\n*10. In hình tam giác sát phải ngược              *");
        printf_s("\n*11. In hình mũi tên (Still Developing)           *");
        printf_s("\n*12. In hình thoi (Still Developing)              *");
        int Case32_Choice;
        printf_s("\nNhập lựa chọn: ");
        scanf_s("%d", &Case32_Choice);
        switch (Case32_Choice)
        {
        case 1:
        {                
            system("cls");
            printf_s("Bạn lựa chọn in hình chữ nhật");
            printf_s("\n");
            Print_Empty_Rectangle();
            break;
        }
        case 2:
        {
            system("cls");
            printf_s("Bạn lựa chọn in hình bầu dục");
            printf_s("\n");
            Print_Empty_Oval();
            break;
        }
        case 3:
        {
            system("cls");
            printf_s("Bạn lựa chọn in hình tam giác sát lề trái");
            printf_s("\n");
            Print_Triangle_Left();   
            break;
        }
        case 4:
        {
            system("cls");
            printf_s("Bạn chọn in hình tam giác cân");
            printf_s("\n");
            Print_Isosceles_Triangle();
            break;
        }
        case 5:
        {
            system("cls");
            printf_s("Bạn chọn in hình tam giác cân rỗng");
            printf_s("\n");
            Print_Empty_Isosceles_Triangle();
            break;
        }
        case 6:
        {
            system("cls");
            printf_s("Bạn chọn in hình tam giác sát lề phải");
            printf_s("\n");
            Print_Triangle_Right();
            break;
        }
        case 7:
        {
            system("cls");
            printf_s("Bạn chọn in hình tam giác lề trái ngược");
            printf_s("\n");
            Print_Triangle_Left_Rotate_Down();
            break;
        }
        case 8:
        {
            system("cls");
            printf_s("Bạn chọn in hình tam giác cân ngược");
            printf_s("\n");
            Print_Isosceles_Triangle_Rotate_Down();
            break;
        }
        case 9:
        {
            system("cls");
            printf_s("Bạn chọn in hình tam giác cân rỗng ngược");
            printf_s("\n");
            Print_Empty_Isoceles_Triagle_Rotate_Down();
            break;
        }
        case 10:
        {
            system("cls");
            printf_s("Bạn chon in hình tam giác sát lề phải ngược");
            printf_s("\n");
            Print_Triangle_Right_Rotate_Down();
        }
        
        default:
            break;
        }
    }
    default:
        break;
    }
    system("Pause");
}

float Sum() {
    printf("\nNhập số tham số (Max = 255): ");
    int n;
    scanf_s("%d", &n);
    if (n > 255 || n < 0)
    {
        while (n > 255 || n < 0)
        {
            printf("Bạn nhập sai rồi, vui lòng nhập lại");
            printf("Nhập số tham số (Max = 255): ");
            scanf_s("%d", &n);
        }
    }
    printf("Nhập số bạn muốn tính tổng");
    printf_s("\n");
    float ArraySum[255];
    for (size_t i = 0; i < n; i++)
    {
        printf("nhập Arr[");
        printf("%d", i);
        printf("] = ");
        scanf_s("%f", &ArraySum[i]);
    }
    float sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        sum = sum + ArraySum[i];
    }
    return sum;
}

float Subtraction(){
    printf("\nNhập số tham số (Max = 255): ");
    int n;
    scanf_s("%d", &n);
    if (n > 255 || n < 0)
    {
        while (n > 255 || n < 0)
        {
            printf("Bạn nhập sai rồi, vui lòng nhập lại");
            printf("Nhập số tham số (Max = 255): ");
            scanf_s("%d", &n);
        }
    }
    printf("Nhập số bạn muốn tính hiệu");
    printf_s("\n");
    float ArraySubtraction[255];
    for (size_t i = 0; i < n; i++)
    {
        printf("nhập Arr[");
        printf("%d", i);
        printf("] = ");
        scanf_s("%f", &ArraySubtraction[i]);
    }
    float Subtraction = ArraySubtraction[0];
    for (size_t i = 1; i < n; i++)
    {
        Subtraction = Subtraction - ArraySubtraction[i];
    }
    return Subtraction;
}

float Multiplecation(){
    printf("\nNhập số tham số (Max = 255): ");
    int n;
    scanf_s("%d", &n);
    if (n > 255 || n < 0)
    {
        while (n > 255 || n < 0)
        {
            printf("Bạn nhập sai rồi, vui lòng nhập lại");
            printf("Nhập số tham số (Max = 255): ");
            scanf_s("%d", &n);
        }
    }
    printf("Nhập số bạn muốn tính nhân");
    printf_s("\n");
    float ArrayMultiplecation[255];
    for (size_t i = 0; i < n; i++)
    {
        printf_s("nhập Arr[");
        printf_s("%d", i);
        printf_s("] = ");
        scanf_s("%f", &ArrayMultiplecation[i]);
    }
    float Multiplecation = ArrayMultiplecation[1];
    for (size_t i = 1; i < n; i++)
    {
        Multiplecation = Multiplecation + ArrayMultiplecation[i];
    }
    return Multiplecation;
}

float Perimeter_Circle(){
    printf_s("Nhập bán kính: ");
    float r;
    scanf_s("%f", &r);
    float Perimeter_Circle = 2*r*pi;
    return Perimeter_Circle;
}

float Area_Circle(){
    printf_s("Nhập bán kính: ");
    float r;
    scanf_s("%f", &r);
    float Area_Circle = pow(r, 2)*pi;
    return Area_Circle;
}

float Distance(){
    float x1;
    float y1;
    printf_s("Nhập A(x, y): ");
    scanf_s("%f %f", &x1, &y1);
    float x2;
    float y2;
    printf_s("Nhập B(x, y): ");
    scanf_s("%f %f", &x2, &y2);
    float Distance = sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1), 2)));
    return Distance;
}

float C_To_F(){
    float C;
    printf_s("Nhập độ C: ");
    scanf_s("%f", &C);
    float C_To_F = (C*9/5) + 32;
    return C_To_F;
}

float Absolute_Value(){
    float Orginal_Value;
    printf_s("Nhập số cần tìm: ");
    scanf_s("%f", &Orginal_Value);

}

float Power(){
    float Original_Value;
    float n;
    printf_s("Nhập số cần tìm: ");
    scanf_s("%f", &Original_Value);
    printf_s("Nhập luỹ thừa bạn muốn tìm: ");
    scanf_s("%f", &n);
    float Power = pow(Original_Value, n);
    return Power;
}

float N_Root(){
    float Original_Value;
    float n;
    printf_s("Nhập số cần tìm: ");
    scanf_s("%f", &Original_Value);
    printf("Nhập căn bậc n: ");
    scanf_s("%f", &n);
    float N_Root = pow(Original_Value, 1/n);
    return N_Root;
}

float Sum_N_Plus_One(){
    int n;
    float sum = 0;
    printf_s("Nhập n:  ");
    scanf_s("%d", &n);
    for (size_t i = 1; i < n; i++)
    {
        sum = sum + i;
    }
}

float Sum_N_Pow_Two(){
    int n;
    float sum = 0;
    printf_s("Nhập n: ");
    scanf_s("%d", &n);
    for (size_t i = 0; i < n; i++)
    {
        sum = sum + pow(i, 2);
    }
    return sum;
}

float Sum_N_Nth(){
    int n;
    float sum = 0;
    printf("Nhập n: ");
    scanf_s("%d", &n);
    for (size_t i = 0; i < n; i++)
    {
        sum = sum + 1/(n*(n+1));
    }
    return sum;
}

float Largest_Divisor(){
    int a;
    int b;
    printf_s("Nhập a: ");
    scanf_s("%d", &a);
    printf_s("Nhập b: ");
    scanf_s("%d", &b);
    int Largest_Divisor = (a/b)*b;
    return Largest_Divisor;
}

float Smallest_Divisor(){
    int a;
    int b;
    printf_s("Nhập a: ");
    scanf_s("%d", &a);
    printf_s("Nhập b: ");
    scanf_s("%d", &b);
    if ((float)a/b > (int)a/b)
    {
        return ((int)a/b)*b + b;
    }
    else
    {
        return ((int)a/b)*b;
    }
} 

void Even_And_Odd_Number(){
    int n;
    printf_s("Nhập số cần kiểm tra: ");
    scanf_s("%d", &n);
    if (n % 2 == 0)
    {
        printf_s("Số chẵn");
    }
    else
    {
        printf_s("Số lẻ");
    }
    
}

void Divisor_To3_Or_To5(){
    int n;
    printf_s("Nhập số bạn cần kiểm tra: ");
    scanf("%d", &n);
    if (n % 3 == 0 && n % 5 == 0)
    {
        printf_s("True");
    }
    else
    {
        printf_s("False");
    }
    
}
void Checking_Leap_Year(){
    int n;
    printf_s("Nhập năm kiểm tra: ");
    scanf_s("%d", &n);
    if (n % 400 == 0 || (n % 4 == 0 && n % 100 !=0))
    {
        printf_s("Năm nhuận");
    }
    else if (n < 0)
    {
        printf_s("không hợp lệ");
    }
    else
    {
        printf_s("Năm không nhuận");
    }
}

void Checking_How_Many_Days_In_Month(){
    int month;
    int year;
    printf_s("Nhập tháng: ");
    scanf("%d", &month);
    printf_s("Nhập năm: ");
    scanf_s("%d", &year);
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        switch (month)
        {
        case 1:
            printf("31");
            break;
        case 2:
            printf("29");
            break;
        case 3:
            printf("31");
            break;
        case 4:
            printf("30");
            break;
        case 5:
            printf("31");
            break;
        case 6:
            printf("30");
            break;
        case 7:
            printf("31");
            break;
        case 8:
            printf("31");
            break;
        case 9:
            printf("30");
            break;
        case 10:
            printf("31");
            break;
        case 11:
            printf("30");
            break;
        case 12:
            printf("31");
            break;
        default:
            break;
        }
    }

    else if (year < 0)
    {
        printf_s("Không tồn tại năm âm");
    }

    else
    {
        switch (month)
        {
        case 1:
            printf("31");
            break;
        case 2:
            printf("28");
            break;
        case 3:
            printf("31");
            break;
        case 4:
            printf("30");
            break;
        case 5:
            printf("31");
            break;
        case 6:
            printf("30");
            break;
        case 7:
            printf("31");
            break;
        case 8:
            printf("31");
            break;
        case 9:
            printf("30");
            break;
        case 10:
            printf("31");
            break;
        case 11:
            printf("30");
            break;
        case 12:
            printf("31");
            break;
        default:
            break;
        }
    }
}

void Checking_LowerCase(){
    printf_s("Nhập chữ cái bạn cần kiểm tra: ");
    char letter;
    scanf_s("%c", &letter);
    if (letter == tolower(letter))
    {
        printf_s("True");
    }
    else
    {
        printf_s("False");
    }
}

void Checking_UpperCase(){
    printf_s("Nhập chữ cái cần kiểm tra: ");
    char letter;
    scanf_s("%c", &letter);
    if (letter == toupper(letter))
    {
        printf_s("True");
    }
    else
    {
        printf_s("False");
    }
}

void Checking_Letter(){
    printf_s("Nhập chữ cái cần kiểm tra: ");
    char letter;
    scanf_s("%c", &letter);
    if (((int)letter >= 65 && (int)letter <= 95) || ((int)letter >= 97 && (int)letter <= 122))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}

void Checking_Number(){
    printf_s("Nhập chữ số bạn cần kiểm tra: ");
    char n;
    scanf_s("%c", &n);
    if (isdigit((int)n))
    {
        printf_s("True");
    }
    else
    {
        printf_s("False");
    }
}

void Convert_UpperCase_To_LowerCase(){
    printf_s("Nhập ký tự in hoa bạn cần chuyển đổi: ");
    char n;
    scanf_s("%c", &n);
    printf_s("%c", tolower(n));
}

void Convert_LowerCase_To_UpperCase(){
    printf_s("Nhập ký tự in thường bạn cần chuyển đổi: ");
    char n;
    scanf_s("%c", &n);
    printf_s("%c", toupper(n));
}

void GoTo_Next_Char(){
    char letter;
    printf("Nhập ký tự: ");
    scanf("%c", &letter);
    if ((letter >= 65 && letter <= 90) || (letter >= 97 && letter <= 122 ))
    {
        if (letter = toupper(letter))
        {
            if (letter == 90)
            {
                printf("a");
            }
            else
            {
                printf("%c", (letter += 33));
            }
        }
        else
        {
            if (letter == 122)
            {
                printf("a");
            }
            else
            {
            printf("%c",(letter += 1));
            }
        }
    }
    else
    {
        printf("INVALID");
    }
}

void Valid_Triangel(){
    int a;
    int b;
    int c;
    printf("Nhập a: ");
    scanf("%d", &a);
    printf("Nhập b: ");
    scanf("%d", &b);
    printf("Nhập c: ");
    scanf("%d", &c);
    if (a, b, c < -pow(1.0*10, 1.0*6) || a, b, c > pow(1.0*10, 1.0*6))
    {
        while (a, b, c < -pow(1.0*10, 1.0*6) || a, b, c > pow(1.0*10, 1.0*6))
        {
            printf("Bạn nhập sai rồi, vui lòng nhập lại");
            printf("\nNhập a: ");
            scanf("%d", &a);
            printf("Nhập b: ");
            scanf("%d", &b);
            printf("Nhập c: ");
            scanf("%d", &c);
        }
    }
    if (a+b > c && a+c > b && b+c > a)
    {
        if (a == b && b == c && c == a)
        {
            printf("Tam giác đều");
        }
        else if (a == b || b == c || c == a)
        {
            printf("Tam giác cân");
        }
        else if (pow(c, 2) == pow(a, 2) + pow(b, 2) || pow(b, 2) == pow(c, 2) + pow(a, 2) || pow(a, 2) == pow(b,2) + pow(c, 2))
        {
            printf("Tam giác vuông");
        }
        else if ((pow(c, 2) == pow(a, 2) + pow(b, 2) && a == b) || (pow(b, 2) == pow(c, 2) + pow(a, 2) && c == a) || (pow(a, 2) == pow(b,2) + pow(c, 2) && b == c))
        {
            printf("Tam giác vuông cân");
        }
        else
        {
            printf("Tam giác thường");
        }
    }
    else
    {
        printf("INVALID");
    }
}

void Quadratic_Equation(){
    float a;
    float b;
    float c;
    float delta;
    printf("Nhập a: ");
    scanf("%f", &a);
    printf("Nhập b: ");
    scanf("%f", &b);
    printf("Nhập c: ");
    scanf("%f", &c);
    delta = pow(b, 2) - 4*a*c;
    if (delta < 0)
    {
        printf("Phương trình vô nghiệm");
    }
    else if (delta == 0)
    {
        printf("Phương trình có nghiệm kép x1 = x2 = %.2f", (-b/(2*a)));
    }
    else
    {
        float x1 = (-b + sqrt(delta))/(2*a);
        float x2 = (-b - sqrt(delta))/(2*a);
        printf("X1 = %.2f", x1);
        printf("\nX2 = %.2f", x2);
    }
}

void Prime_Number(){
    int n;
    int dem = 0;
    int i = 2;
    printf("Nhập n: ");
    scanf("%d", &n);
    if (n == 2)
    {
        printf("Số Nguyên tố");
    }
    else
    {
        while (n > i)
        {
            if (n % i == 0)
            {
                dem++;
                break;
            }
            i++;
        }
    }
    if (dem > 0)
    {
        printf("Không phải số nguyên tố");
    }
    else
    {
        printf("Số Nguyên Tố");
    }    
}

void GCD(){
    int a;
    int b;
    printf("Nhập a: ");
    scanf("%d", &a);
    printf("Nhập b: ");
    scanf("%d", &b);
    if (a == b)
    {
        printf("Ước chung lớn nhất của a và b: %d", a);
    }
    else
    {
        while (a!= 0 && b != 0)
        {
            if (a > b)
            {
                a = a % b;
            }
            else if (a < b)
            {
                b = b % a;
            }
        }
    }
    if (a != 0)
    {
        printf("Ước chung lớn nhất của a và b: %d", a);
    }
    else
    {
        printf("Ước chung lớn nhất của a và b: %d", b);
    }   
}

void Print_Empty_Rectangle()
{
    int height;
    int width;
    printf_s("Nhập chiều Ngang: ");
    scanf_s("%d", &width);
    printf_s("Nhập chiều dọc: ");
    scanf_s("%d", &height);
    for (size_t i = 1; i <= height; i++)
    {
        for (size_t j = 1; j <= width; j++)
        {
            if (i == 0)
            {
                printf_s("*");
            }
            else if (i == height)
            {
                printf_s("*");
            }
            else
            {
                if (j == 0 || j == width)
                {
                    printf_s("*");
                }
                else
                {
                    printf_s(" ");
                }
            }
        }
        printf_s("\n");
    }
    
}

void Print_Empty_Oval(){
    int height;
    int width;
    printf_s("Nhập chiều ngang: ");
    scanf_s("%d", &width);
    printf_s("Nhập chiều dọc: ");
    scanf_s("%d", &height);
    for (size_t i = 1; i <= height; i++)
    {
        for (size_t j = 1; j <= width; j++)
        {
            if (i == 1)
            {
                if (j > 2 && j <= width - 2)
                {
                    printf_s("*");
                }
                else
                {
                    printf_s(" ");
                }
            }
            else if (i == 2)
            {
                if (j == 2 || j == width - 1)
                {
                    printf_s("*");
                }
                else
                {
                    printf_s(" ");
                }
            }
            else if(i > 2 && i <= height - 2)
            {
                if (j == 1 || j == width)
                {
                    printf_s("*");
                }
                else
                {
                    printf_s(" ");
                }
            }
            else if (i == height - 1)
            {
                if (j == 2 || j == width - 1)
                {
                    printf_s("*");
                }
                else
                {
                    printf_s(" ");
                }
            }
            else if (i == height)
            {
                
                if (j > 2 && j <= width - 2)
                {
                    printf_s("*");
                }
                else
                {
                    printf_s(" ");
                }
            }
        }
        printf_s("\n");
    }
}

void Print_Triangle_Left(){
    int height;
    printf_s("Nhập chiều dọc: ");
    scanf_s("%d", &height);
    for (size_t i = 1; i <= height; i++)
    {
        for (size_t j = i ;j <= height; j++)
        {   
            printf_s("*");
        }

        printf_s("\n");
    }
}

void Print_Triangle_Left_Rotate_Down(){
    int height;
    printf_s("Nhập chiều dọc: ");
    scanf_s("%d", &height);
    for (size_t i = 1; i <= height; i++)
    {
        for (size_t j = 1; j <= i; j++)
        {
            printf_s("*");
        }
        printf_s("\n");
    }
}

void Print_Isosceles_Triangle(){
    int height;
    printf_s("Nhập chiều dọc: ");
    scanf_s("%d", &height);
    int temp1 = 0;
    for (size_t i = 1; i <= height; i++)
    {
        for (size_t j = 1; j <= height + height - 1; j++)
        {
            if (j >= height - temp1 && j <= height + temp1)         // giống như 1 khoảng số
            {
                printf_s("*");
            }
            else
            {
                printf_s(" ");
            }
        }
        printf_s("\n");
        temp1++;
    }
}

void Print_Empty_Isosceles_Triangle(){
    int height;
    printf_s("Nhập chiều cao: ");
    scanf_s("%d", &height);
    int temp = 0;
    for (size_t i = 1; i <= height; i++)
    {
        for (size_t j = 1; j <= height*2 - 1; j++)
        {
            if (i == 1 && j == height)
            {
                printf_s("*");
            }
            else if ((i >= 2 && i < height) && (j == height + temp || j == height - temp))
            {
                printf_s("*");
            }
            else if (i == height)
            {
                printf_s("*");
            }
            else
            {
                printf_s(" ");
            }
        }
        printf_s("\n");
        temp++;
    }
}

void Print_Triangle_Right(){
    int height;
    printf_s("Nhập chiều dọc: ");
    scanf_s("%d", &height);
    for (size_t i = 1; i <= height; i++)
    {
        for (size_t j = 1; j <= height; j++)
        {
            if (j >= i)
            {
                printf_s("*");
            }
            else
            {
                printf_s(" ");
            }
        }
        printf_s("\n");
    }
}

void Print_Isosceles_Triangle_Rotate_Down(){
    int height;
    int temp = 0;
    printf_s("Nhập chiều dọc: ");
    scanf_s("%d", &height);
    for (size_t i = 1; i <= height; i++)
    {
        for (size_t j = 1; j <= height*2 - 1; j++)
        {
            if (j <= temp || j > height*2 - 1 - temp)
            {
                printf_s(" ");
            }
            else
            {
                printf_s("*");
            }
            
        }
        printf_s("\n");
        temp++;
    }
}

void Print_Empty_Isoceles_Triagle_Rotate_Down(){
    int height;
    printf_s("Nhập chiều dọc: ");
    scanf_s("%d", &height);
    int temp = height - 1;
    for (size_t i = 1; i <= height; i++)
    {
        for (size_t j = 1; j <= height*2 - 1; j++)
        {
            if (i == 1)
            {
                printf_s("*");
            }
            else if ((i >= 2 && i < height) && (j == height + temp || j == height - temp))
            {
                printf_s("*");
            }
            else if (i == height && j == height)
            {
                printf_s("*");
            }
            else
            {
                printf_s(" ");
            }
        }
        printf_s("\n");
        temp--;
    }
}

void Print_Triangle_Right_Rotate_Down(){
    int height;
    int temp = 0;
    printf_s("Nhập chiều dọc: ");
    scanf_s("%d", &height);
    for (size_t i = 1; i <= height; i++)
    {
        for (size_t j = 1; j <= height; j++)
        {
            if (j < height - temp)
            {
                printf_s(" ");
            }
            else
            {
                printf_s("*");
            }
        }
        printf_s("\n");
        temp++;
    }
    
}