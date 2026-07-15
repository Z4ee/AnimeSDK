#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/GUILayoutEntry.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace UnityEngine { class GUIContent; }
namespace UnityEngine { class GUILayoutOption; }
namespace UnityEngine { class GUIStyle; }

#define UNITYENGINE_GUIGRIDSIZER_GETRECT_OFFSET UNITYSDK_OFFSET(0x1AEC2920)
#define UNITYENGINE_GUIGRIDSIZER_GET_ROWS_OFFSET UNITYSDK_OFFSET(0x1AEC3C40)
#define UNITYENGINE_GUIGRIDSIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEC2B20)

namespace UnityEngine
{
	inline static constexpr unsigned int GUIGridSizer_TypeDefinitionIndex = 5238;

	class GUIGridSizer : public ::UnityEngine::GUILayoutEntry
	{
	public:
		::System::Int32 m_Count; // 0x48
		::System::Int32 m_XCount; // 0x4C
		::System::Single m_MinButtonWidth; // 0x50
		::System::Single m_MaxButtonWidth; // 0x54
		::System::Single m_MinButtonHeight; // 0x58
		::System::Single m_MaxButtonHeight; // 0x5C

		::System::Void _ctor(::Il2CppArray<::UnityEngine::GUIContent*>* a1, ::System::Int32 a2, ::UnityEngine::GUIStyle* a3, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::GUIContent*>*, ::System::Int32, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIGRIDSIZER__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::UnityEngine::Rect GetRect(::Il2CppArray<::UnityEngine::GUIContent*>* a1, ::System::Int32 a2, ::UnityEngine::GUIStyle* a3, ::Il2CppArray<::UnityEngine::GUILayoutOption*>* a4)
		{
			return ((::UnityEngine::Rect(*)(::Il2CppArray<::UnityEngine::GUIContent*>*, ::System::Int32, ::UnityEngine::GUIStyle*, ::Il2CppArray<::UnityEngine::GUILayoutOption*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIGRIDSIZER_GETRECT_OFFSET))(a1, a2, a3, a4);
		}

		::System::Int32 get_rows()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUIGRIDSIZER_GET_ROWS_OFFSET))(this);
		}
	};
}
