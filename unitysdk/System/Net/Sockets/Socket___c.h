#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IAsyncResult; }
namespace System { class IOAsyncCallback; }
namespace System { class IOAsyncResult; }

#define SYSTEM_NET_SOCKETS_SOCKET___C__BEGINSEND_B__241_0_OFFSET UNITYSDK_OFFSET(0x187167D0)
#define SYSTEM_NET_SOCKETS_SOCKET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18716790)
#define SYSTEM_NET_SOCKETS_SOCKET___C__CTOR_OFFSET UNITYSDK_OFFSET(0x187167C0)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_0_OFFSET UNITYSDK_OFFSET(0x18716850)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_10_OFFSET UNITYSDK_OFFSET(0x18717FB0)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_11_OFFSET UNITYSDK_OFFSET(0x187181F0)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_12_OFFSET UNITYSDK_OFFSET(0x187183E0)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_13_OFFSET UNITYSDK_OFFSET(0x18718670)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_14_OFFSET UNITYSDK_OFFSET(0x18718790)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_1_OFFSET UNITYSDK_OFFSET(0x18716B30)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_2_OFFSET UNITYSDK_OFFSET(0x18716C20)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_3_OFFSET UNITYSDK_OFFSET(0x18716EC0)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_4_OFFSET UNITYSDK_OFFSET(0x187170E0)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_5_OFFSET UNITYSDK_OFFSET(0x18717750)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_6_OFFSET UNITYSDK_OFFSET(0x18717970)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_7_OFFSET UNITYSDK_OFFSET(0x18717A30)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_8_OFFSET UNITYSDK_OFFSET(0x18717CC0)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_9_OFFSET UNITYSDK_OFFSET(0x18717E90)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int Socket___c_TypeDefinitionIndex = 2892;

	class Socket___c : public ::System::Object
	{
	public:
		static ::System::IOAsyncCallback** StaticGet___9__241_0()
		{
			return (::System::IOAsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket___c_TypeDefinitionIndex)->GetStaticField(0xC0D0);
		}
		static ::System::Net::Sockets::Socket___c** StaticGet___9()
		{
			return (::System::Net::Sockets::Socket___c**)Il2CppClass::FromTypeDefinitionIndex(Socket___c_TypeDefinitionIndex)->GetStaticField(0xC0D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C__CTOR_OFFSET))(this);
		}

		::System::Void _BeginSend_b__241_0(::System::IOAsyncResult* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::IOAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C__BEGINSEND_B__241_0_OFFSET))(this, s);
		}

		::System::Void __cctor_b__309_0(::System::IAsyncResult* ares)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_0_OFFSET))(this, ares);
		}

		::System::Void __cctor_b__309_1(::System::IOAsyncResult* ares)
		{
			return ((::System::Void(*)(::PVOID, ::System::IOAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_1_OFFSET))(this, ares);
		}

		::System::Void __cctor_b__309_2(::System::IOAsyncResult* ares)
		{
			return ((::System::Void(*)(::PVOID, ::System::IOAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_2_OFFSET))(this, ares);
		}

		::System::Void __cctor_b__309_3(::System::IAsyncResult* ares)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_3_OFFSET))(this, ares);
		}

		::System::Void __cctor_b__309_4(::System::IOAsyncResult* ares)
		{
			return ((::System::Void(*)(::PVOID, ::System::IOAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_4_OFFSET))(this, ares);
		}

		::System::Void __cctor_b__309_5(::System::IAsyncResult* ares)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_5_OFFSET))(this, ares);
		}

		::System::Void __cctor_b__309_6(::System::IOAsyncResult* ares)
		{
			return ((::System::Void(*)(::PVOID, ::System::IOAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_6_OFFSET))(this, ares);
		}

		::System::Void __cctor_b__309_7(::System::IAsyncResult* ares)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_7_OFFSET))(this, ares);
		}

		::System::Void __cctor_b__309_8(::System::IOAsyncResult* ares)
		{
			return ((::System::Void(*)(::PVOID, ::System::IOAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_8_OFFSET))(this, ares);
		}

		::System::Void __cctor_b__309_9(::System::IOAsyncResult* ares)
		{
			return ((::System::Void(*)(::PVOID, ::System::IOAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_9_OFFSET))(this, ares);
		}

		::System::Void __cctor_b__309_10(::System::IAsyncResult* ares)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_10_OFFSET))(this, ares);
		}

		::System::Void __cctor_b__309_11(::System::IOAsyncResult* ares)
		{
			return ((::System::Void(*)(::PVOID, ::System::IOAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_11_OFFSET))(this, ares);
		}

		::System::Void __cctor_b__309_12(::System::IAsyncResult* ares)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_12_OFFSET))(this, ares);
		}

		::System::Void __cctor_b__309_13(::System::IOAsyncResult* ares)
		{
			return ((::System::Void(*)(::PVOID, ::System::IOAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_13_OFFSET))(this, ares);
		}

		::System::Void __cctor_b__309_14(::System::IAsyncResult* ares)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_14_OFFSET))(this, ares);
		}
	};
}
