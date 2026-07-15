#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Reflection { class TypeInfo; }

#define SYSTEM_REFLECTION_INTROSPECTIONEXTENSIONS_GETTYPEINFO_OFFSET UNITYSDK_OFFSET(0x1AFD0020)

namespace System::Reflection
{
	inline static constexpr unsigned int IntrospectionExtensions_TypeDefinitionIndex = 562;

	class IntrospectionExtensions : public ::System::Object
	{
	public:
		static ::System::Reflection::TypeInfo* GetTypeInfo(::System::Type* a1)
		{
			return ((::System::Reflection::TypeInfo*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_INTROSPECTIONEXTENSIONS_GETTYPEINFO_OFFSET))(a1);
		}
	};
}
