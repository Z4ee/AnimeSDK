#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_GETPROXIES_1_OFFSET UNITYSDK_OFFSET(0x186B6000)
#define SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_GETPROXIES_OFFSET UNITYSDK_OFFSET(0x186B5FF0)

namespace System::Net
{
	inline static constexpr unsigned int AutoWebProxyScriptEngine_TypeDefinitionIndex = 2802;

	class AutoWebProxyScriptEngine : public ::System::Object
	{
	public:
		::System::Boolean GetProxies(::System::Uri* destination, ::System::Collections::Generic::IList_1<::System::String*>*& proxyList)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*, ::System::Collections::Generic::IList_1<::System::String*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_GETPROXIES_OFFSET))(this, destination, proxyList);
		}

		::System::Boolean GetProxies_1(::System::Uri* destination, ::System::Collections::Generic::IList_1<::System::String*>*& proxyList, ::System::Int32& syncStatus)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*, ::System::Collections::Generic::IList_1<::System::String*>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_GETPROXIES_1_OFFSET))(this, destination, proxyList, syncStatus);
		}
	};
}
