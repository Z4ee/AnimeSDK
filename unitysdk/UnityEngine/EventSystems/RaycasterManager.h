#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class BaseRaycaster; }

#define UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER_ADDRAYCASTER_OFFSET UNITYSDK_OFFSET(0x1B95ADD0)
#define UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER_GETRAYCASTERS_OFFSET UNITYSDK_OFFSET(0x1B95AF00)
#define UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER_REMOVERAYCASTERS_OFFSET UNITYSDK_OFFSET(0x1B95AF80)
#define UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B95B0B0)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int RaycasterManager_TypeDefinitionIndex = 8548;

	class RaycasterManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>** StaticGet_s_Raycasters()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>**)Il2CppClass::FromTypeDefinitionIndex(RaycasterManager_TypeDefinitionIndex)->GetStaticField(0x77C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void AddRaycaster(::UnityEngine::EventSystems::BaseRaycaster* baseRaycaster)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::BaseRaycaster*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER_ADDRAYCASTER_OFFSET))(baseRaycaster);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>* GetRaycasters()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER_GETRAYCASTERS_OFFSET))();
		}

		static ::System::Void RemoveRaycasters(::UnityEngine::EventSystems::BaseRaycaster* baseRaycaster)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::BaseRaycaster*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER_REMOVERAYCASTERS_OFFSET))(baseRaycaster);
		}
	};
}
