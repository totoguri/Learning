#include <stdio.h>

// int SquareByValue(int num)
// {
//     return num*num;
// }

// void SquareByReference(int * ptr)
// {
//     int num = *ptr;
//     *ptr = num*num;
// }

// int main(void)
// {
//     int num = 20;
//     printf("%d \n", SquareByValue(num));
//     SquareByReference(&num);
//     printf("%d \n", num);
//     return 0;
// }

// <CHallenge "2">
// Challenge 5-1
//
// void BubbleSort(int arr[], int len);

// int main(void)
// {
//     int arr[7]={3, 2, 4, 1, 7, 5, 6};
//     int i;
//     int length = sizeof(arr)/sizeof(int);

//     BubbleSort(arr, length);
//     for(i=0; i<length; i++)
//         printf("%d ", arr[i]);

//     printf("\n");
//     return 0;
// }

// void BubbleSort(int arr[], int len)
// {
//     int i, j;
//     int temp;

//     for(i=0; i<len-1; i++)
//     {
//         for(j=0; j<len-1-i; j++)
//         {
//             if (arr[j] > arr[j+1])
//             {
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }           
//         }
//     }
// }

// Challenge 5-2 DesSort()
//
// void BubbleSort(int arr[], int len);

// int main(void)
// {
//     int i;
//     int arr[7];
//     for(i=0; i<7; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
        
//     int length = sizeof(arr)/sizeof(int);

//     BubbleSort(arr, length);
//     for(i=0; i<length; i++)
//         printf("%d ", arr[i]);

//     printf("\n");
//     return 0;
// }

// void BubbleSort(int arr[], int len)
// {
//     int i, j;
//     int temp;

//     for(i=0; i<len-1; i++)
//     {
//         for(j=0; j<len-1-i; j++)
//         {
//             if (arr[j] < arr[j+1])
//             {
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }           
//         }
//     }
// }

// int main(void)
// {
//     int arr1[3][4];
//     int arr2[7][9];
//     printf("Height 3, Width 4 : %d \n", sizeof(arr1));
//     printf("Height 7, Width 9 : %d \n", sizeof(arr2));
//     return 0;
// }

// int main(void)
// {
//     int villa[4][2];
//     int popu, i, j;

//     // get populations
//     for(i=0; i<4; i++)
//     {
//         for(j=0; j<2; j++)
//         {
//             printf("Floor %d Room %d family: ", i+1, j+1);
//             scanf("%d", &villa[i][j]);
//         }
//     }

//     // Get total people in the same floor
//     for(i=0; i<4; i++)
//     {
//         popu=0;
//         popu += villa[i][0];
//         popu += villa[i][1];
//         printf("Floor %d people : %d \n", i+1, popu);
//     }
//     return 0;
// }

// int main(void)
// {
//     int arr[3][2];
//     int i, j;
//     for(i=0; i<3; i++)
//         for(j=0; j<2; j++)
//             printf("%p \n", &arr[i][j]);
//     return 0;
// }

// int main(void)
// {
//     int i, j;

//     // 2 dimensional array
//     int arr1[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     // 2 dimensional array
//     int arr2[3][3] = {
//         {1},
//         {4, 5},
//         {7, 8, 9}
//     };

//     // 2 dimensional array
//     int arr3[3][3] = {1, 2, 3, 4, 5, 6, 7};

//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//             printf("%d ", arr1[i][j]);
//         printf("\n");
//     }
//     printf("\n");

//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//             printf("%d ", arr2[i][j]);
//         printf("\n");
//     }
//     printf("\n");

//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//             printf("%d ", arr3[i][j]);
//         printf("\n");
//     }
//     return 0;
// }

// 16-1-1
//
// int main(void)
// {
//     int arr[3][9];
//     int i, j;

//     for (i=0; i<3; i++)
//     {
//         for(j=0; j<9; j++)
//         {
//             arr[i][j] = (i+2)*(j+1);
//             printf("%-2d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// 16-1-2
//
// int main(void)
// {
//     int i, j;
//     int arr2[4][2];

//     int arr1[2][4] = {
//         {1, 2, 3, 4},
//         {5, 6, 7, 8}
//     };

