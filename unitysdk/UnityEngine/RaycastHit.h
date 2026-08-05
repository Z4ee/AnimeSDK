#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_RAYCASTHIT_CALCULATERAYCASTTEXCOORD_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA8A50)
#define UNITYENGINE_RAYCASTHIT_CALCULATERAYCASTTEXCOORD_OFFSET UNITYSDK_OFFSET(0x1EDA8A10)
#define UNITYENGINE_RAYCASTHIT_COLLIDERFROMINSTANCEID_1_OFFSET UNITYSDK_OFFSET(0x1EDA9810)
#define UNITYENGINE_RAYCASTHIT_COLLIDERFROMINSTANCEID_OFFSET UNITYSDK_OFFSET(0xA7E9E0)
#define UNITYENGINE_RAYCASTHIT_GET_BARYCENTRICCOORDINATE_OFFSET UNITYSDK_OFFSET(0xA7E760)
#define UNITYENGINE_RAYCASTHIT_GET_COLLIDERTAG_OFFSET UNITYSDK_OFFSET(0x59E660)
#define UNITYENGINE_RAYCASTHIT_GET_COLLIDER_OFFSET UNITYSDK_OFFSET(0xA7E6C0)
#define UNITYENGINE_RAYCASTHIT_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0xA3F7B0)
#define UNITYENGINE_RAYCASTHIT_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x32E550)
#define UNITYENGINE_RAYCASTHIT_GET_LIGHTMAPCOORD_OFFSET UNITYSDK_OFFSET(0xA7E9D0)
#define UNITYENGINE_RAYCASTHIT_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0x457AA0)
#define UNITYENGINE_RAYCASTHIT_GET_POINT_OFFSET UNITYSDK_OFFSET(0x34AF10)
#define UNITYENGINE_RAYCASTHIT_GET_RIGIDBODY_OFFSET UNITYSDK_OFFSET(0xA7E9C0)
#define UNITYENGINE_RAYCASTHIT_GET_TEXTURECOORD1_OFFSET UNITYSDK_OFFSET(0xA7E8B0)
#define UNITYENGINE_RAYCASTHIT_GET_TEXTURECOORD2_OFFSET UNITYSDK_OFFSET(0xA7E8B0)
#define UNITYENGINE_RAYCASTHIT_GET_TEXTURECOORD_OFFSET UNITYSDK_OFFSET(0xA7E7B0)
#define UNITYENGINE_RAYCASTHIT_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xA7E9B0)
#define UNITYENGINE_RAYCASTHIT_GET_TRIANGLEINDEX_OFFSET UNITYSDK_OFFSET(0x352810)
#define UNITYENGINE_RAYCASTHIT_SET_BARYCENTRICCOORDINATE_OFFSET UNITYSDK_OFFSET(0xA7E790)
#define UNITYENGINE_RAYCASTHIT_SET_DISTANCE_OFFSET UNITYSDK_OFFSET(0xA7E7A0)
#define UNITYENGINE_RAYCASTHIT_SET_NORMAL_OFFSET UNITYSDK_OFFSET(0x7C3A50)
#define UNITYENGINE_RAYCASTHIT_SET_POINT_OFFSET UNITYSDK_OFFSET(0x34AC00)

namespace UnityEngine
{
	inline static constexpr unsigned int RaycastHit_TypeDefinitionIndex = 7788;

	struct alignas(4) RaycastHit
	{
		::UnityEngine::Vector3 m_Point; // 0x10
		::UnityEngine::Vector3 m_Normal; // 0x1C
		::System::UInt32 m_FaceID; // 0x28
		::System::Single m_Distance; // 0x2C
		::UnityEngine::Vector2 m_UV; // 0x30
		::System::Int32 m_InstanceID; // 0x38
		::System::Int32 m_Collider; // 0x3C
		::System::Int32 m_ColliderTag; // 0x40

		::UnityEngine::Collider* get_collider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_GET_COLLIDER_OFFSET))(this);
		}

		::System::Int32 get_colliderTag()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_GET_COLLIDERTAG_OFFSET))(this);
		}

		::System::Int32 get_instanceID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_GET_INSTANCEID_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_point()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_GET_POINT_OFFSET))(this);
		}

		::System::Void set_point(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_SET_POINT_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_normal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_GET_NORMAL_OFFSET))(this);
		}

		::System::Void set_normal(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_SET_NORMAL_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_barycentricCoordinate()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_GET_BARYCENTRICCOORDINATE_OFFSET))(this);
		}

		::System::Void set_barycentricCoordinate(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_SET_BARYCENTRICCOORDINATE_OFFSET))(this, value);
		}

		::System::Single get_distance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_GET_DISTANCE_OFFSET))(this);
		}

		::System::Void set_distance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_SET_DISTANCE_OFFSET))(this, value);
		}

		::System::Int32 get_triangleIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_GET_TRIANGLEINDEX_OFFSET))(this);
		}

		static ::UnityEngine::Vector2 CalculateRaycastTexCoord(::UnityEngine::Collider* collider, ::UnityEngine::Vector2 uv, ::UnityEngine::Vector3 pos, ::System::UInt32 face, ::System::Int32 textcoord)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Collider*, ::UnityEngine::Vector2, ::UnityEngine::Vector3, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_CALCULATERAYCASTTEXCOORD_OFFSET))(collider, uv, pos, face, textcoord);
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

		::UnityEngine::Collider* ColliderFromInstanceID()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_COLLIDERFROMINSTANCEID_OFFSET))(this);
		}

		static ::UnityEngine::Collider* ColliderFromInstanceID_1(::System::Int32 instanceID)
		{
			return ((::UnityEngine::Collider*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_COLLIDERFROMINSTANCEID_1_OFFSET))(instanceID);
		}

		static ::System::Void CalculateRaycastTexCoord_Injected(::UnityEngine::Collider* collider, ::UnityEngine::Vector2& uv, ::UnityEngine::Vector3& pos, ::System::UInt32 face, ::System::Int32 textcoord, ::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Collider*, ::UnityEngine::Vector2&, ::UnityEngine::Vector3&, ::System::UInt32, ::System::Int32, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RAYCASTHIT_CALCULATERAYCASTTEXCOORD_INJECTED_OFFSET))(collider, uv, pos, face, textcoord, ret);
		}
	};
}
