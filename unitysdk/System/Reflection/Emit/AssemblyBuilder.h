#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/Assembly.h"
#include "unitysdk/System/Reflection/Emit/AssemblyBuilderAccess.h"

namespace System { class String; }
namespace System::Reflection { class AssemblyName; }
namespace System::Reflection::Emit { class ModuleBuilder; }

#define SYSTEM_REFLECTION_EMIT_ASSEMBLYBUILDER_DEFINEDYNAMICASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1E445200)
#define SYSTEM_REFLECTION_EMIT_ASSEMBLYBUILDER_DEFINEDYNAMICMODULE_OFFSET UNITYSDK_OFFSET(0x1E445250)
#define SYSTEM_REFLECTION_EMIT_ASSEMBLYBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4452A0)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int AssemblyBuilder_TypeDefinitionIndex = 610;

	class AssemblyBuilder : public ::System::Reflection::Assembly
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ASSEMBLYBUILDER__CTOR_OFFSET))(this);
		}

		static ::System::Reflection::Emit::AssemblyBuilder* DefineDynamicAssembly(::System::Reflection::AssemblyName* name, ::System::Reflection::Emit::AssemblyBuilderAccess access)
		{
			return ((::System::Reflection::Emit::AssemblyBuilder*(*)(::System::Reflection::AssemblyName*, ::System::Reflection::Emit::AssemblyBuilderAccess))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ASSEMBLYBUILDER_DEFINEDYNAMICASSEMBLY_OFFSET))(name, access);
		}

		::System::Reflection::Emit::ModuleBuilder* DefineDynamicModule(::System::String* name)
		{
			return ((::System::Reflection::Emit::ModuleBuilder*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ASSEMBLYBUILDER_DEFINEDYNAMICMODULE_OFFSET))(this, name);
		}
	};
}
