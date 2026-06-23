#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/EColliderType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_COLLIDERSNAPSHOT_GET_CENTER_OFFSET UNITYSDK_OFFSET(0x46E4D0)
#define UNITYENGINE_COLLIDERSNAPSHOT_GET_DIRECTION_OFFSET UNITYSDK_OFFSET(0x3EA3D0)
#define UNITYENGINE_COLLIDERSNAPSHOT_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x3EA130)
#define UNITYENGINE_COLLIDERSNAPSHOT_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x416EC0)
#define UNITYENGINE_COLLIDERSNAPSHOT_GET_SIZE_OFFSET UNITYSDK_OFFSET(0xA2C7F0)
#define UNITYENGINE_COLLIDERSNAPSHOT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x2B68B0)

namespace UnityEngine
{
	inline static constexpr unsigned int ColliderSnapshot_TypeDefinitionIndex = 7714;

	struct alignas(4) ColliderSnapshot
	{
		::UnityEngine::EColliderType m_Type; // 0x10
		::System::Int32 m_Direction; // 0x14
		::System::Single m_Radius; // 0x18
		::System::Single m_Distance; // 0x1C
		::System::Single m_Height; // 0x20
		::UnityEngine::Vector3 m_Center; // 0x24
		::UnityEngine::Vector3 m_Size; // 0x30

		::UnityEngine::EColliderType get_type()
		{
			return ((::UnityEngine::EColliderType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDERSNAPSHOT_GET_TYPE_OFFSET))(this);
		}

		::System::Int32 get_direction()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDERSNAPSHOT_GET_DIRECTION_OFFSET))(this);
		}

		::System::Single get_radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDERSNAPSHOT_GET_RADIUS_OFFSET))(this);
		}

		::System::Single get_height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDERSNAPSHOT_GET_HEIGHT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_center()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDERSNAPSHOT_GET_CENTER_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_size()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COLLIDERSNAPSHOT_GET_SIZE_OFFSET))(this);
		}
	};
}
