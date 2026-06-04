#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_GYROSCOPE_ATTITUDE_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B312950)
#define UNITYENGINE_GYROSCOPE_ATTITUDE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B312920)
#define UNITYENGINE_GYROSCOPE_GETENABLED_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B312960)
#define UNITYENGINE_GYROSCOPE_GET_ATTITUDE_OFFSET UNITYSDK_OFFSET(0x1B312A90)
#define UNITYENGINE_GYROSCOPE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1B312AC0)
#define UNITYENGINE_GYROSCOPE_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x1B312A10)
#define UNITYENGINE_GYROSCOPE_GET_ROTATIONRATEUNBIASED_OFFSET UNITYSDK_OFFSET(0x1B3129D0)
#define UNITYENGINE_GYROSCOPE_GET_ROTATIONRATE_OFFSET UNITYSDK_OFFSET(0x1B312990)
#define UNITYENGINE_GYROSCOPE_GET_USERACCELERATION_OFFSET UNITYSDK_OFFSET(0x1B312A50)
#define UNITYENGINE_GYROSCOPE_GRAVITY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3128C0)
#define UNITYENGINE_GYROSCOPE_GRAVITY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B312880)
#define UNITYENGINE_GYROSCOPE_ROTATIONRATEUNBIASED_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B312870)
#define UNITYENGINE_GYROSCOPE_ROTATIONRATEUNBIASED_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B312830)
#define UNITYENGINE_GYROSCOPE_ROTATIONRATE_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B312820)
#define UNITYENGINE_GYROSCOPE_ROTATIONRATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B3127E0)
#define UNITYENGINE_GYROSCOPE_SETENABLED_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B312970)
#define UNITYENGINE_GYROSCOPE_SETUPDATEINTERVAL_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B312980)
#define UNITYENGINE_GYROSCOPE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1B312AD0)
#define UNITYENGINE_GYROSCOPE_SET_UPDATEINTERVAL_OFFSET UNITYSDK_OFFSET(0x1B312AE0)
#define UNITYENGINE_GYROSCOPE_USERACCELERATION_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B312910)
#define UNITYENGINE_GYROSCOPE_USERACCELERATION_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B3128D0)
#define UNITYENGINE_GYROSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3127D0)

namespace UnityEngine
{
	inline static constexpr unsigned int Gyroscope_TypeDefinitionIndex = 5256;

	class Gyroscope : public ::System::Object
	{
	public:
		::System::Int32 m_GyroIndex; // 0x10

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE__CTOR_OFFSET))(this, a1);
		}

		static ::UnityEngine::Vector3 rotationRate_Internal(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_ROTATIONRATE_INTERNAL_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 rotationRateUnbiased_Internal(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_ROTATIONRATEUNBIASED_INTERNAL_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 gravity_Internal(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_GRAVITY_INTERNAL_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 userAcceleration_Internal(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_USERACCELERATION_INTERNAL_OFFSET))(a1);
		}

		static ::UnityEngine::Quaternion attitude_Internal(::System::Int32 a1)
		{
			return ((::UnityEngine::Quaternion(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_ATTITUDE_INTERNAL_OFFSET))(a1);
		}

		static ::System::Boolean getEnabled_Internal(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_GETENABLED_INTERNAL_OFFSET))(a1);
		}

		static ::System::Void setEnabled_Internal(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_SETENABLED_INTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Void setUpdateInterval_Internal(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_SETUPDATEINTERVAL_INTERNAL_OFFSET))(a1, a2);
		}

		::UnityEngine::Vector3 get_rotationRate()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_GET_ROTATIONRATE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_rotationRateUnbiased()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_GET_ROTATIONRATEUNBIASED_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_gravity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_GET_GRAVITY_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_userAcceleration()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_GET_USERACCELERATION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_attitude()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_GET_ATTITUDE_OFFSET))(this);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_SET_ENABLED_OFFSET))(this, a1);
		}

		::System::Void set_updateInterval(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_SET_UPDATEINTERVAL_OFFSET))(this, a1);
		}

		static ::System::Void rotationRate_Internal_Injected(::System::Int32 a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_ROTATIONRATE_INTERNAL_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void rotationRateUnbiased_Internal_Injected(::System::Int32 a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_ROTATIONRATEUNBIASED_INTERNAL_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void gravity_Internal_Injected(::System::Int32 a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_GRAVITY_INTERNAL_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void userAcceleration_Internal_Injected(::System::Int32 a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_USERACCELERATION_INTERNAL_INJECTED_OFFSET))(a1, a2);
		}

		static ::System::Void attitude_Internal_Injected(::System::Int32 a1, ::UnityEngine::Quaternion& a2)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_ATTITUDE_INTERNAL_INJECTED_OFFSET))(a1, a2);
		}
	};
}
