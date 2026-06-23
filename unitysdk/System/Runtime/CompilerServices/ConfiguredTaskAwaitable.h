#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System::Threading::Tasks { class Task; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x3713C0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int ConfiguredTaskAwaitable_TypeDefinitionIndex = 1392;

	struct alignas(8) ConfiguredTaskAwaitable
	{
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter m_configuredTaskAwaiter; // 0x10

		::System::Void _ctor(::System::Threading::Tasks::Task* task, ::System::Boolean continueOnCapturedContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE__CTOR_OFFSET))(this, task, continueOnCapturedContext);
		}
	};
}
