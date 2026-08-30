#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AI/NavMeshBuildMarkup.h"
#include "unitysdk/UnityEngine/AI/NavMeshBuildSettings.h"
#include "unitysdk/UnityEngine/AI/NavMeshBuildSource.h"
#include "unitysdk/UnityEngine/AI/NavMeshCollectGeometry.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::AI { class NavMeshData; }

#define UNITYENGINE_AI_NAVMESHBUILDER_BUILDNAVMESHDATA_OFFSET UNITYSDK_OFFSET(0x1EFB0360)
#define UNITYENGINE_AI_NAVMESHBUILDER_COLLECTSOURCESINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EFB0350)
#define UNITYENGINE_AI_NAVMESHBUILDER_COLLECTSOURCESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1EFB01B0)
#define UNITYENGINE_AI_NAVMESHBUILDER_COLLECTSOURCES_1_OFFSET UNITYSDK_OFFSET(0x1EFB01C0)
#define UNITYENGINE_AI_NAVMESHBUILDER_COLLECTSOURCES_OFFSET UNITYSDK_OFFSET(0x1EFAFFC0)
#define UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATAASYNCLISTINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EFB0610)
#define UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATAASYNCLISTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1EFB0600)
#define UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATAASYNC_OFFSET UNITYSDK_OFFSET(0x1EFB0500)
#define UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATALISTINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EFB04F0)
#define UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATALISTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1EFB04E0)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshBuilder_TypeDefinitionIndex = 5637;

	class NavMeshBuilder : public ::System::Object
	{
	public:
		static ::System::Void CollectSources(::UnityEngine::Bounds a1, ::System::Int32 a2, ::UnityEngine::AI::NavMeshCollectGeometry a3, ::System::Int32 a4, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>* a5, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>* a6)
		{
			return ((::System::Void(*)(::UnityEngine::Bounds, ::System::Int32, ::UnityEngine::AI::NavMeshCollectGeometry, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_COLLECTSOURCES_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void CollectSources_1(::UnityEngine::Transform* a1, ::System::Int32 a2, ::UnityEngine::AI::NavMeshCollectGeometry a3, ::System::Int32 a4, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>* a5, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>* a6)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32, ::UnityEngine::AI::NavMeshCollectGeometry, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_COLLECTSOURCES_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::Il2CppArray<::UnityEngine::AI::NavMeshBuildSource>* CollectSourcesInternal(::System::Int32 a1, ::UnityEngine::Bounds a2, ::UnityEngine::Transform* a3, ::System::Boolean a4, ::UnityEngine::AI::NavMeshCollectGeometry a5, ::System::Int32 a6, ::Il2CppArray<::UnityEngine::AI::NavMeshBuildMarkup>* a7)
		{
			return ((::Il2CppArray<::UnityEngine::AI::NavMeshBuildSource>*(*)(::System::Int32, ::UnityEngine::Bounds, ::UnityEngine::Transform*, ::System::Boolean, ::UnityEngine::AI::NavMeshCollectGeometry, ::System::Int32, ::Il2CppArray<::UnityEngine::AI::NavMeshBuildMarkup>*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_COLLECTSOURCESINTERNAL_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::UnityEngine::AI::NavMeshData* BuildNavMeshData(::UnityEngine::AI::NavMeshBuildSettings a1, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>* a2, ::UnityEngine::Bounds a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5)
		{
			return ((::UnityEngine::AI::NavMeshData*(*)(::UnityEngine::AI::NavMeshBuildSettings, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_BUILDNAVMESHDATA_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean UpdateNavMeshDataListInternal(::UnityEngine::AI::NavMeshData* a1, ::UnityEngine::AI::NavMeshBuildSettings a2, ::System::Object* a3, ::UnityEngine::Bounds a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::AI::NavMeshBuildSettings, ::System::Object*, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATALISTINTERNAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::AsyncOperation* UpdateNavMeshDataAsync(::UnityEngine::AI::NavMeshData* a1, ::UnityEngine::AI::NavMeshBuildSettings a2, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>* a3, ::UnityEngine::Bounds a4)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::AI::NavMeshBuildSettings, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATAASYNC_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::AsyncOperation* UpdateNavMeshDataAsyncListInternal(::UnityEngine::AI::NavMeshData* a1, ::UnityEngine::AI::NavMeshBuildSettings a2, ::System::Object* a3, ::UnityEngine::Bounds a4)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::AI::NavMeshBuildSettings, ::System::Object*, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATAASYNCLISTINTERNAL_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::UnityEngine::AI::NavMeshBuildSource>* CollectSourcesInternal_Injected(::System::Int32 a1, ::UnityEngine::Bounds& a2, ::UnityEngine::Transform* a3, ::System::Boolean a4, ::UnityEngine::AI::NavMeshCollectGeometry a5, ::System::Int32 a6, ::Il2CppArray<::UnityEngine::AI::NavMeshBuildMarkup>* a7)
		{
			return ((::Il2CppArray<::UnityEngine::AI::NavMeshBuildSource>*(*)(::System::Int32, ::UnityEngine::Bounds&, ::UnityEngine::Transform*, ::System::Boolean, ::UnityEngine::AI::NavMeshCollectGeometry, ::System::Int32, ::Il2CppArray<::UnityEngine::AI::NavMeshBuildMarkup>*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_COLLECTSOURCESINTERNAL_INJECTED_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean UpdateNavMeshDataListInternal_Injected(::UnityEngine::AI::NavMeshData* a1, ::UnityEngine::AI::NavMeshBuildSettings& a2, ::System::Object* a3, ::UnityEngine::Bounds& a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::AI::NavMeshBuildSettings&, ::System::Object*, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATALISTINTERNAL_INJECTED_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::AsyncOperation* UpdateNavMeshDataAsyncListInternal_Injected(::UnityEngine::AI::NavMeshData* a1, ::UnityEngine::AI::NavMeshBuildSettings& a2, ::System::Object* a3, ::UnityEngine::Bounds& a4)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::AI::NavMeshBuildSettings&, ::System::Object*, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATAASYNCLISTINTERNAL_INJECTED_OFFSET))(a1, a2, a3, a4);
		}
	};
}
