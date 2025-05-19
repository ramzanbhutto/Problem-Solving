/* it includes inheritance and real time polmorphism */
#include<iostream>
using namespace std;

class Photographer{
protected:
  string name;
  double Remuneration;
public:
  Photographer(string n) : name(n) {}
  
  string getName(){
    return name;
  }

  virtual double getRemuneration() = 0;
  virtual void calRemuneration() = 0;

  virtual ~Photographer() = default;
};

class ProductPhotographer : virtual public Photographer{
protected:
  string productType;
  int nProducts;
public:
  ProductPhotographer(string n, string pType, int nP) : Photographer(n), productType(pType), nProducts(nP) {}

  double getRemuneration() override{
    return Remuneration;
  }

  void calRemuneration() override{
    Remuneration = nProducts * 3000;
  }

  ~ProductPhotographer() override {}  /* or keep it as (~ProductPhotographer() {} ) */
};

class ArtPhotographer : virtual public Photographer{
protected:
  string artType;
  int nHours;
public:
  ArtPhotographer(string n, string aType, int nH) : Photographer(n), artType(aType), nHours(nH) {}

  double getRemuneration() override{
    return Remuneration;
  }

  void calRemuneration() override{
    Remuneration = nHours * 1800;
  }

  ~ArtPhotographer() override {}
};

class FashionPhotographer : public ProductPhotographer, public ArtPhotographer{
public:
  FashionPhotographer(string n, string pType, int nP, string aType, int nH) : Photographer(n), ProductPhotographer(n, pType, nP), ArtPhotographer(n, aType, nH) {}

  double getRemuneration() override{
    return Remuneration;
  }

  void calRemuneration() override{
    Remuneration = (nProducts * 2000) + (nHours * 1000);
  }

  ~FashionPhotographer() override {}
};

int main(){
  Photographer *pt;
  
  ProductPhotographer p("Ali", "SPG", 5);
  pt = &p;
  pt->calRemuneration();
  cout<<"Product Photographer: "<<pt->getName()<<", Remuneration: "<<pt->getRemuneration()<<endl;

  ArtPhotographer a("Sara", "Portrait", 10);
  pt = &a;
  pt->calRemuneration();
  cout<<"Art Photographer: "<<pt->getName()<<", Remuneration: "<<pt->getRemuneration()<<endl;

  FashionPhotographer f("Ahmed", "Fashion", 3, "Editorial", 5);
  pt = &f;
  pt->calRemuneration();
  cout<<"Fashion Photographer: "<<pt->getName()<<", Remuneration: "<<pt->getRemuneration()<<endl;

  return 0;
}
