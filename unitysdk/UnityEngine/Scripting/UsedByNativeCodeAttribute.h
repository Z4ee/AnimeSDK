#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_SCRIPTING_USEDBYNATIVECODEATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1FC6EE10)
#define UNITYENGINE_SCRIPTING_USEDBYNATIVECODEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC6EE00)
#define UNITYENGINE_SCRIPTING_USEDBYNATIVECODEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6EDF0)

namespace UnityEngine::Scripting
{
	inline static constexpr unsigned int UsedByNativeCodeAttribute_TypeDefinitionIndex = 5039;

	class UsedByNativeCodeAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_USEDBYNATIVECODEATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_USEDBYNATIVECODEATTRIBUTE__CTOR_1_OFFSET))(this, name);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_USEDBYNATIVECODEATTRIBUTE_SET_NAME_OFFSET))(this, value);
		}
	};
}
