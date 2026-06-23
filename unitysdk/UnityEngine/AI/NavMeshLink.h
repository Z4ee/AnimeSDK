#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AI/NavMeshLinkInstance.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_AI_NAVMESHLINK_ADDLINK_OFFSET UNITYSDK_OFFSET(0x1E6DBDB0)
#define UNITYENGINE_AI_NAVMESHLINK_ADDTRACKING_OFFSET UNITYSDK_OFFSET(0x1E6DBFC0)
#define UNITYENGINE_AI_NAVMESHLINK_GET_AGENTTYPEID_OFFSET UNITYSDK_OFFSET(0x1E6DBA20)
#define UNITYENGINE_AI_NAVMESHLINK_GET_AREA_OFFSET UNITYSDK_OFFSET(0x1E6DBCF0)
#define UNITYENGINE_AI_NAVMESHLINK_GET_AUTOUPDATE_OFFSET UNITYSDK_OFFSET(0x1E6DBBE0)
#define UNITYENGINE_AI_NAVMESHLINK_GET_BIDIRECTIONAL_OFFSET UNITYSDK_OFFSET(0x1E6DBBA0)
#define UNITYENGINE_AI_NAVMESHLINK_GET_COSTMODIFIER_OFFSET UNITYSDK_OFFSET(0x1E6DBB60)
#define UNITYENGINE_AI_NAVMESHLINK_GET_ENDPOINT_OFFSET UNITYSDK_OFFSET(0x1E6DBAD0)
#define UNITYENGINE_AI_NAVMESHLINK_GET_STARTPOINT_OFFSET UNITYSDK_OFFSET(0x1E6DBA80)
#define UNITYENGINE_AI_NAVMESHLINK_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1E6DBB20)
#define UNITYENGINE_AI_NAVMESHLINK_HASTRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1E6DC2F0)
#define UNITYENGINE_AI_NAVMESHLINK_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E6DC410)
#define UNITYENGINE_AI_NAVMESHLINK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E6DC140)
#define UNITYENGINE_AI_NAVMESHLINK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E6DBD30)
#define UNITYENGINE_AI_NAVMESHLINK_REMOVETRACKING_OFFSET UNITYSDK_OFFSET(0x1E6DC1A0)
#define UNITYENGINE_AI_NAVMESHLINK_SETAUTOUPDATE_OFFSET UNITYSDK_OFFSET(0x1E6DBC70)
#define UNITYENGINE_AI_NAVMESHLINK_SET_AGENTTYPEID_OFFSET UNITYSDK_OFFSET(0x1E6DBA30)
#define UNITYENGINE_AI_NAVMESHLINK_SET_AREA_OFFSET UNITYSDK_OFFSET(0x1E6DBD00)
#define UNITYENGINE_AI_NAVMESHLINK_SET_AUTOUPDATE_OFFSET UNITYSDK_OFFSET(0x1E6DBBF0)
#define UNITYENGINE_AI_NAVMESHLINK_SET_BIDIRECTIONAL_OFFSET UNITYSDK_OFFSET(0x1E6DBBB0)
#define UNITYENGINE_AI_NAVMESHLINK_SET_COSTMODIFIER_OFFSET UNITYSDK_OFFSET(0x1E6DBB70)
#define UNITYENGINE_AI_NAVMESHLINK_SET_ENDPOINT_OFFSET UNITYSDK_OFFSET(0x1E6DBAF0)
#define UNITYENGINE_AI_NAVMESHLINK_SET_STARTPOINT_OFFSET UNITYSDK_OFFSET(0x1E6DBAA0)
#define UNITYENGINE_AI_NAVMESHLINK_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1E6DBB30)
#define UNITYENGINE_AI_NAVMESHLINK_UPDATELINK_OFFSET UNITYSDK_OFFSET(0x1E6DBA60)
#define UNITYENGINE_AI_NAVMESHLINK_UPDATETRACKEDINSTANCES_OFFSET UNITYSDK_OFFSET(0x1E6DC430)
#define UNITYENGINE_AI_NAVMESHLINK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6DC640)
#define UNITYENGINE_AI_NAVMESHLINK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DC5B0)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshLink_TypeDefinitionIndex = 37387;

	class NavMeshLink : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshLink*>** StaticGet_s_Tracked()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshLink*>**)Il2CppClass::FromTypeDefinitionIndex(NavMeshLink_TypeDefinitionIndex)->GetStaticField(0x28B10);
		}
		::System::Int32 m_AgentTypeID; // 0x18
		::UnityEngine::Vector3 m_StartPoint; // 0x1C
		::UnityEngine::Vector3 m_EndPoint; // 0x28
		::System::Single m_Width; // 0x34
		::System::Int32 m_CostModifier; // 0x38
		::System::Boolean m_Bidirectional; // 0x3C
		::System::Boolean m_AutoUpdatePosition; // 0x3D
		::System::Int32 m_Area; // 0x40
		::UnityEngine::AI::NavMeshLinkInstance m_LinkInstance; // 0x44
		::UnityEngine::Vector3 m_LastPosition; // 0x48
		::UnityEngine::Quaternion m_LastRotation; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK__CCTOR_OFFSET))();
		}

		::System::Int32 get_agentTypeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_GET_AGENTTYPEID_OFFSET))(this);
		}

		::System::Void set_agentTypeID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_SET_AGENTTYPEID_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_startPoint()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_GET_STARTPOINT_OFFSET))(this);
		}

		::System::Void set_startPoint(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_SET_STARTPOINT_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_endPoint()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_GET_ENDPOINT_OFFSET))(this);
		}

		::System::Void set_endPoint(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_SET_ENDPOINT_OFFSET))(this, value);
		}

		::System::Single get_width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_width(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_SET_WIDTH_OFFSET))(this, value);
		}

		::System::Int32 get_costModifier()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_GET_COSTMODIFIER_OFFSET))(this);
		}

		::System::Void set_costModifier(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_SET_COSTMODIFIER_OFFSET))(this, value);
		}

		::System::Boolean get_bidirectional()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_GET_BIDIRECTIONAL_OFFSET))(this);
		}

		::System::Void set_bidirectional(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_SET_BIDIRECTIONAL_OFFSET))(this, value);
		}

		::System::Boolean get_autoUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_GET_AUTOUPDATE_OFFSET))(this);
		}

		::System::Void set_autoUpdate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_SET_AUTOUPDATE_OFFSET))(this, value);
		}

		::System::Int32 get_area()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_GET_AREA_OFFSET))(this);
		}

		::System::Void set_area(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_SET_AREA_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_ONDISABLE_OFFSET))(this);
		}

		::System::Void UpdateLink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_UPDATELINK_OFFSET))(this);
		}

		static ::System::Void AddTracking(::UnityEngine::AI::NavMeshLink* link)
		{
			return ((::System::Void(*)(::UnityEngine::AI::NavMeshLink*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_ADDTRACKING_OFFSET))(link);
		}

		static ::System::Void RemoveTracking(::UnityEngine::AI::NavMeshLink* link)
		{
			return ((::System::Void(*)(::UnityEngine::AI::NavMeshLink*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_REMOVETRACKING_OFFSET))(link);
		}

		::System::Void SetAutoUpdate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_SETAUTOUPDATE_OFFSET))(this, value);
		}

		::System::Void AddLink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_ADDLINK_OFFSET))(this);
		}

		::System::Boolean HasTransformChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_HASTRANSFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		static ::System::Void UpdateTrackedInstances()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_UPDATETRACKEDINSTANCES_OFFSET))();
		}
	};
}
