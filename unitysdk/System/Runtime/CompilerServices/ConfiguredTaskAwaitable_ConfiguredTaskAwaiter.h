#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System::Threading::Tasks { class Task; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE_CONFIGUREDTASKAWAITER_GETRESULT_OFFSET UNITYSDK_OFFSET(0x8AC9B0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE_CONFIGUREDTASKAWAITER_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x2FC300)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE_CONFIGUREDTASKAWAITER_ONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x3493E0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE_CONFIGUREDTASKAWAITER_UNSAFEONCOMPLETED_OFFSET UNITYSDK_OFFSET(0x349400)
#define SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE_CONFIGUREDTASKAWAITER__CTOR_OFFSET UNITYSDK_OFFSET(0x3493D0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_TypeDefinitionIndex = 1394;

	struct alignas(8) ConfiguredTaskAwaitable_ConfiguredTaskAwaiter
	{
		::System::Threading::Tasks::Task* m_task; // 0x10
		::System::Boolean m_continueOnCapturedContext; // 0x18

		::System::Void _ctor(::System::Threading::Tasks::Task* task, ::System::Boolean continueOnCapturedContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Tasks::Task*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE_CONFIGUREDTASKAWAITER__CTOR_OFFSET))(this, task, continueOnCapturedContext);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE_CONFIGUREDTASKAWAITER_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Void OnCompleted(::System::Action* continuation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE_CONFIGUREDTASKAWAITER_ONCOMPLETED_OFFSET))(this, continuation);
		}

		::System::Void UnsafeOnCompleted(::System::Action* continuation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE_CONFIGUREDTASKAWAITER_UNSAFEONCOMPLETED_OFFSET))(this, continuation);
		}

		::System::Void GetResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_CONFIGUREDTASKAWAITABLE_CONFIGUREDTASKAWAITER_GETRESULT_OFFSET))(this);
		}
	};
}
