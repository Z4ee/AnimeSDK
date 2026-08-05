#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define UNITYENGINE_GUISETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E42DB50)

namespace UnityEngine
{
	inline static constexpr unsigned int GUISettings_TypeDefinitionIndex = 6418;

	class GUISettings : public ::System::Object
	{
	public:
		::System::Boolean m_DoubleClickSelectsWord; // 0x10
		::System::Boolean m_TripleClickSelectsLine; // 0x11
		::UnityEngine::Color m_CursorColor; // 0x14
		::System::Single m_CursorFlashSpeed; // 0x24
		::UnityEngine::Color m_SelectionColor; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISETTINGS__CTOR_OFFSET))(this);
		}
	};
}
