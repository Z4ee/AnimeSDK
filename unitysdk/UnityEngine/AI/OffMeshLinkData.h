#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AI/OffMeshLinkType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_AI_OFFMESHLINKDATA_GET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x881770)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int OffMeshLinkData_TypeDefinitionIndex = 24801;

	struct alignas(4) OffMeshLinkData
	{
		::System::Int32 m_Valid; // 0x10
		::System::Int32 m_Activated; // 0x14
		::System::Int32 m_InstanceID; // 0x18
		::UnityEngine::AI::OffMeshLinkType m_LinkType; // 0x1C
		::UnityEngine::Vector3 m_StartPos; // 0x20
		::UnityEngine::Vector3 m_EndPos; // 0x2C

		::UnityEngine::Vector3 get_endPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_OFFMESHLINKDATA_GET_ENDPOS_OFFSET))(this);
		}
	};
}