//     for(i=0; i<4; i++)
//     {
//         for(j=0; j<2; j++)
//         {
//             arr2[i][j] = arr1[j][i];
//             printf("%d ", arr2[i][j]);
//         }
//         printf("\n");
//     }
// }

// 16-1-3
//
// int main(void)
// {
//     int arr[5][5]= { };
//     int i, j;

//     for(i=0; i<4; i++) // each subject, person point
//     {
//         for(j=0; j<4; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     for(i=0; i<4; i++)
//     {
//         for (j=0; j<4; j++)
//         {
//             arr[4][i] += arr[j][i]; // subject total
//             arr[i][4] += arr[i][j]; // person total
//         }
//         arr[4][4] += arr[4][i];
//     }

//     for(i=0; i<5; i++) // draw every point
//     {
//         for(j=0; j<5; j++)
//         {
//             printf("%2d ", arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// solve the problem with single pointer
//
// void SwapIntPtr(int *p1, int *p2)
// {
//     int temp=*p1;
//     *p1=*p2;
//     *p2=temp;
// }

// int main(void)
// {
//     int num1 = 10, num2 = 20;
//     int *ptr1, *ptr2;
//     ptr1=&num1, ptr2=&num2;
//     printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);

//     SwapIntPtr(ptr1, ptr2);
//     printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
//     return 0;
// }

/* solved the problem with double pointer */
//
// void SwapIntPtr(int **p1, int **p2)
// {
//     int*temp;      // we need '*' this time. temp is for the address of *p1, *p2
//     temp=*p1;
//     *p1=*p2;
//     *p2=temp;
// }

// int main(void)
// {
//     int num1 = 10, num2 = 20;
//     int *ptr1, *ptr2;
//     ptr1=&num1, ptr2=&num2;
//     printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);

//     SwapIntPtr(&ptr1, &ptr2);
//     printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
//     return 0;
// }

// int main(void)
// {
//     int num1=10, num2=20, num3=30;
//     int *ptr1=&num1;
//     int *ptr2=&num2;
//     int *ptr3=&num3;

//     int *ptrArr[] = {ptr1, ptr2, ptr3};
//     int **dptr = ptrArr;

//     printf("%d %d %d \n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));
//     printf("%d %d %d \n", *(dptr[0]), *(dptr[1]), *(dptr[2]));
//     return 0;
// }

// int main(void)
// {
//     int num=100;
//     int *ptr=&num;
//     int **dptr=&ptr;
//     int ***tptr=&dptr;

//     printf("%d %d \n", **dptr, ***tptr);
//     return 0;
// }

// 17-1
//
// int MaxAndMin(int * arr, int **maxV, int **minV)
// {
//     int i;
//     int *max;
//     max=&arr[0];
//     int *min;
//     min=&arr[0];

//     // In the middle of the process, it has to be changed the address also. 
//     // Only Value change doesn't mean anything
//     for(i=1; i<5; i++) 
//         max = (arr[i] > *max)? &arr[i] : max;
    
//     for(i=0; i<5; i++)
//         min = (arr[i] > *min)? min: &arr[i];
    
//     *maxV = max;
//     *minV = min;
// }

// int main(void)
// {
//     int *maxPtr;
//     int *minPtr;
//     int arr[5] = {9,4,10,1,7};

//     MaxAndMin(arr, &maxPtr, &minPtr);

//     printf("array = {");
//     for(int i=0; i<5; i++)
//         printf("%p ", &arr[i]);
    
//     printf("}\n");

//     printf("MaxAddress = %p, MinAddress = %p \n", maxPtr, minPtr);

//     return 0;
// }

// int main(void)
// {
//     int arr1[2][2]={
//         {1, 2}, {3, 4}
//     };
//     int arr2[3][2]={
//         {1, 2}, {3, 4}, {5, 6}
//     };
//     int arr3[4][2]={
//         {1, 2}, {3, 4}, {5, 6}, {7, 8}
//     };

//     int (*ptr)[2];
//     int i;

//     ptr = arr1;
//     printf("** Show 2,2 arr1 **\n");
//     for(i=0; i<2; i++)
//         printf("%d %d \n", ptr[i][0], ptr[i][1]);

