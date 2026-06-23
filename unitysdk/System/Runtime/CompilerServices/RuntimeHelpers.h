#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeFieldHandle.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class Array; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C9D4470)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_GETOBJECTVALUE_OFFSET UNITYSDK_OFFSET(0x1C9D4480)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_GET_OFFSETTOSTRINGDATA_OFFSET UNITYSDK_OFFSET(0x1C9CDD70)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_INITIALIZEARRAY_1_OFFSET UNITYSDK_OFFSET(0x1C9D4400)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_INITIALIZEARRAY_OFFSET UNITYSDK_OFFSET(0x1C9D43F0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_RUNCLASSCONSTRUCTOR_1_OFFSET UNITYSDK_OFFSET(0x1C9D4580)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_RUNCLASSCONSTRUCTOR_OFFSET UNITYSDK_OFFSET(0x1C9D4540)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_SUFFICIENTEXECUTIONSTACK_OFFSET UNITYSDK_OFFSET(0x1C9D4600)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_TRYENSURESUFFICIENTEXECUTIONSTACK_OFFSET UNITYSDK_OFFSET(0x1C9D4610)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RuntimeHelpers_TypeDefinitionIndex = 1409;

	class RuntimeHelpers : public ::System::Object
	{
	public:
		static ::System::Void InitializeArray(::System::Array* array, ::System::IntPtr fldHandle)
		{
			return ((::System::Void(*)(::System::Array*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_INITIALIZEARRAY_OFFSET))(array, fldHandle);
		}

		static ::System::Void InitializeArray_1(::System::Array* array, ::System::RuntimeFieldHandle fldHandle)
		{
			return ((::System::Void(*)(::System::Array*, ::System::RuntimeFieldHandle))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_INITIALIZEARRAY_1_OFFSET))(array, fldHandle);
		}

		static ::System::Int32 get_OffsetToStringData()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_GET_OFFSETTOSTRINGDATA_OFFSET))();
		}

		static ::System::Int32 GetHashCode(::System::Object* o)
		{
			return ((::System::Int32(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_GETHASHCODE_OFFSET))(o);
		}

		static ::System::Object* GetObjectValue(::System::Object* obj)
		{
			return ((::System::Object*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_GETOBJECTVALUE_OFFSET))(obj);
		}

		static ::System::Void RunClassConstructor(::System::IntPtr type)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_RUNCLASSCONSTRUCTOR_OFFSET))(type);
		}

		static ::System::Void RunClassConstructor_1(::System::RuntimeTypeHandle type)
		{
			return ((::System::Void(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_RUNCLASSCONSTRUCTOR_1_OFFSET))(type);
		}

		static ::System::Boolean SufficientExecutionStack()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_SUFFICIENTEXECUTIONSTACK_OFFSET))();
		}

		static ::System::Boolean TryEnsureSufficientExecutionStack()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEHELPERS_TRYENSURESUFFICIENTEXECUTIONSTACK_OFFSET))();
		}
	};
}
