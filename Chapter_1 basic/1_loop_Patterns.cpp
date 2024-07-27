#include <iostream>
using namespace std;

void squareStar(int rows, int columns)
{
    // Print column headers
    cout << "      ";
    for (int j = 1; j <= columns; j++)
    {
        cout << " Col " << j << "  ";
    }
    cout << endl;

    // Print rows with row and column numbers
    for (int i = 1; i <= rows; i++)
    {
        cout << "Row " << i << " [";
        for (int j = 1; j <= columns; j++)
        {
            cout << "\t*\t";
        }
        cout << "]" << endl;
    }
}

void squareNumber(int rows, int columns)
{
    // Print column headers
    cout << "      ";
    for (int j = 1; j <= columns; j++)
    {
        cout << " Col " << j << "  ";
    }
    cout << endl;

    // Print rows with row and column numbers
    for (int i = 1; i <= rows; i++)
    {
        cout << "Row " << i << " [";
        for (int j = 1; j <= columns; j++)
        {
            cout << " " << j << "\t";
        }
        cout << "]" << endl;
    }
}

void squareRNumber(int rows, int columns)
{
    // Print column headers
    cout << "      ";
    for (int j = 1; j <= columns; j++)
    {
        cout << " Col " << j << "  ";
    }
    cout << endl;

    // Print rows with row and column numbers
    for (int i = 1; i <= rows; i++)
    {
        cout << "Row " << i << " [";
        for (int j = 1; j <= columns; j++)
        {
            cout << " " << columns - j + 1 << "\t";
        }
        cout << "]" << endl;
    }
}

void squareSeriesNumbers(int rows, int columns)
{
    int count = 1;
    // Print column headers
    cout << "      ";
    for (int j = 1; j <= columns; j++)
    {
        cout << " Col " << j << "  ";
    }
    cout << endl;

    // Print rows with row and column numbers
    for (int i = 1; i <= rows; i++)
    {
        cout << "Row " << i << " [";
        for (int j = 1; j <= columns; j++)
        {
            cout << " " << count << "\t";
            count++;
        }
        cout << "]" << endl;
    }
}

void TrianglePattern_1(int rows, int columns)
{
    // Print column headers
    cout << "      ";
    for (int j = 1; j <= columns; j++)
    {
        cout << " Col " << j << "  ";
    }
    cout << endl;

    // Print rows with row and column numbers
    for (int i = 1; i <= rows; i++)
    {
        cout << "Row " << i << " : ";
        for (int j = i; j <= columns; j++)
        {
            cout << " " << j << "\t";
        }
        cout << endl;
    }
}

void TrianglePattern_2(int rows, int columns)
{
    // Print column headers
    cout << "      ";
    for (int j = 1; j <= columns; j++)
    {
        cout << " Col " << j << "  ";
    }
    cout << endl;

    // Print rows with row and column numbers
    for (int i = 1; i <= rows; i++)
    {
        cout << "Row " << i << " : ";
        for (int j = 1; j <= i; j++)
        {
            cout << " " << j << "\t";
        }
        cout << endl;
    }
}

void TrianglePattern_3(int rows, int columns)
{
    int count = 1;
    // Print column headers
    cout << "      ";
    for (int j = 1; j <= columns; j++)
    {
        cout << " Col " << j << "  ";
    }
    cout << endl;

    // Print rows with row and column numbers
    for (int i = 1; i <= rows; i++)
    {
        cout << "Row " << i << " : ";
        for (int j = 1; j <= i; j++)
        {
            cout << " " << count << "\t";
            count++;
        }
        cout << endl;
    }
}

void TrianglePattern_4(int rows, int columns)
{
    // Print column headers
    cout << "      ";
    for (int j = 1; j <= columns; j++)
    {
        cout << " Col " << j << "  ";
    }
    cout << endl;

    // Print rows with row and column numbers
    for (int i = 1; i <= rows; i++)
    {
        int value = i;
        cout << "Row " << i << " : ";
        for (int j = 1; j <= i; j++)
        {
            // cout << " " << value << "\t";
            // value++;
            cout << " " << i + (j - 1) << "\t";
        }
        cout << endl;
    }
}

void TrianglePattern_5(int rows, int columns)
{
    // Print column headers
    cout << "      ";
    for (int j = 1; j <= columns; j++)
    {
        cout << " Col " << j << "  ";
    }
    cout << endl;

    // Print rows with row and column numbers
    for (int i = 1; i <= rows; i++)
    {
        int value = i;
        cout << "Row " << i << " : ";
        for (int j = 1; j <= i; j++)
        {
            // cout << " " << value << "\t";
            // value++;
            cout << " " << i - (j - 1) << "\t";
        }
        cout << endl;
    }
}

