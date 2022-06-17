#include<stdio.h>
#include<math.h>
#include<conio.h>

void main()
{
    float E11,E12,E13,E14,EN51,MA61,PH71,PH72,GE11,GE12,GE13,GE14,GEN51,GMA61,GPH71,GPH72,TGPA;
    printf("EEE 111        Basic Electrical Engineering       Credit:3              Grade point:");
    scanf("%f",&E11);
    printf("EEE 112        Laboratory on EEE 111              Credit:1              Grade point:");
    scanf("%f",&E12);
    printf("EEE 113        Basic Mechanical Engineering       Credit:3              Grade point:");
    scanf("%f",&E13);
    printf("EEE 114        Laboratory on EEE 113              Credit:1              Grade point:");
    scanf("%f",&E14);
    printf("ENG 151        Technical English                  Credit:2              Grade point:");
    scanf("%f",&EN51);
    printf("MATH 161       Differential and Integral Calculus Credit:3              Grade point:");
    scanf("%f",&MA61);
    printf("PHY 171        Properties of Matter,Classical     Credit:4                       \n ");
    printf("              Mechanics and Applied Acoustics                          Grade point:");
    scanf("%f",&PH71);
    printf("PHY 172        Laboratory on PHY 172              Credit:1              Grade point:");
    scanf("%f",&PH72);

    GE11=3*E11;
    GE12=1*E12;
    GE13=3*E13;
    GE14=1*E14;
    GEN51=2*EN51;
    GMA61=3*MA61;
    GPH71=4*PH71;
    GPH72=1*PH72;

    TGPA=(GE11+GE12+GE13+GE14+GEN51+GMA61+GPH71+GPH72)/18;

    printf("\n\n\n");

    printf("                                    UNIVERSITY OF CHITTAGONG\n");
    printf("                                      Chittagong,bangladesh\n\n");
    printf("                     Department of Electrical and Electronic Engineering\n");
    printf("                     First Semester B.Sc. Engineering Examination-2018\n\n");
    printf("                                         GRADE SHEET \n\n");
    printf("Student ID         : 18702051 \n");
    printf("Name of the Student: MD. Saifuzzaman Sohan\n");
    printf("Name of the Hall   : Shaheed Abdur Rab Hall\n");
    printf("Session            : 2017-2018\n\n");
    printf("Course Code    Course Title                     Credit     Latter Grade     Grade point\n");
    {
     if(E11==4.00)
        printf("EEE 111        Basic Electrical Engineering       3            A+              %.2f \n",E11);
     else if(E11==3.75)
        printf("EEE 111        Basic Electrical Engineering       3            A               %.2f \n",E11);
     else if(E11==3.50)
        printf("EEE 111        Basic Electrical Engineering       3            A-              %.2f \n",E11);
     else if(E11==3.25)
        printf("EEE 111        Basic Electrical Engineering       3            B+              %.2f \n",E11);
     else if(E11==3.00)
        printf("EEE 111        Basic Electrical Engineering       3            B               %.2f \n",E11);
     else if(E11==2.75)
        printf("EEE 111        Basic Electrical Engineering       3            B-              %.2f \n",E11);
     else if(E11==2.50)
        printf("EEE 111        Basic Electrical Engineering       3            C+              %.2f \n",E11);
     else if(E11==2.25)
        printf("EEE 111        Basic Electrical Engineering       3            C               %.2f \n",E11);
     else if(E11==2.00)
        printf("EEE 111        Basic Electrical Engineering       3            D               %.2f \n",E11);
     else
        printf("EEE 111        Basic Electrical Engineering       3            Fail            %.2f \n",E11);
     }
     {
     if(E12==4.00)
        printf("EEE 112        Laboratory on EEE 111              1            A+              %.2f \n",E12);
     else if(E12==3.75)
        printf("EEE 112        Laboratory on EEE 111              1            A               %.2f \n",E12);
     else if(E12==3.50)
        printf("EEE 112        Laboratory on EEE 111              1            A-              %.2f \n",E12);
     else if(E12==3.25)
        printf("EEE 112        Laboratory on EEE 111              1            B+              %.2f \n",E12);
     else if(E12==3.00)
        printf("EEE 112        Laboratory on EEE 111              1            B               %.2f \n",E12);
     else if(E12==2.75)
        printf("EEE 112        Laboratory on EEE 111              1            B-              %.2f \n",E12);
     else if(E12==2.50)
        printf("EEE 112        Laboratory on EEE 111              1            C+              %.2f \n",E12);
     else if(E12==2.25)
        printf("EEE 112        Laboratory on EEE 111              1            C               %.2f \n",E12);
     else if(E12==2.00)
        printf("EEE 112        Laboratory on EEE 111              1            D               %.2f \n",E12);
     else
        printf("EEE 112        Laboratory on EEE 111              1            Fail            %.2f \n",E12);
     }
     {
     if(E13==4.00)
        printf("EEE 113        Basic Mechanical Engineering       3            A+              %.2f \n",E13);
     else if(E13==3.75)
        printf("EEE 113        Basic Mechanical Engineering       3            A               %.2f \n",E13);
     else if(E13==3.50)
        printf("EEE 113        Basic Mechanical Engineering       3            A-              %.2f \n",E13);
     else if(E13==3.25)
        printf("EEE 113        Basic Mechanical Engineering       3            B+              %.2f \n",E13);
     else if(E13==3.00)
        printf("EEE 113        Basic Mechanical Engineering       3            B               %.2f \n",E13);
     else if(E13==2.75)
        printf("EEE 113        Basic Mechanical Engineering       3            B-              %.2f \n",E13);
     else if(E13==2.50)
        printf("EEE 113        Basic Mechanical Engineering       3            C+              %.2f \n",E13);
     else if(E13==2.25)
        printf("EEE 113        Basic Mechanical Engineering       3            C               %.2f \n",E13);
     else if(E13==2.00)
        printf("EEE 113        Basic Mechanical Engineering       3            D               %.2f \n",E13);
     else
        printf("EEE 113        Basic Mechanical Engineering       3            Fail            %.2f \n",E13);
     }
     {
     if(E14==4.00)
        printf("EEE 114        Laboratory on EEE 113              1            A+              %.2f \n",E14);
     else if(E14==3.75)
        printf("EEE 114        Laboratory on EEE 113              1            A               %.2f \n",E14);
     else if(E14==3.50)
        printf("EEE 114        Laboratory on EEE 113              1            A-              %.2f \n",E14);
     else if(E14==3.25)
        printf("EEE 114        Laboratory on EEE 113              1            B+              %.2f \n",E14);
     else if(E14==3.00)
        printf("EEE 114        Laboratory on EEE 113              1            B               %.2f \n",E14);
     else if(E14==2.75)
        printf("EEE 114        Laboratory on EEE 113              1            B-              %.2f \n",E14);
     else if(E14==2.50)
        printf("EEE 114        Laboratory on EEE 113              1            C+              %.2f \n",E14);
     else if(E14==2.25)
        printf("EEE 114        Laboratory on EEE 113              1            C               %.2f \n",E14);
     else if(E14==2.00)
        printf("EEE 114        Laboratory on EEE 113              1            D               %.2f \n",E14);
     else
        printf("EEE 114        Laboratory on EEE 113              1            Fail            %.2f \n",E14);
     }
     {
     if(EN51==4.00)
        printf("ENG 151        Technical English                  2            A+              %.2f \n",EN51);
     else if(EN51==3.75)
        printf("ENG 151        Technical English                  2            A               %.2f \n",EN51);
     else if(EN51==3.50)
        printf("ENG 151        Technical English                  2            A-              %.2f \n",EN51);
     else if(EN51==3.25)
        printf("ENG 151        Technical English                  2            B+              %.2f \n",EN51);
     else if(EN51==3.00)
        printf("ENG 151        Technical English                  2            B               %.2f \n",EN51);
     else if(EN51==2.75)
        printf("ENG 151        Technical English                  2            B-              %.2f \n",EN51);
     else if(EN51==2.50)
        printf("ENG 151        Technical English                  2            C+              %.2f \n",EN51);
     else if(EN51==2.25)
        printf("ENG 151        Technical English                  2            C               %.2f \n",EN51);
     else if(EN51==2.00)
        printf("ENG 151        Technical English                  2            D               %.2f \n",EN51);
     else
        printf("ENG 151        Technical English                  2            Fail            %.2f \n",EN51);
     }
     {
     if(MA61==4.00)
        printf("MATH 161       Differential and Integral Calculus 3            A+              %.2f \n",MA61);
     else if(MA61==3.75)
        printf("MATH 161       Differential and Integral Calculus 3            A               %.2f \n",MA61);
     else if(MA61==3.50)
        printf("MATH 161       Differential and Integral Calculus 3            A-              %.2f \n",MA61);
     else if(MA61==3.25)
        printf("MATH 161       Differential and Integral Calculus 3            B+              %.2f \n",MA61);
     else if(MA61==3.00)
        printf("MATH 161       Differential and Integral Calculus 3            B               %.2f \n",MA61);
     else if(MA61==2.75)
        printf("MATH 161       Differential and Integral Calculus 3            B-              %.2f \n",MA61);
     else if(MA61==2.50)
        printf("MATH 161       Differential and Integral Calculus 3            C+              %.2f \n",MA61);
     else if(MA61==2.25)
        printf("MATH 161       Differential and Integral Calculus 3            C               %.2f \n",MA61);
     else if(MA61==2.00)
        printf("MATH 161       Differential and Integral Calculus 3            D               %.2f \n",MA61);
     else
        printf("MATH 161       Differential and Integral Calculus 3            Fail            %.2f \n",MA61);
     }
     {
     if(PH71==4.00)
       {
        printf("PHY 171        Properties of Matter,Classical     4            A+              %.2f \n",PH71);
        printf("               Mechanics and Applied Acoustics                                      \n");
       }
     else if(PH71==3.75)
       {
        printf("PHY 171        Properties of Matter,Classical     4            A               %.2f \n",PH71);
        printf("               Mechanics and Applied Acoustics                                      \n");
       }
     else if(PH71==3.50)
       {
        printf("PHY 171        Properties of Matter,Classical     4            A-              %.2f \n",PH71);
        printf("               Mechanics and Applied Acoustics                                      \n");
       }
     else if(PH71==3.25)
       {
        printf("PHY 171        Properties of Matter,Classical     4            B+              %.2f \n",PH71);
        printf("               Mechanics and Applied Acoustics                                      \n");
       }
     else if(PH71==3.00)
       {
        printf("PHY 171        Properties of Matter,Classical     4            B               %.2f \n",PH71);
        printf("               Mechanics and Applied Acoustics                                      \n");
       }
     else if(PH71==2.75)
       {
        printf("PHY 171        Properties of Matter,Classical     4            B-              %.2f \n",PH71);
        printf("               Mechanics and Applied Acoustics                                      \n");
       }
     else if(PH71==2.50)
       {
        printf("PHY 171        Properties of Matter,Classical     4            C+              %.2f \n",PH71);
        printf("               Mechanics and Applied Acoustics                                      \n");
       }
     else if(PH71==2.25)
       {
        printf("PHY 171        Properties of Matter,Classical     4            C               %.2f \n",PH71);
        printf("               Mechanics and Applied Acoustics                                      \n");
       }
     else if(PH71==2.00)
       {
        printf("PHY 171        Properties of Matter,Classical     4            D               %.2f \n",PH71);
        printf("               Mechanics and Applied Acoustics                                      \n");
       }
     else
       {
        printf("PHY 171        Properties of Matter,Classical     4            Fail            %.2f \n",PH71);
        printf("               Mechanics and Applied Acoustics                                      \n");
       }
     }
     {
     if(PH72==4.00)
        printf("PHY 172        Laboratory on PHY 172              1            A+              %.2f \n",PH72);
     else if(PH72==3.75)
        printf("PHY 172        Laboratory on PHY 172              1            A               %.2f \n",PH72);
     else if(PH72==3.50)
        printf("PHY 172        Laboratory on PHY 172              1            A-              %.2f \n",PH72);
     else if(PH72==3.25)
        printf("PHY 172        Laboratory on PHY 172              1            B+              %.2f \n",PH72);
     else if(PH72==3.00)
        printf("PHY 172        Laboratory on PHY 172              1            B               %.2f \n",PH72);
     else if(PH72==2.75)
        printf("PHY 172        Laboratory on PHY 172              1            B-              %.2f \n",PH72);
     else if(PH72==2.50)
        printf("PHY 172        Laboratory on PHY 172              1            C+              %.2f \n",PH72);
     else if(PH72==2.25)
        printf("PHY 172        Laboratory on PHY 172              1            C               %.2f \n",PH72);
     else if(PH72==2.00)
        printf("PHY 172        Laboratory on PHY 172              1            D               %.2f \n",PH72);
     else
        printf("PHY 172        Laboratory on PHY 172              1            Fail            %.2f \n",PH72);
     }

     printf("\n                                     Total Credit:18                 Total GPA:%.2f\n\n",TGPA);

}
