#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/ExecutionContext_Reader.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Threading { class Thread; }

#define SYSTEM_THREADING_EXECUTIONCONTEXTSWITCHER_UNDONOTHROW_OFFSET UNITYSDK_OFFSET(0x3B7B9C0)
#define SYSTEM_THREADING_EXECUTIONCONTEXTSWITCHER_UNDO_OFFSET UNITYSDK_OFFSET(0x3B7BA60)

namespace System::Threading
{
	inline static constexpr unsigned int ExecutionContextSwitcher_TypeDefinitionIndex = 829;

	struct alignas(8) ExecutionContextSwitcher
	{
		::System::Threading::ExecutionContext_Reader outerEC; // 0x10
		::System::Boolean outerECBelongsToScope; // 0x18
		::System::Object* hecsw; // 0x20
		::System::Threading::Thread* thread; // 0x28

		::System::Boolean UndoNoThrow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXTSWITCHER_UNDONOTHROW_OFFSET))(this);
		}

		::System::Void Undo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_EXECUTIONCONTEXTSWITCHER_UNDO_OFFSET))(this);
		}
	};
}
