#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bindings/NativeMethodAttribute.h"
#include "unitysdk/UnityEngine/Bindings/TargetType.h"

namespace System { class String; }

#define UNITYENGINE_BINDINGS_NATIVEPROPERTYATTRIBUTE_SET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1A4F3700)
#define UNITYENGINE_BINDINGS_NATIVEPROPERTYATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A4F3720)
#define UNITYENGINE_BINDINGS_NATIVEPROPERTYATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A4F3730)
#define UNITYENGINE_BINDINGS_NATIVEPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F3710)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int NativePropertyAttribute_TypeDefinitionIndex = 3706;

	class NativePropertyAttribute : public ::UnityEngine::Bindings::NativeMethodAttribute
	{
	public:
		::UnityEngine::Bindings::TargetType _TargetType_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEPROPERTYATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEPROPERTYATTRIBUTE__CTOR_1_OFFSET))(this, name);
		}

		::System::Void _ctor_2(::System::String* name, ::System::Boolean isFree, ::UnityEngine::Bindings::TargetType targetType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::UnityEngine::Bindings::TargetType))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEPROPERTYATTRIBUTE__CTOR_2_OFFSET))(this, name, isFree, targetType);
		}

		::System::Void set_TargetType(::UnityEngine::Bindings::TargetType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bindings::TargetType))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEPROPERTYATTRIBUTE_SET_TARGETTYPE_OFFSET))(this, value);
		}
	};
}
