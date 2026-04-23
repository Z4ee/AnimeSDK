#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x22AB4A0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22AB530)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22AB490)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x22AB480)

namespace System::Reflection
{
	inline static constexpr unsigned int CustomAttributeTypedArgument_TypeDefinitionIndex = 601;

	struct alignas(8) CustomAttributeTypedArgument
	{
		::System::Type* argumentType; // 0x10
		::System::Object* value; // 0x18

		::System::Void _ctor(::System::Type* argumentType, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT__CTOR_OFFSET))(this, argumentType, value);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_GET_VALUE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTETYPEDARGUMENT_GETHASHCODE_OFFSET))(this);
		}
	};
}
