#include "mythread.h"
#include<QElapsedTimer>
#include<QDebug>

myThread::myThread(QObject *parent) : QThread(parent)
{

}

void myThread::recvNum(int num)
{
    m_num = num;
}

void myThread::run()
{
    qDebug() << "生成随机数的线程地址" << QThread::currentThread();
    QVector<int> list;
    QElapsedTimer time;
    time.start();
    for(int i = 0;i < m_num;i++)
    {
        list.push_back(qrand() % 100000);
    }
    int milsec = time.elapsed();
    qDebug() << "生成" << m_num << "个随机数用时" << milsec<< "毫秒";
    emit sendArray(list);
}

Bubble::Bubble(QObject *parent) : QThread(parent)
{

}

void Bubble::recvArray(QVector<int> list)
{
    m_list = list;
}

void Bubble::run()
{
    qDebug() << "冒泡排序的线程地址" << QThread::currentThread();
    QElapsedTimer time;
    time.start();
    for(int i = 0;i < m_list.size() - 1;i++)
    {
        for(int j = 0;j < m_list.size() - i -1;j++)
        {
            if(m_list[j] > m_list[j + 1])
            {
                int temp = m_list[j];
                m_list[j] = m_list[j + 1];
                m_list[j+1] = temp;
            }
        }
    }
    int milsec = time.elapsed();
    qDebug() << "冒泡排序用时" << milsec<< "毫秒";
    emit finish(m_list);
}

Quick::Quick(QObject *parent) : QThread(parent)
{

}

void Quick::recvArray(QVector<int> list)
{
    m_list = list;
}

void Quick::run()
{
    qDebug() << "快速排序的线程地址" << QThread::currentThread();
    QElapsedTimer time;
    time.start();
    sort(m_list,0,m_list.size() - 1);
    int milsec = time.elapsed();
    qDebug() << "快速排序用时" << milsec<< "毫秒";
    emit finish(m_list);
}

void Quick::sort(QVector<int> &s , int l , int r )
{
    if(l < r)
    {
        int i = l , j = r;
        int x = s[l];
        while (i < j) {
            while(s[j]>=x && i<j)
                j--;
            while(s[i]<=x && i<j)
                i++;
            if(i < j)
            {
                 int temp=s[i];
                 s[i]=s[j];
                 s[j]=temp;
             }
        }
        s[l]=s[i];
        s[i]=x;
        sort(s,l,i-1);
        sort(s,i+1,r);
    }
}


