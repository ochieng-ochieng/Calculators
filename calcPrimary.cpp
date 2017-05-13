#include<iostream>
using   namespace   std ;

const float  PI = (22/7.0) ;


void  explainsCalc()
{
 cout << "\t\t\tCALCULATOR  FOR  PRIMARY  STUDENTS";
 cout << "\n\nABLE  TO  PERFORM  THE  FOLLOWING : ";

 cout << "\n\n\n1.AREA  OF  RECTANGLE\n";
 cout << "2.AREA  OF  TRIANGLE\n";
 cout << "3.AREA  OF  CYLINDER\n";
 cout << "4.AREA  OF  PARALLELOGRAM\n";
 cout << "5.AREA  OF  TRAPEZIUM\n";
 cout << "6.VOLUME  OF  CUBOID\n";
 cout << "7.VOLUME  OF  CYLINDER\n";
 cout << "8.VOLUME  OF  SPHERE\n";


 cout << "\n\nPRESS 1 TO  CALCULATE  AREA  OF  RECTANGLE\n";
 cout << "PRESS 2 TO  CALCULATE  AREA  OF  TRIANGLE\n";
 cout << "PRESS 3 TO  CALCULATE  AREA  OF  CYLINDER\n";
 cout << "PRESS 4 TO  CALCULATE AREA  OF  PARALLELOGRAM\n";
 cout << "PRESS 5 TO  CALCULATE AREA  OF  TRAPEZIUM\n";
 cout << "PRESS 6 TO  CALCULATE VOLUME  OF  CUBOID\n";
 cout << "PRESS 7 TO  CALCULATE VOLUME  OF  CYLINDER\n";
 cout << "PRESS 8 TO  CALCULATE VOLUME  OF  SPHERE\n";



}

// AREA  OF  RECTANGLE

void   areaRectangle()
{
    float  l , w ;
    float  a ;

    cout << "Enter  length : " ;
    cin >> l ;
    cout << endl ;

    cout << "Enter  width : " ;
    cin >> w ;

    a = l * w ;

    cout << "\n\nArea = " << l << " x " << w << " = " << a ;
    cout << endl ;
}

//area  of  rectangle
void  areaTriangle()
{
 float  base , height ;
 float a ;

    cout << "Enter  base : " ;
    cin >> base ;
    cout << endl ;

    cout << "Enter  height : " ;
    cin >> height ;
    cout << endl ;

    a = (1/2.0) * base * height ;

    cout << "area = " << 0.5 << " x " << base << " x " << height << " = " << a ;
    cout << endl << endl ;


}

//area  cylinder

void  areaCylinder()
{
 float  r , h , a ;

    cout << "Enter  radius : " ;
    cin >> r ;
    cout << endl ;

    cout << "Enter  height : " ;
    cin >> h ;
    cout << endl ;

    a = 2  * PI * r * h ;

    cout << "area = " << 2 << " x " << PI << " x " << r << " x " << h << " = " << a ;
    cout << endl << endl ;
}

//area  parallelogram

void  areaParallelogram()
{
    float pH , b , a;

    cout << "Enter  perpendicular  height : " ;
    cin >> pH ;
    cout << endl ;

    cout << "Enter  base : " ;
    cin >> b ;

    a = pH * b ;

    cout << "\n\nArea = " << pH << " x " << b << " = " << a ;
    cout << endl ;
}

//area  of  trapezium

void  areaTrapezium()
{
    float  b1 , b2 , h , a ;

    cout << "Enter  base1 : " ;
    cin >> b1 ;
    cout << endl ;

    cout << "Enter  base2 : " ;
    cin >> b2 ;
    cout << endl ;

    cout << "Enter  height : " ;
    cin >> h ;
    cout << endl ;

    a =  h * (b1 + b2) * 0.5 ;

    cout << "area = 1/2 x " << h << " x (" << b1 << " + " << b2 << ")  = " << a ;
    cout << endl << endl ;


}

//volume   cuboid

void  volumeCuboid()
{
    float l , w , h  , v;

    cout << "Enter  length : " ;
    cin >> l ;
    cout << endl ;

    cout << "Enter  width : " ;
    cin >> w ;
    cout << endl ;

    cout << "Enter  height : " ;
    cin >> h ;
    cout << endl ;

    v = l * w * h ;

    cout << "area =  " << l << " x " << w << " x " << h << "  = " << v ;
    cout << endl << endl ;


}

//volumecylinder

void  volumeCylinder()
{
    float  r , h , v ;

   cout << "Enter  radius : " ;
    cin >> r ;
    cout << endl ;

    cout << "Enter  height : " ;
    cin >> h ;
    cout << endl ;

    v = PI * r * r * h ;

    cout << " area = " << PI << " x " << r << " x " << r << " x " << h << " = " << v << endl ;


}

void   volumeSphere()
{
    float  r , v ;

    cout << "Enter  radius : " ;
    cin >> r ;
    cout << endl ;



    v = (4/3.0) * PI * r * r * r ;

    cout << "volume = " << 4/3.0 << " x " << PI << " x " << r << " x " << r << " x" << r << " = " << v << endl ;
}

void  switchFunction()
{
 explainsCalc();

 int   unitNum ;
 cout << "PRESS  NOW : " ;
 cin >> unitNum ;

  while(unitNum > 8)
    {
        explainsCalc();
        cout << "PLEASE  PRESS  THE  CORRECT NUMBER  : ";
        cin >> unitNum ;

    }


 switch(unitNum)
 {
 case 1 :
         cout << endl << endl ;
         cout << "AREA  RECTANGLE" << endl ;
         areaRectangle();
         break ;
 case 2 :
         cout << endl << endl ;
         cout << "AREA  TRIANGLE" << endl ;
          areaTriangle();
          break ;
 case 3 :
         cout << endl << endl ;
         cout << "AREA  CYLINDER" << endl ;
         areaCylinder();
         break ;
 case 4 :
         cout << endl << endl ;
         cout << "AREA  PARALLELOGRAM" << endl ;
         areaParallelogram();
         break ;
 case 5 :
         cout << endl << endl ;
         cout << "\a";
         cout << "AREA  TRAPEZIUM" << endl ;
         areaTrapezium();
         cout << "\a";
         break ;
 case 6 :
         volumeCuboid();
         break ;
 case 7 :
        volumeCylinder();
        break ;
 case 8 :
        volumeSphere();
        break ;
 default :
        cout << "PRESS  A  VALID  NUMBER";
        cout << endl ;
 }



}

 int  main()
 {
   switchFunction();

    char  proceed ;

    cout << "PRESS  y  TO  PROCEED  OR  ANY  OTHER  KEY  TO  PROCEED : " ;
    cin >> proceed ;



    while(proceed == 'y')
    {
      switchFunction();
      cout << "PRESS  y  TO  PROCEED  OR  ANY  OTHER  KEY  TO  QUIT : " ;
      cin >> proceed ;
    }

     return 0 ;
 }
