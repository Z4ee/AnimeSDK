#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AI/NavMeshPathStatus.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_AI_NAVMESHPATH_CALCULATECORNERSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F74D600)
#define UNITYENGINE_AI_NAVMESHPATH_CALCULATECORNERS_OFFSET UNITYSDK_OFFSET(0x1F74D620)
#define UNITYENGINE_AI_NAVMESHPATH_CLEARCORNERSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1F74D610)
#define UNITYENGINE_AI_NAVMESHPATH_CLEARCORNERS_OFFSET UNITYSDK_OFFSET(0x1F74AD80)
#define UNITYENGINE_AI_NAVMESHPATH_DESTROYNAVMESHPATH_OFFSET UNITYSDK_OFFSET(0x1F74D5E0)
#define UNITYENGINE_AI_NAVMESHPATH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F74D560)
#define UNITYENGINE_AI_NAVMESHPATH_GETCORNERSNONALLOC_OFFSET UNITYSDK_OFFSET(0x1F74D5F0)
#define UNITYENGINE_AI_NAVMESHPATH_GET_CORNERS_OFFSET UNITYSDK_OFFSET(0x1F74D650)
#define UNITYENGINE_AI_NAVMESHPATH_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1F74D680)
#define UNITYENGINE_AI_NAVMESHPATH_INITIALIZENAVMESHPATH_OFFSET UNITYSDK_OFFSET(0x1F74D550)
#define UNITYENGINE_AI_NAVMESHPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1F74BAA0)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshPath_TypeDefinitionIndex = 27989;

	class NavMeshPath : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10
		::Il2CppArray<::UnityEngine::Vector3>* m_Corners; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHPATH__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHPATH_FINALIZE_OFFSET))(this);
		}

		static ::System::IntPtr InitializeNavMeshPath()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHPATH_INITIALIZENAVMESHPATH_OFFSET))();
		}

		static ::System::Void DestroyNavMeshPath(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHPATH_DESTROYNAVMESHPATH_OFFSET))(ptr);
		}

		::System::Int32 GetCornersNonAlloc(::Il2CppArray<::UnityEngine::Vector3>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHPATH_GETCORNERSNONALLOC_OFFSET))(this, results);
		}

		::Il2CppArray<::UnityEngine::Vector3>* CalculateCornersInternal()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHPATH_CALCULATECORNERSINTERNAL_OFFSET))(this);
		}

		::System::Void ClearCornersInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHPATH_CLEARCORNERSINTERNAL_OFFSET))(this);
		}

		::System::Void ClearCorners()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHPATH_CLEARCORNERS_OFFSET))(this);
		}

		::System::Void CalculateCorners()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHPATH_CALCULATECORNERS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_corners()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHPATH_GET_CORNERS_OFFSET))(this);
		}

		::UnityEngine::AI::NavMeshPathStatus get_status()
		{
			return ((::UnityEngine::AI::NavMeshPathStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHPATH_GET_STATUS_OFFSET))(this);
		}
	};
}
