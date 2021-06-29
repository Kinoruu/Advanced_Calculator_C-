#include <iostream>
#include <cstdlib>
#include <cmath>
#include <assert.h>
#include "Polynomials.h"

//#define NDEBUG


using namespace std;


class Polynomial
{
private:
  double coefficient;
  int exponent;

public:
  Polynomial* next1; // wszystkie nasze wskazniki do 6 list
  Polynomial* next2;
  Polynomial* next3;
  Polynomial* next4;
  Polynomial* next5;
  Polynomial* next6;

  Polynomial(double coef, int pow)
  {
    coefficient = coef;
    exponent = pow;
    next1 = NULL;
    next2 = NULL;
    next3 = NULL;
    next4 = NULL;
    next5 = NULL;
    next6 = NULL;
  }

  Polynomial()
  {
    coefficient = rand() % 300 + 1;
    exponent = rand() % 15;
    next1 = NULL;
    next2 = NULL;
    next3 = NULL;
    next4 = NULL;
    next5 = NULL;
    next6 = NULL;
  }

  void wyswietl_wielomian()
  {
    cout << "Wspolczynnik wynosi: " << coefficient << " ,a wykladnik: " << exponent << endl;
  }

  void lista_1(Polynomial* a) // pierwszy wielomian, wstawianie pierwszejlisty z sortowaniem od naj wyz do naj mn
  {
    if (next1 == NULL)
    {
      next1 = a;
    }
    else
    {
      if (next1->exponent > a->exponent)
      {
        next1->lista_1(a);
      }

      else if (next1->exponent == a->exponent)
      {
        next1->coefficient = a->coefficient + next1->coefficient;
      }

      else
      {
        a->next1 = next1;
        next1 = a;
      }
    }
  }

  void lista_2(Polynomial* a) // drugi wielomian
  {
    if (next2 == NULL)
    {
      next2 = a;
    }
    else
    {
      if (next2->exponent > a->exponent)
      {
        next2->lista_2(a);
      }

      else if (next2->exponent == a->exponent)
      {
        next2->coefficient = a->coefficient + next2->coefficient;
      }

      else
      {
        a->next2 = next2;
        next2 = a;
      }
    }
  }

  void lista_3(Polynomial* a) // wynik dzielenia (trzeci wielomian)
  {
    if (next3 == NULL)
    {
      next3 = a;
    }
    else
    {
      if (next3->exponent > a->exponent)
      {
        next3->lista_3(a);
      }

      else if (next3->exponent == a->exponent)
      {
        next3->coefficient = a->coefficient + next3->coefficient;
      }

      else
      {
        a->next3 = next3;
        next3 = a;
      }
    }
  }

  void lista_4(Polynomial* a) // tymaczasowy wielomian do mnozenia (4 wielomian)
  {
    if (next4 == NULL)
    {
      next4 = a;
    }
    else
    {
      if (next4->exponent > a->exponent)
      {
        next4->lista_4(a);
      }

      else if (next4->exponent == a->exponent)
      {
        next4->coefficient = a->coefficient + next4->coefficient;
      }

      else
      {
        a->next4 = next4;
        next4 = a;
      }
    }
  }

  void lista_5(Polynomial* a) // nasza reszta (5 wielomian)
  {
    if (next5 == NULL)
    {
      next5 = a;
    }
    else
    {
      if (next5->exponent > a->exponent)
      {
        next5->lista_5(a);
      }

      else if (next5->exponent == a->exponent)
      {
        next5->coefficient = a->coefficient + next5->coefficient;
      }

      else
      {
        a->next5 = next5;
        next5 = a;
      }
    }
  }

  void lista_6(Polynomial* a) // nasza reszta (5 wielomian)
  {
    if (next6 == NULL)
    {
      next6 = a;
    }
    else
    {
      if (next6->exponent > a->exponent)
      {
        next6->lista_6(a);
      }

      else if (next6->exponent == a->exponent)
      {
        next6->coefficient = a->coefficient + next6->coefficient;
      }

      else
      {
        a->next6 = next6;
        next6 = a;
      }
    }
  }

  void wyswietl_1() // wyswietlanie listy 1 w taki sposob aby omijac "0" wspolczynniki
  {
    if (next1 != NULL)
    {
      if (coefficient != 0)
      {
        cout << "Wspolczynnik: " << coefficient << " wykladnik: " << exponent << endl;
      }
      next1->wyswietl_1();
    }
  }

