// // C++ program to find trace of a matrix by using std::slice 
// #include <iostream> // std::cout 
// #include <valarray> // std::valarray, std::slice 
  
// using namespace std; 
  
// int main() 
// { 
//     // row and column of matrix 
//     int row = 3, col = 3; 
  
//     // matrix of size row*col in row major form. 
//     std::valarray<int> matrix(row * col); 
  
//     // initialising matrix 
//     for (int i = 0; i < row * col; ++i) 
//         matrix[i] = i + 1; 
  
//     // using slice from start 0 with size as col and stride col+1 
//     std::valarray<int> diagonal = matrix[std::slice(0, col, col + 1)]; 
  
//     // finding trace using diagonal we got using slice 
//     int index = 0; 
//     for (int i = 0; i < row; i++) { 
//         for (int j = 0; j < col; j++) 
//             std::cout << matrix[index++] << " "; // same as matrix[i][j] 
//         std::cout << endl; 
//     } 
  
//     int sum = 0; // initialising sum as 0 
//     // calculating trace of matrix 
//     for (int i = 0; i < diagonal.size(); i++) 
//         sum += diagonal[i]; 
//     std::cout << "Trace of matrix is : "; 
//     std::cout << sum << endl; // sum is trace of matrix 
//     return 0; 
// } 




// #include <stdio.h>
// #include<math.h>
// int main()
// {
//     int m, n, p, q, c, d, k, sum = 0;
//     int first[10][10], second[10][10], multiply[10][10];

//     printf("Enter number of rows and columns of first matrix\n");
//     scanf("%d%d", &m, &n);
//     printf("Enter elements of first matrix\n");

//     for (c = 0; c < m; c++)
//         for (d = 0; d < n; d++)
//             scanf("%d", &first[c][d]);

//     printf("Enter number of rows and columns of second matrix\n");
//     scanf("%d%d", &p, &q);

//     if (n != p)
//         printf("The multiplication isn't possible.\n");
//     else
//     {
//         printf("Enter elements of second matrix\n");

//         for (c = 0; c < p; c++)
//             for (d = 0; d < q; d++)
//                 scanf("%d", &second[c][d]);

//         for (c = 0; c < m; c++)
//         {
//             for (d = 0; d < q; d++)
//             {
//                 for (k = 0; k < p; k++)
//                 {
//                     sum = sum + first[c][k] * second[k][d];
//                 }

//                 multiply[c][d] = sum;
//                 sum = 0;
//             }
//         }

//         printf("Product of the matrices:\n");

//         for (c = 0; c < m; c++)
//         {
//             for (d = 0; d < q; d++)
//                 printf("%d  ", multiply[c][d]);

//             printf("\n");
//         }
//     }

//     return 0;
// }