#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_INTERNAL_DEFAULTVALUEATTRIBUTE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A44B710)
#define UNITYENGINE_INTERNAL_DEFAULTVALUEATTRIBUTE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A44B7B0)
#define UNITYENGINE_INTERNAL_DEFAULTVALUEATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A44B700)
#define UNITYENGINE_INTERNAL_DEFAULTVALUEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A44B6F0)

namespace UnityEngine::Internal
{
	inline static constexpr unsigned int DefaultValueAttribute_TypeDefinitionIndex = 4492;

	class DefaultValueAttribute : public ::System::Attribute
	{
	public:
		::System::Object* DefaultValue; // 0x10

		::System::Void _ctor(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_DEFAULTVALUEATTRIBUTE__CTOR_OFFSET))(this, value);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_DEFAULTVALUEATTRIBUTE_GET_VALUE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_DEFAULTVALUEATTRIBUTE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INTERNAL_DEFAULTVALUEATTRIBUTE_GETHASHCODE_OFFSET))(this);
		}
	};
}
