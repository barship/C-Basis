#include<stdio.h>

double matrix_plus(int m ,int n,double *mp1,double *mp2) { //实现两个矩阵的加法，用了两层循环进行加法运算和输出
     int i,j;
     double c[m][n];
     double *mp3=c[0];

     for (i=0;i<m;i++) {
        for (j=0;j<n;j++) *(mp3+i*n+j)=0;
     }

     for (i=0;i<m;i++) {
         for (j=0;j<n;j++) *(mp3+i*n+j)=*(mp1+i*n+j)+*(mp2+i*n+j);
     }
     printf("matrix plus is:\n");
     for (i=0;i<m;i++) {
         for (j=0;j<n;++j) printf("%f%c",*(mp3+i*n+j),j==n-1?'\n':' ');
     }
     putchar('\n');

     return 0;
}

double matrix_nummultiply(double k,int m ,int n,double *mp1) { //实现矩阵的数量乘法，用了两层循环进行数量乘法运算和输出
     int i,j;
     double b[m][n];
     double *mp2=b[0];

     for (i=0;i<m;i++) {
        for (j=0;j<n;j++) *(mp2+i*n+j)=0;
     }

     for (i=0;i<m;i++) {
         for (j=0;j<n;j++) *(mp2+i*n+j)=*(mp1+i*n+j)*k;
     }
     printf("%f*matrix is:\n",k);
     for (i=0;i<m;i++) {
         for (j=0;j<n;++j) printf("%f%c",*(mp2+i*n+j),j==n-1?'\n':' ');
     }
     putchar('\n');

     return 0;
}

double matrix_transposition(int m ,int n,double *mp1) { //实现两个矩阵的加法，用了两层循环进行加法运算和输出
     int i,j;
     double b[m][n];
     double *mp2=b[0];

     for (i=0;i<m;i++) {
        for (j=0;j<n;j++) *(mp2+i*n+j)=0;
     }

     for (i=0;i<m;i++) {
         for (j=i;j<n;j++) {
                *(mp2+j*n+i)=*(mp1+i*n+j);
                *(mp2+i*n+j)=*(mp1+j*n+i);
         }
     }
     printf("matrix transposition is:\n");
     for (i=0;i<m;i++) {
         for (j=0;j<n;++j) printf("%f%c",*(mp2+i*n+j),j==n-1?'\n':' ');
     }
     putchar('\n');

     return 0;
}

double matrix_multiple(int m ,int n,double *mp1) { //实现两个矩阵的加法，用了两层循环进行加法运算和输出
     int i,j;
     double b[m][n];
     double *mp2=b[0];

     for (i=0;i<m;i++) {
        for (j=0;j<n;j++) *(mp2+i*n+j)=0;
     }

     for (i=0;i<m;i++) {
         for (j=i;j<n;j++) {
                *(mp2+j*n+i)=*(mp1+i*n+j);
                *(mp2+i*n+j)=*(mp1+j*n+i);
         }
     }
     printf("matrix transposition is:\n");
     for (i=0;i<m;i++) {
         for (j=0;j<n;++j) printf("%f%c",*(mp2+i*n+j),j==n-1?'\n':' ');
     }
     putchar('\n');

     return 0;
}

int main() {
    double a[][2]={{1,2},{3,4}};
    double b[][2]={{1,1},{1,1}};

    matrix_plus(2,2,a[0],b[0]);
    matrix_nummultiply(2,2,2,a[0]);
    matrix_transposition(2,2,a[0]);

    return 0;
}
