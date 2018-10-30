#include "./test_cpp.h"

void    set_weapon(pugi::xml_node& node)
{
    t_weapon w;
    w.dwID = (node.attribute("dwID") ? node.attribute("dwID").value() : "");
    w.nMaxRepair = (node.attribute("nMaxRepair") ? node.attribute("nMaxRepair").as_uint() : 0);
    std::cout << w << std::endl;
}