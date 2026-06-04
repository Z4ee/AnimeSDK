#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE_CONFIGUREDTASKAWAITER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x383BCD0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE_CONFIGUREDTASKAWAITER_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x2C8A3F0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE_CONFIGUREDTASKAWAITER_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x2C8A430)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE_CONFIGUREDTASKAWAITER_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x2C8A450)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE_CONFIGUREDTASKAWAITER__CTOR_OFFSET UNITYSDK_OFFSET(0x2C8A3E0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_TypeDefinitionIndex = 1362;

	struct alignas(8) ConfiguredTaskAwaitable_ConfiguredTaskAwaiter
	{
		::System::Threading::Tasks::Task* m_task; // 0x10
		::System::Boolean m_continueOnCapturedContext; // 0x18

		::System::Void _ctor(::System::Threading::Tasks::Task* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE_CONFIGUREDTASKAWAITER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE_CONFIGUREDTASKAWAITER_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE_CONFIGUREDTASKAWAITER_ONCOMPLETED_OFFSET))(this, a1);
		}

		::System::Void UnsafeOnCompleted(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE_CONFIGUREDTASKAWAITER_UNSAFEONCOMPLETED_OFFSET))(this, a1);
		}

		::System::Void GetResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE_CONFIGUREDTASKAWAITER_GETRESULT_OFFSET))(this);
		}
	};
}
