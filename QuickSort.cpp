// Anh Truong
//  QuickSort_Skeleton.cpp
//
//  Created by Bahamon, Julio on 6/25/19.
//  UNC Charlotte
//  Copyright © 2019 Bahamon, Julio. All rights reserved.
//
// http://www.cplusplus.com/reference/cstdlib/qsort/
// http://www.cplusplus.com/reference/cstring/strncmp/

#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

//  Declaring a new struct to store patient data
struct patient {
    int age;
    char name[20];
    float balance;
};


//  TODO:
//  IMPLEMENT A FUNCTION THAT COMPARES TWO PATIENTS BY AGE

//  THE FUNCTION RETURNS AN INTEGER AS FOLLOWS:
//      -1 IF THE AGE OF THE FIRST PATIENT IS LESS
//         THAN THE SECOND PATIENT'S AGE
//       0 IF THE AGES ARE EQUAL
//       1 OTHERWISE
    
int compareAge (const void* a , const void* b) {
    patient* pa = (patient*) a;
    patient* pb = (patient*) b;
    
    if(pa -> age < pb -> age) {
        return -1;
    }
    if(pa -> age == pb -> age) {
        return 0;
    } else {
        return 1;
    }
}

//  TODO:
//  IMPLEMENT A FUNCTION THAT COMPARES TWO PATIENTS BY BALANCE DUE

//  THE FUNCTION RETURNS AN INTEGER AS FOLLOWS:
//      -1 IF THE BALANCE FOR THE FIRST PATIENT IS LESS
//         THAN THE SECOND PATIENT'S BALANCE
//       0 IF THE BALANCES ARE EQUAL
//       1 OTHERWISE

int compareBalance(const void* a, const void* b) {
    patient* pa = (patient*) a;
    patient* pb = (patient*) b;
    
    if(pa -> balance < pb -> balance) {
        return -1;
    }
    if(pa -> balance == pb -> balance) {
        return 0;
    } else {
        return 1;
    }
}

//  TODO:
//  IMPLEMENT A FUNCTION THAT COMPARES TWO PATIENTS BY NAME

//  THE FUNCTION RETURNS AN INTEGER AS FOLLOWS:
//      -1 IF THE NAME OF THE FIRST PATIENT GOES BEFORE
//         THE SECOND PATIENT'S NAME
//       0 IF THE AGES ARE EQUAL
//       1 OTHERWISE
//
//  HINT: USE THE strncmp FUNCTION
//  (SEE http://www.cplusplus.com/reference/cstring/strncmp/)

int compareName(const void* a, const void* b) {
    patient* pa = (patient*) a;
    patient* pb = (patient*) b;
    
    if(strncmp (pa -> name, pb -> name, 20) < 0) {
        return -1;
    }
    if(strncmp (pa -> name, pb -> name, 20) == 0) {
        return 0;
    } else {
        return 1;
    }
}

/* Get Patient Name

char patientName (patient* pt) {
    for (int i = 0; i <20; i++) {
        cout << pt[i].name[i];
    }
}
*/

// Display Patient Information

void displayInfo(patient* pt) {
    
    for (int i = 0; i < 6; i++) {
        cout << "\tAge: " << pt[i].age << "\t\tName: "; 
        
        for (int j = 0; j < 20; j++) {
        cout << pt[i].name[j];
        }
        
        cout << "\tBalance Due: " << pt[i].balance << endl;
    }
}

//  The main program
int main()
{
    int total_patients = 6;
    
    //  Storing some test data
    struct patient patient_list[6] = {
        {25, "Juan Valdez   ", 1250},
        {15, "James Morris  ", 2100},
        {32, "Tyra Banks    ", 750},
        {62, "Maria O'Donell", 375},
        {53, "Pablo Picasso ", 615},
        {20, "Anh Truong", 440}
    };
    
    
    cout << "Patient List: " << endl;
    
    //  TODO:
    //  IMPLEMENT THE CODE TO DISPLAY THE CONTENTS
    //  OF THE ARRAY BEFORE SORTING
    displayInfo(patient_list);
    
    cout << endl;
    
    
    cout << "Sorting..." << endl;
    
    //  TODO:
    //  CALL THE qsort FUNCTION TO SORT THE ARRAY BY PATIENT AGE
    qsort(patient_list, 6, sizeof(patient), compareAge);
    
    cout << "Patient List - Sorted by Age: " << endl;
    
    //  TODO:
    //  DISPLAY THE CONTENTS OF THE ARRAY
    //  AFTER SORTING BY AGE
    displayInfo(patient_list);
    
    cout << endl;
    
    
    cout << "Sorting..." << endl;
    
    //  TODO:
    //  CALL THE qsort FUNCTION TO SORT THE ARRAY BY PATIENT BALANCE
    qsort(patient_list, 6, sizeof(patient), compareBalance);
    
    cout << "Patient List - Sorted by Balance Due: " << endl;
    
    //  TODO:
    //  DISPLAY THE CONTENTS OF THE ARRAY
    //  AFTER SORTING BY BALANCE
    displayInfo(patient_list);
    
    cout << endl;
    
    
    cout << "Sorting..." << endl;
    
    //  TODO:
    //  CALL THE qsort FUNCTION TO SORT THE ARRAY BY PATIENT NAME
    qsort(patient_list, 6, sizeof(patient), compareName);
    
    cout << "Patient List - Sorted by Name: " << endl;
    
    //  TODO:
    //  DISPLAY THE CONTENTS OF THE ARRAY
    //  AFTER SORTING BY NAME
    displayInfo(patient_list);
    
    cout << endl;
    
    return 0;
}
