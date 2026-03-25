#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class ContextCallback; }
namespace System::Threading { class ExecutionContext; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_MOVENEXTRUNNER_INVOKEMOVENEXT_OFFSET UNITYSDK_OFFSET(0x163917F0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_MOVENEXTRUNNER_RUN_OFFSET UNITYSDK_OFFSET(0x16391630)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_MOVENEXTRUNNER__CTOR_OFFSET UNITYSDK_OFFSET(0x16390CC0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncMethodBuilderCore_MoveNextRunner_TypeDefinitionIndex = 1344;

	class AsyncMethodBuilderCore_MoveNextRunner : public ::System::Object
	{
	public:
		static ::System::Threading::ContextCallback** StaticGet_s_invokeMoveNext()
		{
			return (::System::Threading::ContextCallback**)Il2CppClass::FromTypeDefinitionIndex(AsyncMethodBuilderCore_MoveNextRunner_TypeDefinitionIndex)->GetStaticField(0x6660);
		}
		::System::Threading::ExecutionContext* m_context; // 0x10
		::System::Runtime::CompilerServices::IAsyncStateMachine* m_stateMachine; // 0x18

		::System::Void _ctor(::System::Threading::ExecutionContext* context, ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ExecutionContext*, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_MOVENEXTRUNNER__CTOR_OFFSET))(this, context, stateMachine);
		}

		::System::Void Run()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_MOVENEXTRUNNER_RUN_OFFSET))(this);
		}

		static ::System::Void InvokeMoveNext(::System::Object* stateMachine)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_MOVENEXTRUNNER_INVOKEMOVENEXT_OFFSET))(stateMachine);
		}
	};
}
