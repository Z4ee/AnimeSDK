#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UI/Extension/EImgTextIconType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class ContentSizeFitter; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONITEM_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0x9171E0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONITEM_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x917170)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONITEM_REFRESHITEMRECTBYSCALE_OFFSET UNITYSDK_OFFSET(0x917310)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONITEM_SETITEMSIZE_OFFSET UNITYSDK_OFFSET(0x917270)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONITEM_SETSPRITE_OFFSET UNITYSDK_OFFSET(0x917250)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONITEM_SETTEXT_OFFSET UNITYSDK_OFFSET(0x917260)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int ImgTextFeature_IconItem_TypeDefinitionIndex = 56539;

	struct alignas(8) ImgTextFeature_IconItem
	{
		::UnityEngine::RectTransform* rect; // 0x10
		::UnityEngine::RectTransform* bgRect; // 0x18
		::UnityEngine::Vector2 bgSize; // 0x20
		::UnityEngine::UI::ContentSizeFitter* sizeFitter; // 0x28
		::UnityEngine::Object* item; // 0x30
		::UnityEngine::UI::Extension::EImgTextIconType type; // 0x38
		::System::Single scale; // 0x3C
		::UnityEngine::Vector2 itemSize; // 0x40
		::System::Single overrideHeight; // 0x48
		::System::Single useFontSize; // 0x4C

		::UnityEngine::UI::Text* get_Text()
		{
			return ((::UnityEngine::UI::Text*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONITEM_GET_TEXT_OFFSET))(this);
		}

		::UnityEngine::UI::Image* get_Image()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONITEM_GET_IMAGE_OFFSET))(this);
		}

		::UnityEngine::Sprite* SetSprite(::UnityEngine::Sprite* sp)
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONITEM_SETSPRITE_OFFSET))(this, sp);
		}

		::UnityEngine::UI::Text* SetText(::System::String* text)
		{
			return ((::UnityEngine::UI::Text*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONITEM_SETTEXT_OFFSET))(this, text);
		}

		::System::Void SetItemSize(::System::Single itemWidth, ::System::Single itemHeight, ::System::Single scale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONITEM_SETITEMSIZE_OFFSET))(this, itemWidth, itemHeight, scale);
		}

		::System::Void RefreshItemRectByScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONITEM_REFRESHITEMRECTBYSCALE_OFFSET))(this);
		}
	};
}
