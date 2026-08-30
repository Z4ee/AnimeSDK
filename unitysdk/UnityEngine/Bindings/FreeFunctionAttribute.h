#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bindings/NativeMethodAttribute.h"

namespace System { class String; }

#define UNITYENGINE_BINDINGS_FREEFUNCTIONATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EDD39F0)
#define UNITYENGINE_BINDINGS_FREEFUNCTIONATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1EDD3A30)
#define UNITYENGINE_BINDINGS_FREEFUNCTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDD39D0)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int FreeFunctionAttribute_TypeDefinitionIndex = 3731;

	class FreeFunctionAttribute : public ::UnityEngine::Bindings::NativeMethodAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_FREEFUNCTIONATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_FREEFUNCTIONATTRIBUTE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_FREEFUNCTIONATTRIBUTE__CTOR_2_OFFSET))(this, a1, a2);
		}
	};
}
