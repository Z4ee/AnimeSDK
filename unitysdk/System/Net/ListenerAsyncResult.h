#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class Exception; }
namespace System::Net { class HttpListenerContext; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitCallback; }
namespace System::Threading { class WaitHandle; }

#define SYSTEM_NET_LISTENERASYNCRESULT_COMPLETE_1_OFFSET UNITYSDK_OFFSET(0x1DAC57A0)
#define SYSTEM_NET_LISTENERASYNCRESULT_COMPLETE_2_OFFSET UNITYSDK_OFFSET(0x1DAC57B0)
#define SYSTEM_NET_LISTENERASYNCRESULT_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1DAC54E0)
#define SYSTEM_NET_LISTENERASYNCRESULT_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x1DAC5FB0)
#define SYSTEM_NET_LISTENERASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x1DAC6030)
#define SYSTEM_NET_LISTENERASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x1DAC6050)
#define SYSTEM_NET_LISTENERASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x1DAC6180)
#define SYSTEM_NET_LISTENERASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1DAC61A0)
#define SYSTEM_NET_LISTENERASYNCRESULT_INVOKECALLBACK_OFFSET UNITYSDK_OFFSET(0x1DAC56C0)
#define SYSTEM_NET_LISTENERASYNCRESULT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DAC6270)
#define SYSTEM_NET_LISTENERASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC54B0)

namespace System::Net
{
	inline static constexpr unsigned int ListenerAsyncResult_TypeDefinitionIndex = 3543;

	class ListenerAsyncResult : public ::System::Object
	{
	public:
		static ::System::Threading::WaitCallback** StaticGet_InvokeCB()
		{
			return (::System::Threading::WaitCallback**)Il2CppClass::FromTypeDefinitionIndex(ListenerAsyncResult_TypeDefinitionIndex)->GetStaticField(0x34F0);
		}
		::System::Net::ListenerAsyncResult* forward; // 0x10
		::System::Net::HttpListenerContext* context; // 0x18
		::System::Exception* exception; // 0x20
		::System::Threading::ManualResetEvent* handle; // 0x28
		::System::Object* locker; // 0x30
		::System::Object* state; // 0x38
		::System::AsyncCallback* cb; // 0x40
		::System::Boolean InGet; // 0x48
		::System::Boolean completed; // 0x49
		::System::Boolean EndCalled; // 0x4A
		::System::Boolean synch; // 0x4B

		::System::Void _ctor(::System::AsyncCallback* cb, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERASYNCRESULT__CTOR_OFFSET))(this, cb, state);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERASYNCRESULT__CCTOR_OFFSET))();
		}

		::System::Void Complete(::System::Exception* exc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERASYNCRESULT_COMPLETE_OFFSET))(this, exc);
		}

		static ::System::Void InvokeCallback(::System::Object* o)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERASYNCRESULT_INVOKECALLBACK_OFFSET))(o);
		}

		::System::Void Complete_1(::System::Net::HttpListenerContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpListenerContext*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERASYNCRESULT_COMPLETE_1_OFFSET))(this, context);
		}

		::System::Void Complete_2(::System::Net::HttpListenerContext* context, ::System::Boolean synch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpListenerContext*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERASYNCRESULT_COMPLETE_2_OFFSET))(this, context, synch);
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
