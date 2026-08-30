#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/PropertyName.h"

namespace System { class String; }

#define UNITYENGINE_PROPERTYNAMEUTILS_PROPERTYNAMEFROMSTRING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED47700)
#define UNITYENGINE_PROPERTYNAMEUTILS_PROPERTYNAMEFROMSTRING_OFFSET UNITYSDK_OFFSET(0x1ED47590)

namespace UnityEngine
{
	inline static constexpr unsigned int PropertyNameUtils_TypeDefinitionIndex = 4245;

	class PropertyNameUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::PropertyName PropertyNameFromString(::System::String* a1)
		{
			return ((::UnityEngine::PropertyName(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAMEUTILS_PROPERTYNAMEFROMSTRING_OFFSET))(a1);
		}

		static ::System::Void PropertyNameFromString_Injected(::System::String* a1, ::UnityEngine::PropertyName& a2)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::PropertyName&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROPERTYNAMEUTILS_PROPERTYNAMEFROMSTRING_INJECTED_OFFSET))(a1, a2);
		}
	};
}
