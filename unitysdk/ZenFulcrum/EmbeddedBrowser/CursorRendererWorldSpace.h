#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/CursorRendererBase.h"

namespace UnityEngine { class GameObject; }
namespace ZenFulcrum::EmbeddedBrowser { class PointerUIBase; }

#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1A6B8FE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_CURSORCHANGE_OFFSET UNITYSDK_OFFSET(0x1A6B93D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A6B9620)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A6B9850)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6B9880)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int CursorRendererWorldSpace_TypeDefinitionIndex = 36233;

	class CursorRendererWorldSpace : public ::ZenFulcrum::EmbeddedBrowser::CursorRendererBase
	{
	public:
		::System::Single zOffset; // 0x20
		::System::Single size; // 0x24
		::UnityEngine::GameObject* cursorHolder; // 0x28
		::UnityEngine::GameObject* cursorImage; // 0x30
		::ZenFulcrum::EmbeddedBrowser::PointerUIBase* pointerUI; // 0x38
		::System::Boolean cursorVisible; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_AWAKE_OFFSET))(this);
		}

		::System::Void CursorChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_CURSORCHANGE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDERERWORLDSPACE_ONDESTROY_OFFSET))(this);
		}
	};
}
