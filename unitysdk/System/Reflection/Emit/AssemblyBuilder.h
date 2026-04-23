#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/Assembly.h"
#include "unitysdk/System/Reflection/Emit/AssemblyBuilderAccess.h"

namespace System { class String; }
namespace System::Reflection { class AssemblyName; }
namespace System::Reflection::Emit { class CustomAttributeBuilder; }
namespace System::Reflection::Emit { class ModuleBuilder; }

#define SYSTEM_REFLECTION_EMIT_ASSEMBLYBUILDER_DEFINEDYNAMICASSEMBLY_OFFSET UNITYSDK_OFFSET(0x179997B0)
#define SYSTEM_REFLECTION_EMIT_ASSEMBLYBUILDER_DEFINEDYNAMICMODULE_OFFSET UNITYSDK_OFFSET(0x17999800)
#define SYSTEM_REFLECTION_EMIT_ASSEMBLYBUILDER_SETCUSTOMATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x17999850)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int AssemblyBuilder_TypeDefinitionIndex = 637;

	class AssemblyBuilder : public ::System::Reflection::Assembly
	{
	public:
		static ::System::Reflection::Emit::AssemblyBuilder* DefineDynamicAssembly(::System::Reflection::AssemblyName* name, ::System::Reflection::Emit::AssemblyBuilderAccess access)
		{
			return ((::System::Reflection::Emit::AssemblyBuilder*(*)(::System::Reflection::AssemblyName*, ::System::Reflection::Emit::AssemblyBuilderAccess))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ASSEMBLYBUILDER_DEFINEDYNAMICASSEMBLY_OFFSET))(name, access);
		}

		::System::Reflection::Emit::ModuleBuilder* DefineDynamicModule(::System::String* name)
		{
			return ((::System::Reflection::Emit::ModuleBuilder*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ASSEMBLYBUILDER_DEFINEDYNAMICMODULE_OFFSET))(this, name);
		}

		::System::Void SetCustomAttribute(::System::Reflection::Emit::CustomAttributeBuilder* customBuilder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::CustomAttributeBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_ASSEMBLYBUILDER_SETCUSTOMATTRIBUTE_OFFSET))(this, customBuilder);
		}
	};
}
