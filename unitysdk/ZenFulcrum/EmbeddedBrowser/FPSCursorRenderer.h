#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class MeshCollider; }
namespace UnityEngine { class Transform; }
namespace ZenFulcrum::EmbeddedBrowser { class Browser; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserCursor; }
namespace ZenFulcrum::EmbeddedBrowser { class FPSBrowserUI; }

#define ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_GET_ENABLEINPUT_OFFSET UNITYSDK_OFFSET(0x1FB3AF40)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1FB3AC70)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_ONGUI_OFFSET UNITYSDK_OFFSET(0x1FB3B170)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_SETCURSOR_OFFSET UNITYSDK_OFFSET(0x1FB3B450)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_SETUPBROWSERINPUT_OFFSET UNITYSDK_OFFSET(0x1FB3AF60)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_SET_ENABLEINPUT_OFFSET UNITYSDK_OFFSET(0x1FB3AF50)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_START_OFFSET UNITYSDK_OFFSET(0x1FB3B100)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB3B460)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int FPSCursorRenderer_TypeDefinitionIndex = 33294;

	class FPSCursorRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::ZenFulcrum::EmbeddedBrowser::FPSCursorRenderer** StaticGet__instance()
		{
			return (::ZenFulcrum::EmbeddedBrowser::FPSCursorRenderer**)Il2CppClass::FromTypeDefinitionIndex(FPSCursorRenderer_TypeDefinitionIndex)->GetStaticField(0x28870);
		}
		::System::Single scale; // 0x18
		::System::Single maxDistance; // 0x1C
		::UnityEngine::Transform* pointer; // 0x20
		::System::Boolean _EnableInput_k__BackingField; // 0x28
		::ZenFulcrum::EmbeddedBrowser::BrowserCursor* baseCursor; // 0x30
		::ZenFulcrum::EmbeddedBrowser::BrowserCursor* currentCursor; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER__CTOR_OFFSET))(this);
		}

		static ::ZenFulcrum::EmbeddedBrowser::FPSCursorRenderer* get_Instance()
		{
			return ((::ZenFulcrum::EmbeddedBrowser::FPSCursorRenderer*(*)())((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_GET_INSTANCE_OFFSET))();
		}

		::System::Boolean get_EnableInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_GET_ENABLEINPUT_OFFSET))(this);
		}

		::System::Void set_EnableInput(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_SET_ENABLEINPUT_OFFSET))(this, value);
		}

		static ::System::Void SetUpBrowserInput(::ZenFulcrum::EmbeddedBrowser::Browser* browser, ::UnityEngine::MeshCollider* mesh)
		{
			return ((::System::Void(*)(::ZenFulcrum::EmbeddedBrowser::Browser*, ::UnityEngine::MeshCollider*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_SETUPBROWSERINPUT_OFFSET))(browser, mesh);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_START_OFFSET))(this);
		}

		::System::Void OnGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_ONGUI_OFFSET))(this);
		}

		::System::Void SetCursor(::ZenFulcrum::EmbeddedBrowser::BrowserCursor* newCursor, ::ZenFulcrum::EmbeddedBrowser::FPSBrowserUI* ui)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserCursor*, ::ZenFulcrum::EmbeddedBrowser::FPSBrowserUI*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSCURSORRENDERER_SETCURSOR_OFFSET))(this, newCursor, ui);
		}
	};
}
