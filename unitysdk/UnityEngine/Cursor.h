#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/CursorLockMode.h"
#include "unitysdk/UnityEngine/CursorMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_CURSOR_GET_LOCKSTATE_OFFSET UNITYSDK_OFFSET(0x1B287920)
#define UNITYENGINE_CURSOR_GET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x1B287900)
#define UNITYENGINE_CURSOR_SETCURSOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2878F0)
#define UNITYENGINE_CURSOR_SETCURSOR_OFFSET UNITYSDK_OFFSET(0x1B2878D0)
#define UNITYENGINE_CURSOR_SET_LOCKSTATE_OFFSET UNITYSDK_OFFSET(0x1B287930)
#define UNITYENGINE_CURSOR_SET_VISIBLE_OFFSET UNITYSDK_OFFSET(0x1B287910)

namespace UnityEngine
{
	inline static constexpr unsigned int Cursor_TypeDefinitionIndex = 4195;

	class Cursor : public ::System::Object
	{
	public:
		static ::System::Void SetCursor(::UnityEngine::Texture2D* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::CursorMode a3)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*, ::UnityEngine::Vector2, ::UnityEngine::CursorMode))((::PBYTE)hIl2Cpp + UNITYENGINE_CURSOR_SETCURSOR_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean get_visible()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_CURSOR_GET_VISIBLE_OFFSET))();
		}

		static ::System::Void set_visible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_CURSOR_SET_VISIBLE_OFFSET))(a1);
		}

		static ::UnityEngine::CursorLockMode get_lockState()
		{
			return ((::UnityEngine::CursorLockMode(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_CURSOR_GET_LOCKSTATE_OFFSET))();
		}

		static ::System::Void set_lockState(::UnityEngine::CursorLockMode a1)
		{
			return ((::System::Void(*)(::UnityEngine::CursorLockMode))((::PBYTE)hIl2Cpp + UNITYENGINE_CURSOR_SET_LOCKSTATE_OFFSET))(a1);
		}

		static ::System::Void SetCursor_Injected(::UnityEngine::Texture2D* a1, ::UnityEngine::Vector2& a2, ::UnityEngine::CursorMode a3)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2D*, ::UnityEngine::Vector2&, ::UnityEngine::CursorMode))((::PBYTE)hIl2Cpp + UNITYENGINE_CURSOR_SETCURSOR_INJECTED_OFFSET))(a1, a2, a3);
		}
	};
}
