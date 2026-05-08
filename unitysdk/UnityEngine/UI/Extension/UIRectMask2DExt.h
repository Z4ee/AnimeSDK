#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

#define UNITYENGINE_UI_EXTENSION_UIRECTMASK2DEXT_DOADD_OFFSET UNITYSDK_OFFSET(0x1AE4F050)
#define UNITYENGINE_UI_EXTENSION_UIRECTMASK2DEXT_EXAMINE_OFFSET UNITYSDK_OFFSET(0x1AE4F510)
#define UNITYENGINE_UI_EXTENSION_UIRECTMASK2DEXT_GET_SOFTNESSFORLINE_OFFSET UNITYSDK_OFFSET(0x1AE4EFE0)
#define UNITYENGINE_UI_EXTENSION_UIRECTMASK2DEXT_SET_SOFTNESSFORLINE_OFFSET UNITYSDK_OFFSET(0x1AE4EFF0)
#define UNITYENGINE_UI_EXTENSION_UIRECTMASK2DEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE4F980)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIRectMask2DExt_TypeDefinitionIndex = 50263;

	class UIRectMask2DExt : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector2Int m_SoftnessForLine; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIRECTMASK2DEXT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2Int get_SoftnessForLine()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIRECTMASK2DEXT_GET_SOFTNESSFORLINE_OFFSET))(this);
		}

		::System::Void set_SoftnessForLine(::UnityEngine::Vector2Int value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIRECTMASK2DEXT_SET_SOFTNESSFORLINE_OFFSET))(this, value);
		}

		::System::Void DoAdd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIRECTMASK2DEXT_DOADD_OFFSET))(this);
		}

		::System::Boolean Examine()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIRECTMASK2DEXT_EXAMINE_OFFSET))(this);
		}
	};
}
