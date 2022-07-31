//
// Created by wirewhiz on 21/07/22.
//

#ifndef BRANEENGINE_VIRTUALVARIABLEWIDGETS_H
#define BRANEENGINE_VIRTUALVARIABLEWIDGETS_H

#include "common/ecs/component.h"

class VirtualVariableWidgets
{
public:
    static bool displayVirtualComponentData(VirtualComponentView component);
    static bool displayVirtualVariable(const char* name, VirtualType::Type type, byte* data);
};


#endif //BRANEENGINE_VIRTUALVARIABLEWIDGETS_H