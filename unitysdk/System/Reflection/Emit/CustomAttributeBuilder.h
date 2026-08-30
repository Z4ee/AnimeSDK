#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class PropertyInfo; }

#define SYSTEM_REFLECTION_EMIT_CUSTOMATTRIBUTEBUILDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BD90660)
#define SYSTEM_REFLECTION_EMIT_CUSTOMATTRIBUTEBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD90610)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int CustomAttributeBuilder_TypeDefinitionIndex = 642;

	class CustomAttributeBuilder : public ::System::Object
	{
	public:
		::System::Void _ctor(::System::Reflection::ConstructorInfo* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ConstructorInfo*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CUSTOMATTRIBUTEBUILDER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::Reflection::ConstructorInfo* a1, ::Il2CppArray<::System::Object*>* a2, ::Il2CppArray<::System::Reflection::PropertyInfo*>* a3, ::Il2CppArray<::System::Object*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ConstructorInfo*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Reflection::PropertyInfo*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CUSTOMATTRIBUTEBUILDER__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
