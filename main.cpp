#include <QCoreApplication>
#include "stock.h"
#include "stockfactory.h"
#include <QTextStream>

static QTextStream cout(stdout);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    StockFactory sf;
    Stock* c1 = sf.createStock("Confectionery", "Kit Kat", 12, 65);
    Stock* c2 = sf.createStock("Confectionery", "Bar One", 15, 55);
    Stock* c3 = sf.createStock("Confectionery", "Choclote Log", 11, 70);
    Stock* rm1 = sf.createStock("ReadingMaterial", "The Star", 100, "Daily");
    Stock* rm2 = sf.createStock("ReadingMaterial", "Die Burger", 70, "Daily");
    Stock* rm3 = sf.createStock("ReadingMaterial", "The Times", 100, "Monthly");

    cout << c1->toString() << endl;
    cout << c2->toString() << endl;
    cout << c3->toString() << endl;
    cout << rm1->toString() << endl;
    cout << rm2->toString() << endl;
    cout << rm3->toString() << endl;




    return a.exec();
}
