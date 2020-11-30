#include "stockfactory.h"

StockFactory::StockFactory()
{

}



Stock* StockFactory::createStock(QString stockType, QString i, int q, QString f)
{

    return new ReadingMaterial(i,q,f);

}

Stock *StockFactory::createStock(QString stockType, QString i, int q, int w)
{
    return new Confectionery(i,q,w);
}
