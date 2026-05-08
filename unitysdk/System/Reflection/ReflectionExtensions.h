#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class TypeInfo; }

#define SYSTEM_REFLECTION_REFLECTIONEXTENSIONS_ISCONSTRUCTEDGENERICTYPE_OFFSET UNITYSDK_OFFSET(0x1BDD29F0)

namespace System::Reflection
{
	inline static constexpr unsigned int ReflectionExtensions_TypeDefinitionIndex = 85490;

	class ReflectionExtensions : public ::System::Object
	{
	public:
		static ::System::Boolean IsConstructedGenericType(::System::Reflection::TypeInfo* type)
		{
			return ((::System::Boolean(*)(::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_REFLECTIONEXTENSIONS_ISCONSTRUCTEDGENERICTYPE_OFFSET))(type);
		}
	};
}
