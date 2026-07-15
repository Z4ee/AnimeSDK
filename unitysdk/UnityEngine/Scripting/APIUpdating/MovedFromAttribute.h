#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Scripting/APIUpdating/MovedFromAttributeData.h"

namespace System { class String; }

#define UNITYENGINE_SCRIPTING_APIUPDATING_MOVEDFROMATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BFAF900)
#define UNITYENGINE_SCRIPTING_APIUPDATING_MOVEDFROMATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFAF8A0)

namespace UnityEngine::Scripting::APIUpdating
{
	inline static constexpr unsigned int MovedFromAttribute_TypeDefinitionIndex = 4493;

	class MovedFromAttribute : public ::System::Attribute
	{
	public:
		::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData data; // 0x10

		::System::Void _ctor(::System::Boolean a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_APIUPDATING_MOVEDFROMATTRIBUTE__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_APIUPDATING_MOVEDFROMATTRIBUTE__CTOR_1_OFFSET))(this, a1);
		}
	};
}
