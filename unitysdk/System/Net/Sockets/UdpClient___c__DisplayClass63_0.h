#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class String; }
namespace System::Net::Sockets { class UdpClient; }

#define SYSTEM_NET_SOCKETS_UDPCLIENT___C__DISPLAYCLASS63_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1D5080)
#define SYSTEM_NET_SOCKETS_UDPCLIENT___C__DISPLAYCLASS63_0__SENDASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1B1D5090)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int UdpClient___c__DisplayClass63_0_TypeDefinitionIndex = 3676;

	class UdpClient___c__DisplayClass63_0 : public ::System::Object
	{
	public:
		::System::String* hostname; // 0x10
		::Il2CppArray<::System::Byte>* datagram; // 0x18
		::System::Net::Sockets::UdpClient* __4__this; // 0x20
		::System::Int32 bytes; // 0x28
		::System::Int32 port; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT___C__DISPLAYCLASS63_0__CTOR_OFFSET))(this);
		}

		::System::IAsyncResult* _SendAsync_b__0(::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_UDPCLIENT___C__DISPLAYCLASS63_0__SENDASYNC_B__0_OFFSET))(this, callback, state);
		}
	};
}
