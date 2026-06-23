#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Sensor.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }

#define UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1D752470)
#define UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D752420)
#define UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_GET_RELATIVEHUMIDITY_OFFSET UNITYSDK_OFFSET(0x1D752400)
#define UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x1D752440)
#define UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1D752450)
#define UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1D752430)
#define UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_SET_RELATIVEHUMIDITY_OFFSET UNITYSDK_OFFSET(0x1D752410)
#define UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7524C0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int HumiditySensor_TypeDefinitionIndex = 31674;

	class HumiditySensor : public ::UnityEngine::InputSystem::Sensor
	{
	public:
		static ::UnityEngine::InputSystem::HumiditySensor** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::HumiditySensor**)Il2CppClass::FromTypeDefinitionIndex(HumiditySensor_TypeDefinitionIndex)->GetStaticField(0x25E40);
		}
		::UnityEngine::InputSystem::Controls::AxisControl* _relativeHumidity_k__BackingField; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_relativeHumidity()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_GET_RELATIVEHUMIDITY_OFFSET))(this);
		}

		::System::Void set_relativeHumidity(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_SET_RELATIVEHUMIDITY_OFFSET))(this, value);
		}

		static ::UnityEngine::InputSystem::HumiditySensor* get_current()
		{
			return ((::UnityEngine::InputSystem::HumiditySensor*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::HumiditySensor* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::HumiditySensor*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_SET_CURRENT_OFFSET))(value);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_MAKECURRENT_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_ONREMOVED_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HUMIDITYSENSOR_FINISHSETUP_OFFSET))(this);
		}
	};
}
