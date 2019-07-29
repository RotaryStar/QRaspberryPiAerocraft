#ifndef QRPAMANAGER_H
#define QRPAMANAGER_H

#include <QObject>
#include <QString>
#include <QDebug>

#include "QRPAInstructionReceiving.h"
#include "QRPAMotorController.h"

class QRPAManager : public QObject
{
    Q_OBJECT
public:
    explicit QRPAManager(QObject *parent = 0);

signals:


private:
    QRPAInstructionReceiving *QRPAIr;
    QRPAMotorController *QRPAMc;

public slots:
};

#endif // QRPAMANAGER_H