//     ptr = arr2;
//     printf("** Show 3,2 arr2 **\n");
//     for(i=0; i<3; i++)
//         printf("%d %d \n", ptr[i][0], ptr[i][1]);

//     ptr = arr3;
//     printf("** Show 4,2 arr3 **\n");
//     for(i=0; i<4; i++)
//         printf("%d %d \n", ptr[i][0], ptr[i][1]);
        
//     return 0;
// }

// int main(void)
// {
//     int num1=10, num2=20, num3=30, num4=40;
//     int arr2d[2][4]={1,2,3,4,5,6,7,8};
//     int i, j;

//     int *whoA[4]={&num1, &num2, &num3, &num4};
//     int (*whoB)[4]=arr2d;

//     printf("%d %d %d %d \n", *whoA[0], *whoA[1], *whoA[2], *whoA[3]);
//     for(i=0; i<2; i++)
//     {
//         for(j=0; j<4; j++)
//             printf("%2d ", whoB[i][j]);
//         printf("\n");
//     }
//     return 0;
// }

// void ShowArr2DStyle(int (*arr)[4], int column)
// {
//     int i, j;
//     for(i=0; i<column; i++)
//     {
//         for(j=0; j<4; j++)
//             printf("%d ", arr[i][j]);
//         printf("\n");
//     }
//     printf("\n");
// }

// int Sum2DArr(int arr[][4], int column)
// {
//     int i, j, sum=0;
//     for(i=0; i<column; i++)
//         for(j=0; j<4; j++)
//             sum += arr[i][j];
//     return sum;
// }

// int main(void)
// {
//     int arr1[2][4]={1,2,3,4,5,6,7,8};
//     int arr2[3][4]={1,1,1,1,3,3,3,3,5,5,5,5};

//     ShowArr2DStyle(arr1, sizeof(arr1)/sizeof(arr1[0]));
//     ShowArr2DStyle(arr2, sizeof(arr2)/sizeof(arr2[0]));
//     printf("Sum of arr1: %d \n", Sum2DArr(arr1, sizeof(arr1)/sizeof(arr1[0])));
//     printf("Sum of arr2: %d \n", Sum2DArr(arr2, sizeof(arr2)/sizeof(arr2[0])));
//     return 0;
// }

// int main(void)
// {
//     int a[3][2]={{1,2}, {3,4}, {5,6}};

//     printf("a[0]: %p \n", a[0]);
//     printf("*(a+0): %p \n", *(a+0));

//     printf("a[1]: %p \n", a[1]);
//     printf("*(a+1): %p \n", *(a+1));

//     printf("a[2]: %p \n", a[2]);
//     printf("*(a+2): %p \n", *(a+2));

//     printf("%d, %d \n", a[2][1], (*(a+2))[1]);
//     printf("%d, %d \n", a[2][1], *(a[2]+1));
//     printf("%d, %d \n", a[2][1], *(*(a+2)+1));
//     return 0;
// }

// 18-1-1
//
// int **ptr1 = arr1;
// int* (*ptr2)[5] = arr2;

// 18-1-2
//
// void SimpleFuncOne( int *arr1, int *arr2 ) 
// {

// }
// void SimpleFuncTwo( int (*arr3)[4], int (*arr4)[4] ) 
// {

// }

// int main(void)
// {
//     int arr1[3];
//     int arr2[4];
//     int arr3[3][4];
//     int arr4[2][4];

//     SimpleFuncOne(arr1, arr2);
//     SimpleFuncTwo(arr3, arr4);
//     . . . .
// }

// 18-1-3
//
// void ComplexFuncOne( int **ptr1, int* (*ptr2)[5] ){}
// void ComplexFuncTwo( int ***ptr3, int*** (*ptr4)[5] ){}

// int main(void)
// {
//     int *arr1[3];
//     int *arr2[3][5];
//     int **arr3[5];
//     int ***arr4[3][5];

//     ComplexFuncOne(arr1, arr2);
//     ComplexFuncTwo(arr3, arr4);
//     . . . . 

//     return 0;
// }

// 18-1-45
