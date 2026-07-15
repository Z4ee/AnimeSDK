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

#define TMPRO_TMP_DEFAULTCONTROLS_CREATEBUTTON_OFFSET UNITYSDK_OFFSET(0x17196C40)
#define TMPRO_TMP_DEFAULTCONTROLS_CREATEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x17198950)
#define TMPRO_TMP_DEFAULTCONTROLS_CREATEINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x171972D0)
#define TMPRO_TMP_DEFAULTCONTROLS_CREATESCROLLBAR_OFFSET UNITYSDK_OFFSET(0x171966E0)
#define TMPRO_TMP_DEFAULTCONTROLS_CREATETEXT_OFFSET UNITYSDK_OFFSET(0x171971B0)
#define TMPRO_TMP_DEFAULTCONTROLS_CREATEUIELEMENTROOT_OFFSET UNITYSDK_OFFSET(0x171962D0)
#define TMPRO_TMP_DEFAULTCONTROLS_CREATEUIOBJECT_OFFSET UNITYSDK_OFFSET(0x17196360)
#define TMPRO_TMP_DEFAULTCONTROLS_SETDEFAULTCOLORTRANSITIONVALUES_OFFSET UNITYSDK_OFFSET(0x171965D0)
#define TMPRO_TMP_DEFAULTCONTROLS_SETDEFAULTTEXTVALUES_OFFSET UNITYSDK_OFFSET(0x17196540)
#define TMPRO_TMP_DEFAULTCONTROLS_SETLAYERRECURSIVELY_OFFSET UNITYSDK_OFFSET(0x171965F0)
#define TMPRO_TMP_DEFAULTCONTROLS_SETPARENTANDALIGN_OFFSET UNITYSDK_OFFSET(0x17196490)
#define TMPRO_TMP_DEFAULTCONTROLS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1719A7F0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_DefaultControls_TypeDefinitionIndex = 41755;

	class TMP_DefaultControls : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector2* StaticGet_s_ThickElementSize()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(TMP_DefaultControls_TypeDefinitionIndex)->GetStaticField(0xEC30);
		}
		static ::UnityEngine::Color* StaticGet_s_TextColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(TMP_DefaultControls_TypeDefinitionIndex)->GetStaticField(0xEC38);
		}
		static ::UnityEngine::Vector2* StaticGet_s_ThinElementSize()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(TMP_DefaultControls_TypeDefinitionIndex)->GetStaticField(0xEC48);
		}
		static ::UnityEngine::Vector2* StaticGet_s_TextElementSize()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(TMP_DefaultControls_TypeDefinitionIndex)->GetStaticField(0xEC50);
		}
		static ::UnityEngine::Color* StaticGet_s_DefaultSelectableColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(TMP_DefaultControls_TypeDefinitionIndex)->GetStaticField(0xEC58);
		}
		// static const ::System::Single kWidth; // 0x0
		// static const ::System::Single kThickHeight; // 0x0
		// static const ::System::Single kThinHeight; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::GameObject* CreateUIElementRoot(::System::String* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_CREATEUIELEMENTROOT_OFFSET))(a1, a2);
		}

		static ::UnityEngine::GameObject* CreateUIObject(::System::String* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_CREATEUIOBJECT_OFFSET))(a1, a2);
		}

		static ::System::Void SetDefaultTextValues(::TMPro::TMP_Text* a1)
		{
			return ((::System::Void(*)(::TMPro::TMP_Text*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_SETDEFAULTTEXTVALUES_OFFSET))(a1);
		}

		static ::System::Void SetDefaultColorTransitionValues(::UnityEngine::UI::Selectable* a1)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_SETDEFAULTCOLORTRANSITIONVALUES_OFFSET))(a1);
		}

		static ::System::Void SetParentAndAlign(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_SETPARENTANDALIGN_OFFSET))(a1, a2);
		}

		static ::System::Void SetLayerRecursively(::UnityEngine::GameObject* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_SETLAYERRECURSIVELY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::GameObject* CreateScrollbar(::TMPro::TMP_DefaultControls_Resources a1)
		{
			return ((::UnityEngine::GameObject*(*)(::TMPro::TMP_DefaultControls_Resources))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_CREATESCROLLBAR_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* CreateButton(::TMPro::TMP_DefaultControls_Resources a1)
		{
			return ((::UnityEngine::GameObject*(*)(::TMPro::TMP_DefaultControls_Resources))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_CREATEBUTTON_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* CreateText(::TMPro::TMP_DefaultControls_Resources a1)
		{
			return ((::UnityEngine::GameObject*(*)(::TMPro::TMP_DefaultControls_Resources))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_CREATETEXT_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* CreateInputField(::TMPro::TMP_DefaultControls_Resources a1)
		{
			return ((::UnityEngine::GameObject*(*)(::TMPro::TMP_DefaultControls_Resources))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_CREATEINPUTFIELD_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* CreateDropdown(::TMPro::TMP_DefaultControls_Resources a1)
		{
			return ((::UnityEngine::GameObject*(*)(::TMPro::TMP_DefaultControls_Resources))((::PBYTE)hIl2Cpp + TMPRO_TMP_DEFAULTCONTROLS_CREATEDROPDOWN_OFFSET))(a1);
		}
	};
}
