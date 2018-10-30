#include "./test_cpp.h"


static void node_gold(pugi::xml_node& node)
{
    for (auto it : node)
    {
    }
}

static void node_weapon(pugi::xml_node& node)
{
    std::cout << "node_weapon: " << node.name() << std::endl;
    for (auto it : node)
    {
        std::cout << "\t node: " << it.name() << std::endl;
        for (auto section : it)
        {
            if (std::string(section.name()) == std::string("item"))
            {
                std::cout << "\t\t\t item:" << section.name() << std::endl;
                set_weapon(section);
            }
            else
            {
                std::cout << "\t\t\t job: [" << section.name() << "]" << std::endl;
                for (auto item : section)
                {
                    std::cout << "\t\t\t\t [item]: " << item.name() << std::endl;
                    set_weapon(item);
                }
            }
        }
    }
}

static void node_armor(pugi::xml_node& node)
{
}

static void node_general(pugi::xml_node& node)
{
    for (auto it : node)
    {
    }
}

static void node_ride(pugi::xml_node& node)
{
    for (auto it : node)
    {
    }
}

static void node_system(pugi::xml_node& node)
{
    for (auto it : node)
    {
    }
}

static void node_charged(pugi::xml_node& node)
{
    for (auto it : node)
    {
    }
}

static void node_housing(pugi::xml_node& node)
{
    for (auto it : node)
    {
    }
}


int main()
{
	pugi::xml_document doc;
    pugi::xml_parse_result result = doc.load_file(FILE_PROPITEM);
    if (!result)
    {
        std::cerr << "Error on load " << FILE_PROPITEM << std::endl;
        return 1;
    }
    t_process process[NUMBER_NODE] = {
        {"gold", &node_gold},
        {"weapon", &node_weapon},
        {"armor", &node_armor},
        {"general", &node_general},
        {"ride", &node_ride},
        {"system", &node_system},
        {"charged", &node_charged},
        {"housing", &node_housing}
    };

    pugi::xml_node root = doc.child("items");
    for (pugi::xml_node node : root)
    {
        for (unsigned int i = 0; i < NUMBER_NODE; ++i)
        {
            if (node.name() == process[i].name)
            {
                process[i].fct(node);
                break;
            }
        }
    }
    return 0;
}