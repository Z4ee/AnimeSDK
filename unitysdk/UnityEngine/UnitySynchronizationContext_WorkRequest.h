#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Threading { class ManualResetEvent; }
namespace System::Threading { class SendOrPostCallback; }

#define UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_WORKREQUEST_INVOKE_OFFSET UNITYSDK_OFFSET(0x3AD3130)
#define UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_WORKREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x2F01D90)

namespace UnityEngine
{
	inline static constexpr unsigned int UnitySynchronizationContext_WorkRequest_TypeDefinitionIndex = 4352;

	struct alignas(8) UnitySynchronizationContext_WorkRequest
	{
		::System::Threading::SendOrPostCallback* m_DelagateCallback; // 0x10
		::System::Object* m_DelagateState; // 0x18
		::System::Threading::ManualResetEvent* m_WaitHandle; // 0x20

		::System::Void _ctor(::System::Threading::SendOrPostCallback* a1, ::System::Object* a2, ::System::Threading::ManualResetEvent* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SendOrPostCallback*, ::System::Object*, ::System::Threading::ManualResetEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_WORKREQUEST__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYSYNCHRONIZATIONCONTEXT_WORKREQUEST_INVOKE_OFFSET))(this);
		}
	};
}
