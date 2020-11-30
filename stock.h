#ifndef STOCK_H
#define STOCK_H
#include <QString>

class Stock
{
public:
    Stock();
    Stock(QString i,int q);
    QString getItem();
    int getQuantity();
    void setItem(QString i);
    void setQuantity(int q);
    virtual QString toString() = 0;
private:
    QString item;
    int quantity;
};

#endif // STOCK_H
