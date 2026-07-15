#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKCACHE_CREATEINT32TASKS_OFFSET UNITYSDK_OFFSET(0x1A8238E0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKCACHE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A823A10)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int AsyncTaskCache_TypeDefinitionIndex = 1345;

	class AsyncTaskCache : public ::System::Object
	{
	public:
		static ::System::Threading::Tasks::Task_1<::System::Boolean>** StaticGet_FalseTask()
		{
			return (::System::Threading::Tasks::Task_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AsyncTaskCache_TypeDefinitionIndex)->GetStaticField(0x10910);
		}
		static ::Il2CppArray<::System::Threading::Tasks::Task_1<::System::Int32>*>** StaticGet_Int32Tasks()
		{
			return (::Il2CppArray<::System::Threading::Tasks::Task_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(AsyncTaskCache_TypeDefinitionIndex)->GetStaticField(0x10918);
		}
		static ::System::Threading::Tasks::Task_1<::System::Boolean>** StaticGet_TrueTask()
		{
			return (::System::Threading::Tasks::Task_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AsyncTaskCache_TypeDefinitionIndex)->GetStaticField(0x10920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKCACHE__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Threading::Tasks::Task_1<::System::Int32>*>* CreateInt32Tasks()
		{
			return ((::Il2CppArray<::System::Threading::Tasks::Task_1<::System::Int32>*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_ASYNCTASKCACHE_CREATEINT32TASKS_OFFSET))();
		}
	};
}
