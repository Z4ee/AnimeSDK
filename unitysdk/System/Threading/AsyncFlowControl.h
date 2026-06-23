#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Threading { class ExecutionContext; }
namespace System::Threading { class Thread; }

#define SYSTEM_THREADING_ASYNCFLOWCONTROL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B7D20)
#define SYSTEM_THREADING_ASYNCFLOWCONTROL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x8B7DB0)
#define SYSTEM_THREADING_ASYNCFLOWCONTROL_EQUALS_OFFSET UNITYSDK_OFFSET(0x8B7D40)
#define SYSTEM_THREADING_ASYNCFLOWCONTROL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8B7D30)
#define SYSTEM_THREADING_ASYNCFLOWCONTROL_SETUP_OFFSET UNITYSDK_OFFSET(0x8B7C00)
#define SYSTEM_THREADING_ASYNCFLOWCONTROL_UNDO_OFFSET UNITYSDK_OFFSET(0x8B7D20)

namespace System::Threading
{
	inline static constexpr unsigned int AsyncFlowControl_TypeDefinitionIndex = 816;

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

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ASYNCFLOWCONTROL_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::System::Threading::AsyncFlowControl obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Threading::AsyncFlowControl))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_ASYNCFLOWCONTROL_EQUALS_1_OFFSET))(this, obj);
		}
	};
}
