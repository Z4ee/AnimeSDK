#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/LazyAsyncResult.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_NET_MIME_MULTIASYNCRESULT_COMPLETESEQUENCE_OFFSET UNITYSDK_OFFSET(0x1C027420)
#define SYSTEM_NET_MIME_MULTIASYNCRESULT_DECREMENT_OFFSET UNITYSDK_OFFSET(0x1C0272E0)
#define SYSTEM_NET_MIME_MULTIASYNCRESULT_END_OFFSET UNITYSDK_OFFSET(0x1C0274C0)
#define SYSTEM_NET_MIME_MULTIASYNCRESULT_ENTER_OFFSET UNITYSDK_OFFSET(0x1C027220)
#define SYSTEM_NET_MIME_MULTIASYNCRESULT_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0x1C027210)
#define SYSTEM_NET_MIME_MULTIASYNCRESULT_INCREMENT_OFFSET UNITYSDK_OFFSET(0x1C027230)
#define SYSTEM_NET_MIME_MULTIASYNCRESULT_LEAVE_1_OFFSET UNITYSDK_OFFSET(0x1C027380)
#define SYSTEM_NET_MIME_MULTIASYNCRESULT_LEAVE_OFFSET UNITYSDK_OFFSET(0x1C027240)
#define SYSTEM_NET_MIME_MULTIASYNCRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C027190)

namespace System::Net::Mime
{
	inline static constexpr unsigned int MultiAsyncResult_TypeDefinitionIndex = 3626;

	class MultiAsyncResult : public ::System::Net::LazyAsyncResult
	{
	public:
		::System::Object* context; // 0x48
		::System::Int32 outstanding; // 0x50

		::System::Void _ctor(::System::Object* context, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MULTIASYNCRESULT__CTOR_OFFSET))(this, context, callback, state);
		}

		::System::Object* get_Context()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MULTIASYNCRESULT_GET_CONTEXT_OFFSET))(this);
		}

		::System::Void Enter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MULTIASYNCRESULT_ENTER_OFFSET))(this);
		}

		::System::Void Leave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MULTIASYNCRESULT_LEAVE_OFFSET))(this);
		}

		::System::Void Leave_1(::System::Object* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MULTIASYNCRESULT_LEAVE_1_OFFSET))(this, result);
		}

		::System::Void Decrement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MULTIASYNCRESULT_DECREMENT_OFFSET))(this);
		}

		::System::Void Increment()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MULTIASYNCRESULT_INCREMENT_OFFSET))(this);
		}

		::System::Void CompleteSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MULTIASYNCRESULT_COMPLETESEQUENCE_OFFSET))(this);
		}

		static ::System::Object* End(::System::IAsyncResult* result)
		{
			return ((::System::Object*(*)(::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MULTIASYNCRESULT_END_OFFSET))(result);
		}
	};
}
