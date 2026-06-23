#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/GUILayoutOption_Type.h"

#define UNITYENGINE_GUILAYOUTOPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0EF0C0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUILayoutOption_TypeDefinitionIndex = 6410;

	class GUILayoutOption : public ::System::Object
	{
	public:
		::UnityEngine::GUILayoutOption_Type type; // 0x10
		::System::Object* value; // 0x18

		::System::Void _ctor(::UnityEngine::GUILayoutOption_Type type, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUILayoutOption_Type, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTOPTION__CTOR_OFFSET))(this, type, value);
		}
	};
}
