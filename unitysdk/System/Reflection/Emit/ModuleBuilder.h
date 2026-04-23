#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/Module.h"
#include "unitysdk/System/Reflection/TypeAttributes.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection::Emit { class TypeBuilder; }

#define SYSTEM_REFLECTION_EMIT_MODULEBUILDER_DEFINETYPE_1_OFFSET UNITYSDK_OFFSET(0x1799C0C0)
#define SYSTEM_REFLECTION_EMIT_MODULEBUILDER_DEFINETYPE_OFFSET UNITYSDK_OFFSET(0x1799C070)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int ModuleBuilder_TypeDefinitionIndex = 649;

	class ModuleBuilder : public ::System::Reflection::Module
	{
	public:
		::System::Reflection::Emit::TypeBuilder* DefineType(::System::String* name, ::System::Reflection::TypeAttributes attr, ::System::Type* parent)
		{
			return ((::System::Reflection::Emit::TypeBuilder*(*)(::PVOID, ::System::String*, ::System::Reflection::TypeAttributes, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_MODULEBUILDER_DEFINETYPE_OFFSET))(this, name, attr, parent);
		}

		::System::Reflection::Emit::TypeBuilder* DefineType_1(::System::String* name, ::System::Reflection::TypeAttributes attr, ::System::Type* parent, ::Il2CppArray<::System::Type*>* interfaces)
		{
			return ((::System::Reflection::Emit::TypeBuilder*(*)(::PVOID, ::System::String*, ::System::Reflection::TypeAttributes, ::System::Type*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_MODULEBUILDER_DEFINETYPE_1_OFFSET))(this, name, attr, parent, interfaces);
		}
	};
}
