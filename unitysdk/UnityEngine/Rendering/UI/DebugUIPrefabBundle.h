#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define UNITYENGINE_RENDERING_UI_DEBUGUIPREFABBUNDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3358B0)

namespace UnityEngine::Rendering::UI
{
	inline static constexpr unsigned int DebugUIPrefabBundle_TypeDefinitionIndex = 33585;

	class DebugUIPrefabBundle : public ::System::Object
	{
	public:
		::System::String* type; // 0x10
		::UnityEngine::RectTransform* prefab; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UI_DEBUGUIPREFABBUNDLE__CTOR_OFFSET))(this);
		}
	};
}
