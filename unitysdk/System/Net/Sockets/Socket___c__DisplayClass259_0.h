#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System::Net::Sockets { class Socket_SendFileHandler; }

#define SYSTEM_NET_SOCKETS_SOCKET___C__DISPLAYCLASS259_0__BEGINSENDFILE_B__0_OFFSET UNITYSDK_OFFSET(0x1D6C0510)
#define SYSTEM_NET_SOCKETS_SOCKET___C__DISPLAYCLASS259_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BEEB0)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int Socket___c__DisplayClass259_0_TypeDefinitionIndex = 3659;

	class Socket___c__DisplayClass259_0 : public ::System::Object
	{
	public:
		::System::AsyncCallback* callback; // 0x10
		::System::Net::Sockets::Socket_SendFileHandler* handler; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C__DISPLAYCLASS259_0__CTOR_OFFSET))(this);
		}

		::System::Void _BeginSendFile_b__0(::System::IAsyncResult* ar)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C__DISPLAYCLASS259_0__BEGINSENDFILE_B__0_OFFSET))(this, ar);
		}
	};
}
