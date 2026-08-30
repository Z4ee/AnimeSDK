#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class Exception; }
namespace System::Net { class HttpListenerContext; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitCallback; }
namespace System::Threading { class WaitHandle; }

#define SYSTEM_NET_LISTENERASYNCRESULT_COMPLETE_1_OFFSET UNITYSDK_OFFSET(0x1E98D290)
#define SYSTEM_NET_LISTENERASYNCRESULT_COMPLETE_2_OFFSET UNITYSDK_OFFSET(0x1E98C010)
#define SYSTEM_NET_LISTENERASYNCRESULT_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1E98B790)
#define SYSTEM_NET_LISTENERASYNCRESULT_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x1E98CEF0)
#define SYSTEM_NET_LISTENERASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x1E9A1120)
#define SYSTEM_NET_LISTENERASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x1E98CDF0)
#define SYSTEM_NET_LISTENERASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x1E9A1140)
#define SYSTEM_NET_LISTENERASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1E98CD20)
#define SYSTEM_NET_LISTENERASYNCRESULT_INVOKECALLBACK_OFFSET UNITYSDK_OFFSET(0x1E9A1030)
#define SYSTEM_NET_LISTENERASYNCRESULT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9A1160)
#define SYSTEM_NET_LISTENERASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E98BDD0)

namespace System::Net
{
	inline static constexpr unsigned int ListenerAsyncResult_TypeDefinitionIndex = 2865;

	class ListenerAsyncResult : public ::System::Object
	{
	public:
		static ::System::Threading::WaitCallback** StaticGet_InvokeCB()
		{
			return (::System::Threading::WaitCallback**)Il2CppClass::FromTypeDefinitionIndex(ListenerAsyncResult_TypeDefinitionIndex)->GetStaticField(0x1CFB0);
		}
		::System::Object* state; // 0x10
		::System::Threading::ManualResetEvent* handle; // 0x18
		::System::Exception* exception; // 0x20
		::System::Net::HttpListenerContext* context; // 0x28
		::System::Object* locker; // 0x30
		::System::AsyncCallback* cb; // 0x38
		::System::Net::ListenerAsyncResult* forward; // 0x40
		::System::Boolean completed; // 0x48
		::System::Boolean EndCalled; // 0x49
		::System::Boolean InGet; // 0x4A
		::System::Boolean synch; // 0x4B

		::System::Void _ctor(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERASYNCRESULT__CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERASYNCRESULT__CCTOR_OFFSET))();
		}

		::System::Void Complete(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERASYNCRESULT_COMPLETE_OFFSET))(this, a1);
		}

		static ::System::Void InvokeCallback(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERASYNCRESULT_INVOKECALLBACK_OFFSET))(a1);
		}

		::System::Void Complete_1(::System::Net::HttpListenerContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpListenerContext*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERASYNCRESULT_COMPLETE_1_OFFSET))(this, a1);
		}

		::System::Void Complete_2(::System::Net::HttpListenerContext* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpListenerContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERASYNCRESULT_COMPLETE_2_OFFSET))(this, a1, a2);
		}

		::System::Net::HttpListenerContext* GetContext()
		{
			return ((::System::Net::HttpListenerContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERASYNCRESULT_GETCONTEXT_OFFSET))(this);
		}

		::System::Object* get_AsyncState()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERASYNCRESULT_GET_ASYNCSTATE_OFFSET))(this);
		}

		::System::Threading::WaitHandle* get_AsyncWaitHandle()
		{
			return ((::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET))(this);
		}

		::System::Boolean get_CompletedSynchronously()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERASYNCRESULT_GET_ISCOMPLETED_OFFSET))(this);
		}
	};
}
