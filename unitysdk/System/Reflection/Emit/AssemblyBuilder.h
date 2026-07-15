#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/Assembly.h"
#include "unitysdk/System/Reflection/Emit/AssemblyBuilderAccess.h"

namespace System { class String; }
namespace System::Reflection { class AssemblyName; }
namespace System::Reflection::Emit { class CustomAttributeBuilder; }
namespace System::Reflection::Emit { class ModuleBuilder; }

#define SYSTEM_REFLECTION_EMIT_ASSEMBLYBUILDER_DEFINEDYNAMICASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1AFC8E50)
#define SYSTEM_REFLECTION_EMIT_ASSEMBLYBUILDER_DEFINEDYNAMICMODULE_OFFSET UNITYSDK_OFFSET(0x1AFC8EA0)
#define SYSTEM_REFLECTION_EMIT_ASSEMBLYBUILDER_SETCUSTOMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AFC8EF0)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int AssemblyBuilder_TypeDefinitionIndex = 636;

	class AssemblyBuilder : public ::System::Reflection::Assembly
	{
	public:
		static ::System::Reflection::Emit::AssemblyBuilder* DefineDynamicAssembly(::System::Reflection::AssemblyName* a1, ::System::Reflection::Emit::AssemblyBuilderAccess a2)
		{
			return ((::System::Reflection::Emit::AssemblyBuilder*(*)(::System::Reflection::AssemblyName*, ::System::Reflection::Emit::AssemblyBuilderAccess))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ASSEMBLYBUILDER_DEFINEDYNAMICASSEMBLY_OFFSET))(a1, a2);
		}

		::System::Reflection::Emit::ModuleBuilder* DefineDynamicModule(::System::String* a1)
		{
			return ((::System::Reflection::Emit::ModuleBuilder*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ASSEMBLYBUILDER_DEFINEDYNAMICMODULE_OFFSET))(this, a1);
		}

		::System::Void SetCustomAttribute(::System::Reflection::Emit::CustomAttributeBuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::CustomAttributeBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ASSEMBLYBUILDER_SETCUSTOMATTRIBUTE_OFFSET))(this, a1);
		}
	};
}
