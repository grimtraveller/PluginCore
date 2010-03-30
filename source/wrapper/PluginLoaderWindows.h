#ifndef __PluginLoaderWindows_h__
#define __PluginLoaderWindows_h__

#ifndef __PluginLoader_h__
#include "wrapper/PluginLoader.h"
#endif

#ifndef DEFAULT_REGISTRY_LOCATION
#define kDefaultRegistryLocation "SOFTWARE\\Teragon Audio\\PluginCore"
#endif

#include <string>

namespace teragon {
namespace plugincore {
  class PluginLoaderWindows : public PluginLoader {
  public:
    PluginLoaderWindows();
    ~PluginLoaderWindows();

    Plugin* load();

    static const unsigned long kRegistryKeyBufferSize = 1024;

  private:
    Plugin* loadFromFile(std::string pluginLocation);

    std::string getPluginLocationInRegistry();
    std::string getPluginLocationInProgramFiles();

    std::string getRegistryKey(const char* location, const char* keyName);    
  };
}
}

#endif