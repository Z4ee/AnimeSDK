#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Collider.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_CAPSULECOLLIDER_CALCULATETRANSFORM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D9120)
#define UNITYENGINE_CAPSULECOLLIDER_CALCULATETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A4D90C0)
#define UNITYENGINE_CAPSULECOLLIDER_GETGLOBALEXTENTS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D90B0)
#define UNITYENGINE_CAPSULECOLLIDER_GETGLOBALEXTENTS_OFFSET UNITYSDK_OFFSET(0x1A4D9080)
#define UNITYENGINE_CAPSULECOLLIDER_GET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D8FF0)
#define UNITYENGINE_CAPSULECOLLIDER_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x1A4D8FA0)
#define UNITYENGINE_CAPSULECOLLIDER_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1A4D9060)
#define UNITYENGINE_CAPSULECOLLIDER_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1A4D9040)
#define UNITYENGINE_CAPSULECOLLIDER_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1A4D9020)
#define UNITYENGINE_CAPSULECOLLIDER_SET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D9010)
#define UNITYENGINE_CAPSULECOLLIDER_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x1A4D9000)
#define UNITYENGINE_CAPSULECOLLIDER_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1A4D9070)
#define UNITYENGINE_CAPSULECOLLIDER_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1A4D9050)
#define UNITYENGINE_CAPSULECOLLIDER_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1A4D9030)
#define UNITYENGINE_CAPSULECOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4D9130)

namespace UnityEngine
{
	inline static constexpr unsigned int CapsuleCollider_TypeDefinitionIndex = 5230;

	class CapsuleCollider : public ::UnityEngine::Collider
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_center()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_GET_CENTER_OFFSET))(this);
		}

		::System::Void set_center(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_SET_CENTER_OFFSET))(this, value);
		}

		::System::Single get_radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_radius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_SET_RADIUS_OFFSET))(this, value);
		}

		::System::Single get_height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_height(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_SET_HEIGHT_OFFSET))(this, value);
		}

		::System::Int32 get_direction()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_GET_DIRECTION_OFFSET))(this);
		}

		::System::Void set_direction(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_SET_DIRECTION_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 GetGlobalExtents()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_GETGLOBALEXTENTS_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 CalculateTransform()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_CALCULATETRANSFORM_OFFSET))(this);
		}

		::System::Void get_center_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_GET_CENTER_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_center_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_SET_CENTER_INJECTED_OFFSET))(this, value);
		}

		::System::Void GetGlobalExtents_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_GETGLOBALEXTENTS_INJECTED_OFFSET))(this, ret);
		}

		::System::Void CalculateTransform_Injected(::UnityEngine::Matrix4x4& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_CALCULATETRANSFORM_INJECTED_OFFSET))(this, ret);
		}
	};
}
