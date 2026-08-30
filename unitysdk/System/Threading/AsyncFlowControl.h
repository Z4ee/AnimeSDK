#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Threading { class ExecutionContext; }
namespace System::Threading { class Thread; }

#define SYSTEM_THREADING_ASYNCFLOWCONTROL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3B7B190)
#define SYSTEM_THREADING_ASYNCFLOWCONTROL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3B7B220)
#define SYSTEM_THREADING_ASYNCFLOWCONTROL_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B7B1B0)
#define SYSTEM_THREADING_ASYNCFLOWCONTROL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B7B1A0)
#define SYSTEM_THREADING_ASYNCFLOWCONTROL_SETUP_OFFSET UNITYSDK_OFFSET(0x3B7B0C0)
#define SYSTEM_THREADING_ASYNCFLOWCONTROL_UNDO_OFFSET UNITYSDK_OFFSET(0x3B7B190)

namespace System::Threading
{
	inline static constexpr unsigned int AsyncFlowControl_TypeDefinitionIndex = 830;

	struct alignas(8) AsyncFlowControl
	{
		::System::Boolean useEC; // 0x10
		::System::Threading::ExecutionContext* _ec; // 0x18
		::System::Threading::Thread* _thread; // 0x20

		::System::Void Setup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ASYNCFLOWCONTROL_SETUP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ASYNCFLOWCONTROL_DISPOSE_OFFSET))(this);
		}

		::System::Void Undo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ASYNCFLOWCONTROL_UNDO_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ASYNCFLOWCONTROL_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ASYNCFLOWCONTROL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Threading::AsyncFlowControl a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::AsyncFlowControl))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ASYNCFLOWCONTROL_EQUALS_1_OFFSET))(this, a1);
		}
	};
}
