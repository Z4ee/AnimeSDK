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

#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEIMAGE_OFFSET UNITYSDK_OFFSET(0x1C19F3B0)
#define UNITYENGINE_UI_DEFAULTCONTROLS_CREATEUIELEMENTROOT_OFFSET UNITYSDK_OFFSET(0x1C19F160)
#define UNITYENGINE_UI_DEFAULTCONTROLS_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0x1C19F100)
#define UNITYENGINE_UI_DEFAULTCONTROLS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C19F530)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int DefaultControls_TypeDefinitionIndex = 8349;

	class DefaultControls : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::DefaultControls_IFactoryControls** StaticGet_m_CurrentFactory()
		{
			return (::UnityEngine::UI::DefaultControls_IFactoryControls**)Il2CppClass::FromTypeDefinitionIndex(DefaultControls_TypeDefinitionIndex)->GetStaticField(0x7510);
		}
		static ::UnityEngine::Color* StaticGet_s_PanelColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(DefaultControls_TypeDefinitionIndex)->GetStaticField(0x3A20);
		}
		static ::UnityEngine::Vector2* StaticGet_s_ImageElementSize()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(DefaultControls_TypeDefinitionIndex)->GetStaticField(0x3A30);
		}
		static ::UnityEngine::Color* StaticGet_s_DefaultSelectableColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(DefaultControls_TypeDefinitionIndex)->GetStaticField(0x3A38);
		}
		static ::UnityEngine::Vector2* StaticGet_s_ThinElementSize()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(DefaultControls_TypeDefinitionIndex)->GetStaticField(0x3A48);
		}
		static ::UnityEngine::Color* StaticGet_s_TextColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(DefaultControls_TypeDefinitionIndex)->GetStaticField(0x3A50);
		}
		static ::UnityEngine::Vector2* StaticGet_s_ThickElementSize()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(DefaultControls_TypeDefinitionIndex)->GetStaticField(0x3A60);
		}

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

		static ::UnityEngine::GameObject* CreateImage(::UnityEngine::UI::DefaultControls_Resources resources)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::UI::DefaultControls_Resources))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_DEFAULTCONTROLS_CREATEIMAGE_OFFSET))(resources);
		}
	};
}
