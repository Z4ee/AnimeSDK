#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/CursorLockMode.h"
#include "unitysdk/UnityEngine/CursorMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_CURSOR_GET_LOCKSTATE_OFFSET UNITYSDK_OFFSET(0x189FC400)
#define UNITYENGINE_CURSOR_GET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x189FC3E0)
#define UNITYENGINE_CURSOR_SETCURSOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x189FC3D0)
#define UNITYENGINE_CURSOR_SETCURSOR_OFFSET UNITYSDK_OFFSET(0x189FC3B0)
#define UNITYENGINE_CURSOR_SET_LOCKSTATE_OFFSET UNITYSDK_OFFSET(0x189FC410)
#define UNITYENGINE_CURSOR_SET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x189FC3F0)

namespace UnityEngine
{
	inline static constexpr unsigned int Cursor_TypeDefinitionIndex = 4019;

	class Cursor : public ::System::Object
	{
	public:
		static ::System::Void SetCursor(::UnityEngine::Texture2D* texture, ::UnityEngine::Vector2 hotspot, ::UnityEngine::CursorMode cursorMode)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*, ::UnityEngine::Vector2, ::UnityEngine::CursorMode))((::PBYTE)hIl2Cpp + UNITYENGINE_CURSOR_SETCURSOR_OFFSET))(texture, hotspot, cursorMode);
		}

		static ::System::Boolean get_visible()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_CURSOR_GET_VISIBLE_OFFSET))();
		}

		static ::System::Void set_visible(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CURSOR_SET_VISIBLE_OFFSET))(value);
		}

		static ::UnityEngine::CursorLockMode get_lockState()
		{
			return ((::UnityEngine::CursorLockMode(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_CURSOR_GET_LOCKSTATE_OFFSET))();
		}

		static ::System::Void set_lockState(::UnityEngine::CursorLockMode value)
		{
			return ((::System::Void(*)(::UnityEngine::CursorLockMode))((::PBYTE)hIl2Cpp + UNITYENGINE_CURSOR_SET_LOCKSTATE_OFFSET))(value);
		}

		static ::System::Void SetCursor_Injected(::UnityEngine::Texture2D* texture, ::UnityEngine::Vector2& hotspot, ::UnityEngine::CursorMode cursorMode)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*, ::UnityEngine::Vector2&, ::UnityEngine::CursorMode))((::PBYTE)hIl2Cpp + UNITYENGINE_CURSOR_SETCURSOR_INJECTED_OFFSET))(texture, hotspot, cursorMode);
		}
	};
}
