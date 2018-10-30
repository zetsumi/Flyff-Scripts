#ifndef __TEST_CPP_H__
#define __TEST_CPP_H__

#include <iostream>
#include <string>
#include "pugixml.h"

#define FILE_PROPITEM "propitem.xml"
#define NUMBER_NODE 8

typedef void (*process)(pugi::xml_node&);
typedef struct s_process
{
    std::string name;
    process fct;
} t_process;

typedef struct s_weapon
{
    std::string dwID;
    unsigned int nMaxRepair;

    friend std::ostream& operator<<(std::ostream& os, const s_weapon& w)
    {
        os << w.dwID << " " << w.nMaxRepair;
        return os;
    }
} t_weapon;

void set_weapon(pugi::xml_node& node);

#endif