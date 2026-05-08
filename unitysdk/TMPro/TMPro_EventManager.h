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

#define TMPRO_TMPRO_EVENTMANAGER_ON_COLOR_GRADIENT_PROPERTY_CHANGED_OFFSET UNITYSDK_OFFSET(0x1C498A80)
#define TMPRO_TMPRO_EVENTMANAGER_ON_COMPUTE_DT_EVENT_OFFSET UNITYSDK_OFFSET(0x1C498DF0)
#define TMPRO_TMPRO_EVENTMANAGER_ON_DRAG_AND_DROP_MATERIAL_CHANGED_OFFSET UNITYSDK_OFFSET(0x1C4988C0)
#define TMPRO_TMPRO_EVENTMANAGER_ON_FONT_PROPERTY_CHANGED_OFFSET UNITYSDK_OFFSET(0x1C498710)
#define TMPRO_TMPRO_EVENTMANAGER_ON_MATERIAL_PROPERTY_CHANGED_OFFSET UNITYSDK_OFFSET(0x1C498680)
#define TMPRO_TMPRO_EVENTMANAGER_ON_RESOURCES_LOADED_OFFSET UNITYSDK_OFFSET(0x1C498C80)
#define TMPRO_TMPRO_EVENTMANAGER_ON_SPRITE_ASSET_PROPERTY_CHANGED_OFFSET UNITYSDK_OFFSET(0x1C4987A0)
#define TMPRO_TMPRO_EVENTMANAGER_ON_TEXTMESHPRO_PROPERTY_CHANGED_OFFSET UNITYSDK_OFFSET(0x1C498830)
#define TMPRO_TMPRO_EVENTMANAGER_ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED_OFFSET UNITYSDK_OFFSET(0x1C498D60)
#define TMPRO_TMPRO_EVENTMANAGER_ON_TEXT_CHANGED_OFFSET UNITYSDK_OFFSET(0x1C498B10)
#define TMPRO_TMPRO_EVENTMANAGER_ON_TEXT_STYLE_PROPERTY_CHANGED_OFFSET UNITYSDK_OFFSET(0x1C498960)
#define TMPRO_TMPRO_EVENTMANAGER_ON_TMP_SETTINGS_CHANGED_OFFSET UNITYSDK_OFFSET(0x1C498BA0)
#define TMPRO_TMPRO_EVENTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C498E80)

namespace TMPro
{
	inline static constexpr unsigned int TMPro_EventManager_TypeDefinitionIndex = 37608;

	class TMPro_EventManager : public ::System::Object
	{
	public:
		static ::TMPro::FastAction_1<::UnityEngine::Object*>** StaticGet_TEXT_CHANGED_EVENT()
		{
			return (::TMPro::FastAction_1<::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x29060);
		}
		static ::TMPro::FastAction_3<::UnityEngine::GameObject*, ::UnityEngine::Material*, ::UnityEngine::Material*>** StaticGet_DRAG_AND_DROP_MATERIAL_EVENT()
		{
			return (::TMPro::FastAction_3<::UnityEngine::GameObject*, ::UnityEngine::Material*, ::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x29068);
		}
		static ::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Object*>** StaticGet_TEXTMESHPRO_PROPERTY_EVENT()
		{
			return (::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x29070);
		}
		static ::TMPro::FastAction** StaticGet_RESOURCE_LOAD_EVENT()
		{
			return (::TMPro::FastAction**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x29078);
		}
		static ::TMPro::FastAction_1<::UnityEngine::Object*>** StaticGet_COLOR_GRADIENT_PROPERTY_EVENT()
		{
			return (::TMPro::FastAction_1<::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x29080);
		}
		static ::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Object*>** StaticGet_FONT_PROPERTY_EVENT()
		{
			return (::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x29088);
		}
		static ::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Material*>** StaticGet_MATERIAL_PROPERTY_EVENT()
		{
			return (::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x29090);
		}
		static ::TMPro::FastAction** StaticGet_TMP_SETTINGS_PROPERTY_EVENT()
		{
			return (::TMPro::FastAction**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x29098);
		}
		static ::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Object*>** StaticGet_TEXTMESHPRO_UGUI_PROPERTY_EVENT()
		{
			return (::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x290A0);
		}
		static ::TMPro::FastAction_2<::System::Object*, ::TMPro::Compute_DT_EventArgs*>** StaticGet_COMPUTE_DT_EVENT()
		{
			return (::TMPro::FastAction_2<::System::Object*, ::TMPro::Compute_DT_EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x290A8);
		}
		static ::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Object*>** StaticGet_SPRITE_ASSET_PROPERTY_EVENT()
		{
			return (::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x290B0);
		}
		static ::TMPro::FastAction_1<::System::Boolean>** StaticGet_TEXT_STYLE_PROPERTY_EVENT()
		{
			return (::TMPro::FastAction_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x290B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void ON_MATERIAL_PROPERTY_CHANGED(::System::Boolean isChanged, ::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::System::Boolean, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_MATERIAL_PROPERTY_CHANGED_OFFSET))(isChanged, mat);
		}

		static ::System::Void ON_FONT_PROPERTY_CHANGED(::System::Boolean isChanged, ::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::System::Boolean, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_FONT_PROPERTY_CHANGED_OFFSET))(isChanged, obj);
		}

		static ::System::Void ON_SPRITE_ASSET_PROPERTY_CHANGED(::System::Boolean isChanged, ::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::System::Boolean, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_SPRITE_ASSET_PROPERTY_CHANGED_OFFSET))(isChanged, obj);
		}

		static ::System::Void ON_TEXTMESHPRO_PROPERTY_CHANGED(::System::Boolean isChanged, ::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::System::Boolean, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_TEXTMESHPRO_PROPERTY_CHANGED_OFFSET))(isChanged, obj);
		}

		static ::System::Void ON_DRAG_AND_DROP_MATERIAL_CHANGED(::UnityEngine::GameObject* sender, ::UnityEngine::Material* currentMaterial, ::UnityEngine::Material* newMaterial)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_DRAG_AND_DROP_MATERIAL_CHANGED_OFFSET))(sender, currentMaterial, newMaterial);
		}

		static ::System::Void ON_TEXT_STYLE_PROPERTY_CHANGED(::System::Boolean isChanged)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_TEXT_STYLE_PROPERTY_CHANGED_OFFSET))(isChanged);
		}

		static ::System::Void ON_COLOR_GRADIENT_PROPERTY_CHANGED(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_COLOR_GRADIENT_PROPERTY_CHANGED_OFFSET))(obj);
		}

		static ::System::Void ON_TEXT_CHANGED(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_TEXT_CHANGED_OFFSET))(obj);
		}

		static ::System::Void ON_TMP_SETTINGS_CHANGED()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_TMP_SETTINGS_CHANGED_OFFSET))();
		}

		static ::System::Void ON_RESOURCES_LOADED()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_RESOURCES_LOADED_OFFSET))();
		}

		static ::System::Void ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED(::System::Boolean isChanged, ::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::System::Boolean, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED_OFFSET))(isChanged, obj);
		}

		static ::System::Void ON_COMPUTE_DT_EVENT(::System::Object* Sender, ::TMPro::Compute_DT_EventArgs* e)
		{
			return ((::System::Void(*)(::System::Object*, ::TMPro::Compute_DT_EventArgs*))((::PBYTE)hIl2Cpp + TMPRO_TMPRO_EVENTMANAGER_ON_COMPUTE_DT_EVENT_OFFSET))(Sender, e);
		}
	};
}
