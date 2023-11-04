#include <iostream>
using namespace std ;
template <typename T>
T carre(T valeur) {
    return valeur * valeur;
}

int main() {
    int x = 8;
    double y = 4,2;

    int carreInt = carre(x);
    cout << "Le carre de " << x << " est " << carreInt <<endl;

    double carreDouble = carre(y);
    cout << "Le carre de " << y << " est " << carreDouble <<endl;

    return 0;
}
