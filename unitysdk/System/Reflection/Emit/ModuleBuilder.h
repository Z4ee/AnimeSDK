#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/Module.h"
#include "unitysdk/System/Reflection/TypeAttributes.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection::Emit { class TypeBuilder; }

#define SYSTEM_REFLECTION_EMIT_MODULEBUILDER_DEFINETYPE_1_OFFSET UNITYSDK_OFFSET(0x1C1A9A30)
#define SYSTEM_REFLECTION_EMIT_MODULEBUILDER_DEFINETYPE_2_OFFSET UNITYSDK_OFFSET(0x1C1A9A80)
#define SYSTEM_REFLECTION_EMIT_MODULEBUILDER_DEFINETYPE_OFFSET UNITYSDK_OFFSET(0x1C1A99E0)
#define SYSTEM_REFLECTION_EMIT_MODULEBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1A9AD0)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int ModuleBuilder_TypeDefinitionIndex = 620;

	class ModuleBuilder : public ::System::Reflection::Module
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_MODULEBUILDER__CTOR_OFFSET))(this);
		}

		::System::Reflection::Emit::TypeBuilder* DefineType(::System::String* name, ::System::Reflection::TypeAttributes attr)
		{
			return ((::System::Reflection::Emit::TypeBuilder*(*)(::PVOID, ::System::String*, ::System::Reflection::TypeAttributes))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_MODULEBUILDER_DEFINETYPE_OFFSET))(this, name, attr);
		}

		::System::Reflection::Emit::TypeBuilder* DefineType_1(::System::String* name, ::System::Reflection::TypeAttributes attr, ::System::Type* parent)
		{
			return ((::System::Reflection::Emit::TypeBuilder*(*)(::PVOID, ::System::String*, ::System::Reflection::TypeAttributes, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_MODULEBUILDER_DEFINETYPE_1_OFFSET))(this, name, attr, parent);
		}

		::System::Reflection::Emit::TypeBuilder* DefineType_2(::System::String* name, ::System::Reflection::TypeAttributes attr, ::System::Type* parent, ::Il2CppArray<::System::Type*>* interfaces)
		{
			return ((::System::Reflection::Emit::TypeBuilder*(*)(::PVOID, ::System::String*, ::System::Reflection::TypeAttributes, ::System::Type*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_MODULEBUILDER_DEFINETYPE_2_OFFSET))(this, name, attr, parent, interfaces);
		}
	};
}
