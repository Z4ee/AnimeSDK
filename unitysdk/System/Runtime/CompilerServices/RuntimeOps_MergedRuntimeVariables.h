#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::CompilerServices { class IRuntimeVariables; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_MERGEDRUNTIMEVARIABLES_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E30ABD0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_MERGEDRUNTIMEVARIABLES_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E30ABF0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_MERGEDRUNTIMEVARIABLES_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E30ADA0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_MERGEDRUNTIMEVARIABLES__CTOR_OFFSET UNITYSDK_OFFSET(0x1E30ABC0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RuntimeOps_MergedRuntimeVariables_TypeDefinitionIndex = 4950;

	class RuntimeOps_MergedRuntimeVariables : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* _indexes; // 0x10
		::System::Runtime::CompilerServices::IRuntimeVariables* _first; // 0x18
		::System::Runtime::CompilerServices::IRuntimeVariables* _second; // 0x20

		::System::Void _ctor(::System::Runtime::CompilerServices::IRuntimeVariables* first, ::System::Runtime::CompilerServices::IRuntimeVariables* second, ::Il2CppArray<::System::Int32>* indexes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IRuntimeVariables*, ::System::Runtime::CompilerServices::IRuntimeVariables*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_MERGEDRUNTIMEVARIABLES__CTOR_OFFSET))(this, first, second, indexes);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_MERGEDRUNTIMEVARIABLES_GET_COUNT_OFFSET))(this);
		}

		::System::Object* get_Item(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_MERGEDRUNTIMEVARIABLES_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_MERGEDRUNTIMEVARIABLES_SET_ITEM_OFFSET))(this, index, value);
		}
	};
}
