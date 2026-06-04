#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class Exception; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class WaitHandle; }

#define SYSTEM_NET_HTTPSTREAMASYNCRESULT_COMPLETE_1_OFFSET UNITYSDK_OFFSET(0x1AF8A560)
#define SYSTEM_NET_HTTPSTREAMASYNCRESULT_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1AF8A550)
#define SYSTEM_NET_HTTPSTREAMASYNCRESULT_GET_ASYNCSTATE_OFFSET UNITYSDK_OFFSET(0x1AF8A670)
#define SYSTEM_NET_HTTPSTREAMASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET UNITYSDK_OFFSET(0x1AF8A680)
#define SYSTEM_NET_HTTPSTREAMASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET UNITYSDK_OFFSET(0x1AF8A770)
#define SYSTEM_NET_HTTPSTREAMASYNCRESULT_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x1AF8A780)
#define SYSTEM_NET_HTTPSTREAMASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF8A830)

namespace System::Net
{
	inline static constexpr unsigned int HttpStreamAsyncResult_TypeDefinitionIndex = 2845;

	class HttpStreamAsyncResult : public ::System::Object
	{
	public:
		::System::Object* State; // 0x10
		::System::Object* locker; // 0x18
		::System::Threading::ManualResetEvent* handle; // 0x20
		::System::Exception* Error; // 0x28
		::Il2CppArray<::System::Byte>* Buffer; // 0x30
		::System::AsyncCallback* Callback; // 0x38
		::System::Int32 SynchRead; // 0x40
		::System::Int32 Offset; // 0x44
		::System::Int32 Count; // 0x48
		::System::Boolean completed; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPSTREAMASYNCRESULT__CTOR_OFFSET))(this);
		}

		::System::Void Complete(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPSTREAMASYNCRESULT_COMPLETE_OFFSET))(this, a1);
		}

		::System::Void Complete_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPSTREAMASYNCRESULT_COMPLETE_1_OFFSET))(this);
		}

		::System::Object* get_AsyncState()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPSTREAMASYNCRESULT_GET_ASYNCSTATE_OFFSET))(this);
		}

		::System::Threading::WaitHandle* get_AsyncWaitHandle()
		{
			return ((::System::Threading::WaitHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPSTREAMASYNCRESULT_GET_ASYNCWAITHANDLE_OFFSET))(this);
		}

		::System::Boolean get_CompletedSynchronously()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPSTREAMASYNCRESULT_GET_COMPLETEDSYNCHRONOUSLY_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPSTREAMASYNCRESULT_GET_ISCOMPLETED_OFFSET))(this);
		}
	};
}
