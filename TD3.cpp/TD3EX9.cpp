a_lorsque on utilise les instructions suivant :
     point <char> p (60, 65) ;
        p.affiche () ;
on obtiendre un resultat incorrect .

b_on va modifier notre patron comme suit :
    template <class T> class point
{
    T x, y;
public:
    point(T abs, T ord) : x(abs), y(ord) {}
    void affiche() {
        cout << "Coordonnees : " << x << " " << y << "\n";
    }
};
