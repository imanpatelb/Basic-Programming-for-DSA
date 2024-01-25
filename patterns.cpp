//
//  main.cpp
//  01_create_first_program
//
//  Created by Man Patel on 2024-01-21.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    //    int n;
    //    if (cin >> n) {
    //        cout << "Man Patel" << endl;
    //    }
    //
    //    if (cout << "Man") {
    //        cout << "Patel" << endl;
    //    }
    
    //patters
    //pattern-1 - solid
    
    //    int r,c;
    //    cout << "Enter number of rows: ";
    //    cin >> r;
    //    cout << "Enter number of columns: ";
    //    cin >> c;
    //
    //
    //    //outer loop
    //    for (int row=0;  row<r ;  row++) {
    //        //inner loop
    //        for (int col=0;  col<c; col++) {
    //            cout << "* ";
    //        }
    //        cout << endl;
    //    }
    
    
    //    //pattern-2 : Hologram Rectangle
    //    int r,c;
    //    cout << "Enter number of rows: ";
    //    cin >> r;
    //    cout << "Enter number of columns: ";
    //    cin >> c;
    //
    //    for (int row=0;  row<r ;  row++) {
    //        if(row==0 || row==(r-1)){
    //            for (int col=0;  col<c; col++) {
    //                cout << "* ";
    //            }
    //            cout << endl;
    //        } else{
    //            cout << "*";
    //
    //            for(int i=0; i<((c*2)-3); i++){
    //                cout << " ";
    //            }
    //
    //            cout << "*" << endl;
    //            }
    //    }
    //
    //    cout << endl;
    
    
    //pattern-3: Half Pyramid
    //case:1
    
    //    int n;
    //    cout << "Enter number: ";
    //    cin >> n;
    //    string hash = "*";
    //
    //    for(int row=0; row < n; row++){
    //            cout << hash << endl;
    //            hash += "*";
    //    }
    
    //case:2
    
    //    int n;
    //    cout << "Enter a number: ";
    //    cin >> n;
    //
    //    for(int row=0; row< n; row++){
    //        for(int col=0; col< row+1; col++){
    //            cout << "*";
    //        }
    //        cout << endl;
    //    }
    
    //pattern-4: inverted half pyramid
    
    //    int n;
    //    cout << "Enter a number: ";
    //    cin >> n;
    
    //case: 1
    //    for(int row=n; row>0; row--){
    //        for(int col=row; col>0; col--){
    //            cout << "*";
    //        }
    //        cout << endl;
    //    }
    
    //case: 2
    //    for(int row=0; row<n; row++){
    //        for(int col=0; col<n-row; col++){
    //            cout << "*";
    //        }
    //        cout << endl;
    //    }
    
    //    pattern-3: number Half Pyramid
    //    case:1
    
//    int n;
//    cout << "Enter a number: ";
//    cin >> n;
//    
//    for(int row=0; row< n; row++){
//        for(int col=0; col< row+1; col++){
//            cout << col+ 1;
//        }
//        cout << endl;
//    }
    
    //pattern- whole pyramid
    
//    int n;
//    cout << "Enter a number: ";
//    cin >> n;
//    
//    for(int row=0; row<n; row++){
//        for(int col=0; col<n-row; col++){
//            cout << " ";
//        }
//        for(int i=0; i<row; i++){
//            cout << "* ";
//        }
//        cout << endl;
//    }
    
    //pattern - inverse whole pyramid
    
//    int n;
//    cout << "Enter a number: ";
//    cin >> n;
//    
//    for(int row=0; row<n; row++){
//        for(int col=0; col<row; col++){
//            cout << " ";
//        }
//        for(int i=0; i<n-row; i++){
//            cout << "* ";
//        }
//        cout << endl;
//    }
    
    
    //pattern-  numeric whole pyramid
//    int n;
//    cout << "Enter a number: ";
//    cin >> n;
//    
//    for(int row=0; row< n; row++){
//        for(int c=0; c<n-row; c++){
//            cout << " ";
//        }
//        
//        for(int col=0; col< row+1; col++){
//            cout << col+ 1 << " ";
//        }
//        cout << endl;
//    }
    
    //pattern-  numeric whole pyramid (2)
//    int n;
//    cout << "Enter a number: ";
//    cin >> n;
//    
//    for(int row=0; row<n; row++){
//        for(int col=0; col<n-row-1;col++){
//            cout << " ";
//        }
//        for(int col=0; col<row+1; col++){
//            cout << row+col+1;
//        }
//        for(int col=0; col<row; col++){
//            cout << row*2 - col;
//        }
//        cout << endl;
//    }
    
    //pattern- numeric hollow pyramid
    int n;
    cout << "Enter a number: ";
    cin >> n;


    for(int row=0; row<n; row++){
        for(int col=0; col<n-row-1;col++){
            cout << " ";
        }
        
        int start=1;
        for(int col=0; col<row*2+1; col++){
            if(row==0 || row==n-1){
                if(col%2==0){
                    cout << start;
                    start = start + 1;
                }
                else{
                    cout << " ";
                }
                
            } else {
                if (col==0) {
                    cout << 1;
                } else if (col == row*2){
                    cout << row + 1;
                } else{
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}
