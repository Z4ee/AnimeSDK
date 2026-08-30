#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System::Threading::Tasks { class Task; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE_GETAWAITER_OFFSET UNITYSDK_OFFSET(0x2DFB9E0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x2EE0620)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int ConfiguredTaskAwaitable_TypeDefinitionIndex = 1371;

	struct alignas(8) ConfiguredTaskAwaitable
	{
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter m_configuredTaskAwaiter; // 0x10

		::System::Void _ctor(::System::Threading::Tasks::Task* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter GetAwaiter()
		{
			return ((::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE_GETAWAITER_OFFSET))(this);
		}
	};
}
