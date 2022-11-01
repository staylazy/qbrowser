#include <QObject>

namespace Frontend {

// возможно это не best practise, покурить мануалы,
// но так нет варнигов в qml

class Q_DECL_EXPORT FrontendQmlPlugin
{
public:
    static void registerQmlTypes();
};

}
