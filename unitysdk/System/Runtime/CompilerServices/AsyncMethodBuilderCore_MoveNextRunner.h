#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class ContextCallback; }
namespace System::Threading { class ExecutionContext; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_MOVENEXTRUNNER_INVOKEMOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C455D30)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_MOVENEXTRUNNER_RUN_OFFSET UNITYSDK_OFFSET(0x1C455B00)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_MOVENEXTRUNNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C455020)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncMethodBuilderCore_MoveNextRunner_TypeDefinitionIndex = 1354;

	class AsyncMethodBuilderCore_MoveNextRunner : public ::System::Object
	{
	public:
		static ::System::Threading::ContextCallback** StaticGet_s_invokeMoveNext()
		{
			return (::System::Threading::ContextCallback**)Il2CppClass::FromTypeDefinitionIndex(AsyncMethodBuilderCore_MoveNextRunner_TypeDefinitionIndex)->GetStaticField(0x11530);
		}
		::System::Threading::ExecutionContext* m_context; // 0x10
		::System::Runtime::CompilerServices::IAsyncStateMachine* m_stateMachine; // 0x18

		::System::Void _ctor(::System::Threading::ExecutionContext* a1, ::System::Runtime::CompilerServices::IAsyncStateMachine* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::ExecutionContext*, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_MOVENEXTRUNNER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Run()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_MOVENEXTRUNNER_RUN_OFFSET))(this);
		}

		static ::System::Void InvokeMoveNext(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCMETHODBUILDERCORE_MOVENEXTRUNNER_INVOKEMOVENEXT_OFFSET))(a1);
		}
	};
}
