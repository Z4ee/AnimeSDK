#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_NETWORKINFORMATION_PINGOPTIONS_GET_DONTFRAGMENT_OFFSET UNITYSDK_OFFSET(0x1B765D60)
#define SYSTEM_NET_NETWORKINFORMATION_PINGOPTIONS_GET_TTL_OFFSET UNITYSDK_OFFSET(0x1B765CE0)
#define SYSTEM_NET_NETWORKINFORMATION_PINGOPTIONS_SET_DONTFRAGMENT_OFFSET UNITYSDK_OFFSET(0x1B765D70)
#define SYSTEM_NET_NETWORKINFORMATION_PINGOPTIONS_SET_TTL_OFFSET UNITYSDK_OFFSET(0x1B765CF0)
#define SYSTEM_NET_NETWORKINFORMATION_PINGOPTIONS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B765CD0)
#define SYSTEM_NET_NETWORKINFORMATION_PINGOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B765C50)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int PingOptions_TypeDefinitionIndex = 3735;

	class PingOptions : public ::System::Object
	{
	public:
		// static const ::System::Int32 DontFragmentFlag = 0x2; // 0x0
		::System::Boolean dontFragment; // 0x10
		::System::Int32 ttl; // 0x14

		::System::Void _ctor(::System::Int32 ttl, ::System::Boolean dontFragment)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PINGOPTIONS__CTOR_OFFSET))(this, ttl, dontFragment);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PINGOPTIONS__CTOR_1_OFFSET))(this);
		}

		::System::Int32 get_Ttl()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PINGOPTIONS_GET_TTL_OFFSET))(this);
		}

		::System::Void set_Ttl(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PINGOPTIONS_SET_TTL_OFFSET))(this, value);
		}

		::System::Boolean get_DontFragment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PINGOPTIONS_GET_DONTFRAGMENT_OFFSET))(this);
		}

		::System::Void set_DontFragment(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PINGOPTIONS_SET_DONTFRAGMENT_OFFSET))(this, value);
		}
	};
}
