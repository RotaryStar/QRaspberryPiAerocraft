#ifndef QRPAMOTORCONTROLLER_H
#define QRPAMOTORCONTROLLER_H

#include <QObject>

#include "QRPAMotorControllerAlgoritms.h"

class QRPAMotorController : public QObject
{
    Q_OBJECT
public:
    explicit QRPAMotorController(QObject *parent = 0);

signals:

public slots:
};

#endif // QRPAMOTORCONTROLLER_H
