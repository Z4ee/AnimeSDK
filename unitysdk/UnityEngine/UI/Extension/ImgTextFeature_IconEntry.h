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

#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_GET_IMAGE_OFFSET UNITYSDK_OFFSET(0x90BA70)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x90BA00)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_HIDEVISUAL_OFFSET UNITYSDK_OFFSET(0x90BBB0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_INVALIDATEMASKCLIPPING_OFFSET UNITYSDK_OFFSET(0x90BBD0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_REFRESHITEMRECTBYSCALE_OFFSET UNITYSDK_OFFSET(0x90BBA0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_SETITEMSIZE_OFFSET UNITYSDK_OFFSET(0x90BB00)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_SETSPRITE_OFFSET UNITYSDK_OFFSET(0x90BAE0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_SETTEXT_OFFSET UNITYSDK_OFFSET(0x90BAF0)
#define UNITYENGINE_UI_EXTENSION_IMGTEXTFEATURE_ICONENTRY_SHOWVISUAL_OFFSET UNITYSDK_OFFSET(0x90BBC0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int ImgTextFeature_IconEntry_TypeDefinitionIndex = 81067;

	struct alignas(8) ImgTextFeature_IconEntry
	{
		::System::Boolean IsVisible; // 0x10
		::UnityEngine::RectTransform* rect; // 0x18
		::UnityEngine::RectTransform* bgRect; // 0x20
		::UnityEngine::Vector2 bgSize; // 0x28
		::UnityEngine::UI::ContentSizeFitter* sizeFitter; // 0x30
		::UnityEngine::UI::Graphic* item; // 0x38
		::UnityEngine::UI::Extension::EImgTextIconType type; // 0x40
		::System::Single scale; // 0x44
		::UnityEngine::Vector2 itemSize; // 0x48
		::System::Single overrideHeight; // 0x50
		::System::Single useFontSize; // 0x54
		::UnityEngine::Vector2 savedVertPos; // 0x58
		::System::Boolean hasValidPosition; // 0x60
		::UnityEngine::Rect originalQuadBounds; // 0x64
		::System::Boolean hasBounds; // 0x74
		::System::Int32 placeholderGi; // 0x78
		::System::Int32 vertStartIndex; // 0x7C
		::System::Int32 vertEndIndex; // 0x80
		::UnityEngine::Material* savedMat; // 0x88

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
