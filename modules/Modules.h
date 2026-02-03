//
// Created by Crafter on 27.01.2026.
//

#ifndef VARIANT_2_MODULES_H
#define VARIANT_2_MODULES_H

#include <vector>
#include <string>

using ModuleFunc = void(*)();

struct Module
{
    ModuleFunc func;
    std::string description;

    Module(ModuleFunc f, const std::string& d);
};

std::vector<Module>& getModules();

#endif //VARIANT_2_MODULES_H