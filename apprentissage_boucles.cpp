#include <iostream>
#include <string>

using namespace std;

int main()
{
  cout << "Quelle operation voulez-vous faire : ";
  string operation(null);
  cin >> operation;

  if (operation = addition){
    addition();
  }

  if (operation = soustraction){
    soustraction();
  }

  cout << "Je n'ai pas compris." << endl;
  main();
}

int addition()
{
  cout << "Entrez le premier nombre : ";
  double nombreA(0);
  cin >> nombreA;

  cout << "Entrez le second nombre : ";
  double nombreB(0);
  cin >> nombreB;

  resultatAddition = nombreA + nombreB;
  cout << nombreA << " + " << nombreB << " = " << resultat << endl;
  cout << " . " << endl;
  main();
}

int soustraction()
{
  cout << "Entrez le premier nombre : ";
  double nombreA(0);
  cin >> nombreA;

  cout << "Entrez le second nombre : ";
  double nombreB(0);
  cin >> nombreB;

  resultatAddition = nombreA - nombreB;
  cout << nombreA << " - " << nombreB << " = " << resultat << endl;
  cout << " . " << endl;
  main();
}

  
