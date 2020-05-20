/****************************************************************************
*   Copyright (C) 2014 by Jens Nissen jens-chessx@gmx.net                   *
****************************************************************************/

#ifndef BOARDSEARCHDIALOG_H
#define BOARDSEARCHDIALOG_H

#include <QDialog>
#include "board.h"

namespace Ui {
class BoardSearchDialog;
}

class BoardSearchDialog : public QDialog
{
    Q_OBJECT

public:
    explicit BoardSearchDialog(QWidget *parent = nullptr);
    ~BoardSearchDialog();

    int mode() const;
    void setBoardList(const QList<BoardX> &);
    int boardIndex() const;
protected slots:
    void reject();
    void accept();
    void restoreLayout();

    void showPrevBoard();
    void showNextBoard();

protected:
    void setCurrentBoard();
private:
    Ui::BoardSearchDialog *ui;
    QList<BoardX> m_boardList;
    int m_currentBoardIndex;
};

#endif // BOARDSEARCHDIALOG_H
