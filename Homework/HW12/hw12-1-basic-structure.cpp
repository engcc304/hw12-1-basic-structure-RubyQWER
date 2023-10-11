/*
    สร้าง Struct เพื่อเก็บข้อมูลของคน 2 คน โดยเก็บข้อมูล ชื่อ , อายุ , เพศ และคะแนนสะสม และแสดงผลออกมาบนหน้าจอ
    
    struct Person {
	    char  Name[20] ;
	    int   Age ;
	    int   Sex ;
	    float Score ;
	} ;
    
    Test case:
        Person A
        Name : 
            Mai
        Age : 
            24
        Sex : 
            M
        Score : 
            99.99

        Person B
        Name : 
            Mon
        Age : 
            21
        Sex : 
            F
        Score : 
            87.60

    Output:
        --| Person A Information |--
        Name : Mai (M)
        Age : 24 years old
        Score : 99.99 points
        --| Person B Information |--
        Name : Mon (F)
        Age : 21 years old
        Score : 87.60 points

*/
#include <stdio.h>

struct Person {
    char Name[20] ;
    int Age ;
    char Sex ;
    float Score ;
} ;

int main() {
    struct Person p[2] ;

    for (int i = 0 ; i < 2 ; i++) {
        printf( "Person %c\n", 'A' + i ) ;
        printf( "Name : " ) ;
        scanf ( "%s", p[i] . Name ) ;
        printf( "Age : " ) ;
        scanf ( "%d", &p[i] . Age ) ;
        printf( "Sex : " ) ;
        scanf ( " %c", &p[i] . Sex ) ;
        printf( "Score : ") ;
        scanf ( "%f", &p[i].Score ) ;
    }//end for

    for (int i = 0 ; i < 2 ; i++) {
        printf("\n--| Person %c Information |--\n", 'A' + i) ; 
        printf("Name : %s (%c)\n", p[i] . Name, p[i] . Sex) ;
        printf("Age : %d years old\n", p[i] . Age) ;
        printf("Score : %.2f points\n", p[i] . Score) ; 
    }//end for

    return 0 ;
}//end function
