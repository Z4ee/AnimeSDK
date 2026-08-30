#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_BINDINGS_NATIVENAMEATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1F00F530)
#define UNITYENGINE_BINDINGS_NATIVENAMEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F00F540)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int NativeNameAttribute_TypeDefinitionIndex = 3721;

	class NativeNameAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVENAMEATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVENAMEATTRIBUTE_SET_NAME_OFFSET))(this, a1);
		}
	};
}
