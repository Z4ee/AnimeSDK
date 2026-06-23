#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/ClickMeshBrowserUI.h"

namespace UnityEngine { class MeshCollider; }
namespace UnityEngine { class Transform; }
namespace ZenFulcrum::EmbeddedBrowser { class BrowserCursor; }
namespace ZenFulcrum::EmbeddedBrowser { class FPSCursorRenderer; }

#define ZENFULCRUM_EMBEDDEDBROWSER_FPSBROWSERUI_CREATE_OFFSET UNITYSDK_OFFSET(0x1E6236C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSBROWSERUI_GET_LOOKRAY_OFFSET UNITYSDK_OFFSET(0x1E6238C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSBROWSERUI_INPUTUPDATE_OFFSET UNITYSDK_OFFSET(0x1E623B00)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSBROWSERUI_SETCURSOR_OFFSET UNITYSDK_OFFSET(0x1E623AC0)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSBROWSERUI_START_OFFSET UNITYSDK_OFFSET(0x1E6235B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSBROWSERUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1E623B30)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int FPSBrowserUI_TypeDefinitionIndex = 32658;

	class FPSBrowserUI : public ::ZenFulcrum::EmbeddedBrowser::ClickMeshBrowserUI
	{
	public:
		::UnityEngine::Transform* worldPointer; // 0x68
		::ZenFulcrum::EmbeddedBrowser::FPSCursorRenderer* cursorRenderer; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSBROWSERUI__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSBROWSERUI_START_OFFSET))(this);
		}

		static ::ZenFulcrum::EmbeddedBrowser::FPSBrowserUI* Create(::UnityEngine::MeshCollider* meshCollider, ::UnityEngine::Transform* worldPointer, ::ZenFulcrum::EmbeddedBrowser::FPSCursorRenderer* cursorRenderer)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::FPSBrowserUI*(*)(::UnityEngine::MeshCollider*, ::UnityEngine::Transform*, ::ZenFulcrum::EmbeddedBrowser::FPSCursorRenderer*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSBROWSERUI_CREATE_OFFSET))(meshCollider, worldPointer, cursorRenderer);
		}

		::UnityEngine::Ray get_LookRay()
		{
			return ((::UnityEngine::Ray(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSBROWSERUI_GET_LOOKRAY_OFFSET))(this);
		}

		::System::Void SetCursor(::ZenFulcrum::EmbeddedBrowser::BrowserCursor* newCursor)
		{
			return ((::System::Void(*)(::PVOID, ::ZenFulcrum::EmbeddedBrowser::BrowserCursor*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSBROWSERUI_SETCURSOR_OFFSET))(this, newCursor);
		}

		::System::Void InputUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSBROWSERUI_INPUTUPDATE_OFFSET))(this);
		}
	};
}
