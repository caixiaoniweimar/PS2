#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#define Pi 3.1415926
// Aufgabe 1.8:
int gcd(int a, int b) {
    if(a<=0||b<=0){
        return 0;}
        else{
            int c=b;
            while (a%b!=0) {
                c=a%b;
                a=b;
                b=c;
            }
            return c;
        }
  return 1;
}
// Aufgabe 1.11:
double fract(double d){
    int f=(int)d;
    double e=d-f;
    return e;
}
// Aufgabe 1.9:
int checksum(int zahl){
    int result=0;
    if(zahl<=0){
        return 0;
    }
    else{
        while (zahl!=0) {
            result+=zahl%10;
            zahl=zahl/10;
        }
        return result;
    }
}
// Aufgabe 1.12:
double Zylinder(double r, double h){
    std::cout<<"Der Radius r ist "<<r<<"\n";
    std::cout<<"Die Hoehe h ist "<<h<<"\n";
    if(r<=0||h<=0){
        std::cout<<"Das Volumen und Zylinders sind 0.\n";
    }
    else{
    double Volumen;
    double Oberflaeche;
    Volumen=Pi*pow(r,2)*h;
    Oberflaeche=2*Pi*r*(r+h);
    std::cout<<"Das Volumen des Zylinders ist "<<Volumen<<"\n"<<"Die Oberflaeche des Zylinders ist "<<Oberflaeche<<"\n";
    }
    return 0;
}
// Aufgabe 1.13:
int factorial(int value){
    if(value <=0){
        std::cout<<value<<"=0"<<std::endl;
    }
    else if(value==1){
        std::cout<<value<<"=1"<<std::endl;
    }
    else{
        std::cout<<value<<"=";
        for(int i=2;i<=value;i++){
            while(value!=i){
                if(value%i==0){
                    std::cout<<i<<"*";
                    value=value/i;
                }
                else
                    break;
            }
        }
        std::cout<<value<<std::endl;
    }
    return 0;
}
// Aufgabe 1.14:
int binomial(int n,int k){
    if(n==k){
        return 1;
    }
    else if(k>n){
        return 0;
    }
    else{
        if(k==0){
            return 1;
        }
        else if(n==0){
            return 0;
        }
        else{
            return binomial(n-1,k-1)+binomial(n-1,k);
        }
    }
}
// Aufgabe 1.15:
int is_prime(int m){
    if(m<=1){
        std::cout<<m<<" ist keine Primazahl.\n";
    }
    else{
        int mal=0;
        for(int i=2;i<m-1;i++){
            if(m%i==0){
                mal++;
            }
        }
        if(mal==0){
            std::cout<<m<<" ist eine Primazahl.\n";
        }
        else{
            std::cout<<m<<" ist keine Primazahl.\n";
        }
    }
    return 0;
}
// Test-Aufgabe1.8:
TEST_CASE ("describe_gcd","[gcd]"){
    REQUIRE(gcd(2,4)==2);
    REQUIRE(gcd(9,6)==3);
    REQUIRE(gcd(3,7)==1);
}
// Test-Aufgabe1.11:
TEST_CASE ("describe_fract","[fract]"){
    REQUIRE(fract(3.1415926)==Approx(0.14).epsilon(0.01));
    REQUIRE(fract(-3.1415926)==Approx(-0.14).epsilon(0.01));
    //REQUIRE(fract(3.1415926)==Approx(0.14).scale(0.01));
    //REQUIRE(fract(3.1415926)==Approx(0.14));
}
int main(int argc, char* argv[])
{
    std::cout<<"Aufgabe 1.9:"<<std::endl;
    std::cout<<"Die Quersumme der Matrikelnummer 118931:"<<checksum(118931)<<std::endl;
    std::cout<<"Aufgabe 1.12:"<<std::endl;
    Zylinder(2,4);
    std::cout<<"Aufgabe 1.13:"<<std::endl;
    factorial(100);
    std::cout<<"Aufgabe 1.14:"<<std::endl;
    std::cout<<"Der Binomialkoeffizient:"<<binomial(4,2)<<std::endl;
    std::cout<<"Aufgabe 1.15:"<<std::endl;
    is_prime(7);
    is_prime(6);
    std::cout<<"Aufgabe 1.8&1.11:"<<std::endl;
    Catch::Session().run(argc, argv);
  return 0;
}
/* wenn REQUIRE(gcd(9,6)==5) ist, dann die Folge der Implementierung:
 XiaoniCaideMacBook-Pro:source xiao$ ./tests
 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 tests is a Catch v1.4.0 host application.
 Run with -? for options
 -------------------------------------------------------------------------------
 describe_gcd
 -------------------------------------------------------------------------------
 /Users/xiao/Desktop/programmiersprachen-aufgabe-1/source/tests.cpp:18
 ...............................................................................
 /Users/xiao/Desktop/programmiersprachen-aufgabe-1/source/tests.cpp:20: FAILED:
 REQUIRE( gcd(9,6)==5 )
 with expansion:
 3 == 5
 ===============================================================================
 test cases: 1 | 1 failed
 assertions: 2 | 1 passed | 1 failed
 */
/*
 wenn REQUIRE(gcd(9,6)==3) ist, dann die Folge der Implementierung:
 XiaoniCaideMacBook-Pro:source xiao$ ./tests
 ===============================================================================
 All tests passed (3 assertions in 1 test case)
 */
