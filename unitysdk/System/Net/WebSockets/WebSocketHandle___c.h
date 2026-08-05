#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DAD2310)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE___C__CONNECTASYNCCORE_B__24_0_OFFSET UNITYSDK_OFFSET(0x1DAD2360)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE___C__CONNECTSOCKETASYNC_B__25_0_OFFSET UNITYSDK_OFFSET(0x1DAD23F0)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE___C__CONNECTSOCKETASYNC_B__25_1_OFFSET UNITYSDK_OFFSET(0x1DAD2460)
#define SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD2350)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int WebSocketHandle___c_TypeDefinitionIndex = 3892;

	class WebSocketHandle___c : public ::System::Object
	{
	public:
		static ::System::Net::WebSockets::WebSocketHandle___c** StaticGet___9()
		{
			return (::System::Net::WebSockets::WebSocketHandle___c**)Il2CppClass::FromTypeDefinitionIndex(WebSocketHandle___c_TypeDefinitionIndex)->GetStaticField(0x3260);
		}
		static ::System::Action_1<::System::Object*>** StaticGet___9__25_1()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(WebSocketHandle___c_TypeDefinitionIndex)->GetStaticField(0x3268);
		}
		static ::System::Action_1<::System::Object*>** StaticGet___9__24_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(WebSocketHandle___c_TypeDefinitionIndex)->GetStaticField(0x3270);
		}
		static ::System::Action_1<::System::Object*>** StaticGet___9__25_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(WebSocketHandle___c_TypeDefinitionIndex)->GetStaticField(0x3278);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE___C__CTOR_OFFSET))(this);
		}

		::System::Void _ConnectAsyncCore_b__24_0(::System::Object* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE___C__CONNECTASYNCCORE_B__24_0_OFFSET))(this, s);
		}

		::System::Void _ConnectSocketAsync_b__25_0(::System::Object* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE___C__CONNECTSOCKETASYNC_B__25_0_OFFSET))(this, s);
		}

		::System::Void _ConnectSocketAsync_b__25_1(::System::Object* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_WEBSOCKETHANDLE___C__CONNECTSOCKETASYNC_B__25_1_OFFSET))(this, s);
		}
	};
}
