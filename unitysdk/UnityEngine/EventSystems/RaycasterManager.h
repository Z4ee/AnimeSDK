#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class BaseRaycaster; }

#define UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER_ADDRAYCASTER_OFFSET UNITYSDK_OFFSET(0x1B375520)
#define UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER_GETRAYCASTERS_OFFSET UNITYSDK_OFFSET(0x1B37D1C0)
#define UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER_REMOVERAYCASTERS_OFFSET UNITYSDK_OFFSET(0x1B3756F0)
#define UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B37D1F0)

namespace UnityEngine::EventSystems
{
	inline static constexpr unsigned int RaycasterManager_TypeDefinitionIndex = 6105;

	class RaycasterManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>** StaticGet_s_Raycasters()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>**)Il2CppClass::FromTypeDefinitionIndex(RaycasterManager_TypeDefinitionIndex)->GetStaticField(0x44FD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void AddRaycaster(::UnityEngine::EventSystems::BaseRaycaster* a1)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::BaseRaycaster*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER_ADDRAYCASTER_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>* GetRaycasters()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER_GETRAYCASTERS_OFFSET))();
		}

		static ::System::Void RemoveRaycasters(::UnityEngine::EventSystems::BaseRaycaster* a1)
		{
			return ((::System::Void(*)(::UnityEngine::EventSystems::BaseRaycaster*))((::PBYTE)hIl2Cpp + UNITYENGINE_EVENTSYSTEMS_RAYCASTERMANAGER_REMOVERAYCASTERS_OFFSET))(a1);
		}
	};
}
