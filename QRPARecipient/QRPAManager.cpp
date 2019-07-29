#include "QRPAManager.h"

QRPAManager::QRPAManager(QObject *parent) : QObject(parent)
{

    qDebug()<< QString::fromLocal8Bit("start loading . . . .");
    QRPAIr = new QRPAInstructionReceiving(this);
    QRPAMc = new QRPAMotorController(this);
}
