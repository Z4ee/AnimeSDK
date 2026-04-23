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

#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEBUTTON_OFFSET UNITYSDK_OFFSET(0x1A53FA00)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1A543B60)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEIMAGE_OFFSET UNITYSDK_OFFSET(0x1A540380)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEINPUTFIELD_OFFSET UNITYSDK_OFFSET(0x1A542B50)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEPANEL_OFFSET UNITYSDK_OFFSET(0x1A53F480)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATERAWIMAGE_OFFSET UNITYSDK_OFFSET(0x1A5404B0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATESCROLLBAR_OFFSET UNITYSDK_OFFSET(0x1A5414E0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATESCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x1A5466E0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATESLIDER_OFFSET UNITYSDK_OFFSET(0x1A5405E0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATETEXT_OFFSET UNITYSDK_OFFSET(0x1A5400C0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATETOGGLE_OFFSET UNITYSDK_OFFSET(0x1A541D80)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEUIELEMENTROOT_OFFSET UNITYSDK_OFFSET(0x1A53ED50)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEUIOBJECT_OFFSET UNITYSDK_OFFSET(0x1A53EFE0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0x1A53ECF0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_SETDEFAULTCOLORTRANSITIONVALUES_OFFSET UNITYSDK_OFFSET(0x1A53F370)
#define UNITYENGINE_UI_DEFAULTCONTROLS_SETDEFAULTTEXTVALUES_OFFSET UNITYSDK_OFFSET(0x1A53F200)
#define UNITYENGINE_UI_DEFAULTCONTROLS_SETLAYERRECURSIVELY_OFFSET UNITYSDK_OFFSET(0x1A53F390)
#define UNITYENGINE_UI_DEFAULTCONTROLS_SETPARENTANDALIGN_OFFSET UNITYSDK_OFFSET(0x1A53F150)
#define UNITYENGINE_UI_DEFAULTCONTROLS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A547580)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int DefaultControls_TypeDefinitionIndex = 5582;

	class DefaultControls : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::DefaultControls_IFactoryControls** StaticGet_m_CurrentFactory()
		{
			return (::UnityEngine::UI::DefaultControls_IFactoryControls**)Il2CppClass::FromTypeDefinitionIndex(DefaultControls_TypeDefinitionIndex)->GetStaticField(0x18390);
		}
		static ::UnityEngine::Vector2* StaticGet_s_ImageElementSize()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(DefaultControls_TypeDefinitionIndex)->GetStaticField(0x68D0);
		}
		static ::UnityEngine::Color* StaticGet_s_PanelColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(DefaultControls_TypeDefinitionIndex)->GetStaticField(0x68D8);
		}
		static ::UnityEngine::Vector2* StaticGet_s_ThinElementSize()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(DefaultControls_TypeDefinitionIndex)->GetStaticField(0x68E8);
		}
		static ::UnityEngine::Vector2* StaticGet_s_ThickElementSize()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(DefaultControls_TypeDefinitionIndex)->GetStaticField(0x68F0);
		}
		static ::UnityEngine::Color* StaticGet_s_DefaultSelectableColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(DefaultControls_TypeDefinitionIndex)->GetStaticField(0x68F8);
		}
		static ::UnityEngine::Color* StaticGet_s_TextColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(DefaultControls_TypeDefinitionIndex)->GetStaticField(0x6908);
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

		static ::UnityEngine::GameObject* CreateUIElementRoot(::System::String* name, ::UnityEngine::Vector2 size, ::Il2CppArray<::System::Type*>* components)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Vector2, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATEUIELEMENTROOT_OFFSET))(name, size, components);
		}

		static ::UnityEngine::GameObject* CreateUIObject(::System::String* name, ::UnityEngine::GameObject* parent, ::Il2CppArray<::System::Type*>* components)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::GameObject*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATEUIOBJECT_OFFSET))(name, parent, components);
		}

		static ::System::Void SetDefaultTextValues(::UnityEngine::UI::Text* lbl)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_SETDEFAULTTEXTVALUES_OFFSET))(lbl);
		}

		static ::System::Void SetDefaultColorTransitionValues(::UnityEngine::UI::Selectable* slider)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Selectable*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_SETDEFAULTCOLORTRANSITIONVALUES_OFFSET))(slider);
		}

		static ::System::Void SetParentAndAlign(::UnityEngine::GameObject* child, ::UnityEngine::GameObject* parent)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_SETPARENTANDALIGN_OFFSET))(child, parent);
		}

		static ::System::Void SetLayerRecursively(::UnityEngine::GameObject* go, ::System::Int32 layer)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_SETLAYERRECURSIVELY_OFFSET))(go, layer);
		}

		static ::UnityEngine::GameObject* CreatePanel(::UnityEngine::UI::DefaultControls_Resources resources)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATEPANEL_OFFSET))(resources);
		}

		static ::UnityEngine::GameObject* CreateButton(::UnityEngine::UI::DefaultControls_Resources resources)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATEBUTTON_OFFSET))(resources);
		}

		static ::UnityEngine::GameObject* CreateText(::UnityEngine::UI::DefaultControls_Resources resources)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATETEXT_OFFSET))(resources);
		}

		static ::UnityEngine::GameObject* CreateImage(::UnityEngine::UI::DefaultControls_Resources resources)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATEIMAGE_OFFSET))(resources);
		}

		static ::UnityEngine::GameObject* CreateRawImage(::UnityEngine::UI::DefaultControls_Resources resources)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATERAWIMAGE_OFFSET))(resources);
		}

		static ::UnityEngine::GameObject* CreateSlider(::UnityEngine::UI::DefaultControls_Resources resources)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATESLIDER_OFFSET))(resources);
		}

		static ::UnityEngine::GameObject* CreateScrollbar(::UnityEngine::UI::DefaultControls_Resources resources)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATESCROLLBAR_OFFSET))(resources);
		}

		static ::UnityEngine::GameObject* CreateToggle(::UnityEngine::UI::DefaultControls_Resources resources)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATETOGGLE_OFFSET))(resources);
		}

		static ::UnityEngine::GameObject* CreateInputField(::UnityEngine::UI::DefaultControls_Resources resources)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATEINPUTFIELD_OFFSET))(resources);
		}

		static ::UnityEngine::GameObject* CreateDropdown(::UnityEngine::UI::DefaultControls_Resources resources)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATEDROPDOWN_OFFSET))(resources);
		}

		static ::UnityEngine::GameObject* CreateScrollView(::UnityEngine::UI::DefaultControls_Resources resources)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATESCROLLVIEW_OFFSET))(resources);
		}
	};
}
