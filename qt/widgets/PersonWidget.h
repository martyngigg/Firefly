#ifndef SINGERS_QT_WIDGETS
#define SINGERS_QT_WIDGETS

#include "SingersQtWidgetsModule.h"
#include <QWidget>

class SINGERSQTWIDGETS_EXPORT PersonWidget : public QWidget {

Q_OBJECT

public:
  PersonWidget(QWidget *parent = nullptr);

};

#endif // SINGERS_QT_WIDGETS
