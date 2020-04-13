#ifndef LOGICTL_LOGICTL_H
#define LOGICTL_LOGICTL_H

#include <dbus-c++/dbus.h>
#include <map>
#include <string>

namespace logictl
{
    extern DBus::BusDispatcher* dispatcher;
    extern DBus::Connection* bus;

    extern std::string exec_cmd;
    extern std::vector<std::string> args;
    extern std::map<std::string, void(*)()> functions;

    void help();
    void reload();
}
#endif //LOGICTL_LOGICTL_H