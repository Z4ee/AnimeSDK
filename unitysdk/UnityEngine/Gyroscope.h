#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_GYROSCOPE_ATTITUDE_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4C4550)
#define UNITYENGINE_GYROSCOPE_ATTITUDE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4C4520)
#define UNITYENGINE_GYROSCOPE_GETENABLED_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4C4560)
#define UNITYENGINE_GYROSCOPE_GET_ATTITUDE_OFFSET UNITYSDK_OFFSET(0x1A4C4690)
#define UNITYENGINE_GYROSCOPE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1A4C46C0)
#define UNITYENGINE_GYROSCOPE_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x1A4C4610)
#define UNITYENGINE_GYROSCOPE_GET_ROTATIONRATEUNBIASED_OFFSET UNITYSDK_OFFSET(0x1A4C45D0)
#define UNITYENGINE_GYROSCOPE_GET_ROTATIONRATE_OFFSET UNITYSDK_OFFSET(0x1A4C4590)
#define UNITYENGINE_GYROSCOPE_GET_USERACCELERATION_OFFSET UNITYSDK_OFFSET(0x1A4C4650)
#define UNITYENGINE_GYROSCOPE_GRAVITY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4C44C0)
#define UNITYENGINE_GYROSCOPE_GRAVITY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4C4480)
#define UNITYENGINE_GYROSCOPE_ROTATIONRATEUNBIASED_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4C4470)
#define UNITYENGINE_GYROSCOPE_ROTATIONRATEUNBIASED_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4C4430)
#define UNITYENGINE_GYROSCOPE_ROTATIONRATE_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4C4420)
#define UNITYENGINE_GYROSCOPE_ROTATIONRATE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4C43E0)
#define UNITYENGINE_GYROSCOPE_SETENABLED_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4C4570)
#define UNITYENGINE_GYROSCOPE_SETUPDATEINTERVAL_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4C4580)
#define UNITYENGINE_GYROSCOPE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1A4C46D0)
#define UNITYENGINE_GYROSCOPE_SET_UPDATEINTERVAL_OFFSET UNITYSDK_OFFSET(0x1A4C46E0)
#define UNITYENGINE_GYROSCOPE_USERACCELERATION_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4C4510)
#define UNITYENGINE_GYROSCOPE_USERACCELERATION_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4C44D0)
#define UNITYENGINE_GYROSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C43D0)

namespace UnityEngine
{
	inline static constexpr unsigned int Gyroscope_TypeDefinitionIndex = 5162;

	class Gyroscope : public ::System::Object
	{
	public:
		::System::Int32 m_GyroIndex; // 0x10

		::System::Void _ctor(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE__CTOR_OFFSET))(this, index);
		}

		static ::UnityEngine::Vector3 rotationRate_Internal(::System::Int32 idx)
		{
			return ((::UnityEngine::Vector3(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_ROTATIONRATE_INTERNAL_OFFSET))(idx);
		}

		static ::UnityEngine::Vector3 rotationRateUnbiased_Internal(::System::Int32 idx)
		{
			return ((::UnityEngine::Vector3(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_ROTATIONRATEUNBIASED_INTERNAL_OFFSET))(idx);
		}

		static ::UnityEngine::Vector3 gravity_Internal(::System::Int32 idx)
		{
			return ((::UnityEngine::Vector3(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_GRAVITY_INTERNAL_OFFSET))(idx);
		}

		static ::UnityEngine::Vector3 userAcceleration_Internal(::System::Int32 idx)
		{
			return ((::UnityEngine::Vector3(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_USERACCELERATION_INTERNAL_OFFSET))(idx);
		}

		static ::UnityEngine::Quaternion attitude_Internal(::System::Int32 idx)
		{
			return ((::UnityEngine::Quaternion(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_ATTITUDE_INTERNAL_OFFSET))(idx);
		}

		static ::System::Boolean getEnabled_Internal(::System::Int32 idx)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_GETENABLED_INTERNAL_OFFSET))(idx);
		}

		static ::System::Void setEnabled_Internal(::System::Int32 idx, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_SETENABLED_INTERNAL_OFFSET))(idx, enabled);
		}

		static ::System::Void setUpdateInterval_Internal(::System::Int32 idx, ::System::Single interval)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_SETUPDATEINTERVAL_INTERNAL_OFFSET))(idx, interval);
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

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Void set_updateInterval(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_SET_UPDATEINTERVAL_OFFSET))(this, value);
		}

		static ::System::Void rotationRate_Internal_Injected(::System::Int32 idx, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_ROTATIONRATE_INTERNAL_INJECTED_OFFSET))(idx, ret);
		}

		static ::System::Void rotationRateUnbiased_Internal_Injected(::System::Int32 idx, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_ROTATIONRATEUNBIASED_INTERNAL_INJECTED_OFFSET))(idx, ret);
		}

		static ::System::Void gravity_Internal_Injected(::System::Int32 idx, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_GRAVITY_INTERNAL_INJECTED_OFFSET))(idx, ret);
		}

		static ::System::Void userAcceleration_Internal_Injected(::System::Int32 idx, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_USERACCELERATION_INTERNAL_INJECTED_OFFSET))(idx, ret);
		}

		static ::System::Void attitude_Internal_Injected(::System::Int32 idx, ::UnityEngine::Quaternion& ret)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_ATTITUDE_INTERNAL_INJECTED_OFFSET))(idx, ret);
		}
	};
}
