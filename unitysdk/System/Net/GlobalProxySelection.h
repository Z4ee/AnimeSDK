#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class IWebProxy; }

#define SYSTEM_NET_GLOBALPROXYSELECTION_GETEMPTYWEBPROXY_OFFSET UNITYSDK_OFFSET(0x1AFE1BD0)
#define SYSTEM_NET_GLOBALPROXYSELECTION_GET_SELECT_OFFSET UNITYSDK_OFFSET(0x1AFE1AA0)
#define SYSTEM_NET_GLOBALPROXYSELECTION_SET_SELECT_OFFSET UNITYSDK_OFFSET(0x1AFE1C10)
#define SYSTEM_NET_GLOBALPROXYSELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFE1CB0)

namespace System::Net
{
	inline static constexpr unsigned int GlobalProxySelection_TypeDefinitionIndex = 3274;

	class GlobalProxySelection : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALPROXYSELECTION__CTOR_OFFSET))(this);
		}

		static ::System::Net::IWebProxy* get_Select()
		{
			return ((::System::Net::IWebProxy*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALPROXYSELECTION_GET_SELECT_OFFSET))();
		}

		static ::System::Void set_Select(::System::Net::IWebProxy* value)
		{
			return ((::System::Void(*)(::System::Net::IWebProxy*))((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALPROXYSELECTION_SET_SELECT_OFFSET))(value);
		}

		static ::System::Net::IWebProxy* GetEmptyWebProxy()
		{
			return ((::System::Net::IWebProxy*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_GLOBALPROXYSELECTION_GETEMPTYWEBPROXY_OFFSET))();
		}
	};
}
