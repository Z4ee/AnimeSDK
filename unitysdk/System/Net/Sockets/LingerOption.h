#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_SOCKETS_LINGEROPTION_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x19EE3B80)
#define SYSTEM_NET_SOCKETS_LINGEROPTION_SET_LINGERTIME_OFFSET UNITYSDK_OFFSET(0x19EE3B90)
#define SYSTEM_NET_SOCKETS_LINGEROPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE3B70)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int LingerOption_TypeDefinitionIndex = 2890;

	class LingerOption : public ::System::Object
	{
	public:
		::System::Int32 lingerTime; // 0x10
		::System::Boolean enabled; // 0x14

		::System::Void _ctor(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_LINGEROPTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void set_Enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_LINGEROPTION_SET_ENABLED_OFFSET))(this, a1);
		}

		::System::Void set_LingerTime(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_LINGEROPTION_SET_LINGERTIME_OFFSET))(this, a1);
		}
	};
}