  void wyswietl_2() // reszte wyswietlen po kolei
  {
    cout << "Wspolczynnik: " << coefficient << " wykladnik: " << exponent << endl;

    if (next2 != NULL)
    {
      next2->wyswietl_2();
    }
  }

  void wyswietl_3()
  {
    cout << "Wspolczynnik: " << coefficient << " wykladnik: " << exponent << endl;

    if (next3 != NULL)
    {
      next3->wyswietl_3();
    }
  }

  void wyswietl_4()
  {
    cout << "Wspolczynnik: " << coefficient << " wykladnik: " << exponent << endl;

    if (next4 != NULL)
    {
      next4->wyswietl_4();
    }
  }

  void wyswietl_5()
  {
    cout << "Wspolczynnik: " << coefficient << " wykladnik: " << exponent << endl;

    if (next5 != NULL)
    {
      next5->wyswietl_5();
    }
  }

  void wyswietl_6()
  {
    cout << "Wspolczynnik: " << coefficient << " wykladnik: " << exponent << endl;

    if (next6 != NULL)
    {
      next6->wyswietl_6();
    }
  }

  Polynomial operator+ (Polynomial& left) // przeladowanie operatora dzielenia
  {
    if (left.exponent == exponent)
    {
      return Polynomial(coefficient + left.coefficient, left.exponent);
    }
  }

  Polynomial operator- (Polynomial& left) // przeladowanie operatora odejmowania
  {
    if (left.exponent == exponent)
    {
      return Polynomial(coefficient - left.coefficient, left.exponent);
    }
  }


  double return_coefficient() // metoda ktora zwraca nam wspolczynnik np w mainie bo mamy te zmienna prywatna
  {
    return coefficient;
  }

  int return_exponent() // metoda ktora zwraca nam potege np w mainie bo mamy te zmienna prywatna
  {
    return exponent;
  }

  Polynomial operator/(const Polynomial& left); // zainicjowanie przeladowania operatora dzielenia

  Polynomial operator* (const Polynomial& left) // przeladowanie operatora mnozenia
  {
    return Polynomial(coefficient * left.coefficient, exponent + left.exponent);
  }


}; // mozemy zauwazyc ze nie tylko w klasie mozemy przeladowywac ale rowniez poza nia

Polynomial Polynomial :: operator/(const Polynomial& left) // cialo przeladowania dzielenia
{
  return Polynomial(coefficient / left.coefficient, exponent - left.exponent);
}



