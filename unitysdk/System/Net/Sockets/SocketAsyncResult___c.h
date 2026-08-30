#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class WaitCallback; }

#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9C2F60)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT___C__COMPLETE_B__27_0_OFFSET UNITYSDK_OFFSET(0x1E9C2FA0)
#define SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C2F90)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketAsyncResult___c_TypeDefinitionIndex = 2920;

	class SocketAsyncResult___c : public ::System::Object
	{
	public:
		static ::System::Net::Sockets::SocketAsyncResult___c** StaticGet___9()
		{
			return (::System::Net::Sockets::SocketAsyncResult___c**)Il2CppClass::FromTypeDefinitionIndex(SocketAsyncResult___c_TypeDefinitionIndex)->GetStaticField(0x206B0);
		}
		static ::System::Threading::WaitCallback** StaticGet___9__27_0()
		{
			return (::System::Threading::WaitCallback**)Il2CppClass::FromTypeDefinitionIndex(SocketAsyncResult___c_TypeDefinitionIndex)->GetStaticField(0x206B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT___C__CTOR_OFFSET))(this);
		}

		::System::Void _Complete_b__27_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETASYNCRESULT___C__COMPLETE_B__27_0_OFFSET))(this, a1);
		}
	};
}
