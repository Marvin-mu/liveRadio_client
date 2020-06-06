#ifndef ROOMLISTWINDOW_H
#define ROOMLISTWINDOW_H

#include <QWidget>
#include "clientsocket.h"
#include "user.h"
#include "BaseWindow.h"

namespace Ui {
class RoomListWindow;
}

class RoomListWindow : public BaseWindow
{
    Q_OBJECT

public:
    explicit RoomListWindow(ClientSocket *cs, QTcpSocket *socket, user_t user, QWidget *parent = 0);
    ~RoomListWindow();

private:
    Ui::RoomListWindow *ui;
};

#endif // ROOMLISTWINDOW_H