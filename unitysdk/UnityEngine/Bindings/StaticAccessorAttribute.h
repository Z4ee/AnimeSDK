#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Bindings/StaticAccessorType.h"

namespace System { class String; }

#define UNITYENGINE_BINDINGS_STATICACCESSORATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1EDD3F80)
#define UNITYENGINE_BINDINGS_STATICACCESSORATTRIBUTE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1EDD3F90)
#define UNITYENGINE_BINDINGS_STATICACCESSORATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EDD3FB0)
#define UNITYENGINE_BINDINGS_STATICACCESSORATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDD3FA0)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int StaticAccessorAttribute_TypeDefinitionIndex = 3734;

	class StaticAccessorAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::UnityEngine::Bindings::StaticAccessorType _Type_k__BackingField; // 0x18

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_STATICACCESSORATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::UnityEngine::Bindings::StaticAccessorType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Bindings::StaticAccessorType))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_STATICACCESSORATTRIBUTE__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_STATICACCESSORATTRIBUTE_SET_NAME_OFFSET))(this, a1);
		}

		::System::Void set_Type(::UnityEngine::Bindings::StaticAccessorType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bindings::StaticAccessorType))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_STATICACCESSORATTRIBUTE_SET_TYPE_OFFSET))(this, a1);
		}
	};
}
