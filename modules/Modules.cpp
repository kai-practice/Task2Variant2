//
// Created by Crafter on 27.01.2026.
//

#include "modules.h"

std::vector<Module>& getModules()
{
    static std::vector<Module> modules;
    return modules;
}

//регистрация модуля
Module::Module(ModuleFunc f, const std::string& d)
    : func(f), description(d)
{
    getModules().push_back(*this);
}