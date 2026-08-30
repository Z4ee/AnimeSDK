#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bindings/NativeMethodAttribute.h"
#include "unitysdk/UnityEngine/Bindings/TargetType.h"

namespace System { class String; }

#define UNITYENGINE_BINDINGS_NATIVEPROPERTYATTRIBUTE_SET_TARGETTYPE_OFFSET UNITYSDK_OFFSET(0x1F00F610)
#define UNITYENGINE_BINDINGS_NATIVEPROPERTYATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F00F630)
#define UNITYENGINE_BINDINGS_NATIVEPROPERTYATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F00F640)
#define UNITYENGINE_BINDINGS_NATIVEPROPERTYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F00F620)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int NativePropertyAttribute_TypeDefinitionIndex = 3725;

	class NativePropertyAttribute : public ::UnityEngine::Bindings::NativeMethodAttribute
	{
	public:
		::UnityEngine::Bindings::TargetType _TargetType_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEPROPERTYATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEPROPERTYATTRIBUTE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Boolean a2, ::UnityEngine::Bindings::TargetType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::UnityEngine::Bindings::TargetType))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEPROPERTYATTRIBUTE__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void set_TargetType(::UnityEngine::Bindings::TargetType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bindings::TargetType))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVEPROPERTYATTRIBUTE_SET_TARGETTYPE_OFFSET))(this, a1);
		}
	};
}
