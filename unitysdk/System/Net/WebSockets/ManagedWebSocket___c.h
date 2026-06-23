#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading { class TimerCallback; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEDBB40)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEDBB80)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET___C__RECEIVEASYNCPRIVATE_B__60_0_OFFSET UNITYSDK_OFFSET(0x1CEDBFC0)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET___C__SENDFRAMEFALLBACKASYNC_B__55_0_OFFSET UNITYSDK_OFFSET(0x1CEDBF30)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET___C__SENDFRAMELOCKACQUIREDNONCANCELABLEASYNC_B__54_0_OFFSET UNITYSDK_OFFSET(0x1CEDBD10)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET___C__SENDKEEPALIVEFRAMEASYNC_B__57_0_OFFSET UNITYSDK_OFFSET(0x1CEDBF90)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET___C___CTOR_B__37_0_OFFSET UNITYSDK_OFFSET(0x1CEDBB90)
#define SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET___C___CTOR_B__37_1_OFFSET UNITYSDK_OFFSET(0x1CEDBCB0)

namespace System::Net::WebSockets
{
	inline static constexpr unsigned int ManagedWebSocket___c_TypeDefinitionIndex = 3876;

	class ManagedWebSocket___c : public ::System::Object
	{
	public:
		static ::System::Net::WebSockets::ManagedWebSocket___c** StaticGet___9()
		{
			return (::System::Net::WebSockets::ManagedWebSocket___c**)Il2CppClass::FromTypeDefinitionIndex(ManagedWebSocket___c_TypeDefinitionIndex)->GetStaticField(0x25E0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet___9__37_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ManagedWebSocket___c_TypeDefinitionIndex)->GetStaticField(0x25E8);
		}
		static ::System::Action_1<::System::Object*>** StaticGet___9__55_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ManagedWebSocket___c_TypeDefinitionIndex)->GetStaticField(0x25F0);
		}
		static ::System::Threading::TimerCallback** StaticGet___9__37_1()
		{
			return (::System::Threading::TimerCallback**)Il2CppClass::FromTypeDefinitionIndex(ManagedWebSocket___c_TypeDefinitionIndex)->GetStaticField(0x25F8);
		}
		static ::System::Action_1<::System::Object*>** StaticGet___9__60_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ManagedWebSocket___c_TypeDefinitionIndex)->GetStaticField(0x2600);
		}
		static ::System::Action_1<::System::Threading::Tasks::Task*>** StaticGet___9__57_0()
		{
			return (::System::Action_1<::System::Threading::Tasks::Task*>**)Il2CppClass::FromTypeDefinitionIndex(ManagedWebSocket___c_TypeDefinitionIndex)->GetStaticField(0x2608);
		}
		static ::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>** StaticGet___9__54_0()
		{
			return (::System::Action_2<::System::Threading::Tasks::Task*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ManagedWebSocket___c_TypeDefinitionIndex)->GetStaticField(0x2610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__37_0(::System::Object* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET___C___CTOR_B__37_0_OFFSET))(this, s);
		}

		::System::Void __ctor_b__37_1(::System::Object* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET___C___CTOR_B__37_1_OFFSET))(this, s);
		}

		::System::Void _SendFrameLockAcquiredNonCancelableAsync_b__54_0(::System::Threading::Tasks::Task* t, ::System::Object* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET___C__SENDFRAMELOCKACQUIREDNONCANCELABLEASYNC_B__54_0_OFFSET))(this, t, s);
		}

		::System::Void _SendFrameFallbackAsync_b__55_0(::System::Object* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET___C__SENDFRAMEFALLBACKASYNC_B__55_0_OFFSET))(this, s);
		}

		::System::Void _SendKeepAliveFrameAsync_b__57_0(::System::Threading::Tasks::Task* p)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET___C__SENDKEEPALIVEFRAMEASYNC_B__57_0_OFFSET))(this, p);
		}

		::System::Void _ReceiveAsyncPrivate_b__60_0(::System::Object* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBSOCKETS_MANAGEDWEBSOCKET___C__RECEIVEASYNCPRIVATE_B__60_0_OFFSET))(this, s);
		}
	};
}
