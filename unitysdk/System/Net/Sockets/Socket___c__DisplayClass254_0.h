#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IOAsyncResult; }

#define SYSTEM_NET_SOCKETS_SOCKET___C__DISPLAYCLASS254_0__BEGINSENDTOCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1C2FF520)
#define SYSTEM_NET_SOCKETS_SOCKET___C__DISPLAYCLASS254_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2FDDA0)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int Socket___c__DisplayClass254_0_TypeDefinitionIndex = 3658;

	class Socket___c__DisplayClass254_0 : public ::System::Object
	{
	public:
		::System::Int32 sent_so_far; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C__DISPLAYCLASS254_0__CTOR_OFFSET))(this);
		}

		::System::Void _BeginSendToCallback_b__0(::System::IOAsyncResult* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::IOAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C__DISPLAYCLASS254_0__BEGINSENDTOCALLBACK_B__0_OFFSET))(this, s);
		}
	};
}
