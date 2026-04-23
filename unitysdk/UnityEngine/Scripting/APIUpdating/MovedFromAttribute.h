#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UnityEngine/Scripting/APIUpdating/MovedFromAttributeData.h"

namespace System { class String; }

#define UNITYENGINE_SCRIPTING_APIUPDATING_MOVEDFROMATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A484EA0)
#define UNITYENGINE_SCRIPTING_APIUPDATING_MOVEDFROMATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A484E40)

namespace UnityEngine::Scripting::APIUpdating
{
	inline static constexpr unsigned int MovedFromAttribute_TypeDefinitionIndex = 4314;

	class MovedFromAttribute : public ::System::Attribute
	{
	public:
		::UnityEngine::Scripting::APIUpdating::MovedFromAttributeData data; // 0x10

		::System::Void _ctor(::System::Boolean autoUpdateAPI, ::System::String* sourceNamespace, ::System::String* sourceAssembly, ::System::String* sourceClassName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_APIUPDATING_MOVEDFROMATTRIBUTE__CTOR_OFFSET))(this, autoUpdateAPI, sourceNamespace, sourceAssembly, sourceClassName);
		}

		::System::Void _ctor_1(::System::String* sourceNamespace)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTING_APIUPDATING_MOVEDFROMATTRIBUTE__CTOR_1_OFFSET))(this, sourceNamespace);
		}
	};
}
