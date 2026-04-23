#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bindings/NativeMethodAttribute.h"

namespace System { class String; }

#define UNITYENGINE_BINDINGS_FREEFUNCTIONATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A4F3350)
#define UNITYENGINE_BINDINGS_FREEFUNCTIONATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A4F3390)
#define UNITYENGINE_BINDINGS_FREEFUNCTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F3330)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int FreeFunctionAttribute_TypeDefinitionIndex = 3712;

	class FreeFunctionAttribute : public ::UnityEngine::Bindings::NativeMethodAttribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_FREEFUNCTIONATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_FREEFUNCTIONATTRIBUTE__CTOR_1_OFFSET))(this, name);
		}

		::System::Void _ctor_2(::System::String* name, ::System::Boolean isThreadSafe)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_FREEFUNCTIONATTRIBUTE__CTOR_2_OFFSET))(this, name, isThreadSafe);
		}
	};
}
