#ifndef __PluginParameter_h__
#define __PluginParameter_h__

#include <string>

namespace teragon {
  namespace plugincore {
    typedef std::string ParameterString;
    typedef double ParameterValue;

    class PluginParameter {
    public:
      PluginParameter() {};
      virtual ~PluginParameter() {};

      virtual const ParameterString getName() const = 0;
      virtual const ParameterString getDisplayValue() const = 0;
      virtual const ParameterValue getValue() const = 0;
      virtual void setValue(const ParameterValue value) = 0;
    };
  }
}

#endif