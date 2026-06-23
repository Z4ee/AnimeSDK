#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GUILayoutGroup; }
namespace UnityEngineInternal { class GenericStack; }

#define UNITYENGINE_GUILAYOUTUTILITY_LAYOUTCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F3D90)

namespace UnityEngine
{
	inline static constexpr unsigned int GUILayoutUtility_LayoutCache_TypeDefinitionIndex = 6413;

	class GUILayoutUtility_LayoutCache : public ::System::Object
	{
	public:
		::UnityEngine::GUILayoutGroup* topLevel; // 0x10
		::UnityEngineInternal::GenericStack* layoutGroups; // 0x18
		::UnityEngine::GUILayoutGroup* windows; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUILAYOUTUTILITY_LAYOUTCACHE__CTOR_OFFSET))(this);
		}
	};
}
