#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Dynamic { class ExpandoObject; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOCHECKVERSION_OFFSET UNITYSDK_OFFSET(0x1E76E210)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOPROMOTECLASS_OFFSET UNITYSDK_OFFSET(0x1E76E240)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOTRYDELETEVALUE_OFFSET UNITYSDK_OFFSET(0x1E76E170)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOTRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1E76E110)
#define SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOTRYSETVALUE_OFFSET UNITYSDK_OFFSET(0x1E76E130)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int RuntimeOps_TypeDefinitionIndex = 3666;

	class RuntimeOps : public ::System::Object
	{
	public:
		static ::System::Boolean ExpandoTryGetValue(::System::Dynamic::ExpandoObject* a1, ::System::Object* a2, ::System::Int32 a3, ::System::String* a4, ::System::Boolean a5, ::System::Object*& a6)
		{
			return ((::System::Boolean(*)(::System::Dynamic::ExpandoObject*, ::System::Object*, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOTRYGETVALUE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Object* ExpandoTrySetValue(::System::Dynamic::ExpandoObject* a1, ::System::Object* a2, ::System::Int32 a3, ::System::Object* a4, ::System::String* a5, ::System::Boolean a6)
		{
			return ((::System::Object*(*)(::System::Dynamic::ExpandoObject*, ::System::Object*, ::System::Int32, ::System::Object*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOTRYSETVALUE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean ExpandoTryDeleteValue(::System::Dynamic::ExpandoObject* a1, ::System::Object* a2, ::System::Int32 a3, ::System::String* a4, ::System::Boolean a5)
		{
			return ((::System::Boolean(*)(::System::Dynamic::ExpandoObject*, ::System::Object*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOTRYDELETEVALUE_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean ExpandoCheckVersion(::System::Dynamic::ExpandoObject* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::System::Dynamic::ExpandoObject*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOCHECKVERSION_OFFSET))(a1, a2);
		}

		static ::System::Void ExpandoPromoteClass(::System::Dynamic::ExpandoObject* a1, ::System::Object* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::System::Dynamic::ExpandoObject*, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_RUNTIMEOPS_EXPANDOPROMOTECLASS_OFFSET))(a1, a2, a3);
		}
	};
}
