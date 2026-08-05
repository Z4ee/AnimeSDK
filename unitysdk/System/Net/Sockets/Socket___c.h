#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IAsyncResult; }
namespace System { class IOAsyncCallback; }
namespace System { class IOAsyncResult; }

#define SYSTEM_NET_SOCKETS_SOCKET___C__BEGINSENDTO_B__253_0_OFFSET UNITYSDK_OFFSET(0x1C8835A0)
#define SYSTEM_NET_SOCKETS_SOCKET___C__BEGINSEND_B__241_0_OFFSET UNITYSDK_OFFSET(0x1C8834A0)
#define SYSTEM_NET_SOCKETS_SOCKET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8833D0)
#define SYSTEM_NET_SOCKETS_SOCKET___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C883410)
#define SYSTEM_NET_SOCKETS_SOCKET___C__SENDASYNC_B__239_0_OFFSET UNITYSDK_OFFSET(0x1C883420)
#define SYSTEM_NET_SOCKETS_SOCKET___C__SENDTOASYNC_B__251_0_OFFSET UNITYSDK_OFFSET(0x1C883520)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_0_OFFSET UNITYSDK_OFFSET(0x1C883620)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_10_OFFSET UNITYSDK_OFFSET(0x1C884A90)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_11_OFFSET UNITYSDK_OFFSET(0x1C884CD0)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_12_OFFSET UNITYSDK_OFFSET(0x1C884EE0)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_13_OFFSET UNITYSDK_OFFSET(0x1C885190)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_14_OFFSET UNITYSDK_OFFSET(0x1C8852E0)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_1_OFFSET UNITYSDK_OFFSET(0x1C8838D0)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_2_OFFSET UNITYSDK_OFFSET(0x1C8839D0)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_3_OFFSET UNITYSDK_OFFSET(0x1C883C10)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_4_OFFSET UNITYSDK_OFFSET(0x1C883E30)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_5_OFFSET UNITYSDK_OFFSET(0x1C8841C0)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_6_OFFSET UNITYSDK_OFFSET(0x1C8843E0)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_7_OFFSET UNITYSDK_OFFSET(0x1C8844C0)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_8_OFFSET UNITYSDK_OFFSET(0x1C884770)
#define SYSTEM_NET_SOCKETS_SOCKET___C___CCTOR_B__309_9_OFFSET UNITYSDK_OFFSET(0x1C884940)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int Socket___c_TypeDefinitionIndex = 3656;

	class Socket___c : public ::System::Object
	{
	public:
		static ::System::IOAsyncCallback** StaticGet___9__253_0()
		{
			return (::System::IOAsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket___c_TypeDefinitionIndex)->GetStaticField(0x3470);
		}
		static ::System::IOAsyncCallback** StaticGet___9__241_0()
		{
			return (::System::IOAsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket___c_TypeDefinitionIndex)->GetStaticField(0x3478);
		}
		static ::System::IOAsyncCallback** StaticGet___9__239_0()
		{
			return (::System::IOAsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket___c_TypeDefinitionIndex)->GetStaticField(0x3480);
		}
		static ::System::IOAsyncCallback** StaticGet___9__251_0()
		{
			return (::System::IOAsyncCallback**)Il2CppClass::FromTypeDefinitionIndex(Socket___c_TypeDefinitionIndex)->GetStaticField(0x3488);
		}
		static ::System::Net::Sockets::Socket___c** StaticGet___9()
		{
			return (::System::Net::Sockets::Socket___c**)Il2CppClass::FromTypeDefinitionIndex(Socket___c_TypeDefinitionIndex)->GetStaticField(0x3490);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C__CTOR_OFFSET))(this);
		}

		::System::Void _SendAsync_b__239_0(::System::IOAsyncResult* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::IOAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C__SENDASYNC_B__239_0_OFFSET))(this, s);
		}

		::System::Void _BeginSend_b__241_0(::System::IOAsyncResult* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::IOAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C__BEGINSEND_B__241_0_OFFSET))(this, s);
		}

		::System::Void _SendToAsync_b__251_0(::System::IOAsyncResult* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::IOAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C__SENDTOASYNC_B__251_0_OFFSET))(this, s);
		}

		::System::Void _BeginSendTo_b__253_0(::System::IOAsyncResult* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::IOAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKET___C__BEGINSENDTO_B__253_0_OFFSET))(this, s);
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
