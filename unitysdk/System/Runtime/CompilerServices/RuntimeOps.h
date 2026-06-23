#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Dynamic { class ExpandoObject; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOCHECKVERSION_OFFSET UNITYSDK_OFFSET(0x1D250F80)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOPROMOTECLASS_OFFSET UNITYSDK_OFFSET(0x1D250FB0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOTRYDELETEVALUE_OFFSET UNITYSDK_OFFSET(0x1D250EE0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOTRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1D250E80)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOTRYSETVALUE_OFFSET UNITYSDK_OFFSET(0x1D250EA0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RuntimeOps_TypeDefinitionIndex = 4949;

	class RuntimeOps : public ::System::Object
	{
	public:
		static ::System::Boolean ExpandoTryGetValue(::System::Dynamic::ExpandoObject* expando, ::System::Object* indexClass, ::System::Int32 index, ::System::String* name, ::System::Boolean ignoreCase, ::System::Object*& value)
		{
			return ((::System::Boolean(*)(::System::Dynamic::ExpandoObject*, ::System::Object*, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOTRYGETVALUE_OFFSET))(expando, indexClass, index, name, ignoreCase, value);
		}

		static ::System::Object* ExpandoTrySetValue(::System::Dynamic::ExpandoObject* expando, ::System::Object* indexClass, ::System::Int32 index, ::System::Object* value, ::System::String* name, ::System::Boolean ignoreCase)
		{
			return ((::System::Object*(*)(::System::Dynamic::ExpandoObject*, ::System::Object*, ::System::Int32, ::System::Object*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOTRYSETVALUE_OFFSET))(expando, indexClass, index, value, name, ignoreCase);
		}

		static ::System::Boolean ExpandoTryDeleteValue(::System::Dynamic::ExpandoObject* expando, ::System::Object* indexClass, ::System::Int32 index, ::System::String* name, ::System::Boolean ignoreCase)
		{
			return ((::System::Boolean(*)(::System::Dynamic::ExpandoObject*, ::System::Object*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOTRYDELETEVALUE_OFFSET))(expando, indexClass, index, name, ignoreCase);
		}

		static ::System::Boolean ExpandoCheckVersion(::System::Dynamic::ExpandoObject* expando, ::System::Object* version)
		{
			return ((::System::Boolean(*)(::System::Dynamic::ExpandoObject*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOCHECKVERSION_OFFSET))(expando, version);
		}

		static ::System::Void ExpandoPromoteClass(::System::Dynamic::ExpandoObject* expando, ::System::Object* oldClass, ::System::Object* newClass)
		{
			return ((::System::Void(*)(::System::Dynamic::ExpandoObject*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOPROMOTECLASS_OFFSET))(expando, oldClass, newClass);
		}
	};
}
