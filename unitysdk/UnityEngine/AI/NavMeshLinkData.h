#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_AI_NAVMESHLINKDATA_GET_ENDPOSITION_OFFSET UNITYSDK_OFFSET(0x38CBD20)
#define UNITYENGINE_AI_NAVMESHLINKDATA_GET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0x165820)
#define UNITYENGINE_AI_NAVMESHLINKDATA_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x3A01F20)
#define UNITYENGINE_AI_NAVMESHLINKDATA_SET_AGENTTYPEID_OFFSET UNITYSDK_OFFSET(0x394E4C0)
#define UNITYENGINE_AI_NAVMESHLINKDATA_SET_AREA_OFFSET UNITYSDK_OFFSET(0x7C3060)
#define UNITYENGINE_AI_NAVMESHLINKDATA_SET_BIDIRECTIONAL_OFFSET UNITYSDK_OFFSET(0x3B032E0)
#define UNITYENGINE_AI_NAVMESHLINKDATA_SET_COSTMODIFIER_OFFSET UNITYSDK_OFFSET(0xA4B380)
#define UNITYENGINE_AI_NAVMESHLINKDATA_SET_ENDPOSITION_OFFSET UNITYSDK_OFFSET(0x38CBD40)
#define UNITYENGINE_AI_NAVMESHLINKDATA_SET_STARTPOSITION_OFFSET UNITYSDK_OFFSET(0x165690)
#define UNITYENGINE_AI_NAVMESHLINKDATA_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x3B032F0)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshLinkData_TypeDefinitionIndex = 5658;

	struct alignas(4) NavMeshLinkData
	{
		::UnityEngine::Vector3 m_StartPosition; // 0x10
		::UnityEngine::Vector3 m_EndPosition; // 0x1C
		::System::Single m_CostModifier; // 0x28
		::System::Int32 m_Bidirectional; // 0x2C
		::System::Single m_Width; // 0x30
		::System::Int32 m_Area; // 0x34
		::System::Int32 m_AgentTypeID; // 0x38

		::UnityEngine::Vector3 get_startPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKDATA_GET_STARTPOSITION_OFFSET))(this);
		}

		::System::Void set_startPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKDATA_SET_STARTPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_endPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKDATA_GET_ENDPOSITION_OFFSET))(this);
		}

		::System::Void set_endPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKDATA_SET_ENDPOSITION_OFFSET))(this, a1);
		}

		::System::Void set_costModifier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKDATA_SET_COSTMODIFIER_OFFSET))(this, a1);
		}

		::System::Void set_bidirectional(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKDATA_SET_BIDIRECTIONAL_OFFSET))(this, a1);
		}

		::System::Single get_width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKDATA_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_width(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKDATA_SET_WIDTH_OFFSET))(this, a1);
		}

		::System::Void set_area(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKDATA_SET_AREA_OFFSET))(this, a1);
		}

		::System::Void set_agentTypeID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINKDATA_SET_AGENTTYPEID_OFFSET))(this, a1);
		}
	};
}
