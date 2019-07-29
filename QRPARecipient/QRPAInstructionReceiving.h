#ifndef QRPAINSTRUCTIONRECEIVING_H
#define QRPAINSTRUCTIONRECEIVING_H

#include <QObject>

class QRPAInstructionReceiving : public QObject
{
    Q_OBJECT
public:
    explicit QRPAInstructionReceiving(QObject *parent = 0);

signals:

public slots:
};

#endif // QRPAINSTRUCTIONRECEIVING_H