#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/TypeInfo.h"

namespace System { class Type; }

#define SYSTEM_REFLECTION_EMIT_TYPEBUILDERINSTANTIATION_MAKEGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x163735A0)

namespace System::Reflection::Emit
{
	inline static constexpr unsigned int TypeBuilderInstantiation_TypeDefinitionIndex = 658;

	class TypeBuilderInstantiation : public ::System::Reflection::TypeInfo
	{
	public:
		static ::System::Type* MakeGenericType(::System::Type* type, ::Il2CppArray<::System::Type*>* typeArguments)
		{
			return ((::System::Type*(*)(::System::Type*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_EMIT_TYPEBUILDERINSTANTIATION_MAKEGENERICTYPE_OFFSET))(type, typeArguments);
		}
	};
}
