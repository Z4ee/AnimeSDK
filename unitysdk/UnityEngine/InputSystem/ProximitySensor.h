#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Sensor.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }

#define UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1E01F640)
#define UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E01F5F0)
#define UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1E01F5D0)
#define UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x1E01F610)
#define UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1E01F620)
#define UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E01F600)
#define UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_SET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1E01F5E0)
#define UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E01F690)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int ProximitySensor_TypeDefinitionIndex = 31673;

	class ProximitySensor : public ::UnityEngine::InputSystem::Sensor
	{
	public:
		static ::UnityEngine::InputSystem::ProximitySensor** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::ProximitySensor**)Il2CppClass::FromTypeDefinitionIndex(ProximitySensor_TypeDefinitionIndex)->GetStaticField(0x26550);
		}
		::UnityEngine::InputSystem::Controls::AxisControl* _distance_k__BackingField; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_distance()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_GET_DISTANCE_OFFSET))(this);
		}

		::System::Void set_distance(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_SET_DISTANCE_OFFSET))(this, value);
		}

		static ::UnityEngine::InputSystem::ProximitySensor* get_current()
		{
			return ((::UnityEngine::InputSystem::ProximitySensor*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::ProximitySensor* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::ProximitySensor*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_SET_CURRENT_OFFSET))(value);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_MAKECURRENT_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_ONREMOVED_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PROXIMITYSENSOR_FINISHSETUP_OFFSET))(this);
		}
	};
}
