#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/RuntimeAssembly.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class Module; }

#define SYSTEM_REFLECTION_MONOASSEMBLY_METHOD_3_083C775C01193874_OFFSET UNITYSDK_OFFSET(0x1DCF0FE0)
#define SYSTEM_REFLECTION_MONOASSEMBLY_METHOD_3_25189D47D4092890_OFFSET UNITYSDK_OFFSET(0x1DCF1250)
#define SYSTEM_REFLECTION_MONOASSEMBLY_METHOD_3_8C432A108884785D_OFFSET UNITYSDK_OFFSET(0x1DCF10A0)
#define SYSTEM_REFLECTION_MONOASSEMBLY_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1DCF1450)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoAssembly_TypeDefinitionIndex = 584;

	class MonoAssembly : public ::System::Reflection::RuntimeAssembly
	{
	public:
		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOASSEMBLY_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Type* Method_3_083C775C01193874(::System::String* name, ::System::Boolean throwOnError, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOASSEMBLY_METHOD_3_083C775C01193874_OFFSET))(this, name, throwOnError, ignoreCase);
		}

		::System::Reflection::Module* Method_3_8C432A108884785D(::System::String* name)
		{
			return ((::System::Reflection::Module*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOASSEMBLY_METHOD_3_8C432A108884785D_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::Module*>* Method_3_25189D47D4092890(::System::Boolean getResourceModules)
		{
			return ((::Il2CppArray<::System::Reflection::Module*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOASSEMBLY_METHOD_3_25189D47D4092890_OFFSET))(this, getResourceModules);
		}
	};
}
