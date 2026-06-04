#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_INTERNAL_DEFAULTVALUEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B29CA50)
#define UNITYENGINE_INTERNAL_DEFAULTVALUEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B29CAF0)
#define UNITYENGINE_INTERNAL_DEFAULTVALUEATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B29CA40)
#define UNITYENGINE_INTERNAL_DEFAULTVALUEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B29CA30)

namespace UnityEngine::Internal
{
	inline static constexpr unsigned int DefaultValueAttribute_TypeDefinitionIndex = 4666;

	class DefaultValueAttribute : public ::System::Attribute
	{
	public:
		::System::Object* DefaultValue; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_DEFAULTVALUEATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_DEFAULTVALUEATTRIBUTE_GET_VALUE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_DEFAULTVALUEATTRIBUTE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_DEFAULTVALUEATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}
	};
}
