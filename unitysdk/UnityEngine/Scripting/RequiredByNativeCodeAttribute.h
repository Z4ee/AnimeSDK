#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define UNITYENGINE_SCRIPTING_REQUIREDBYNATIVECODEATTRIBUTE_SET_GENERATEPROXY_OFFSET UNITYSDK_OFFSET(0x1B3408A0)
#define UNITYENGINE_SCRIPTING_REQUIREDBYNATIVECODEATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1B340880)
#define UNITYENGINE_SCRIPTING_REQUIREDBYNATIVECODEATTRIBUTE_SET_OPTIONAL_OFFSET UNITYSDK_OFFSET(0x1B340890)
#define UNITYENGINE_SCRIPTING_REQUIREDBYNATIVECODEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B340870)
#define UNITYENGINE_SCRIPTING_REQUIREDBYNATIVECODEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B340860)

namespace UnityEngine::Scripting
{
	inline static constexpr unsigned int RequiredByNativeCodeAttribute_TypeDefinitionIndex = 3726;

	class RequiredByNativeCodeAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Boolean _GenerateProxy_k__BackingField; // 0x18
		::System::Boolean _Optional_k__BackingField; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_REQUIREDBYNATIVECODEATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_REQUIREDBYNATIVECODEATTRIBUTE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_REQUIREDBYNATIVECODEATTRIBUTE_SET_NAME_OFFSET))(this, a1);
		}

		::System::Void set_Optional(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_REQUIREDBYNATIVECODEATTRIBUTE_SET_OPTIONAL_OFFSET))(this, a1);
		}

		::System::Void set_GenerateProxy(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_REQUIREDBYNATIVECODEATTRIBUTE_SET_GENERATEPROXY_OFFSET))(this, a1);
		}
	};
}
