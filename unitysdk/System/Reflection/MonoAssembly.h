#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/RuntimeAssembly.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class Module; }

#define SYSTEM_REFLECTION_MONOASSEMBLY_GETMODULES_OFFSET UNITYSDK_OFFSET(0x18756F60)
#define SYSTEM_REFLECTION_MONOASSEMBLY_GETMODULE_OFFSET UNITYSDK_OFFSET(0x18756DB0)
#define SYSTEM_REFLECTION_MONOASSEMBLY_GETTYPE_OFFSET UNITYSDK_OFFSET(0x18756D20)
#define SYSTEM_REFLECTION_MONOASSEMBLY__CTOR_OFFSET UNITYSDK_OFFSET(0x18757130)

namespace System::Reflection
{
	inline static constexpr unsigned int MonoAssembly_TypeDefinitionIndex = 610;

	class MonoAssembly : public ::System::Reflection::RuntimeAssembly
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOASSEMBLY__CTOR_OFFSET))(this);
		}

		::System::Type* GetType(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Type*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOASSEMBLY_GETTYPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Reflection::Module* GetModule(::System::String* a1)
		{
			return ((::System::Reflection::Module*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOASSEMBLY_GETMODULE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Reflection::Module*>* GetModules(::System::Boolean a1)
		{
			return ((::Il2CppArray<::System::Reflection::Module*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_MONOASSEMBLY_GETMODULES_OFFSET))(this, a1);
		}
	};
}
