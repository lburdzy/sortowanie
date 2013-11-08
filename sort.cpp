#include <QList>
#include <algorithm>
#include <QDebug>
QList<int> sort1(QList<int> lista)
{
    qSort(lista.begin(), lista.end());
    return lista;
}

QList<int> selection_sort(QList<int> lista, int n)
{
    int i, j, k;
        for(i=0; i<n; i++)
        {
            k=i;
            for(j=i+1; j<n; j++)
            {
                if(lista[j]<lista[k])
                {
                    k=j;
                }
            }
            lista.swap(k, i);
        }
    return lista;
}


QList<int> indexing(QList<int> lista)
{
    QList<int> indexy;
    QList<int> sorted;
    sorted = sort1(lista);
    //petla; szukamy min, wypisujemy index, ?zmieniamy wartsoc na  10k?, i++
    for(int i=0; i<lista.size(); i++)
    {
        //QList<int>::iterator it = std::min_element(lista.begin(), lista.end());
        indexy.append(lista.indexOf(sorted[i]));
        lista.replace(lista.indexOf(sorted[i]), 10000);

    }


    return indexy;
}


QList<int> insertion_sort(QList<int> lista, int n)
{
    int i, j, k;
    for(i=1; i<n; ++i)
    {
        k = lista[i];
        for (j=i; j>0 && lista[j-1]>k; j--)
        {
            lista[j] = lista[j - 1];
        }
    }
    return lista;
}
