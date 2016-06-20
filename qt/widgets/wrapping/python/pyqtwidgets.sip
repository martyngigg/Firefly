// Name
%Module pyqtwidgets

%Import QtGui/QtGuimod.sip

class PersonWidget : QWidget {
%TypeHeaderCode
#include "PersonWidget.h"
%End
public:

PersonWidget();
};
