#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x110A3E20)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTMANAGER_REGISTERLIGHT_OFFSET UNITYSDK_OFFSET(0x110A3F40)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTMANAGER_TRIGGERNIGHTLIGHT_OFFSET UNITYSDK_OFFSET(0x110A40A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTMANAGER_UNREGISTERLIGHT_OFFSET UNITYSDK_OFFSET(0x110A3FF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x110A3DA0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightManager_TypeDefinitionIndex = 27742;

	class LightManager : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::LightManager** StaticGet__instance()
		{
			return (::UnityEngine::Rendering::Universal::LightManager**)Il2CppClass::FromTypeDefinitionIndex(LightManager_TypeDefinitionIndex)->GetStaticField(0x23B20);
		}
		::System::Collections::Generic::List_1<::UnityEngine::Light*>* m_LightList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTMANAGER__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Rendering::Universal::LightManager* get_instance()
		{
			return ((::UnityEngine::Rendering::Universal::LightManager*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void RegisterLight(::UnityEngine::Light* light)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTMANAGER_REGISTERLIGHT_OFFSET))(this, light);
		}

		::System::Void UnRegisterLight(::UnityEngine::Light* light)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTMANAGER_UNREGISTERLIGHT_OFFSET))(this, light);
		}

		::System::Void TriggerNightLight(::System::Boolean isNight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTMANAGER_TRIGGERNIGHTLIGHT_OFFSET))(this, isNight);
		}
	};
}
