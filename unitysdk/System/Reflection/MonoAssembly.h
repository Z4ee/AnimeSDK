#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/RuntimeAssembly.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class Module; }

#define SYSTEM_REFLECTION_MONOASSEMBLY_GETMODULES_OFFSET UNITYSDK_OFFSET(0x16378540)
#define SYSTEM_REFLECTION_MONOASSEMBLY_GETMODULE_OFFSET UNITYSDK_OFFSET(0x16378380)
#define SYSTEM_REFLECTION_MONOASSEMBLY_GETTYPE_OFFSET UNITYSDK_OFFSET(0x163782F0)
#define SYSTEM_REFLECTION_MONOASSEMBLY__CTOR_OFFSET UNITYSDK_OFFSET(0x16378740)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoAssembly_TypeDefinitionIndex = 611;

	class MonoAssembly : public ::System::Reflection::RuntimeAssembly
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOASSEMBLY__CTOR_OFFSET))(this);
		}

		::System::Type* GetType(::System::String* name, ::System::Boolean throwOnError, ::System::Boolean ignoreCase)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOASSEMBLY_GETTYPE_OFFSET))(this, name, throwOnError, ignoreCase);
		}

		::System::Reflection::Module* GetModule(::System::String* name)
		{
			return ((::System::Reflection::Module*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOASSEMBLY_GETMODULE_OFFSET))(this, name);
		}

		::Il2CppArray<::System::Reflection::Module*>* GetModules(::System::Boolean getResourceModules)
		{
			return ((::Il2CppArray<::System::Reflection::Module*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOASSEMBLY_GETMODULES_OFFSET))(this, getResourceModules);
		}
	};
}
