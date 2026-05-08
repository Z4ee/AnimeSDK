#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/TMPro/TMP_DefaultControls_Resources.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace TMPro { class TMP_Text; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Selectable; }

#define TMPRO_TMP_DEFAULTCONTROLS_CREATEBUTTON_OFFSET UNITYSDK_OFFSET(0x1C3FFEA0)
#define TMPRO_TMP_DEFAULTCONTROLS_CREATEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1C401860)
#define TMPRO_TMP_DEFAULTCONTROLS_CREATEINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x1C400400)
#define TMPRO_TMP_DEFAULTCONTROLS_CREATESCROLLBAR_OFFSET UNITYSDK_OFFSET(0x1C3FFAB0)
#define TMPRO_TMP_DEFAULTCONTROLS_CREATETEXT_OFFSET UNITYSDK_OFFSET(0x1C400380)
#define TMPRO_TMP_DEFAULTCONTROLS_CREATEUIELEMENTROOT_OFFSET UNITYSDK_OFFSET(0x1C3FF510)
#define TMPRO_TMP_DEFAULTCONTROLS_CREATEUIOBJECT_OFFSET UNITYSDK_OFFSET(0x1C3FF5E0)
#define TMPRO_TMP_DEFAULTCONTROLS_SETDEFAULTCOLORTRANSITIONVALUES_OFFSET UNITYSDK_OFFSET(0x1C3FF9A0)
#define TMPRO_TMP_DEFAULTCONTROLS_SETDEFAULTTEXTVALUES_OFFSET UNITYSDK_OFFSET(0x1C3FF860)
#define TMPRO_TMP_DEFAULTCONTROLS_SETLAYERRECURSIVELY_OFFSET UNITYSDK_OFFSET(0x1C3FF9C0)
#define TMPRO_TMP_DEFAULTCONTROLS_SETPARENTANDALIGN_OFFSET UNITYSDK_OFFSET(0x1C3FF6C0)
#define TMPRO_TMP_DEFAULTCONTROLS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C403440)

namespace TMPro
{
	inline static constexpr unsigned int TMP_DefaultControls_TypeDefinitionIndex = 37492;

	class TMP_DefaultControls : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector2* StaticGet_s_ThinElementSize()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(TMP_DefaultControls_TypeDefinitionIndex)->GetStaticField(0x9250);
		}
		static ::UnityEngine::Color* StaticGet_s_TextColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(TMP_DefaultControls_TypeDefinitionIndex)->GetStaticField(0x9258);
		}
		static ::UnityEngine::Color* StaticGet_s_DefaultSelectableColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(TMP_DefaultControls_TypeDefinitionIndex)->GetStaticField(0x9268);
		}
		static ::UnityEngine::Vector2* StaticGet_s_ThickElementSize()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(TMP_DefaultControls_TypeDefinitionIndex)->GetStaticField(0x9278);
		}
		static ::UnityEngine::Vector2* StaticGet_s_TextElementSize()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(TMP_DefaultControls_TypeDefinitionIndex)->GetStaticField(0x9280);
		}
		// static const ::System::Single kWidth; // 0x0
		// static const ::System::Single kThickHeight; // 0x0
		// static const ::System::Single kThinHeight; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::GameObject* CreateUIElementRoot(::System::String* name, ::UnityEngine::Vector2 size)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_CREATEUIELEMENTROOT_OFFSET))(name, size);
		}

		static ::UnityEngine::GameObject* CreateUIObject(::System::String* name, ::UnityEngine::GameObject* parent)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_CREATEUIOBJECT_OFFSET))(name, parent);
		}

		static ::System::Void SetDefaultTextValues(::TMPro::TMP_Text* lbl)
		{
			return ((::System::Void(*)(::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_SETDEFAULTTEXTVALUES_OFFSET))(lbl);
		}

		static ::System::Void SetDefaultColorTransitionValues(::UnityEngine::UI::Selectable* slider)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_SETDEFAULTCOLORTRANSITIONVALUES_OFFSET))(slider);
		}

		static ::System::Void SetParentAndAlign(::UnityEngine::GameObject* child, ::UnityEngine::GameObject* parent)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_SETPARENTANDALIGN_OFFSET))(child, parent);
		}

		static ::System::Void SetLayerRecursively(::UnityEngine::GameObject* go, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_SETLAYERRECURSIVELY_OFFSET))(go, layer);
		}

		static ::UnityEngine::GameObject* CreateScrollbar(::TMPro::TMP_DefaultControls_Resources resources)
		{
			return ((::UnityEngine::GameObject*(*)(::TMPro::TMP_DefaultControls_Resources))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_CREATESCROLLBAR_OFFSET))(resources);
		}

		static ::UnityEngine::GameObject* CreateButton(::TMPro::TMP_DefaultControls_Resources resources)
		{
			return ((::UnityEngine::GameObject*(*)(::TMPro::TMP_DefaultControls_Resources))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_CREATEBUTTON_OFFSET))(resources);
		}

		static ::UnityEngine::GameObject* CreateText(::TMPro::TMP_DefaultControls_Resources resources)
		{
			return ((::UnityEngine::GameObject*(*)(::TMPro::TMP_DefaultControls_Resources))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_CREATETEXT_OFFSET))(resources);
		}

		static ::UnityEngine::GameObject* CreateInputField(::TMPro::TMP_DefaultControls_Resources resources)
		{
			return ((::UnityEngine::GameObject*(*)(::TMPro::TMP_DefaultControls_Resources))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_CREATEINPUTFIELD_OFFSET))(resources);
		}

		static ::UnityEngine::GameObject* CreateDropdown(::TMPro::TMP_DefaultControls_Resources resources)
		{
			return ((::UnityEngine::GameObject*(*)(::TMPro::TMP_DefaultControls_Resources))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_CREATEDROPDOWN_OFFSET))(resources);
		}
	};
}
