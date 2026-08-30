#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_BINDINGS_NATIVECONDITIONALATTRIBUTE_SET_CONDITION_OFFSET UNITYSDK_OFFSET(0x1F00F320)
#define UNITYENGINE_BINDINGS_NATIVECONDITIONALATTRIBUTE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1F00F330)
#define UNITYENGINE_BINDINGS_NATIVECONDITIONALATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F00F340)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int NativeConditionalAttribute_TypeDefinitionIndex = 3719;

	class NativeConditionalAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Condition_k__BackingField; // 0x10
		::System::Boolean _Enabled_k__BackingField; // 0x18

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVECONDITIONALATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::Void set_Condition(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVECONDITIONALATTRIBUTE_SET_CONDITION_OFFSET))(this, a1);
		}

		::System::Void set_Enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVECONDITIONALATTRIBUTE_SET_ENABLED_OFFSET))(this, a1);
		}
	};
}
