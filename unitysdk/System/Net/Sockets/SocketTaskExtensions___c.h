#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Net/Sockets/SocketFlags.h"
#include "unitysdk/System/Net/Sockets/SocketReceiveFromResult.h"
#include "unitysdk/System/Net/Sockets/SocketReceiveMessageFromResult.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class Func_6; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Net { class EndPoint; }
namespace System::Net { class IPAddress; }
namespace System::Net::Sockets { class Socket; }

#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__ACCEPTASYNC_B__0_0_OFFSET UNITYSDK_OFFSET(0x1C02B8D0)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__ACCEPTASYNC_B__0_1_OFFSET UNITYSDK_OFFSET(0x1C02B950)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__ACCEPTASYNC_B__1_0_OFFSET UNITYSDK_OFFSET(0x1C02BA70)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__ACCEPTASYNC_B__1_1_OFFSET UNITYSDK_OFFSET(0x1C02BB00)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C02B880)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__CONNECTASYNC_B__2_0_OFFSET UNITYSDK_OFFSET(0x1C02BC20)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__CONNECTASYNC_B__2_1_OFFSET UNITYSDK_OFFSET(0x1C02BCA0)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__CONNECTASYNC_B__3_0_OFFSET UNITYSDK_OFFSET(0x1C02BDB0)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__CONNECTASYNC_B__3_1_OFFSET UNITYSDK_OFFSET(0x1C02BE40)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__CONNECTASYNC_B__4_0_OFFSET UNITYSDK_OFFSET(0x1C02BF50)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__CONNECTASYNC_B__4_1_OFFSET UNITYSDK_OFFSET(0x1C02BFE0)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__CONNECTASYNC_B__5_0_OFFSET UNITYSDK_OFFSET(0x1C02C0F0)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__CONNECTASYNC_B__5_1_OFFSET UNITYSDK_OFFSET(0x1C02C180)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C02B8C0)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__RECEIVEASYNC_B__6_0_OFFSET UNITYSDK_OFFSET(0x1C02C290)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__RECEIVEASYNC_B__6_1_OFFSET UNITYSDK_OFFSET(0x1C02C3C0)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__RECEIVEASYNC_B__7_0_OFFSET UNITYSDK_OFFSET(0x1C02C530)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__RECEIVEASYNC_B__7_1_OFFSET UNITYSDK_OFFSET(0x1C02C630)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__RECEIVEFROMASYNC_B__8_0_OFFSET UNITYSDK_OFFSET(0x1C02C7A0)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__RECEIVEFROMASYNC_B__8_1_OFFSET UNITYSDK_OFFSET(0x1C02C990)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__RECEIVEMESSAGEFROMASYNC_B__9_0_OFFSET UNITYSDK_OFFSET(0x1C02CB80)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__RECEIVEMESSAGEFROMASYNC_B__9_1_OFFSET UNITYSDK_OFFSET(0x1C02CD50)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__SENDASYNC_B__10_0_OFFSET UNITYSDK_OFFSET(0x1C02CFB0)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__SENDASYNC_B__10_1_OFFSET UNITYSDK_OFFSET(0x1C02D0E0)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__SENDASYNC_B__11_0_OFFSET UNITYSDK_OFFSET(0x1C02D250)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__SENDASYNC_B__11_1_OFFSET UNITYSDK_OFFSET(0x1C02D350)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__SENDTOASYNC_B__12_0_OFFSET UNITYSDK_OFFSET(0x1C02D4C0)
#define SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__SENDTOASYNC_B__12_1_OFFSET UNITYSDK_OFFSET(0x1C02D570)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SocketTaskExtensions___c_TypeDefinitionIndex = 3690;

	class SocketTaskExtensions___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::IAsyncResult*, ::System::Int32>** StaticGet___9__6_1()
		{
			return (::System::Func_2<::System::IAsyncResult*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SocketTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x2ED0);
		}
		static ::System::Func_2<::System::IAsyncResult*, ::System::Net::Sockets::Socket*>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::System::IAsyncResult*, ::System::Net::Sockets::Socket*>**)Il2CppClass::FromTypeDefinitionIndex(SocketTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x2ED8);
		}
		static ::System::Func_3<::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>** StaticGet___9__0_0()
		{
			return (::System::Func_3<::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>**)Il2CppClass::FromTypeDefinitionIndex(SocketTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x2EE0);
		}
		static ::System::Func_5<::System::ArraySegment_1<::System::Byte>, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>** StaticGet___9__10_0()
		{
			return (::System::Func_5<::System::ArraySegment_1<::System::Byte>, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>**)Il2CppClass::FromTypeDefinitionIndex(SocketTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x2EE8);
		}
		static ::System::Net::Sockets::SocketTaskExtensions___c** StaticGet___9()
		{
			return (::System::Net::Sockets::SocketTaskExtensions___c**)Il2CppClass::FromTypeDefinitionIndex(SocketTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x2EF0);
		}
		static ::System::Func_5<::System::Net::Sockets::Socket*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>** StaticGet___9__1_0()
		{
			return (::System::Func_5<::System::Net::Sockets::Socket*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>**)Il2CppClass::FromTypeDefinitionIndex(SocketTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x2EF8);
		}
		static ::System::Func_5<::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>*, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>** StaticGet___9__11_0()
		{
			return (::System::Func_5<::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>*, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>**)Il2CppClass::FromTypeDefinitionIndex(SocketTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x2F00);
		}
		static ::System::Func_2<::System::IAsyncResult*, ::System::Net::Sockets::SocketReceiveFromResult>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::System::IAsyncResult*, ::System::Net::Sockets::SocketReceiveFromResult>**)Il2CppClass::FromTypeDefinitionIndex(SocketTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x2F08);
		}
		static ::System::Action_1<::System::IAsyncResult*>** StaticGet___9__3_1()
		{
			return (::System::Action_1<::System::IAsyncResult*>**)Il2CppClass::FromTypeDefinitionIndex(SocketTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x2F10);
		}
		static ::System::Func_2<::System::IAsyncResult*, ::System::Net::Sockets::SocketReceiveMessageFromResult>** StaticGet___9__9_1()
		{
			return (::System::Func_2<::System::IAsyncResult*, ::System::Net::Sockets::SocketReceiveMessageFromResult>**)Il2CppClass::FromTypeDefinitionIndex(SocketTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x2F18);
		}
		static ::System::Func_2<::System::IAsyncResult*, ::System::Int32>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::System::IAsyncResult*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SocketTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x2F20);
		}
		static ::System::Func_6<::System::ArraySegment_1<::System::Byte>, ::System::Net::Sockets::SocketFlags, ::System::Net::EndPoint*, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>** StaticGet___9__12_0()
		{
			return (::System::Func_6<::System::ArraySegment_1<::System::Byte>, ::System::Net::Sockets::SocketFlags, ::System::Net::EndPoint*, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>**)Il2CppClass::FromTypeDefinitionIndex(SocketTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x2F28);
		}
		static ::System::Func_5<::System::ArraySegment_1<::System::Byte>, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>** StaticGet___9__6_0()
		{
			return (::System::Func_5<::System::ArraySegment_1<::System::Byte>, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>**)Il2CppClass::FromTypeDefinitionIndex(SocketTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x2F30);
		}
		static ::System::Func_5<::System::ArraySegment_1<::System::Byte>, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>** StaticGet___9__8_0()
		{
			return (::System::Func_5<::System::ArraySegment_1<::System::Byte>, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>**)Il2CppClass::FromTypeDefinitionIndex(SocketTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x2F38);
		}
		static ::System::Action_1<::System::IAsyncResult*>** StaticGet___9__4_1()
		{
			return (::System::Action_1<::System::IAsyncResult*>**)Il2CppClass::FromTypeDefinitionIndex(SocketTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x2F40);
		}
		static ::System::Action_1<::System::IAsyncResult*>** StaticGet___9__5_1()
		{
			return (::System::Action_1<::System::IAsyncResult*>**)Il2CppClass::FromTypeDefinitionIndex(SocketTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x2F48);
		}
		static ::System::Func_2<::System::IAsyncResult*, ::System::Net::Sockets::Socket*>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::System::IAsyncResult*, ::System::Net::Sockets::Socket*>**)Il2CppClass::FromTypeDefinitionIndex(SocketTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x2F50);
		}
		static ::System::Func_5<::Il2CppArray<::System::Net::IPAddress*>*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>** StaticGet___9__4_0()
		{
			return (::System::Func_5<::Il2CppArray<::System::Net::IPAddress*>*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>**)Il2CppClass::FromTypeDefinitionIndex(SocketTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x2F58);
		}
		static ::System::Func_5<::System::String*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>** StaticGet___9__5_0()
		{
			return (::System::Func_5<::System::String*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>**)Il2CppClass::FromTypeDefinitionIndex(SocketTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x2F60);
		}
		static ::System::Func_2<::System::IAsyncResult*, ::System::Int32>** StaticGet___9__11_1()
		{
			return (::System::Func_2<::System::IAsyncResult*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SocketTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x2F68);
		}
		static ::System::Func_2<::System::IAsyncResult*, ::System::Int32>** StaticGet___9__10_1()
		{
			return (::System::Func_2<::System::IAsyncResult*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SocketTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x2F70);
		}
		static ::System::Func_5<::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>*, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>** StaticGet___9__7_0()
		{
			return (::System::Func_5<::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>*, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>**)Il2CppClass::FromTypeDefinitionIndex(SocketTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x2F78);
		}
		static ::System::Action_1<::System::IAsyncResult*>** StaticGet___9__2_1()
		{
			return (::System::Action_1<::System::IAsyncResult*>**)Il2CppClass::FromTypeDefinitionIndex(SocketTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x2F80);
		}
		static ::System::Func_5<::System::Net::IPAddress*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>** StaticGet___9__3_0()
		{
			return (::System::Func_5<::System::Net::IPAddress*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>**)Il2CppClass::FromTypeDefinitionIndex(SocketTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x2F88);
		}
		static ::System::Func_2<::System::IAsyncResult*, ::System::Int32>** StaticGet___9__12_1()
		{
			return (::System::Func_2<::System::IAsyncResult*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SocketTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x2F90);
		}
		static ::System::Func_4<::System::Net::EndPoint*, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>** StaticGet___9__2_0()
		{
			return (::System::Func_4<::System::Net::EndPoint*, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>**)Il2CppClass::FromTypeDefinitionIndex(SocketTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x2F98);
		}
		static ::System::Func_4<::System::ArraySegment_1<::System::Byte>, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>** StaticGet___9__9_0()
		{
			return (::System::Func_4<::System::ArraySegment_1<::System::Byte>, ::System::AsyncCallback*, ::System::Object*, ::System::IAsyncResult*>**)Il2CppClass::FromTypeDefinitionIndex(SocketTaskExtensions___c_TypeDefinitionIndex)->GetStaticField(0x2FA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::System::IAsyncResult* _AcceptAsync_b__0_0(::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__ACCEPTASYNC_B__0_0_OFFSET))(this, callback, state);
		}

		::System::Net::Sockets::Socket* _AcceptAsync_b__0_1(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__ACCEPTASYNC_B__0_1_OFFSET))(this, asyncResult);
		}

		::System::IAsyncResult* _AcceptAsync_b__1_0(::System::Net::Sockets::Socket* socketForAccept, ::System::Int32 receiveSize, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::Sockets::Socket*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__ACCEPTASYNC_B__1_0_OFFSET))(this, socketForAccept, receiveSize, callback, state);
		}

		::System::Net::Sockets::Socket* _AcceptAsync_b__1_1(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Net::Sockets::Socket*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__ACCEPTASYNC_B__1_1_OFFSET))(this, asyncResult);
		}

		::System::IAsyncResult* _ConnectAsync_b__2_0(::System::Net::EndPoint* targetEndPoint, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::EndPoint*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__CONNECTASYNC_B__2_0_OFFSET))(this, targetEndPoint, callback, state);
		}

		::System::Void _ConnectAsync_b__2_1(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__CONNECTASYNC_B__2_1_OFFSET))(this, asyncResult);
		}

		::System::IAsyncResult* _ConnectAsync_b__3_0(::System::Net::IPAddress* targetAddress, ::System::Int32 targetPort, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::IPAddress*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__CONNECTASYNC_B__3_0_OFFSET))(this, targetAddress, targetPort, callback, state);
		}

		::System::Void _ConnectAsync_b__3_1(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__CONNECTASYNC_B__3_1_OFFSET))(this, asyncResult);
		}

		::System::IAsyncResult* _ConnectAsync_b__4_0(::Il2CppArray<::System::Net::IPAddress*>* targetAddresses, ::System::Int32 targetPort, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Net::IPAddress*>*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__CONNECTASYNC_B__4_0_OFFSET))(this, targetAddresses, targetPort, callback, state);
		}

		::System::Void _ConnectAsync_b__4_1(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__CONNECTASYNC_B__4_1_OFFSET))(this, asyncResult);
		}

		::System::IAsyncResult* _ConnectAsync_b__5_0(::System::String* targetHost, ::System::Int32 targetPort, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__CONNECTASYNC_B__5_0_OFFSET))(this, targetHost, targetPort, callback, state);
		}

		::System::Void _ConnectAsync_b__5_1(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__CONNECTASYNC_B__5_1_OFFSET))(this, asyncResult);
		}

		::System::IAsyncResult* _ReceiveAsync_b__6_0(::System::ArraySegment_1<::System::Byte> targetBuffer, ::System::Net::Sockets::SocketFlags flags, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::ArraySegment_1<::System::Byte>, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__RECEIVEASYNC_B__6_0_OFFSET))(this, targetBuffer, flags, callback, state);
		}

		::System::Int32 _ReceiveAsync_b__6_1(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__RECEIVEASYNC_B__6_1_OFFSET))(this, asyncResult);
		}

		::System::IAsyncResult* _ReceiveAsync_b__7_0(::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>* targetBuffers, ::System::Net::Sockets::SocketFlags flags, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>*, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__RECEIVEASYNC_B__7_0_OFFSET))(this, targetBuffers, flags, callback, state);
		}

		::System::Int32 _ReceiveAsync_b__7_1(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__RECEIVEASYNC_B__7_1_OFFSET))(this, asyncResult);
		}

		::System::IAsyncResult* _ReceiveFromAsync_b__8_0(::System::ArraySegment_1<::System::Byte> targetBuffer, ::System::Net::Sockets::SocketFlags flags, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::ArraySegment_1<::System::Byte>, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__RECEIVEFROMASYNC_B__8_0_OFFSET))(this, targetBuffer, flags, callback, state);
		}

		::System::Net::Sockets::SocketReceiveFromResult _ReceiveFromAsync_b__8_1(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Net::Sockets::SocketReceiveFromResult(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__RECEIVEFROMASYNC_B__8_1_OFFSET))(this, asyncResult);
		}

		::System::IAsyncResult* _ReceiveMessageFromAsync_b__9_0(::System::ArraySegment_1<::System::Byte> targetBuffer, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::ArraySegment_1<::System::Byte>, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__RECEIVEMESSAGEFROMASYNC_B__9_0_OFFSET))(this, targetBuffer, callback, state);
		}

		::System::Net::Sockets::SocketReceiveMessageFromResult _ReceiveMessageFromAsync_b__9_1(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Net::Sockets::SocketReceiveMessageFromResult(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__RECEIVEMESSAGEFROMASYNC_B__9_1_OFFSET))(this, asyncResult);
		}

		::System::IAsyncResult* _SendAsync_b__10_0(::System::ArraySegment_1<::System::Byte> targetBuffer, ::System::Net::Sockets::SocketFlags flags, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::ArraySegment_1<::System::Byte>, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__SENDASYNC_B__10_0_OFFSET))(this, targetBuffer, flags, callback, state);
		}

		::System::Int32 _SendAsync_b__10_1(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__SENDASYNC_B__10_1_OFFSET))(this, asyncResult);
		}

		::System::IAsyncResult* _SendAsync_b__11_0(::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>* targetBuffers, ::System::Net::Sockets::SocketFlags flags, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::ArraySegment_1<::System::Byte>>*, ::System::Net::Sockets::SocketFlags, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__SENDASYNC_B__11_0_OFFSET))(this, targetBuffers, flags, callback, state);
		}

		::System::Int32 _SendAsync_b__11_1(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__SENDASYNC_B__11_1_OFFSET))(this, asyncResult);
		}

		::System::IAsyncResult* _SendToAsync_b__12_0(::System::ArraySegment_1<::System::Byte> targetBuffer, ::System::Net::Sockets::SocketFlags flags, ::System::Net::EndPoint* endPoint, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::ArraySegment_1<::System::Byte>, ::System::Net::Sockets::SocketFlags, ::System::Net::EndPoint*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__SENDTOASYNC_B__12_0_OFFSET))(this, targetBuffer, flags, endPoint, callback, state);
		}

		::System::Int32 _SendToAsync_b__12_1(::System::IAsyncResult* asyncResult)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SOCKETTASKEXTENSIONS___C__SENDTOASYNC_B__12_1_OFFSET))(this, asyncResult);
		}
	};
}
