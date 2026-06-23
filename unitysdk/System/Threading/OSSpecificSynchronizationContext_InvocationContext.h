#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class SendOrPostCallback; }

#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_INVOCATIONCONTEXT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B8C0200)
#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_INVOCATIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8C01F0)

namespace System::Threading
{
	inline static constexpr unsigned int OSSpecificSynchronizationContext_InvocationContext_TypeDefinitionIndex = 832;

	class OSSpecificSynchronizationContext_InvocationContext : public ::System::Object
	{
	public:
		::System::Threading::SendOrPostCallback* m_Delegate; // 0x10
		::System::Object* m_State; // 0x18

		::System::Void _ctor(::System::Threading::SendOrPostCallback* d, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::SendOrPostCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_INVOCATIONCONTEXT__CTOR_OFFSET))(this, d, state);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_INVOCATIONCONTEXT_INVOKE_OFFSET))(this);
		}
	};
}
