#include <iostream>
using std::cout;
using std::endl;
int main()
{
  int getKleinstZahl(int m,int n);
    cout << "Aufgabe 1.3\n";
    cout<< "Die kleinste Zahl ist:"<<getKleinstZahl(1,20)<<"\n\n";
    
    cout<< "Aufgabe 1.4\n";
    cout<<"Ein Typ definiert einen Satz möglicher Werte und einen Satz von Operationen für ein Objekt. z,B hier “int”-(Ganzzahl),”bool”-(boolescher Wert),”char”-(Zeichen),”double”(Gleitkommazahl doppelter Genauigkeit) sind Typen."<<"\n\n"<<"Ein Variable ist ein benanntes Objekt. z,B “a”,”b”,”c”,”d”,”two”,”e”."<<"\n\n"<<"Ein Wert ist eine Menge von Bits, die entsprechend einem Typ interpretiert werden. z.B “9”,”false”,’a’,”1.3”,”2”…"<<"\n\n";
    cout<<"Wenn man etwas als “const” deklariert, stellt man sicher, dass sich sein Wert innerhalb seines Gültigkeitsbereichs nicht ändert. “const” modifiziert einen Typ. Damit wird eingeschränkt, wie sich ein Objekt verwenden lässt."<<"\n\n";
    cout<<"Typkonvertierung: In Zuweisungen und in arithmetische Operationen führt C++ alle sinnvollen Umwandlungen zwischen den Basistypen aus. z.B “double e= a/two;” Devision an e zuweisen, dabei wird der int-Wert a/two auf einen double umwandelt."<<"\n\n";
    cout<<"Fehler: two=d; Weil two ein konstanter Ausdruck ist. “two” wird nicht verändert."<<"\n\n\n";
    
    cout<<"Aufgabe 1.5\n";
    cout<<"Initialisierung:Eine Definition mit expliziter Anfangswertzuweisung.Unter dem Begriff Initialisierung wird in der Regel das erste Zuweisen eines Wertes zu einer Variablen verstanden."<<"\n";
    cout<<"Beispiel: int b=1;"<<"\n\n";
    cout<<"Zuweisung:Unter einer Zuweisung versteht man einen Typ von Anweisung, durch den eine Variable einen neuen Wert enthälten und verändern können."<<"\n";
    cout<<"Beispiele: b=1; (b ist immer ein vorher konstruiertes Objekt. int b;)"<<"\n\n";
    cout<<"Unterschied:Für Zuweisung, bevor eine Zuweisung eines Wertes an eine Variable erfolgen kann, ist es erforderlich, diese explizit zu deklarieren. Und ein Zuweisungsoperator wird eingesetzt.  In Abgrenzung von anderen Anweisungstypen, die ebenfalls den Wert einer Variablen verändern können."<<"\n\n";
    
    cout<<"Aufgabe 1.6\n";
    cout<<"Deklaration:Bevor ein Name(Bezeichner) verwendet werden kann, muss er deklariert werden. D.h, es ist sein Typ zu spezifizieren, um den Compiler darüber zu informieren, auf welche Art von Entität der Name verweist.Deklarationen führen Namen und Typen ein ohne Details zu nennen."<<"\n\n";
    cout<<"Beispiel:"<<"\n"<<"Funktionen: class Y{ public : Y(X const&); }; // Gibt die Existenz einer Funktion mit einem bestimmen Namen und entsprechender Signatur bekannt\n"<<"Variablen: extern int error_number; //Gibt die Existenz einer Variable eines bestimmten Typs bekannt\n"<<"Klassen: class X // Gibt die Existenz eines Typs bekannt"<<"\n\n";
    cout<<"Definition:Die Definition ist eine Deklaration, die alles das liefert, was in einem Programm für die Verwendung einer Entität benötigt wird. Benötigt die Entität Speicher, um etwas darzustellen, wird dieser Speicher entsprechend ihrer Definition reserviert. Jede Deklaration, die einen Wert spezifiziert, ist eine Definition."<<"\n\n";
    cout<<"Beispiel:\n"<<"Funktionen: Y::Y(X const&){…} // Legt den Rumpf/die Implementierung der Funktion fest\n"<<"Variablen: extern int error_number=1;// Legt den Speicherort für das Objekt fest\n"<<"Klassen: class X{ public : X( ); }; //Legt den Aufbau des Typs\n\n";
    cout<<"Unterschied:1.Wenn wir eine globale Variablen a referenzieren möchten, müssen wir “extern int a” deklarieren.“extern int a” kann mehrere Mals redeklariert werden. Aber Variablen werden nur einmal definiert.\n 2.Deklarationen erachtet  als Teil einer Schnittstelle und Definition als Teil einer Implementierung. Wir versuchen, Schnittstellen aus Deklarationen zu bilden, die sich in separaten Dateien replizieren lassen. Definitionen, die Speicher reservieren, gehören nicht in Schnittstellen.\n\n";
    
    cout<<"Aufgabe 1.7\n";
    cout<<"Signatur besteht aus dem Namen der Funktion sowie der Anzahl, Art und Reihenfolge der Parameterdatentypen, wobei zwischen Eingangs-, Ausgangsparametern unterschieden werde kann. Der Typ des Rückgabewerts gehört ebenfalls zur Signatur.\n\n";
    cout<<"Beispiel:\n"<<"double sum(double a, double b) // die Signatur ist : sum( double, double )\n"
    <<"int square(int var) // die Signatur ist : square( int )\n\n";
    cout<<"Gültigkeitsbereich:\n int var=3; // globales var, Sein Gültigkeitsbereich erstreckt sich vom Punkt seiner Deklarationen bis zum Ende seines Namespaces.\n"<<"double sum(double a, double b) // lokale a und b, Sein Gültigkeitsbereich erstreckt sich vom Punkt der Deklaration bis zum Ende des Blocks, in dem seine Deklaration steht.\n"<<"int square(int var) // lokales var verdeckt globales var\n"<<"for(int i=0…); // lokales i, im ()-Teil einer for-Anweisung, Sein Gültigkeitsbereich erstreckt sich vom Punkt seiner Deklaration bis zum Ende der betreffenden Anweisung.\n\n";

    cout<<"Aufgabe 1.10\n";
    void sumMultiples();
    cout<<"Die Summe, die alle Zahlen von 1 bis 1000, die durch 3 oder 5 teilbar sind:";
    sumMultiples();

    cout<<"Aufgabe 1.17\n";
    cout<<"C++ :C++ ist eine von der ISO genormte Programmiersprache.Sie wurde als Erweiterung der Programmiersprache C entwickelt.C++ wird sowohl in der Systemprogrammierung als auch in der Anwendungsprogrammierung eingesetzt.\n\n";
    
    cout<<"Quellcode :Quellcode/Quelltext ist der für Menschen lesbare, in einer Programmiersprache geschriebene Text eines Computerprogrammes. Der Quellcode kann für ein Programm auch als Software-Dokument bezeichnet werden, welches das Programm formal so vollständig beschreibt, dass dieses aus ihm vollständig automatisch von einem Computer in Maschinensprache übersetzt werden kann.\n\n";
    
    cout<<"Compiler :Ein Compiler ist ein Computerprogramm, das Quellcodes einer bestimmten Programmiersprache in eine Form übersetzt, die von einem Computer (direkter) ausgeführt werden kann.\n\n";
    
    cout<<"Linker :Unter einem Linker oder Binder versteht man ein Computerprogramm, das einzelne Programmmodule zu einem ausführbaren Programm zusammenstellt (verbindet).\n\n";
    
    cout<<"Objektcode :Objektcode ist ein Zwischenergebnis eines Compiler- bzw. Übersetzungsvorgangs von einem Computerprogramm.\n\n";
    
    cout<<"Ausführbare Datei :Als ausführbare Datei bezeichnet man eine Datei, die als Computerprogramm ausgeführt werden kann.\n\n";
    
    cout<<"main() :Jedes C++ Programm muss eine Funktion mit dem Namen main(...) enthalten und diese Funktion definiert den Einsprungspunkt in das Programm.Dies ist der allgemeine Aufbau der Funktion main(...). Nach dem Funktionskopf int main() folgt ein Paar geschweifter Klammern und innerhalb des Klammerpaares stehen die Anweisungen, die das Programm ausführen soll. Dieses 'kleine Programm' oben führt natürlich noch nichts aus, da es außer der main()-Funktion noch keine weiteren Anweisungen enthält.\n\n";
    
    cout<<"Der #include-Mechanismus ist ein Instrument zur Textbearbeitung, das den Quellcode mehrerer Programmfragmente in einer einzigen Einheit(Datei) zur Übersetzung zusammenfasst.For #include <filename> the preprocessor searches in an implementation dependent manner, normally in search directories pre-designated by the compiler/IDE. This method is normally used to include standard library header files.\n\n";
    
    cout<<"Kommentar :Kommentare sind Passagen innerhalb des Programms die vom Compiler ignoriert werden. Sie dienen hauptsächlich dazu, Hinweise zur Funktion eines Programms zu geben. Kommentare können an beliebiger Stelle innerhalb eines Programms stehen und (fast) beliebige Zeichen enthalten.\n\n";
    
    cout<<"Header :Jede Komponente der Standardbibliothek wird über einen bestimmten Standard-Header bereitgestellt. Die entsprechenden Header müssen mit #include eingebunden werden, um das Programm zu vervollständigen. Z.B #include<string> \n\n";
    
    cout<<"Programm :Ein Programm ist eine Sammlung von getrennet übersetzten Einheiten, die ein Linker miteinander verbindet. Alle in dieser Sammlung verwendeten Objekte, Typen usw. müssen über eindeutige Definition verfügen. Ein Programm muss genau eine Funktion namens main() enthalten.\n\n";
    
    cout<<"Ausgabe :Ein- und Ausgaberoutinen geben Ihnen die Möglichkeit, mit einem Programm zu interagieren. Um die C++-Ein- und Ausgabe nutzen zu können, müssen Sie die Bibliothek iostream einbinden. Das geschieht mit:#include <iostream>\n\n";
    
    cout<<"std::cout :Die Standardbibliothek ist in einem Namespace namens std definiert. Er enthält alle Komponenten der Standardbibliothek von C++. Um Elemente der Standardbibliothek aufzurufen, kann ihnen das Präfix std:: vorangestellt werden. Um nun die Ein- und Ausgabebefehle nutzen zu können, müssen Sie dem Compiler sagen: Benutze den Namensraum std. Sie können den Namensraum „std“ immer direkt angeben. Die beiden Doppelpunkte heißen Bereichsoperator.\n\n";
    
    cout<<"std::cin :Benutze den Namensraum std. std::cin>>Behälter bedeutet wie:lies Inhalte von der Tastatur und speichere sie in der Behälter.\n\n";
    
    cout<<"<< :Um den Inhalt der Variable auszugeben, müssen Sie nur tun, cout mit einem weiteren Schiebeoperator (<<) anzuhängen.\n\n";
    
    cout<<">> :Bei der Eingabe muss natürlich der >>-Operator statt dem <<-Operator benutzt werden.\n\n";
    
    cout<<"Funktion :Um ein C++-Programm zum Leben zu erwecken, ruft man üblicherweise eine Funktion auf, die die eigentliche Arbeit erledigt. Mit der Definition einer Funktion legt man fest, wie eine Operation auszuführen ist. Eine Funktion kann nur aufgerufen werden, wenn sie zuvor deklariert werden.\n\n";
    
    cout<<"Funktionsignatur :Eine Signatur definiert in der Programmierung die formale Schnittstelle einer Funktion oder Prozedur.Signatur besteht aus dem Namen der Funktion sowie der Anzahl, Art und Reihenfolge der Parameterdatentypen, wobei zwischen Eingangs-, Ausgangsparametern unterschieden werde kann. Der Typ des Rückgabewerts gehört ebenfalls zur Signatur.\n\n";
    
    cout<<"Deklaration :Bevor ein Name(Bezeichner) verwendet werden kann, muss er deklariert werden. D.h, es ist sein Typ zu spezifizieren, um den Compiler darüber zu informieren, auf welche Art von Entität der Name verweist.Deklarationen führen Namen und Typen ein ohne Details zu nennen.\n\n";
    
    cout<<"Definition :Die Definition ist eine Deklaration, die alles das liefert, was in einem Programm für die Verwendung einer Entität benötigt wird. Benötigt die Entität Speicher, um etwas darzustellen, wird dieser Speicher entsprechend ihrer Definition reserviert. Jede Deklaration, die einen Wert spezifiziert, ist eine Definition.\n\n";
    
    cout<<"Typ :Ein Typ definiert einen Satz möglicher Werte und einen Satz von Operationen für ein Objekt.\n\n";
    
    cout<<"Typkonvertierung :In Zuweisungen und in arithmetische Operationen führt C++ alle sinnvollen Umwandlungen zwischen den Basistypen aus.\n\n";
    
    cout<<"Variable :Ein Variable ist ein benanntes Objekt.\n\n";
    
    cout<<"Name :Ein Name(Bezeichner) besteht aus einer Folge von Buchstaben und Ziffern. Das erste Zeichen muss ein Buchstabe sein. Der Unterstrich_ gilt als Buchstabe. C++ kennt keine Beschränkungen hinsichtlich der Anzahl von Zeichen in einem Namen. Ein C++-Schlüsselwort wie new oder int, darf nicht als Name einer benutzerdefinierten Entität verwendet werden.\n\n";
    
    cout<<"Wert :Ein Wert ist eine Menge von Bits, die entsprechend einem Typ interpretiert werden.\n\n";
    
    cout<<"Initialisierung :Eine Definition mit expliziter Anfangswertzuweisung.Unter dem Begriff Initialisierung wird in der Regel das erste Zuweisen eines Wertes zu einer Variablen verstanden.\n\n";
    
    cout<<"Zuweisung:Unter einer Zuweisung versteht man einen Typ von Anweisung, durch den eine Variable einen neuen Wert enthälten und verändern können.\n\n";
    
    cout<<"const :Wenn man etwas als “const” deklariert, stellt man sicher, dass sich sein Wert innerhalb seines Gültigkeitsbereichs nicht ändert. “const” modifiziert einen Typ. Damit wird eingeschränkt, wie sich ein Objekt verwenden lässt.\n\n";
    
    cout<<"Gültigkeitsbereich :Ene Variable oder Konstante hat innerhalb eines Programms nur eine begrenzte Lebensdauer oder Gültigkeit. Dieser Gültigkeitsbereich eines Datums gibt den Bereich an, innerhalb dessen das Datum sichtbar ist und somit darauf zugegriffen werden kann.\n\n";
    
  return 0;
}
//Aufgabe 1.3:
int ggT(int a, int b){ // findet größter gemeinsamer Teiler
    if(b!=0){
        return ggT(b,a%b);}
    else
        return a;
}
int getKleinstZahl(int m,int n){ // Zahl=20*19*9*17*4*7*13*11
    int result=n;
    for(int i=n-1;i>=m;i--){
        if(result%i!=0){
            result=result*(i/ggT(result,i));
        }
    }
    return result;
}
//Aufgabe 1.10:
void sumMultiples(){
    int sum;
    for(int zahl=1;zahl<=1000;zahl++){
        if( zahl%3==0 || zahl%5==0 ){
            sum+=zahl;
        }
    }cout<<sum<<"\n\n";
}
