#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_AI_NAVMESHLINKDATA_SET_AGENTTYPEID_OFFSET UNITYSDK_OFFSET(0x6427B0)
#define UNITYENGINE_AI_NAVMESHLINKDATA_SET_AREA_OFFSET UNITYSDK_OFFSET(0x3B1E40)
#define UNITYENGINE_AI_NAVMESHLINKDATA_SET_BIDIRECTIONAL_OFFSET UNITYSDK_OFFSET(0xA60210)
#define UNITYENGINE_AI_NAVMESHLINKDATA_SET_COSTMODIFIER_OFFSET UNITYSDK_OFFSET(0x85D030)
#define UNITYENGINE_AI_NAVMESHLINKDATA_SET_ENDPOSITION_OFFSET UNITYSDK_OFFSET(0x68FA00)
#define UNITYENGINE_AI_NAVMESHLINKDATA_SET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0x387FA0)
#define UNITYENGINE_AI_NAVMESHLINKDATA_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x9EB8F0)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshLinkData_TypeDefinitionIndex = 27399;

	struct alignas(4) NavMeshLinkData
	{
		::UnityEngine::Vector3 m_StartPosition; // 0x10
		::UnityEngine::Vector3 m_EndPosition; // 0x1C
		::System::Single m_CostModifier; // 0x28
		::System::Int32 m_Bidirectional; // 0x2C
		::System::Single m_Width; // 0x30
		::System::Int32 m_Area; // 0x34
		::System::Int32 m_AgentTypeID; // 0x38

		::System::Void set_startPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKDATA_SET_STARTPOSITION_OFFSET))(this, value);
		}

		::System::Void set_endPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKDATA_SET_ENDPOSITION_OFFSET))(this, value);
		}

		::System::Void set_costModifier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKDATA_SET_COSTMODIFIER_OFFSET))(this, value);
		}

		::System::Void set_bidirectional(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKDATA_SET_BIDIRECTIONAL_OFFSET))(this, value);
		}

		::System::Void set_width(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKDATA_SET_WIDTH_OFFSET))(this, value);
		}

		::System::Void set_area(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKDATA_SET_AREA_OFFSET))(this, value);
		}

		::System::Void set_agentTypeID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKDATA_SET_AGENTTYPEID_OFFSET))(this, value);
		}
	};
}
