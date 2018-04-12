#include "mathfun_plugin.h"
#include "trigonometry.h"

#include <qqml.h>

void MathFunPlugin::registerTypes(const char *uri)
{
    // @uri Com.ACMI.MathFun
    qmlRegisterType<Trigonometry>(uri, 1, 0, "Trigonometry");
}

