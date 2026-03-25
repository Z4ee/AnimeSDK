#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/PropertyName.h"

namespace System { class String; }

#define UNITYENGINE_PROPERTYNAMEUTILS_PROPERTYNAMEFROMSTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A2EF70)
#define UNITYENGINE_PROPERTYNAMEUTILS_PROPERTYNAMEFROMSTRING_OFFSET UNITYSDK_OFFSET(0x18A2EE00)

namespace UnityEngine
{
	inline static constexpr unsigned int PropertyNameUtils_TypeDefinitionIndex = 4054;

	class PropertyNameUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::PropertyName PropertyNameFromString(::System::String* name)
		{
			return ((::UnityEngine::PropertyName(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAMEUTILS_PROPERTYNAMEFROMSTRING_OFFSET))(name);
		}

		static ::System::Void PropertyNameFromString_Injected(::System::String* name, ::UnityEngine::PropertyName& ret)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::PropertyName&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAMEUTILS_PROPERTYNAMEFROMSTRING_INJECTED_OFFSET))(name, ret);
		}
	};
}
