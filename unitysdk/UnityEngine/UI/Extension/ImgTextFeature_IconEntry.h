#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/Extension/EImgTextIconType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class ContentSizeFitter; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0x87A0E0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x87A070)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_HIDEVISUAL_OFFSET UNITYSDK_OFFSET(0x87A220)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_INVALIDATEMASKCLIPPING_OFFSET UNITYSDK_OFFSET(0x87A240)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_REFRESHITEMRECTBYSCALE_OFFSET UNITYSDK_OFFSET(0x87A210)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_SETITEMSIZE_OFFSET UNITYSDK_OFFSET(0x87A170)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_SETSPRITE_OFFSET UNITYSDK_OFFSET(0x87A150)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_SETTEXT_OFFSET UNITYSDK_OFFSET(0x87A160)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_SHOWVISUAL_OFFSET UNITYSDK_OFFSET(0x87A230)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int ImgTextFeature_IconEntry_TypeDefinitionIndex = 40086;

	struct alignas(8) ImgTextFeature_IconEntry
	{
		::UnityEngine::RectTransform* rect; // 0x10
		::UnityEngine::RectTransform* bgRect; // 0x18
		::UnityEngine::Vector2 bgSize; // 0x20
		::UnityEngine::UI::ContentSizeFitter* sizeFitter; // 0x28
		::UnityEngine::UI::Graphic* item; // 0x30
		::UnityEngine::UI::Extension::EImgTextIconType type; // 0x38
		::System::Single scale; // 0x3C
		::UnityEngine::Vector2 itemSize; // 0x40
		::System::Single overrideHeight; // 0x48
		::System::Single useFontSize; // 0x4C
		::UnityEngine::Vector2 savedVertPos; // 0x50
		::System::Boolean hasValidPosition; // 0x58
		::UnityEngine::Rect originalQuadBounds; // 0x5C
		::System::Boolean hasBounds; // 0x6C
		::System::Int32 placeholderGi; // 0x70
		::System::Int32 vertStartIndex; // 0x74
		::System::Int32 vertEndIndex; // 0x78
		::UnityEngine::Material* savedMat; // 0x80

		::UnityEngine::UI::Text* get_Text()
		{
			return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_GET_TEXT_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_Image()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_GET_IMAGE_OFFSET))(this);
		}

		::UnityEngine::Sprite* SetSprite(::UnityEngine::Sprite* sp)
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_SETSPRITE_OFFSET))(this, sp);
		}

		::UnityEngine::UI::Text* SetText(::System::String* text)
		{
			return ((::UnityEngine::UI::Text*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_SETTEXT_OFFSET))(this, text);
		}

		::System::Void SetItemSize(::System::Single itemWidth, ::System::Single itemHeight, ::System::Single newScale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_SETITEMSIZE_OFFSET))(this, itemWidth, itemHeight, newScale);
		}

		::System::Void RefreshItemRectByScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_REFRESHITEMRECTBYSCALE_OFFSET))(this);
		}

		::System::Void HideVisual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_HIDEVISUAL_OFFSET))(this);
		}

		::System::Void ShowVisual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_SHOWVISUAL_OFFSET))(this);
		}

		::System::Void InvalidateMaskClipping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_INVALIDATEMASKCLIPPING_OFFSET))(this);
		}
	};
}
