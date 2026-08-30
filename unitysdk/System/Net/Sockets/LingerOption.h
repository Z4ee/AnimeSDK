#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_SOCKETS_LINGEROPTION_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1B964BF0)
#define SYSTEM_NET_SOCKETS_LINGEROPTION_SET_LINGERTIME_OFFSET UNITYSDK_OFFSET(0x1B964C00)
#define SYSTEM_NET_SOCKETS_LINGEROPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B964BE0)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int LingerOption_TypeDefinitionIndex = 2897;

	class LingerOption : public ::System::Object
	{
	public:
		::System::Boolean enabled; // 0x10
		::System::Int32 lingerTime; // 0x14

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
