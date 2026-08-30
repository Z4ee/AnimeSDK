#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IOAsyncResult; }

#define SYSTEM_NET_SOCKETS_SOCKET___C__DISPLAYCLASS242_0__BEGINSENDCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1E9C2BF0)
#define SYSTEM_NET_SOCKETS_SOCKET___C__DISPLAYCLASS242_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9BF250)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int Socket___c__DisplayClass242_0_TypeDefinitionIndex = 2905;

	class Socket___c__DisplayClass242_0 : public ::System::Object
	{
	public:
		::System::Int32 sent_so_far; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C__DISPLAYCLASS242_0__CTOR_OFFSET))(this);
		}

		::System::Void _BeginSendCallback_b__0(::System::IOAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IOAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C__DISPLAYCLASS242_0__BEGINSENDCALLBACK_B__0_OFFSET))(this, a1);
		}
	};
}
