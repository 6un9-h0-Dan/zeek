
#ifndef BRO_PLUGIN_DEMO_FOO
#define BRO_PLUGIN_DEMO_FOO

#include <plugin/Plugin.h>

namespace plugin {
namespace Demo_Foo {

class Plugin : public ::plugin::Plugin
{
protected:
	// Overridden from plugin::Plugin.
	plugin::Configuration Configure() override;
};

extern Plugin plugin;

}
}

#endif
