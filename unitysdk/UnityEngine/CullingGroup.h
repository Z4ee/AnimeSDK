#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/BoundingSphere.h"
#include "unitysdk/UnityEngine/CullingQueryOptions.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class CullingGroup_StateChanged; }

#define UNITYENGINE_CULLINGGROUP_DISPOSEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BC1B5B0)
#define UNITYENGINE_CULLINGGROUP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BC1B5C0)
#define UNITYENGINE_CULLINGGROUP_FINALIZERFAILURE_OFFSET UNITYSDK_OFFSET(0x1BC1B5A0)
#define UNITYENGINE_CULLINGGROUP_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BC1B530)
#define UNITYENGINE_CULLINGGROUP_GET_TARGETCAMERA_OFFSET UNITYSDK_OFFSET(0x1BC1B5E0)
#define UNITYENGINE_CULLINGGROUP_INIT_OFFSET UNITYSDK_OFFSET(0x1BC1B520)
#define UNITYENGINE_CULLINGGROUP_QUERYINDICES_1_OFFSET UNITYSDK_OFFSET(0x1BC1B650)
#define UNITYENGINE_CULLINGGROUP_QUERYINDICES_OFFSET UNITYSDK_OFFSET(0x1BC1B620)
#define UNITYENGINE_CULLINGGROUP_SENDEVENTS_OFFSET UNITYSDK_OFFSET(0x1BC1B6C0)
#define UNITYENGINE_CULLINGGROUP_SETBOUNDINGDISTANCES_OFFSET UNITYSDK_OFFSET(0x1BC1B660)
#define UNITYENGINE_CULLINGGROUP_SETBOUNDINGSPHERECOUNT_OFFSET UNITYSDK_OFFSET(0x1BC1B610)
#define UNITYENGINE_CULLINGGROUP_SETBOUNDINGSPHERES_OFFSET UNITYSDK_OFFSET(0x1BC1B600)
#define UNITYENGINE_CULLINGGROUP_SETDISTANCEREFERENCEPOINT_INTERNALVECTOR3_INJECTED_OFFSET UNITYSDK_OFFSET(0x1BC1B680)
#define UNITYENGINE_CULLINGGROUP_SETDISTANCEREFERENCEPOINT_INTERNALVECTOR3_OFFSET UNITYSDK_OFFSET(0x1BC1B670)
#define UNITYENGINE_CULLINGGROUP_SETDISTANCEREFERENCEPOINT_OFFSET UNITYSDK_OFFSET(0x1BC1B690)
#define UNITYENGINE_CULLINGGROUP_SET_TARGETCAMERA_OFFSET UNITYSDK_OFFSET(0x1BC1B5F0)
#define UNITYENGINE_CULLINGGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC1B500)

namespace UnityEngine
{
	inline static constexpr unsigned int CullingGroup_TypeDefinitionIndex = 5146;

	class CullingGroup : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10
		::UnityEngine::CullingGroup_StateChanged* m_OnStateChanged; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_FINALIZE_OFFSET))(this);
		}

		::System::Void DisposeInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_DISPOSEINTERNAL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::Camera* get_targetCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_GET_TARGETCAMERA_OFFSET))(this);
		}

		::System::Void set_targetCamera(::UnityEngine::Camera* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_SET_TARGETCAMERA_OFFSET))(this, value);
		}

		::System::Void SetBoundingSpheres(::Il2CppArray<::UnityEngine::BoundingSphere>* array)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::BoundingSphere>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_SETBOUNDINGSPHERES_OFFSET))(this, array);
		}

		::System::Void SetBoundingSphereCount(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_SETBOUNDINGSPHERECOUNT_OFFSET))(this, count);
		}

		::System::Int32 QueryIndices(::System::Boolean visible, ::Il2CppArray<::System::Int32>* result, ::System::Int32 firstIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_QUERYINDICES_OFFSET))(this, visible, result, firstIndex);
		}

		::System::Int32 QueryIndices_1(::System::Boolean visible, ::System::Int32 distanceIndex, ::UnityEngine::CullingQueryOptions options, ::Il2CppArray<::System::Int32>* result, ::System::Int32 firstIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean, ::System::Int32, ::UnityEngine::CullingQueryOptions, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_QUERYINDICES_1_OFFSET))(this, visible, distanceIndex, options, result, firstIndex);
		}

		::System::Void SetBoundingDistances(::Il2CppArray<::System::Single>* distances)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_SETBOUNDINGDISTANCES_OFFSET))(this, distances);
		}

		::System::Void SetDistanceReferencePoint_InternalVector3(::UnityEngine::Vector3 point)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_SETDISTANCEREFERENCEPOINT_INTERNALVECTOR3_OFFSET))(this, point);
		}

		::System::Void SetDistanceReferencePoint(::UnityEngine::Vector3 point)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_SETDISTANCEREFERENCEPOINT_OFFSET))(this, point);
		}

		static ::System::Void SendEvents(::UnityEngine::CullingGroup* cullingGroup, ::System::IntPtr eventsPtr, ::System::Int32 count)
		{
			return ((::System::Void(*)(::UnityEngine::CullingGroup*, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_SENDEVENTS_OFFSET))(cullingGroup, eventsPtr, count);
		}

		static ::System::IntPtr Init(::System::Object* scripting)
		{
			return ((::System::IntPtr(*)(::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_INIT_OFFSET))(scripting);
		}

		::System::Void FinalizerFailure()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_FINALIZERFAILURE_OFFSET))(this);
		}

		::System::Void SetDistanceReferencePoint_InternalVector3_Injected(::UnityEngine::Vector3& point)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_CULLINGGROUP_SETDISTANCEREFERENCEPOINT_INTERNALVECTOR3_INJECTED_OFFSET))(this, point);
		}
	};
}
