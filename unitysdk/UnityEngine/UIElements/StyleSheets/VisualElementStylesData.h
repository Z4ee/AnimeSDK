#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/StyleColor.h"
#include "unitysdk/UnityEngine/UIElements/StyleFloat.h"
#include "unitysdk/UnityEngine/UIElements/StyleInt.h"
#include "unitysdk/UnityEngine/UIElements/StyleLength.h"

namespace UnityEngine::UIElements::StyleSheets { class StyleValuePropertyReader; }

#define UNITYENGINE_UIELEMENTS_STYLESHEETS_VISUALELEMENTSTYLESDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x18AE0D90)
#define UNITYENGINE_UIELEMENTS_STYLESHEETS_VISUALELEMENTSTYLESDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE08E0)

namespace UnityEngine::UIElements::StyleSheets
{
	inline static constexpr unsigned int VisualElementStylesData_TypeDefinitionIndex = 5982;

	class VisualElementStylesData : public ::System::Object
	{
	public:
		static ::UnityEngine::UIElements::StyleSheets::VisualElementStylesData** StaticGet_none()
		{
			return (::UnityEngine::UIElements::StyleSheets::VisualElementStylesData**)Il2CppClass::FromTypeDefinitionIndex(VisualElementStylesData_TypeDefinitionIndex)->GetStaticField(0x7E10);
		}
		static ::UnityEngine::UIElements::StyleSheets::StyleValuePropertyReader** StaticGet_s_StyleValuePropertyReader()
		{
			return (::UnityEngine::UIElements::StyleSheets::StyleValuePropertyReader**)Il2CppClass::FromTypeDefinitionIndex(VisualElementStylesData_TypeDefinitionIndex)->GetStaticField(0x7E18);
		}
		::System::Boolean isShared; // 0x10
		::UnityEngine::UIElements::StyleLength width; // 0x14
		::UnityEngine::UIElements::StyleLength height; // 0x24
		::UnityEngine::UIElements::StyleLength maxWidth; // 0x34
		::UnityEngine::UIElements::StyleLength maxHeight; // 0x44
		::UnityEngine::UIElements::StyleLength minWidth; // 0x54
		::UnityEngine::UIElements::StyleLength minHeight; // 0x64
		::UnityEngine::UIElements::StyleLength flexBasis; // 0x74
		::UnityEngine::UIElements::StyleFloat flexShrink; // 0x84
		::UnityEngine::UIElements::StyleFloat flexGrow; // 0x90
		::UnityEngine::UIElements::StyleInt overflow; // 0x9C
		::UnityEngine::UIElements::StyleLength left; // 0xA8
		::UnityEngine::UIElements::StyleLength top; // 0xB8
		::UnityEngine::UIElements::StyleLength right; // 0xC8
		::UnityEngine::UIElements::StyleLength bottom; // 0xD8
		::UnityEngine::UIElements::StyleInt alignSelf; // 0xE8
		::UnityEngine::UIElements::StyleColor color; // 0xF4
		::UnityEngine::UIElements::StyleColor unityBackgroundImageTintColor; // 0x10C
		::UnityEngine::UIElements::StyleInt alignItems; // 0x124
		::UnityEngine::UIElements::StyleInt alignContent; // 0x130
		::UnityEngine::UIElements::StyleColor borderLeftColor; // 0x13C
		::UnityEngine::UIElements::StyleColor borderTopColor; // 0x154
		::UnityEngine::UIElements::StyleColor borderRightColor; // 0x16C
		::UnityEngine::UIElements::StyleColor borderBottomColor; // 0x184
		::UnityEngine::UIElements::StyleFloat opacity; // 0x19C
		::UnityEngine::UIElements::StyleInt visibility; // 0x1A8
		::UnityEngine::UIElements::StyleInt display; // 0x1B4
		::System::Single dpiScaling; // 0x1C0

		::System::Void _ctor(::System::Boolean isShared)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_VISUALELEMENTSTYLESDATA__CTOR_OFFSET))(this, isShared);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_STYLESHEETS_VISUALELEMENTSTYLESDATA__CCTOR_OFFSET))();
		}
	};
}
