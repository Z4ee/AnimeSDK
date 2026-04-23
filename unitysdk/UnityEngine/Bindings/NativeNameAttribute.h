#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_BINDINGS_NATIVENAMEATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1A4F3620)
#define UNITYENGINE_BINDINGS_NATIVENAMEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F3630)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int NativeNameAttribute_TypeDefinitionIndex = 3702;

	class NativeNameAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVENAMEATTRIBUTE__CTOR_OFFSET))(this, name);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NATIVENAMEATTRIBUTE_SET_NAME_OFFSET))(this, value);
		}
	};
}
