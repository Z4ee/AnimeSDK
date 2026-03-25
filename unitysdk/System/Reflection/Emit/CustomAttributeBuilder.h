#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class ConstructorInfo; }
namespace System::Reflection { class PropertyInfo; }

#define SYSTEM_REFLECTION_EMIT_CUSTOMATTRIBUTEBUILDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1636D100)
#define SYSTEM_REFLECTION_EMIT_CUSTOMATTRIBUTEBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1636D0B0)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int CustomAttributeBuilder_TypeDefinitionIndex = 640;

	class CustomAttributeBuilder : public ::System::Object
	{
	public:
		::System::Void _ctor(::System::Reflection::ConstructorInfo* con, ::Il2CppArray<::System::Object*>* constructorArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ConstructorInfo*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CUSTOMATTRIBUTEBUILDER__CTOR_OFFSET))(this, con, constructorArgs);
		}

		::System::Void _ctor_1(::System::Reflection::ConstructorInfo* con, ::Il2CppArray<::System::Object*>* constructorArgs, ::Il2CppArray<::System::Reflection::PropertyInfo*>* namedProperties, ::Il2CppArray<::System::Object*>* propertyValues)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::ConstructorInfo*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Reflection::PropertyInfo*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_CUSTOMATTRIBUTEBUILDER__CTOR_1_OFFSET))(this, con, constructorArgs, namedProperties, propertyValues);
		}
	};
}
