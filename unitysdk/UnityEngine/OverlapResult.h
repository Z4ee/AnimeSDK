#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_OVERLAPRESULT_GET_COLLIDERTAG_OFFSET UNITYSDK_OFFSET(0x424ED0)
#define UNITYENGINE_OVERLAPRESULT_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x325570)

namespace UnityEngine
{
	inline static constexpr unsigned int OverlapResult_TypeDefinitionIndex = 7787;

	struct alignas(4) OverlapResult
	{
		::System::Int32 m_InstanceID; // 0x10
		::System::Int32 m_ColliderTag; // 0x14

		::System::Int32 get_instanceID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OVERLAPRESULT_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Int32 get_colliderTag()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_OVERLAPRESULT_GET_COLLIDERTAG_OFFSET))(this);
		}
	};
}
