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

#define TMPRO_TMPRO_EVENTMANAGER_ON_COLOR_GRADIENT_PROPERTY_CHANGED_OFFSET UNITYSDK_OFFSET(0x1FBAEF20)
#define TMPRO_TMPRO_EVENTMANAGER_ON_COMPUTE_DT_EVENT_OFFSET UNITYSDK_OFFSET(0x1FBAF290)
#define TMPRO_TMPRO_EVENTMANAGER_ON_DRAG_AND_DROP_MATERIAL_CHANGED_OFFSET UNITYSDK_OFFSET(0x1FBAED60)
#define TMPRO_TMPRO_EVENTMANAGER_ON_FONT_PROPERTY_CHANGED_OFFSET UNITYSDK_OFFSET(0x1FBAEBB0)
#define TMPRO_TMPRO_EVENTMANAGER_ON_MATERIAL_PROPERTY_CHANGED_OFFSET UNITYSDK_OFFSET(0x1FBAEB20)
#define TMPRO_TMPRO_EVENTMANAGER_ON_RESOURCES_LOADED_OFFSET UNITYSDK_OFFSET(0x1FBAF120)
#define TMPRO_TMPRO_EVENTMANAGER_ON_SPRITE_ASSET_PROPERTY_CHANGED_OFFSET UNITYSDK_OFFSET(0x1FBAEC40)
#define TMPRO_TMPRO_EVENTMANAGER_ON_TEXTMESHPRO_PROPERTY_CHANGED_OFFSET UNITYSDK_OFFSET(0x1FBAECD0)
#define TMPRO_TMPRO_EVENTMANAGER_ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED_OFFSET UNITYSDK_OFFSET(0x1FBAF200)
#define TMPRO_TMPRO_EVENTMANAGER_ON_TEXT_CHANGED_OFFSET UNITYSDK_OFFSET(0x1FBAEFB0)
#define TMPRO_TMPRO_EVENTMANAGER_ON_TEXT_STYLE_PROPERTY_CHANGED_OFFSET UNITYSDK_OFFSET(0x1FBAEE00)
#define TMPRO_TMPRO_EVENTMANAGER_ON_TMP_SETTINGS_CHANGED_OFFSET UNITYSDK_OFFSET(0x1FBAF040)
#define TMPRO_TMPRO_EVENTMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBAF320)

namespace TMPro
{
	inline static constexpr unsigned int TMPro_EventManager_TypeDefinitionIndex = 39900;

	class TMPro_EventManager : public ::System::Object
	{
	public:
		static ::TMPro::FastAction_1<::System::Boolean>** StaticGet_TEXT_STYLE_PROPERTY_EVENT()
		{
			return (::TMPro::FastAction_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x2C650);
		}
		static ::TMPro::FastAction** StaticGet_RESOURCE_LOAD_EVENT()
		{
			return (::TMPro::FastAction**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x2C658);
		}
		static ::TMPro::FastAction_1<::UnityEngine::Object*>** StaticGet_COLOR_GRADIENT_PROPERTY_EVENT()
		{
			return (::TMPro::FastAction_1<::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x2C660);
		}
		static ::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Object*>** StaticGet_TEXTMESHPRO_PROPERTY_EVENT()
		{
			return (::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x2C668);
		}
		static ::TMPro::FastAction_1<::UnityEngine::Object*>** StaticGet_TEXT_CHANGED_EVENT()
		{
			return (::TMPro::FastAction_1<::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x2C670);
		}
		static ::TMPro::FastAction** StaticGet_TMP_SETTINGS_PROPERTY_EVENT()
		{
			return (::TMPro::FastAction**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x2C678);
		}
		static ::TMPro::FastAction_2<::System::Object*, ::TMPro::Compute_DT_EventArgs*>** StaticGet_COMPUTE_DT_EVENT()
		{
			return (::TMPro::FastAction_2<::System::Object*, ::TMPro::Compute_DT_EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x2C680);
		}
		static ::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Object*>** StaticGet_TEXTMESHPRO_UGUI_PROPERTY_EVENT()
		{
			return (::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x2C688);
		}
		static ::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Material*>** StaticGet_MATERIAL_PROPERTY_EVENT()
		{
			return (::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x2C690);
		}
		static ::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Object*>** StaticGet_FONT_PROPERTY_EVENT()
		{
			return (::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x2C698);
		}
		static ::TMPro::FastAction_3<::UnityEngine::GameObject*, ::UnityEngine::Material*, ::UnityEngine::Material*>** StaticGet_DRAG_AND_DROP_MATERIAL_EVENT()
		{
			return (::TMPro::FastAction_3<::UnityEngine::GameObject*, ::UnityEngine::Material*, ::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x2C6A0);
		}
		static ::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Object*>** StaticGet_SPRITE_ASSET_PROPERTY_EVENT()
		{
			return (::TMPro::FastAction_2<::System::Boolean, ::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(TMPro_EventManager_TypeDefinitionIndex)->GetStaticField(0x2C6A8);
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
