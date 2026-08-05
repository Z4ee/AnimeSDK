#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Net { class WebProxy; }

#define SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_ABORT_OFFSET UNITYSDK_OFFSET(0x1DD19460)
#define SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_CHECKFORCHANGES_OFFSET UNITYSDK_OFFSET(0x1DD19470)
#define SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_CLOSE_OFFSET UNITYSDK_OFFSET(0x1DD19450)
#define SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_GETPROXIES_1_OFFSET UNITYSDK_OFFSET(0x1DD19440)
#define SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_GETPROXIES_OFFSET UNITYSDK_OFFSET(0x1DD19430)
#define SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_GET_AUTOMATICALLYDETECTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1DD19410)
#define SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_GET_AUTOMATICCONFIGURATIONSCRIPT_OFFSET UNITYSDK_OFFSET(0x1DD193F0)
#define SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_SET_AUTOMATICALLYDETECTSETTINGS_OFFSET UNITYSDK_OFFSET(0x1DD19420)
#define SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_SET_AUTOMATICCONFIGURATIONSCRIPT_OFFSET UNITYSDK_OFFSET(0x1DD19400)
#define SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD193E0)

namespace System::Net
{
	inline static constexpr unsigned int AutoWebProxyScriptEngine_TypeDefinitionIndex = 3479;

	class AutoWebProxyScriptEngine : public ::System::Object
	{
	public:
		::System::Uri* _AutomaticConfigurationScript_k__BackingField; // 0x10
		::System::Boolean _AutomaticallyDetectSettings_k__BackingField; // 0x18

		::System::Void _ctor(::System::Net::WebProxy* proxy, ::System::Boolean useRegistry)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebProxy*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE__CTOR_OFFSET))(this, proxy, useRegistry);
		}

		::System::Uri* get_AutomaticConfigurationScript()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_GET_AUTOMATICCONFIGURATIONSCRIPT_OFFSET))(this);
		}

		::System::Void set_AutomaticConfigurationScript(::System::Uri* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_SET_AUTOMATICCONFIGURATIONSCRIPT_OFFSET))(this, value);
		}

		::System::Boolean get_AutomaticallyDetectSettings()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_GET_AUTOMATICALLYDETECTSETTINGS_OFFSET))(this);
		}

		::System::Void set_AutomaticallyDetectSettings(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_SET_AUTOMATICALLYDETECTSETTINGS_OFFSET))(this, value);
		}

		::System::Boolean GetProxies(::System::Uri* destination, ::System::Collections::Generic::IList_1<::System::String*>*& proxyList)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*, ::System::Collections::Generic::IList_1<::System::String*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_GETPROXIES_OFFSET))(this, destination, proxyList);
		}

		::System::Boolean GetProxies_1(::System::Uri* destination, ::System::Collections::Generic::IList_1<::System::String*>*& proxyList, ::System::Int32& syncStatus)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*, ::System::Collections::Generic::IList_1<::System::String*>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_GETPROXIES_1_OFFSET))(this, destination, proxyList, syncStatus);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_CLOSE_OFFSET))(this);
		}

		::System::Void Abort(::System::Int32& syncStatus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_ABORT_OFFSET))(this, syncStatus);
		}

		::System::Void CheckForChanges()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_CHECKFORCHANGES_OFFSET))(this);
		}
	};
}
