#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/GUILayoutEntry.h"

namespace UnityEngine { class GUIContent; }
namespace UnityEngine { class GUILayoutOption; }
namespace UnityEngine { class GUIStyle; }

#define UNITYENGINE_GUIWORDWRAPSIZER_CALCHEIGHT_OFFSET UNITYSDK_OFFSET(0x1CAD9630)
#define UNITYENGINE_GUIWORDWRAPSIZER_CALCWIDTH_OFFSET UNITYSDK_OFFSET(0x1CAD9580)
#define UNITYENGINE_GUIWORDWRAPSIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAD38D0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIWordWrapSizer_TypeDefinitionIndex = 5184;

	class GUIWordWrapSizer : public ::UnityEngine::GUILayoutEntry
	{
	public:
		::UnityEngine::GUIContent* m_Content; // 0x48
		::System::Single m_ForcedMinHeight; // 0x50
		::System::Single m_ForcedMaxHeight; // 0x54

		::System::Void _ctor(::UnityEngine::GUIStyle* a1, ::UnityEngine::GUIContent* a2, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GUIStyle*, ::UnityEngine::GUIContent*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIWORDWRAPSIZER__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CalcWidth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIWORDWRAPSIZER_CALCWIDTH_OFFSET))(this);
		}

		::System::Void CalcHeight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIWORDWRAPSIZER_CALCHEIGHT_OFFSET))(this);
		}
	};
}
