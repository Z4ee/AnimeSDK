#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class Rigidbody2D; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_RAYCASTHIT2D_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9AEA50)
#define UNITYENGINE_RAYCASTHIT2D_GET_CENTROID_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define UNITYENGINE_RAYCASTHIT2D_GET_COLLIDER_OFFSET UNITYSDK_OFFSET(0x9AE990)
#define UNITYENGINE_RAYCASTHIT2D_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x7D0AF0)
#define UNITYENGINE_RAYCASTHIT2D_GET_FRACTION_OFFSET UNITYSDK_OFFSET(0x94D150)
#define UNITYENGINE_RAYCASTHIT2D_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0x381840)
#define UNITYENGINE_RAYCASTHIT2D_GET_POINT_OFFSET UNITYSDK_OFFSET(0x28B580)
#define UNITYENGINE_RAYCASTHIT2D_GET_RIGIDBODY_OFFSET UNITYSDK_OFFSET(0x9AEA30)
#define UNITYENGINE_RAYCASTHIT2D_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x9AEA40)
#define UNITYENGINE_RAYCASTHIT2D_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1BC52300)
#define UNITYENGINE_RAYCASTHIT2D_SET_CENTROID_OFFSET UNITYSDK_OFFSET(0x2E5940)
#define UNITYENGINE_RAYCASTHIT2D_SET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x7D0B00)
#define UNITYENGINE_RAYCASTHIT2D_SET_FRACTION_OFFSET UNITYSDK_OFFSET(0x98D1E0)
#define UNITYENGINE_RAYCASTHIT2D_SET_NORMAL_OFFSET UNITYSDK_OFFSET(0x381850)
#define UNITYENGINE_RAYCASTHIT2D_SET_POINT_OFFSET UNITYSDK_OFFSET(0x381830)

namespace UnityEngine
{
	inline static constexpr unsigned int RaycastHit2D_TypeDefinitionIndex = 7634;

	struct alignas(4) RaycastHit2D
	{
		::UnityEngine::Vector2 m_Centroid; // 0x10
		::UnityEngine::Vector2 m_Point; // 0x18
		::UnityEngine::Vector2 m_Normal; // 0x20
		::System::Single m_Distance; // 0x28
		::System::Single m_Fraction; // 0x2C
		::System::Int32 m_Collider; // 0x30

		::UnityEngine::Vector2 get_centroid()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT2D_GET_CENTROID_OFFSET))(this);
		}

		::System::Void set_centroid(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT2D_SET_CENTROID_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_point()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT2D_GET_POINT_OFFSET))(this);
		}

		::System::Void set_point(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT2D_SET_POINT_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_normal()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT2D_GET_NORMAL_OFFSET))(this);
		}

		::System::Void set_normal(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT2D_SET_NORMAL_OFFSET))(this, value);
		}

		::System::Single get_distance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT2D_GET_DISTANCE_OFFSET))(this);
		}

		::System::Void set_distance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT2D_SET_DISTANCE_OFFSET))(this, value);
		}

		::System::Single get_fraction()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT2D_GET_FRACTION_OFFSET))(this);
		}

		::System::Void set_fraction(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT2D_SET_FRACTION_OFFSET))(this, value);
		}

		::UnityEngine::Collider2D* get_collider()
		{
			return ((::UnityEngine::Collider2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT2D_GET_COLLIDER_OFFSET))(this);
		}

		::UnityEngine::Rigidbody2D* get_rigidbody()
		{
			return ((::UnityEngine::Rigidbody2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT2D_GET_RIGIDBODY_OFFSET))(this);
		}

		::UnityEngine::Transform* get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT2D_GET_TRANSFORM_OFFSET))(this);
		}

		static ::System::Boolean op_Implicit(::UnityEngine::RaycastHit2D hit)
		{
			return ((::System::Boolean(*)(::UnityEngine::RaycastHit2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT2D_OP_IMPLICIT_OFFSET))(hit);
		}

		::System::Int32 CompareTo(::UnityEngine::RaycastHit2D other)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::RaycastHit2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT2D_COMPARETO_OFFSET))(this, other);
		}
	};
}
