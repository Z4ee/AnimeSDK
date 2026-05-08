#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_GYROSCOPE_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x1C4DDD50)
#define UNITYENGINE_GYROSCOPE_GRAVITY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C4DDD30)
#define UNITYENGINE_GYROSCOPE_GRAVITY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C4DDCF0)
#define UNITYENGINE_GYROSCOPE_SETENABLED_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C4DDD40)
#define UNITYENGINE_GYROSCOPE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1C4DDD90)
#define UNITYENGINE_GYROSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4DDCE0)

namespace UnityEngine
{
	inline static constexpr unsigned int Gyroscope_TypeDefinitionIndex = 7612;

	class Gyroscope : public ::System::Object
	{
	public:
		::System::Int32 m_GyroIndex; // 0x10

		::System::Void _ctor(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE__CTOR_OFFSET))(this, index);
		}

		static ::UnityEngine::Vector3 gravity_Internal(::System::Int32 idx)
		{
			return ((::UnityEngine::Vector3(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_GRAVITY_INTERNAL_OFFSET))(idx);
		}

		static ::System::Void setEnabled_Internal(::System::Int32 idx, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_SETENABLED_INTERNAL_OFFSET))(idx, enabled);
		}

		::UnityEngine::Vector3 get_gravity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_GET_GRAVITY_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_SET_ENABLED_OFFSET))(this, value);
		}

		static ::System::Void gravity_Internal_Injected(::System::Int32 idx, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_GYROSCOPE_GRAVITY_INTERNAL_INJECTED_OFFSET))(idx, ret);
		}
	};
}
