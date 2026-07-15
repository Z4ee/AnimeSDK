#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/Win32/SafeHandles/SafeHandleZeroOrMinusOneIsInvalid.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics { class StackTrace; }
namespace System::Threading { class Thread; }

#define SYSTEM_NET_SOCKETS_SAFESOCKETHANDLE_REGISTERFORBLOCKINGSYSCALL_OFFSET UNITYSDK_OFFSET(0x19EE66F0)
#define SYSTEM_NET_SOCKETS_SAFESOCKETHANDLE_RELEASEHANDLE_OFFSET UNITYSDK_OFFSET(0x19EE5F40)
#define SYSTEM_NET_SOCKETS_SAFESOCKETHANDLE_UNREGISTERFORBLOCKINGSYSCALL_OFFSET UNITYSDK_OFFSET(0x19EE6AE0)
#define SYSTEM_NET_SOCKETS_SAFESOCKETHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19EE6D20)
#define SYSTEM_NET_SOCKETS_SAFESOCKETHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE5E20)

namespace System::Net::Sockets
{
	inline static constexpr unsigned int SafeSocketHandle_TypeDefinitionIndex = 2910;

	class SafeSocketHandle : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid
	{
	public:
		static ::System::Boolean* StaticGet_THROW_ON_ABORT_RETRIES()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SafeSocketHandle_TypeDefinitionIndex)->GetStaticField(0x8070);
		}
		::System::Collections::Generic::Dictionary_2<::System::Threading::Thread*, ::System::Diagnostics::StackTrace*>* threads_stacktraces; // 0x20
		::System::Collections::Generic::List_1<::System::Threading::Thread*>* blocking_threads; // 0x28
		::System::Boolean in_cleanup; // 0x30

		::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SAFESOCKETHANDLE__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SAFESOCKETHANDLE__CCTOR_OFFSET))();
		}

		::System::Boolean ReleaseHandle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SAFESOCKETHANDLE_RELEASEHANDLE_OFFSET))(this);
		}

		::System::Void RegisterForBlockingSyscall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SAFESOCKETHANDLE_REGISTERFORBLOCKINGSYSCALL_OFFSET))(this);
		}

		::System::Void UnRegisterForBlockingSyscall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SOCKETS_SAFESOCKETHANDLE_UNREGISTERFORBLOCKINGSYSCALL_OFFSET))(this);
		}
	};
}
