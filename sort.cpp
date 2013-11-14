#include <QList>
//#include <algorithm>
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



QList<int> insertion_sort(QList<int> lista, int n)
{
    int i, j, k;
    for(i=1; i<n; i++)
    {
        k = lista[i];
        qDebug() << "wykonano";
        qDebug() << k;
        for (j=i; j>0 && lista[j-1]>k; j--)
        {
            qDebug() << lista[j] << "    " << lista[j-1];
            lista.swap(j,j-1);

        }
    }
    qDebug() << "wykonano calosc";
    return lista;
}


QList<int> indexing(QList<int> lista, QList<int> indexy, int n)
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
            indexy.swap(k, i);
        }
    return indexy;
}


QList<int> indexing1(QList<int> lista, QList<int> indexy, int n)
{
    int i, j, k;
    for(i=1; i<n; i++)
    {
        k = lista[i];
        for (j=i; j>0 && lista[j-1]>k; j--)
        {
            indexy.swap(j,j-1);
        }
    }
    foreach(int g, indexy)
    {
        qDebug() << indexy[g];
    }
    return indexy;
}

QList<int> isort(QList<int> lista, QList<int> indexy, int n)
{
    QList<int> tmplista;
    for(int i=0; i<n; i++)
    {
        //qDebug() << i;
        //qDebug() << i << "i: " << lista[i] << lista[indexy[i]] << indexy[i];
        tmplista.append(lista[indexy[i]]);
    }
    return tmplista;
}
