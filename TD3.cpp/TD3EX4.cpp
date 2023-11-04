using namespace std;
// Création d'un set contenant des entiers de 1 à 100
    set<int> monSet;
    for (int i = 1; i <= 100; ++i) {
        monSet.insert(i);

//Recherche dans le set
    int valeurRecherchee = 42;
    bool trouve = recherche(monSet.begin(), monSet.end(), valeurRecherchee);
    if (trouve) {
        cout << valeurRecherchee << " est présent dans le set." <<endl;
    } else {
        cout << valeurRecherchee << " n'est pas présent dans le set." <<endl;
    }

// Recherche dans le set
    int valeurRecherchee = 42;
    bool trouve = recherche(monSet.begin(), monSet.end(), valeurRecherchee);
    if (trouve) {
        cout << valeurRecherchee << " est présent dans le set." <<endl;
    } else {
        cout << valeurRecherchee << " n'est pas présent dans le set." <<endl;
    }

// Exemple d'appel avec un vecteur de chaînes de caractères
    vector<string> vecteurString = {"school", "class", "student", "date"};
    string chaineRecherchee = "school";