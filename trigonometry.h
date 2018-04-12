#ifndef TRIGONOMETRY_H
#define TRIGONOMETRY_H

#include <QQuickItem>

#define _USE_MATH_DEFINES
#include <math.h>

class Trigonometry : public QQuickItem
{
    Q_OBJECT
    Q_DISABLE_COPY(Trigonometry)

    Q_PROPERTY(QString version READ version CONSTANT)

public:
    Trigonometry(QQuickItem *parent = nullptr);
    ~Trigonometry();

    QString version() const { return QString("1.0 " __DATE__ ", " __TIME__ ); }
    Q_INVOKABLE double circleArea(double r) { return M_PI * r * r; }
    Q_INVOKABLE double circleCircumference(double r) { return 2 * M_PI * r; }
};

#endif // TRIGONOMETRY_H
