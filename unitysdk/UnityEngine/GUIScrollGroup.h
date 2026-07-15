#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/GUILayoutGroup.h"

namespace UnityEngine { class GUIStyle; }

#define UNITYENGINE_GUISCROLLGROUP_CALCHEIGHT_OFFSET UNITYSDK_OFFSET(0x1AECD6E0)
#define UNITYENGINE_GUISCROLLGROUP_CALCWIDTH_OFFSET UNITYSDK_OFFSET(0x1AECD4E0)
#define UNITYENGINE_GUISCROLLGROUP_SETHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1AECD580)
#define UNITYENGINE_GUISCROLLGROUP_SETVERTICAL_OFFSET UNITYSDK_OFFSET(0x1AECD830)
#define UNITYENGINE_GUISCROLLGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1AECD4A0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIScrollGroup_TypeDefinitionIndex = 5241;

	class GUIScrollGroup : public ::UnityEngine::GUILayoutGroup
	{
	public:
		::System::Single calcMinWidth; // 0x90
		::System::Single calcMaxWidth; // 0x94
		::System::Single calcMinHeight; // 0x98
		::System::Single calcMaxHeight; // 0x9C
		::System::Single clientWidth; // 0xA0
		::System::Single clientHeight; // 0xA4
		::System::Boolean allowHorizontalScroll; // 0xA8
		::System::Boolean allowVerticalScroll; // 0xA9
		::System::Boolean needsHorizontalScrollbar; // 0xAA
		::System::Boolean needsVerticalScrollbar; // 0xAB
		::UnityEngine::GUIStyle* horizontalScrollbar; // 0xB0
		::UnityEngine::GUIStyle* verticalScrollbar; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISCROLLGROUP__CTOR_OFFSET))(this);
		}

		::System::Void CalcWidth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISCROLLGROUP_CALCWIDTH_OFFSET))(this);
		}

		::System::Void SetHorizontal(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISCROLLGROUP_SETHORIZONTAL_OFFSET))(this, a1, a2);
		}

		::System::Void CalcHeight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISCROLLGROUP_CALCHEIGHT_OFFSET))(this);
		}

		::System::Void SetVertical(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISCROLLGROUP_SETVERTICAL_OFFSET))(this, a1, a2);
		}
	};
}
