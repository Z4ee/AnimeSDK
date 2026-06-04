#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Collider.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_CAPSULECOLLIDER_CALCULATETRANSFORM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B326C70)
#define UNITYENGINE_CAPSULECOLLIDER_CALCULATETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B326C10)
#define UNITYENGINE_CAPSULECOLLIDER_GETGLOBALEXTENTS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B326C00)
#define UNITYENGINE_CAPSULECOLLIDER_GETGLOBALEXTENTS_OFFSET UNITYSDK_OFFSET(0x1B326BD0)
#define UNITYENGINE_CAPSULECOLLIDER_GET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B326B40)
#define UNITYENGINE_CAPSULECOLLIDER_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x1B326AF0)
#define UNITYENGINE_CAPSULECOLLIDER_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1B326BB0)
#define UNITYENGINE_CAPSULECOLLIDER_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1B326B90)
#define UNITYENGINE_CAPSULECOLLIDER_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1B326B70)
#define UNITYENGINE_CAPSULECOLLIDER_SET_CENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B326B60)
#define UNITYENGINE_CAPSULECOLLIDER_SET_CENTER_OFFSET UNITYSDK_OFFSET(0x1B326B50)
#define UNITYENGINE_CAPSULECOLLIDER_SET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x1B326BC0)
#define UNITYENGINE_CAPSULECOLLIDER_SET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1B326BA0)
#define UNITYENGINE_CAPSULECOLLIDER_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x1B326B80)
#define UNITYENGINE_CAPSULECOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B326C80)

namespace UnityEngine
{
	inline static constexpr unsigned int CapsuleCollider_TypeDefinitionIndex = 5306;

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

		::System::Void set_center(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_SET_CENTER_OFFSET))(this, a1);
		}

		::System::Single get_radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_radius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_SET_RADIUS_OFFSET))(this, a1);
		}

		::System::Single get_height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void set_height(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_SET_HEIGHT_OFFSET))(this, a1);
		}

		::System::Int32 get_direction()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_GET_DIRECTION_OFFSET))(this);
		}

		::System::Void set_direction(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_SET_DIRECTION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GetGlobalExtents()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_GETGLOBALEXTENTS_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 CalculateTransform()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_CALCULATETRANSFORM_OFFSET))(this);
		}

		::System::Void get_center_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_GET_CENTER_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_center_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_SET_CENTER_INJECTED_OFFSET))(this, a1);
		}

		::System::Void GetGlobalExtents_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_GETGLOBALEXTENTS_INJECTED_OFFSET))(this, a1);
		}

		::System::Void CalculateTransform_Injected(::UnityEngine::Matrix4x4& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_CAPSULECOLLIDER_CALCULATETRANSFORM_INJECTED_OFFSET))(this, a1);
		}
	};
}
