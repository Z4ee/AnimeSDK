#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/UI/DefaultControls_Resources.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class DefaultControls_IFactoryControls; }
namespace UnityEngine::UI { class Selectable; }
namespace UnityEngine::UI { class Text; }

#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEBUTTON_OFFSET UNITYSDK_OFFSET(0x1B38B340)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1B38F0A0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEIMAGE_OFFSET UNITYSDK_OFFSET(0x1B38BC20)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x1B38E140)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEPANEL_OFFSET UNITYSDK_OFFSET(0x1B38ADE0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATERAWIMAGE_OFFSET UNITYSDK_OFFSET(0x1B38BD30)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATESCROLLBAR_OFFSET UNITYSDK_OFFSET(0x1B38CC30)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATESCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x1B391AC0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATESLIDER_OFFSET UNITYSDK_OFFSET(0x1B38BE40)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATETEXT_OFFSET UNITYSDK_OFFSET(0x1B38B980)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATETOGGLE_OFFSET UNITYSDK_OFFSET(0x1B38D420)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEUIELEMENTROOT_OFFSET UNITYSDK_OFFSET(0x1B38A6D0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEUIOBJECT_OFFSET UNITYSDK_OFFSET(0x1B38A940)
#define UNITYENGINE_UI_DEFAULTCONTROLS_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0x1B38A670)
#define UNITYENGINE_UI_DEFAULTCONTROLS_SETDEFAULTCOLORTRANSITIONVALUES_OFFSET UNITYSDK_OFFSET(0x1B38ACD0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_SETDEFAULTTEXTVALUES_OFFSET UNITYSDK_OFFSET(0x1B38AB60)
#define UNITYENGINE_UI_DEFAULTCONTROLS_SETLAYERRECURSIVELY_OFFSET UNITYSDK_OFFSET(0x1B38ACF0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_SETPARENTANDALIGN_OFFSET UNITYSDK_OFFSET(0x1B38AAB0)
#define UNITYENGINE_UI_DEFAULTCONTROLS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B392870)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int DefaultControls_TypeDefinitionIndex = 5859;

	class DefaultControls : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::DefaultControls_IFactoryControls** StaticGet_m_CurrentFactory()
		{
			return (::UnityEngine::UI::DefaultControls_IFactoryControls**)Il2CppClass::FromTypeDefinitionIndex(DefaultControls_TypeDefinitionIndex)->GetStaticField(0x458F0);
		}
		static ::UnityEngine::Vector2* StaticGet_s_ImageElementSize()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(DefaultControls_TypeDefinitionIndex)->GetStaticField(0xC820);
		}
		static ::UnityEngine::Color* StaticGet_s_DefaultSelectableColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(DefaultControls_TypeDefinitionIndex)->GetStaticField(0xC828);
		}
		static ::UnityEngine::Color* StaticGet_s_PanelColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(DefaultControls_TypeDefinitionIndex)->GetStaticField(0xC838);
		}
		static ::UnityEngine::Color* StaticGet_s_TextColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(DefaultControls_TypeDefinitionIndex)->GetStaticField(0xC848);
		}
		static ::UnityEngine::Vector2* StaticGet_s_ThinElementSize()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(DefaultControls_TypeDefinitionIndex)->GetStaticField(0xC858);
		}
		static ::UnityEngine::Vector2* StaticGet_s_ThickElementSize()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(DefaultControls_TypeDefinitionIndex)->GetStaticField(0xC860);
		}
		// static const ::System::Single kWidth; // 0x0
		// static const ::System::Single kThickHeight; // 0x0
		// static const ::System::Single kThinHeight; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::UI::DefaultControls_IFactoryControls* get_factory()
		{
			return ((::UnityEngine::UI::DefaultControls_IFactoryControls*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_GET_FACTORY_OFFSET))();
		}

		static ::UnityEngine::GameObject* CreateUIElementRoot(::System::String* a1, ::UnityEngine::Vector2 a2, ::Il2CppArray<::System::Type*>* a3)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Vector2, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATEUIELEMENTROOT_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::GameObject* CreateUIObject(::System::String* a1, ::UnityEngine::GameObject* a2, ::Il2CppArray<::System::Type*>* a3)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::GameObject*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATEUIOBJECT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SetDefaultTextValues(::UnityEngine::UI::Text* a1)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_SETDEFAULTTEXTVALUES_OFFSET))(a1);
		}

		static ::System::Void SetDefaultColorTransitionValues(::UnityEngine::UI::Selectable* a1)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_SETDEFAULTCOLORTRANSITIONVALUES_OFFSET))(a1);
		}

		static ::System::Void SetParentAndAlign(::UnityEngine::GameObject* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_SETPARENTANDALIGN_OFFSET))(a1, a2);
		}

		static ::System::Void SetLayerRecursively(::UnityEngine::GameObject* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_SETLAYERRECURSIVELY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::GameObject* CreatePanel(::UnityEngine::UI::DefaultControls_Resources a1)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATEPANEL_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* CreateButton(::UnityEngine::UI::DefaultControls_Resources a1)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATEBUTTON_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* CreateText(::UnityEngine::UI::DefaultControls_Resources a1)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATETEXT_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* CreateImage(::UnityEngine::UI::DefaultControls_Resources a1)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATEIMAGE_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* CreateRawImage(::UnityEngine::UI::DefaultControls_Resources a1)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATERAWIMAGE_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* CreateSlider(::UnityEngine::UI::DefaultControls_Resources a1)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATESLIDER_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* CreateScrollbar(::UnityEngine::UI::DefaultControls_Resources a1)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATESCROLLBAR_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* CreateToggle(::UnityEngine::UI::DefaultControls_Resources a1)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATETOGGLE_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* CreateInputField(::UnityEngine::UI::DefaultControls_Resources a1)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATEINPUTFIELD_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* CreateDropdown(::UnityEngine::UI::DefaultControls_Resources a1)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATEDROPDOWN_OFFSET))(a1);
		}

		static ::UnityEngine::GameObject* CreateScrollView(::UnityEngine::UI::DefaultControls_Resources a1)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATESCROLLVIEW_OFFSET))(a1);
		}
	};
}
