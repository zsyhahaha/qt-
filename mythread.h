#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include<QVector>
//随机数线程
class myThread : public QThread
{
    Q_OBJECT
private:
    int m_num;
public:
    explicit myThread(QObject *parent = nullptr);
    void recvNum(int num);
protected:
    void run() override;

signals:
    void sendArray(QVector<int> num);

public slots:
};
//冒泡排序线程
class Bubble : public QThread
{
    Q_OBJECT
private:
    QVector<int> m_list;
public:
    explicit Bubble(QObject *parent = nullptr);
    void recvArray(QVector<int> list);
protected:
    void run() override;

signals:
    void finish(QVector<int> num);

public slots:
};
//快速排序线程
class Quick : public QThread
{
    Q_OBJECT
private:
    QVector<int> m_list;
    void sort(QVector<int> &list , int l , int r );
public:
    explicit Quick(QObject *parent = nullptr);
    void recvArray(QVector<int> num);
protected:
    void run() override;

signals:
    void finish(QVector<int> num);

public slots:
};


#endif // MYTHREAD_H