void Pattern_6(int rows, int columns)
{
    // Print column headers
    cout << "      ";
    for (int j = 1; j <= columns; j++)
    {
        cout << " Col " << j << "  ";
    }
    cout << endl;

    // Print rows with row and column numbers
    for (int i = 1; i <= rows; i++)
    {
        int value = i;
        cout << "Row " << i << " : ";
        for (int j = 1; j <= columns; j++)
        {
            // cout << " " << value << "\t";
            // value++;
            char value = 'A' + j - 1;
            cout << " " << value << "\t";
        }
        cout << endl;
    }
}

void pattern_7(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout<<"*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    
}

void print_2(int n){
    for(int i=0; i<n; i++){
        // spaces
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i+1; j++){
            cout<<""<<j<<"";
        }
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print_1(int n){
    for(int i=0; i<n; i++){
        // spaces
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<(2*n-((2*i)+1)); j++){
            cout<<"0";
        }
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void print_Z(int n){
    for(int i=0; i<n; i++){
        cout<<"0";
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    for(int i=0; i<n; i++){
        cout<< 0;
    }
}

int main()
{
    // squareStar(9, 5);
    /*
        Col 1   Col 2   Col 3   Col 4   Col 5
Row 1 [	*		*		*		*		*	]
Row 2 [	*		*		*		*		*	]
Row 3 [	*		*		*		*		*	]
Row 4 [	*		*		*		*		*	]
Row 5 [	*		*		*		*		*	]
Row 6 [	*		*		*		*		*	]
Row 7 [	*		*		*		*		*	]
Row 8 [	*		*		*		*		*	]
Row 9 [	*		*		*		*		*	]

    */
    // squareNumber(5, 5);
    /*
    Col 1   Col 2   Col 3   Col 4   Col 5
Row 1 [ 1        2       3       4       5      ]
Row 2 [ 1        2       3       4       5      ]
Row 3 [ 1        2       3       4       5      ]
Row 4 [ 1        2       3       4       5      ]
Row 5 [ 1        2       3       4       5      ]
    */

    // squareRNumber(5, 5);
    /*
     Col 1   Col 2   Col 3   Col 4   Col 5
Row 1 [ 5        4       3       2       1      ]
Row 2 [ 5        4       3       2       1      ]
Row 3 [ 5        4       3       2       1      ]
Row 4 [ 5        4       3       2       1      ]
Row 5 [ 5        4       3       2       1      ]
    */

    // squareSeriesNumbers(5, 5);
    /*
    Col 1   Col 2   Col 3   Col 4   Col 5
Row 1 [ 1        2       3       4       5      ]
Row 2 [ 6        7       8       9       10     ]
Row 3 [ 11       12      13      14      15     ]
Row 4 [ 16       17      18      19      20     ]
Row 5 [ 21       22      23      24      25     ]
    */
    // TrianglePattern_1(5, 5);
    /*
 Col 1   Col 2   Col 3   Col 4   Col 5
Row 1 :  1       2       3       4       5
Row 2 :  2       3       4       5
Row 3 :  3       4       5
Row 4 :  4       5
Row 5 :  5
    */

    //    TrianglePattern_2(5, 5);
    /*
           Col 1   Col 2   Col 3   Col 4   Col 5
 Row 1 :  1
 Row 2 :  1       2
 Row 3 :  1       2       3
 Row 4 :  1       2       3       4
 Row 5 :  1       2       3       4       5
    */
    // TrianglePattern_3(5, 5);
    /*
 Col 1   Col 2   Col 3   Col 4   Col 5
Row 1 :  1
Row 2 :  2       3
Row 3 :  4       5       6
Row 4 :  7       8       9       10
Row 5 :  11      12      13      14      15
    */

    // TrianglePattern_4(5, 5);
    /*
        Col 1   Col 2   Col 3   Col 4   Col 5
Row 1 :  1
Row 2 :  2       3
Row 3 :  3       4       5
Row 4 :  4       5       6       7
Row 5 :  5       6       7       8       9
    */
    // TrianglePattern_5(5, 5);
    /*
        Col 1   Col 2   Col 3   Col 4   Col 5
Row 1 :  1
Row 2 :  2       1
Row 3 :  3       2       1
Row 4 :  4       3       2       1
Row 5 :  5       4       3       2       1
    */
    //    Pattern_6(5, 5);
    /*
        Col 1   Col 2   Col 3   Col 4   Col 5
Row 1 :  A       B       C       D       E
Row 2 :  A       B       C       D       E
Row 3 :  A       B       C       D       E
Row 4 :  A       B       C       D       E
Row 5 :  A       B       C       D       E
    */
       pattern_7(5);
    return 0;
}
