#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TMPro { class Compute_DT_EventArgs; }
namespace TMPro { class FastAction; }
namespace TMPro { template <typename T1, typename T2, typename T3> class FastAction_3; }
namespace TMPro { template <typename T1, typename T2> class FastAction_2; }
namespace TMPro { template <typename T> class FastAction_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Object; }

#define TMPRO_TMPRO_EVENTMANAGER_ON_COLOR_GRADIENT_PROPERTY_CHANGED_OFFSET UNITYSDK_OFFSET(0x1B1FFB80)
#define TMPRO_TMPRO_EVENTMANAGER_ON_COMPUTE_DT_EVENT_OFFSET UNITYSDK_OFFSET(0x1B1FFF40)
#define TMPRO_TMPRO_EVENTMANAGER_ON_DRAG_AND_DROP_MATERIAL_CHANGED_OFFSET UNITYSDK_OFFSET(0x1B1FF9D0)
#define TMPRO_TMPRO_EVENTMANAGER_ON_FONT_PROPERTY_CHANGED_OFFSET UNITYSDK_OFFSET(0x1B1FF6D0)
#define TMPRO_TMPRO_EVENTMANAGER_ON_MATERIAL_PROPERTY_CHANGED_OFFSET UNITYSDK_OFFSET(0x1B1FF5D0)
#define TMPRO_TMPRO_EVENTMANAGER_ON_RESOURCES_LOADED_OFFSET UNITYSDK_OFFSET(0x1B1FFD90)
#define TMPRO_TMPRO_EVENTMANAGER_ON_SPRITE_ASSET_PROPERTY_CHANGED_OFFSET UNITYSDK_OFFSET(0x1B1FF7D0)
#define TMPRO_TMPRO_EVENTMANAGER_ON_TEXTMESHPRO_PROPERTY_CHANGED_OFFSET UNITYSDK_OFFSET(0x1B1FF8D0)
#define TMPRO_TMPRO_EVENTMANAGER_ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED_OFFSET UNITYSDK_OFFSET(0x1B1FFE40)
#define TMPRO_TMPRO_EVENTMANAGER_ON_TEXT_CHANGED_OFFSET UNITYSDK_OFFSET(0x1B1FFC30)
#define TMPRO_TMPRO_EVENTMANAGER_ON_TEXT_STYLE_PROPERTY_CHANGED_OFFSET UNITYSDK_OFFSET(0x1B1FFAD0)
#define TMPRO_TMPRO_EVENTMANAGER_ON_TMP_SETTINGS_CHANGED_OFFSET UNITYSDK_OFFSET(0x1B1FFCE0)
#define TMPRO_TMPRO_EVENTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B200040)

namespace TMPro
{
	inline static constexpr unsigned int TMPro_EventManager_TypeDefinitionIndex = 41058;

	class TMPro_EventManager : public ::System::Object
	{
	public:
		static ::TMPro::FastAction_1<::UnityEngine::Object*>** StaticGet_TEXT_CHANGED_EVENT()
		{
			return (::TMPro::FastAction_1<::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x58B70);
		}
		static ::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Object*>** StaticGet_TEXTMESHPRO_PROPERTY_EVENT()
		{
			return (::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x58B78);
		}
		static ::TMPro::FastAction_1<::System::Boolean>** StaticGet_TEXT_STYLE_PROPERTY_EVENT()
		{
			return (::TMPro::FastAction_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x58B80);
		}
		static ::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Object*>** StaticGet_SPRITE_ASSET_PROPERTY_EVENT()
		{
			return (::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x58B88);
		}
		static ::TMPro::FastAction_3<::UnityEngine::GameObject*, ::UnityEngine::Material*, ::UnityEngine::Material*>** StaticGet_DRAG_AND_DROP_MATERIAL_EVENT()
		{
			return (::TMPro::FastAction_3<::UnityEngine::GameObject*, ::UnityEngine::Material*, ::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x58B90);
		}
		static ::TMPro::FastAction_1<::UnityEngine::Object*>** StaticGet_COLOR_GRADIENT_PROPERTY_EVENT()
		{
			return (::TMPro::FastAction_1<::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x58B98);
		}
		static ::TMPro::FastAction** StaticGet_TMP_SETTINGS_PROPERTY_EVENT()
		{
			return (::TMPro::FastAction**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x58BA0);
		}
		static ::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Material*>** StaticGet_MATERIAL_PROPERTY_EVENT()
		{
			return (::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x58BA8);
		}
		static ::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Object*>** StaticGet_TEXTMESHPRO_UGUI_PROPERTY_EVENT()
		{
			return (::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x58BB0);
		}
		static ::TMPro::FastAction_2<::System::Object*, ::TMPro::Compute_DT_EventArgs*>** StaticGet_COMPUTE_DT_EVENT()
		{
			return (::TMPro::FastAction_2<::System::Object*, ::TMPro::Compute_DT_EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x58BB8);
		}
		static ::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Object*>** StaticGet_FONT_PROPERTY_EVENT()
		{
			return (::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x58BC0);
		}
		static ::TMPro::FastAction** StaticGet_RESOURCE_LOAD_EVENT()
		{
			return (::TMPro::FastAction**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x58BC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void ON_MATERIAL_PROPERTY_CHANGED(::System::Boolean a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_MATERIAL_PROPERTY_CHANGED_OFFSET))(a1, a2);
		}

		static ::System::Void ON_FONT_PROPERTY_CHANGED(::System::Boolean a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_FONT_PROPERTY_CHANGED_OFFSET))(a1, a2);
		}

		static ::System::Void ON_SPRITE_ASSET_PROPERTY_CHANGED(::System::Boolean a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_SPRITE_ASSET_PROPERTY_CHANGED_OFFSET))(a1, a2);
		}

		static ::System::Void ON_TEXTMESHPRO_PROPERTY_CHANGED(::System::Boolean a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_TEXTMESHPRO_PROPERTY_CHANGED_OFFSET))(a1, a2);
		}

		static ::System::Void ON_DRAG_AND_DROP_MATERIAL_CHANGED(::UnityEngine::GameObject* a1, ::UnityEngine::Material* a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_DRAG_AND_DROP_MATERIAL_CHANGED_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ON_TEXT_STYLE_PROPERTY_CHANGED(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_TEXT_STYLE_PROPERTY_CHANGED_OFFSET))(a1);
		}

		static ::System::Void ON_COLOR_GRADIENT_PROPERTY_CHANGED(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_COLOR_GRADIENT_PROPERTY_CHANGED_OFFSET))(a1);
		}

		static ::System::Void ON_TEXT_CHANGED(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_TEXT_CHANGED_OFFSET))(a1);
		}

		static ::System::Void ON_TMP_SETTINGS_CHANGED()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_TMP_SETTINGS_CHANGED_OFFSET))();
		}

		static ::System::Void ON_RESOURCES_LOADED()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_RESOURCES_LOADED_OFFSET))();
		}

		static ::System::Void ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED(::System::Boolean a1, ::UnityEngine::Object* a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED_OFFSET))(a1, a2);
		}

		static ::System::Void ON_COMPUTE_DT_EVENT(::System::Object* a1, ::TMPro::Compute_DT_EventArgs* a2)
		{
			return ((::System::Void(*)(::System::Object*, ::TMPro::Compute_DT_EventArgs*))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_COMPUTE_DT_EVENT_OFFSET))(a1, a2);
		}
	};
}
