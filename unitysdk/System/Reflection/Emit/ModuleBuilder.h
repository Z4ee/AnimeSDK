#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/Module.h"
#include "unitysdk/System/Reflection/TypeAttributes.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection::Emit { class TypeBuilder; }

#define SYSTEM_REFLECTION_EMIT_MODULEBUILDER_DEFINETYPE_1_OFFSET UNITYSDK_OFFSET(0x1AFCB7E0)
#define SYSTEM_REFLECTION_EMIT_MODULEBUILDER_DEFINETYPE_OFFSET UNITYSDK_OFFSET(0x1AFCB790)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int ModuleBuilder_TypeDefinitionIndex = 648;

	class ModuleBuilder : public ::System::Reflection::Module
	{
	public:
		::System::Reflection::Emit::TypeBuilder* DefineType(::System::String* a1, ::System::Reflection::TypeAttributes a2, ::System::Type* a3)
		{
			return ((::System::Reflection::Emit::TypeBuilder*(*)(::PVOID, ::System::String*, ::System::Reflection::TypeAttributes, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_MODULEBUILDER_DEFINETYPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Reflection::Emit::TypeBuilder* DefineType_1(::System::String* a1, ::System::Reflection::TypeAttributes a2, ::System::Type* a3, ::Il2CppArray<::System::Type*>* a4)
		{
			return ((::System::Reflection::Emit::TypeBuilder*(*)(::PVOID, ::System::String*, ::System::Reflection::TypeAttributes, ::System::Type*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_MODULEBUILDER_DEFINETYPE_1_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
