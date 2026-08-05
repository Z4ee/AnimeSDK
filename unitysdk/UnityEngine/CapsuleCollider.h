#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Collider.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_CAPSULECOLLIDER_CALCULATETRANSFORM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED9C870)
#define UNITYENGINE_CAPSULECOLLIDER_CALCULATETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1ED9C810)
#define UNITYENGINE_CAPSULECOLLIDER_GETGLOBALEXTENTS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED9C800)
#define UNITYENGINE_CAPSULECOLLIDER_GETGLOBALEXTENTS_OFFSET UNITYSDK_OFFSET(0x1ED9C7D0)
#define UNITYENGINE_CAPSULECOLLIDER_GET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED9C740)
#define UNITYENGINE_CAPSULECOLLIDER_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x1ED9C6F0)
#define UNITYENGINE_CAPSULECOLLIDER_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1ED9C7B0)
#define UNITYENGINE_CAPSULECOLLIDER_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1ED9C790)
#define UNITYENGINE_CAPSULECOLLIDER_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1ED9C770)
#define UNITYENGINE_CAPSULECOLLIDER_SET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1ED9C760)
#define UNITYENGINE_CAPSULECOLLIDER_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x1ED9C750)
#define UNITYENGINE_CAPSULECOLLIDER_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1ED9C7C0)
#define UNITYENGINE_CAPSULECOLLIDER_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1ED9C7A0)
#define UNITYENGINE_CAPSULECOLLIDER_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1ED9C780)
#define UNITYENGINE_CAPSULECOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED9C880)

namespace UnityEngine
{
	inline static constexpr unsigned int CapsuleCollider_TypeDefinitionIndex = 7795;

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
