#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_RAYCASTHIT_CALCULATERAYCASTTEXCOORD_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33E810)
#define UNITYENGINE_RAYCASTHIT_CALCULATERAYCASTTEXCOORD_OFFSET UNITYSDK_OFFSET(0x1B33E7D0)
#define UNITYENGINE_RAYCASTHIT_GET_BARYCENTRICCOORDINATE_OFFSET UNITYSDK_OFFSET(0x3898A20)
#define UNITYENGINE_RAYCASTHIT_GET_COLLIDERID_OFFSET UNITYSDK_OFFSET(0x112A0)
#define UNITYENGINE_RAYCASTHIT_GET_COLLIDER_OFFSET UNITYSDK_OFFSET(0x38989C0)
#define UNITYENGINE_RAYCASTHIT_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x3846C70)
#define UNITYENGINE_RAYCASTHIT_GET_ISWALKABLE_OFFSET UNITYSDK_OFFSET(0x3873DB0)
#define UNITYENGINE_RAYCASTHIT_GET_LIGHTMAPCOORD_OFFSET UNITYSDK_OFFSET(0x3898C50)
#define UNITYENGINE_RAYCASTHIT_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0x25370)
#define UNITYENGINE_RAYCASTHIT_GET_POINT_OFFSET UNITYSDK_OFFSET(0x25350)
#define UNITYENGINE_RAYCASTHIT_GET_RIGIDBODY_OFFSET UNITYSDK_OFFSET(0x3898BB0)
#define UNITYENGINE_RAYCASTHIT_GET_TEXTURECOORD1_OFFSET UNITYSDK_OFFSET(0x3898B00)
#define UNITYENGINE_RAYCASTHIT_GET_TEXTURECOORD2_OFFSET UNITYSDK_OFFSET(0x3898B00)
#define UNITYENGINE_RAYCASTHIT_GET_TEXTURECOORD_OFFSET UNITYSDK_OFFSET(0x3898A60)
#define UNITYENGINE_RAYCASTHIT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x3898BA0)
#define UNITYENGINE_RAYCASTHIT_GET_TRIANGLEINDEX_OFFSET UNITYSDK_OFFSET(0x63E0)
#define UNITYENGINE_RAYCASTHIT_SET_BARYCENTRICCOORDINATE_OFFSET UNITYSDK_OFFSET(0x3898A50)
#define UNITYENGINE_RAYCASTHIT_SET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x3872DE0)
#define UNITYENGINE_RAYCASTHIT_SET_NORMAL_OFFSET UNITYSDK_OFFSET(0x13E060)
#define UNITYENGINE_RAYCASTHIT_SET_POINT_OFFSET UNITYSDK_OFFSET(0x1F70430)

namespace UnityEngine
{
	inline static constexpr unsigned int RaycastHit_TypeDefinitionIndex = 5300;

	struct alignas(4) RaycastHit
	{
		::UnityEngine::Vector3 m_Point; // 0x10
		::UnityEngine::Vector3 m_Normal; // 0x1C
		::System::UInt32 m_FaceID; // 0x28
		::System::Single m_Distance; // 0x2C
		::UnityEngine::Vector2 m_UV; // 0x30
		::System::Int32 m_Collider; // 0x38
		::System::Boolean m_IsWalkable; // 0x3C

		::UnityEngine::Collider* get_collider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_GET_COLLIDER_OFFSET))(this);
		}

		::System::Int32 get_colliderID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_GET_COLLIDERID_OFFSET))(this);
		}

		::System::Boolean get_isWalkable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_GET_ISWALKABLE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_point()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_GET_POINT_OFFSET))(this);
		}

		::System::Void set_point(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_SET_POINT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_normal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_GET_NORMAL_OFFSET))(this);
		}

		::System::Void set_normal(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_SET_NORMAL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_barycentricCoordinate()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_GET_BARYCENTRICCOORDINATE_OFFSET))(this);
		}

		::System::Void set_barycentricCoordinate(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_SET_BARYCENTRICCOORDINATE_OFFSET))(this, a1);
		}

		::System::Single get_distance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_GET_DISTANCE_OFFSET))(this);
		}

		::System::Void set_distance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_SET_DISTANCE_OFFSET))(this, a1);
		}

		::System::Int32 get_triangleIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_GET_TRIANGLEINDEX_OFFSET))(this);
		}

		static ::UnityEngine::Vector2 CalculateRaycastTexCoord(::UnityEngine::Collider* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector3 a3, ::System::UInt32 a4, ::System::Int32 a5)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Collider*, ::UnityEngine::Vector2, ::UnityEngine::Vector3, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_CALCULATERAYCASTTEXCOORD_OFFSET))(a1, a2, a3, a4, a5);
		}

		::UnityEngine::Vector2 get_textureCoord()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_GET_TEXTURECOORD_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_textureCoord2()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_GET_TEXTURECOORD2_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_textureCoord1()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_GET_TEXTURECOORD1_OFFSET))(this);
		}

		::UnityEngine::Transform* get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_GET_TRANSFORM_OFFSET))(this);
		}

		::UnityEngine::Rigidbody* get_rigidbody()
		{
			return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_GET_RIGIDBODY_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_lightmapCoord()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_GET_LIGHTMAPCOORD_OFFSET))(this);
		}

		static ::System::Void CalculateRaycastTexCoord_Injected(::UnityEngine::Collider* a1, ::UnityEngine::Vector2& a2, ::UnityEngine::Vector3& a3, ::System::UInt32 a4, ::System::Int32 a5, ::UnityEngine::Vector2& a6)
		{
			return ((::System::Void(*)(::UnityEngine::Collider*, ::UnityEngine::Vector2&, ::UnityEngine::Vector3&, ::System::UInt32, ::System::Int32, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_CALCULATERAYCASTTEXCOORD_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
	};
}
