#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define UNITYENGINE_GUISETTINGS_GET_CURSORCOLOR_OFFSET UNITYSDK_OFFSET(0x1ED95370)
#define UNITYENGINE_GUISETTINGS_GET_CURSORFLASHSPEED_OFFSET UNITYSDK_OFFSET(0x1ED95380)
#define UNITYENGINE_GUISETTINGS_GET_DOUBLECLICKSELECTSWORD_OFFSET UNITYSDK_OFFSET(0x1ED827A0)
#define UNITYENGINE_GUISETTINGS_GET_SELECTIONCOLOR_OFFSET UNITYSDK_OFFSET(0x1ED953A0)
#define UNITYENGINE_GUISETTINGS_GET_TRIPLECLICKSELECTSLINE_OFFSET UNITYSDK_OFFSET(0x1ED829E0)
#define UNITYENGINE_GUISETTINGS_INTERNAL_GETCURSORFLASHSPEED_OFFSET UNITYSDK_OFFSET(0x1ED95360)
#define UNITYENGINE_GUISETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED953B0)

namespace UnityEngine
{
	inline static constexpr unsigned int GUISettings_TypeDefinitionIndex = 5171;

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

		static ::System::Single Internal_GetCursorFlashSpeed()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_GUISETTINGS_INTERNAL_GETCURSORFLASHSPEED_OFFSET))();
		}

		::System::Boolean get_doubleClickSelectsWord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISETTINGS_GET_DOUBLECLICKSELECTSWORD_OFFSET))(this);
		}

		::System::Boolean get_tripleClickSelectsLine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISETTINGS_GET_TRIPLECLICKSELECTSLINE_OFFSET))(this);
		}

		::UnityEngine::Color get_cursorColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISETTINGS_GET_CURSORCOLOR_OFFSET))(this);
		}

		::System::Single get_cursorFlashSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISETTINGS_GET_CURSORFLASHSPEED_OFFSET))(this);
		}

		::UnityEngine::Color get_selectionColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GUISETTINGS_GET_SELECTIONCOLOR_OFFSET))(this);
		}
	};
}
