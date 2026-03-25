#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Bindings/StaticAccessorType.h"

namespace System { class String; }

#define UNITYENGINE_BINDINGS_STATICACCESSORATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x18AB7E60)
#define UNITYENGINE_BINDINGS_STATICACCESSORATTRIBUTE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x18AB7E70)
#define UNITYENGINE_BINDINGS_STATICACCESSORATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18AB7E90)
#define UNITYENGINE_BINDINGS_STATICACCESSORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18AB7E80)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int StaticAccessorAttribute_TypeDefinitionIndex = 3713;

	class StaticAccessorAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::UnityEngine::Bindings::StaticAccessorType _Type_k__BackingField; // 0x18

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_STATICACCESSORATTRIBUTE__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1(::System::String* name, ::UnityEngine::Bindings::StaticAccessorType type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Bindings::StaticAccessorType))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_STATICACCESSORATTRIBUTE__CTOR_1_OFFSET))(this, name, type);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_STATICACCESSORATTRIBUTE_SET_NAME_OFFSET))(this, value);
		}

		::System::Void set_Type(::UnityEngine::Bindings::StaticAccessorType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bindings::StaticAccessorType))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_STATICACCESSORATTRIBUTE_SET_TYPE_OFFSET))(this, value);
		}
	};
}
