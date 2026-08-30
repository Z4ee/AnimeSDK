#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AI/NavMeshPathStatus.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_AI_NAVMESHPATH_CALCULATECORNERSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1EFB0DE0)
#define UNITYENGINE_AI_NAVMESHPATH_CALCULATECORNERS_OFFSET UNITYSDK_OFFSET(0x1EFB0E00)
#define UNITYENGINE_AI_NAVMESHPATH_CLEARCORNERSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1EFB0DF0)
#define UNITYENGINE_AI_NAVMESHPATH_CLEARCORNERS_OFFSET UNITYSDK_OFFSET(0x1EFAEF20)
#define UNITYENGINE_AI_NAVMESHPATH_DESTROYNAVMESHPATH_OFFSET UNITYSDK_OFFSET(0x1EFB0DB0)
#define UNITYENGINE_AI_NAVMESHPATH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EFB0D30)
#define UNITYENGINE_AI_NAVMESHPATH_GETCORNERSNONALLOCEXT_INTERNAL_WITHMASK_OFFSET UNITYSDK_OFFSET(0x1EFB0DD0)
#define UNITYENGINE_AI_NAVMESHPATH_GETCORNERSNONALLOCEXT_OFFSET UNITYSDK_OFFSET(0x1EFB0DC0)
#define UNITYENGINE_AI_NAVMESHPATH_GET_CORNERS_OFFSET UNITYSDK_OFFSET(0x1EFB0E30)
#define UNITYENGINE_AI_NAVMESHPATH_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1EFB0E60)
#define UNITYENGINE_AI_NAVMESHPATH_INITIALIZENAVMESHPATH_OFFSET UNITYSDK_OFFSET(0x1EFB0D20)
#define UNITYENGINE_AI_NAVMESHPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFAFA60)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshPath_TypeDefinitionIndex = 5636;

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

		::System::Int32 GetCornersNonAllocExt(::Il2CppArray<::UnityEngine::Vector3>* a1, ::Il2CppArray<::System::UInt64>* a2, ::Il2CppArray<::System::Byte>* a3, ::Il2CppArray<::System::UInt32>* a4)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::System::UInt64>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHPATH_GETCORNERSNONALLOCEXT_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::IntPtr InitializeNavMeshPath()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHPATH_INITIALIZENAVMESHPATH_OFFSET))();
		}

		static ::System::Void DestroyNavMeshPath(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHPATH_DESTROYNAVMESHPATH_OFFSET))(a1);
		}

		::System::Int32 GetCornersNonAllocExt_Internal_WithMask(::Il2CppArray<::UnityEngine::Vector3>* a1, ::Il2CppArray<::System::UInt64>* a2, ::Il2CppArray<::System::Byte>* a3, ::Il2CppArray<::System::UInt32>* a4)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::System::UInt64>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHPATH_GETCORNERSNONALLOCEXT_INTERNAL_WITHMASK_OFFSET))(this, a1, a2, a3, a4);
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
