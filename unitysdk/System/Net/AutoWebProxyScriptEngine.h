#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_GETPROXIES_1_OFFSET UNITYSDK_OFFSET(0x19181B30)
#define SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_GETPROXIES_OFFSET UNITYSDK_OFFSET(0x19181B20)

namespace System::Net
{
	inline static constexpr unsigned int AutoWebProxyScriptEngine_TypeDefinitionIndex = 2807;

	class AutoWebProxyScriptEngine : public ::System::Object
	{
	public:
		::System::Boolean GetProxies(::System::Uri* a1, ::System::Collections::Generic::IList_1<::System::String*>*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*, ::System::Collections::Generic::IList_1<::System::String*>*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_GETPROXIES_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetProxies_1(::System::Uri* a1, ::System::Collections::Generic::IList_1<::System::String*>*& a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*, ::System::Collections::Generic::IList_1<::System::String*>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTOWEBPROXYSCRIPTENGINE_GETPROXIES_1_OFFSET))(this, a1, a2, a3);
		}
	};
}
