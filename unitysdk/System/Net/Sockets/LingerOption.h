#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_SOCKETS_LINGEROPTION_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1870AC70)
#define SYSTEM_NET_SOCKETS_LINGEROPTION_SET_LINGERTIME_OFFSET UNITYSDK_OFFSET(0x1870AC80)
#define SYSTEM_NET_SOCKETS_LINGEROPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1870AC60)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int LingerOption_TypeDefinitionIndex = 2885;

	class LingerOption : public ::System::Object
	{
	public:
		::System::Boolean enabled; // 0x10
		::System::Int32 lingerTime; // 0x14

		::System::Void _ctor(::System::Boolean enable, ::System::Int32 seconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_LINGEROPTION__CTOR_OFFSET))(this, enable, seconds);
		}

		::System::Void set_Enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_LINGEROPTION_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Void set_LingerTime(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_LINGEROPTION_SET_LINGERTIME_OFFSET))(this, value);
		}
	};
}
