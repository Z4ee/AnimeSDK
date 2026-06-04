#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AI/NavMeshLinkInstance.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_AI_NAVMESHLINK_ADDLINK_OFFSET UNITYSDK_OFFSET(0x187FEB40)
#define UNITYENGINE_AI_NAVMESHLINK_ADDTRACKING_OFFSET UNITYSDK_OFFSET(0x187FED50)
#define UNITYENGINE_AI_NAVMESHLINK_ALIGNTRANSFORMTOENDPOINTS_OFFSET UNITYSDK_OFFSET(0x187FF2F0)
#define UNITYENGINE_AI_NAVMESHLINK_GETALLTRACKEDLINKS_OFFSET UNITYSDK_OFFSET(0x187FF080)
#define UNITYENGINE_AI_NAVMESHLINK_GET_AGENTTYPEID_OFFSET UNITYSDK_OFFSET(0x187FE770)
#define UNITYENGINE_AI_NAVMESHLINK_GET_AREA_OFFSET UNITYSDK_OFFSET(0x187FEA90)
#define UNITYENGINE_AI_NAVMESHLINK_GET_AUTOUPDATE_OFFSET UNITYSDK_OFFSET(0x187FE9A0)
#define UNITYENGINE_AI_NAVMESHLINK_GET_BIDIRECTIONAL_OFFSET UNITYSDK_OFFSET(0x187FE950)
#define UNITYENGINE_AI_NAVMESHLINK_GET_COSTMODIFIER_OFFSET UNITYSDK_OFFSET(0x187FE900)
#define UNITYENGINE_AI_NAVMESHLINK_GET_ENDPOINT_OFFSET UNITYSDK_OFFSET(0x187FE850)
#define UNITYENGINE_AI_NAVMESHLINK_GET_NAVMESHLINKINSTANCEATTACHED_OFFSET UNITYSDK_OFFSET(0x187FEAE0)
#define UNITYENGINE_AI_NAVMESHLINK_GET_STARTPOINT_OFFSET UNITYSDK_OFFSET(0x187FE7F0)
#define UNITYENGINE_AI_NAVMESHLINK_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x187FE8B0)
#define UNITYENGINE_AI_NAVMESHLINK_HASTRANSFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x187FF0B0)
#define UNITYENGINE_AI_NAVMESHLINK_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x187FFA00)
#define UNITYENGINE_AI_NAVMESHLINK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x187FEF00)
#define UNITYENGINE_AI_NAVMESHLINK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x187FEAF0)
#define UNITYENGINE_AI_NAVMESHLINK_REMOVETRACKING_OFFSET UNITYSDK_OFFSET(0x187FEF40)
#define UNITYENGINE_AI_NAVMESHLINK_SETAUTOUPDATE_OFFSET UNITYSDK_OFFSET(0x187FEA20)
#define UNITYENGINE_AI_NAVMESHLINK_SET_AGENTTYPEID_OFFSET UNITYSDK_OFFSET(0x187FE780)
#define UNITYENGINE_AI_NAVMESHLINK_SET_AREA_OFFSET UNITYSDK_OFFSET(0x187FEAA0)
#define UNITYENGINE_AI_NAVMESHLINK_SET_AUTOUPDATE_OFFSET UNITYSDK_OFFSET(0x187FE9B0)
#define UNITYENGINE_AI_NAVMESHLINK_SET_BIDIRECTIONAL_OFFSET UNITYSDK_OFFSET(0x187FE960)
#define UNITYENGINE_AI_NAVMESHLINK_SET_COSTMODIFIER_OFFSET UNITYSDK_OFFSET(0x187FE910)
#define UNITYENGINE_AI_NAVMESHLINK_SET_ENDPOINT_OFFSET UNITYSDK_OFFSET(0x187FE870)
#define UNITYENGINE_AI_NAVMESHLINK_SET_STARTPOINT_OFFSET UNITYSDK_OFFSET(0x187FE810)
#define UNITYENGINE_AI_NAVMESHLINK_SET_WIDTH_OFFSET UNITYSDK_OFFSET(0x187FE8C0)
#define UNITYENGINE_AI_NAVMESHLINK_UPDATELINK_OFFSET UNITYSDK_OFFSET(0x187FE7C0)
#define UNITYENGINE_AI_NAVMESHLINK_UPDATETRACKEDINSTANCES_OFFSET UNITYSDK_OFFSET(0x187FFA30)
#define UNITYENGINE_AI_NAVMESHLINK__CCTOR_OFFSET UNITYSDK_OFFSET(0x187FFBB0)
#define UNITYENGINE_AI_NAVMESHLINK__CTOR_OFFSET UNITYSDK_OFFSET(0x187FFB60)
#define UNITYENGINE_AI_NAVMESHLINK__UNSCALEDLOCALTOWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x187FF1D0)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshLink_TypeDefinitionIndex = 38384;

	class NavMeshLink : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshLink*>** StaticGet_s_Tracked()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshLink*>**)Il2CppClass::FromTypeDefinitionIndex(NavMeshLink_TypeDefinitionIndex)->GetStaticField(0xFB0);
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

		::System::Void set_agentTypeID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_SET_AGENTTYPEID_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_startPoint()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_GET_STARTPOINT_OFFSET))(this);
		}

		::System::Void set_startPoint(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_SET_STARTPOINT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_endPoint()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_GET_ENDPOINT_OFFSET))(this);
		}

		::System::Void set_endPoint(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_SET_ENDPOINT_OFFSET))(this, a1);
		}

		::System::Single get_width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_GET_WIDTH_OFFSET))(this);
		}

		::System::Void set_width(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_SET_WIDTH_OFFSET))(this, a1);
		}

		::System::Int32 get_costModifier()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_GET_COSTMODIFIER_OFFSET))(this);
		}

		::System::Void set_costModifier(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_SET_COSTMODIFIER_OFFSET))(this, a1);
		}

		::System::Boolean get_bidirectional()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_GET_BIDIRECTIONAL_OFFSET))(this);
		}

		::System::Void set_bidirectional(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_SET_BIDIRECTIONAL_OFFSET))(this, a1);
		}

		::System::Boolean get_autoUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_GET_AUTOUPDATE_OFFSET))(this);
		}

		::System::Void set_autoUpdate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_SET_AUTOUPDATE_OFFSET))(this, a1);
		}

		::System::Int32 get_area()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_GET_AREA_OFFSET))(this);
		}

		::System::Void set_area(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_SET_AREA_OFFSET))(this, a1);
		}

		::System::Boolean get_navMeshLinkInstanceAttached()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_GET_NAVMESHLINKINSTANCEATTACHED_OFFSET))(this);
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

		static ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::AI::NavMeshLink*>* GetAllTrackedLinks()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::AI::NavMeshLink*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_GETALLTRACKEDLINKS_OFFSET))();
		}

		static ::System::Void AddTracking(::UnityEngine::AI::NavMeshLink* a1)
		{
			return ((::System::Void(*)(::UnityEngine::AI::NavMeshLink*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_ADDTRACKING_OFFSET))(a1);
		}

		static ::System::Void RemoveTracking(::UnityEngine::AI::NavMeshLink* a1)
		{
			return ((::System::Void(*)(::UnityEngine::AI::NavMeshLink*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_REMOVETRACKING_OFFSET))(a1);
		}

		::System::Void SetAutoUpdate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_SETAUTOUPDATE_OFFSET))(this, a1);
		}

		::System::Void AddLink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_ADDLINK_OFFSET))(this);
		}

		::System::Boolean HasTransformChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_HASTRANSFORMCHANGED_OFFSET))(this);
		}

		static ::UnityEngine::Matrix4x4 _UnscaledLocalToWorldMatrix(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK__UNSCALEDLOCALTOWORLDMATRIX_OFFSET))(a1);
		}

		::System::Void AlignTransformToEndPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHLINK_ALIGNTRANSFORMTOENDPOINTS_OFFSET))(this);
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