int DividePoly()
{
  Polynomial* m5 = new Polynomial(0, 0); // tworzenie root'ow
  Polynomial* m6 = new Polynomial(0, 0);
  Polynomial* m7 = new Polynomial(0, 0);
  Polynomial* m8 = new Polynomial(0, 0);
  Polynomial* m88 = m8;
  Polynomial* minus_jeden = new Polynomial(-1, 0); // mnoznik przy tymczasowym mnozeniu z przeciwnym znakiem nie zmieniajacym potegi
  Polynomial* ite4 = m6;
  double coef; // zmienie ktore pozniej wpisujemy w petli aby wpisac z konsoli wartosci naszych wielomianow
  int exp;

  for (int i = 0; i < 5; i++) // te dwie petle to wpisanie wielomianow i pomija wpisany z wspolczynnikiem 0
  {
    cout << "Podaj paramtery " << i + 1 << ". skladnika pierwszego wielomianu: " << endl << "Wspolczynnik: ";
    cin >> coef;
    cout << "Potega: ";
    cin >> exp;
    if (coef != 0)
    {
      Polynomial* m1 = new Polynomial(coef, exp);
      m5->lista_1(m1);
    }
  }
  cout << endl << "--------------------------------------------" << endl;

  for (int i = 0; i < 2; i++)
  {
    cout << "Podaj paramtery " << i + 1 << ". skladnika drugiego wielomianu wielomianu: " << endl << "Wspolczynnik: ";
    cin >> coef;
    cout << "Potega: ";
    cin >> exp;
    if (coef != 0)
    {
      Polynomial* m2 = new Polynomial(coef, exp);
      m6->lista_2(m2);
    }
  }
  ite4->lista_6(m6->next2); // wskaznik statyczny do pierwszego elementu drugiego wielomianu

  Polynomial* ite = m5; // w celu pomocy zapisanie pierwszego wielomianu tutaj
  Polynomial* ite2 = m6; // to samo co u gory tylko ze drugi wielomian

  int i = 0; // zmienna pomocnicza (iterator) ktora kontroluje nam aby tylko 1. element z mnozenia tymczasowego wszedl nam jako staly wskaznik
  int z = 0; // iterator dla zmiennych (tablic) pomoc11 oraz pomoc12
  int z1 = 0; // iterator dla zmiennych (tablic) pomoc21 oraz pomoc22
  int licznik = 0;
  int licznik2 = 0;
  Polynomial pomoc11[200]; // zmienie pomocnicze w ktore jest zapisywana dana wartosc w danym momencie
  Polynomial* pomoc12[200]; // np wynik dzielenie ktory jest potem wsadzany do listy
  Polynomial pomoc21[200]; // sa tablicami bo proste zmienne swiruja jak sie je caly czas uzywa tych samych
  Polynomial* pomoc22[200];

  while (ite->next1 != NULL)
  {
    if (ite->next1->return_exponent() >= ite2->next2->return_exponent()) // warunek dzielenia jesli potega 1. jest mniejsza od 2. to koniec dzielenia
    {
      z++; // postikrementacja zmiennych pomocniczych
      z1++;
      pomoc21[z1] = *ite->next1 / *ite2->next2; // dzielenie przypisane do obiektu statycznego
      pomoc22[z1] = &pomoc21[z1]; // obiekt statyczny przypisany do dynamicznego
      m7->lista_3(pomoc22[z1]); // wlozenie w liste ktora pozniej jest wynikiem dzielenia

      ite2 = ite4; // te dwie linijki to wyzerowanie wielomianu 2 na pierwszy element
      ite2->next2 = ite4->next6;

      while (ite2->next2 != NULL)
      {
        z++;
        pomoc11[z] = (*pomoc22[z1] * *ite2->next2) * *minus_jeden; // tymczasowe mnozenie oraz przypisanie do statycznego
        pomoc12[z] = &pomoc11[z]; // zostaje przypisane do dynamicznego obiektu (wskaznika)

        if (i == 0)
        {
          m88->lista_5(pomoc12[z]); // staly wskaznik na pierwszy element tymczasowego dzielenia
        }

        m8->lista_4(pomoc12[z]); // dodanie do listy ktora jest tymczasowa i zawiera elementy wymnozone
        ite2 = ite2->next2; // przesuwanie wskaznika drugiego wielomianu w celu mnozenia przez kazdy element
        i++; // ta zmienna jak jest wieksza niz zero to wtedy m88 nam juz nie nadpisze wiecej
      }
      ite2 = ite4; // te dwie linijki to znowu zerowanie wskaznika drugiego wielomianu na pierwszy element
      ite2->next2 = ite4->next6;
      // cout << "Wynik mnozenia tymczasowego juz zanegowany: " << endl << endl;
       // m8->wyswietl_4();

      while (m8->next4 != NULL) // tutaj w tej petli dodajemy wymnozone elementy do wielomianu w celu redukcji
      {                        // oraz w celu stworzenia od nowa wielomianu aby dalej dzielic
        m5->lista_1(m8->next4);
        m8 = m8->next4;
      }
      m8 = m88; // dwie linijki ktore zeruja nam liste tymczasowego mnozenia aby wskaznik byl ustawiony na 1. element
      m8->next4 = m88->next5;

      while (m8->next4 != NULL) // usuwanie elementow tymczasowego mnozenia w celu
      {                       // aby mozna bylo zapisac nowe wartosci od nowa
        Polynomial* p2 = m8->next4;
        m8->next4 = p2->next4;
        delete p2;
      }
      Polynomial* p3 = m88->next5; // usuwanie pomocniczego w mnozeniu, ktore daje nam 1 element (wskazuje na niego)
      m88->next5 = p3->next5; // aby mozna bylo ustawic nowa wartosc ktora bedziemy potrzebowac
      delete p3;
    }

    ite = ite->next1; // przesuwanie wskaznika pierwszego wielomianu dalej aby dalej dzielic
    i = 0;
    z++; // postinkrementacja pomocnych zmiennych
    licznik++;
    licznik2++;
  }

  cout << endl << "Wynik dzielenia: " << endl;
  m7->next3->wyswietl_3();
  cout << endl << "Reszta z dzielenia: " << endl;
  m5->wyswietl_1();
  return 0;
}
