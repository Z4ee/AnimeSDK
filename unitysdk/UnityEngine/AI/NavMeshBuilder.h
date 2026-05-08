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

#define UNITYENGINE_AI_NAVMESHBUILDER_BUILDNAVMESHDATA_OFFSET UNITYSDK_OFFSET(0x1C02B010)
#define UNITYENGINE_AI_NAVMESHBUILDER_COLLECTSOURCESINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C02B000)
#define UNITYENGINE_AI_NAVMESHBUILDER_COLLECTSOURCESINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C02AE60)
#define UNITYENGINE_AI_NAVMESHBUILDER_COLLECTSOURCES_1_OFFSET UNITYSDK_OFFSET(0x1C02AE70)
#define UNITYENGINE_AI_NAVMESHBUILDER_COLLECTSOURCES_OFFSET UNITYSDK_OFFSET(0x1C02AC80)
#define UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATAASYNCLISTINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C02B630)
#define UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATAASYNCLISTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C02B620)
#define UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATAASYNC_OFFSET UNITYSDK_OFFSET(0x1C02B440)
#define UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATALISTINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C02B430)
#define UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATALISTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1C02B240)
#define UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATA_OFFSET UNITYSDK_OFFSET(0x1C02B250)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshBuilder_TypeDefinitionIndex = 24795;

	class NavMeshBuilder : public ::System::Object
	{
	public:
		static ::System::Void CollectSources(::UnityEngine::Bounds includedWorldBounds, ::System::Int32 includedLayerMask, ::UnityEngine::AI::NavMeshCollectGeometry geometry, ::System::Int32 defaultArea, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>* markups, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>* results)
		{
			return ((::System::Void(*)(::UnityEngine::Bounds, ::System::Int32, ::UnityEngine::AI::NavMeshCollectGeometry, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_COLLECTSOURCES_OFFSET))(includedWorldBounds, includedLayerMask, geometry, defaultArea, markups, results);
		}

		static ::System::Void CollectSources_1(::UnityEngine::Transform* root, ::System::Int32 includedLayerMask, ::UnityEngine::AI::NavMeshCollectGeometry geometry, ::System::Int32 defaultArea, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>* markups, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>* results)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32, ::UnityEngine::AI::NavMeshCollectGeometry, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildMarkup>*, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_COLLECTSOURCES_1_OFFSET))(root, includedLayerMask, geometry, defaultArea, markups, results);
		}

		static ::Il2CppArray<::UnityEngine::AI::NavMeshBuildSource>* CollectSourcesInternal(::System::Int32 includedLayerMask, ::UnityEngine::Bounds includedWorldBounds, ::UnityEngine::Transform* root, ::System::Boolean useBounds, ::UnityEngine::AI::NavMeshCollectGeometry geometry, ::System::Int32 defaultArea, ::Il2CppArray<::UnityEngine::AI::NavMeshBuildMarkup>* markups)
		{
			return ((::Il2CppArray<::UnityEngine::AI::NavMeshBuildSource>*(*)(::System::Int32, ::UnityEngine::Bounds, ::UnityEngine::Transform*, ::System::Boolean, ::UnityEngine::AI::NavMeshCollectGeometry, ::System::Int32, ::Il2CppArray<::UnityEngine::AI::NavMeshBuildMarkup>*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_COLLECTSOURCESINTERNAL_OFFSET))(includedLayerMask, includedWorldBounds, root, useBounds, geometry, defaultArea, markups);
		}

		static ::UnityEngine::AI::NavMeshData* BuildNavMeshData(::UnityEngine::AI::NavMeshBuildSettings buildSettings, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>* sources, ::UnityEngine::Bounds localBounds, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::AI::NavMeshData*(*)(::UnityEngine::AI::NavMeshBuildSettings, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_BUILDNAVMESHDATA_OFFSET))(buildSettings, sources, localBounds, position, rotation);
		}

		static ::System::Boolean UpdateNavMeshData(::UnityEngine::AI::NavMeshData* data, ::UnityEngine::AI::NavMeshBuildSettings buildSettings, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>* sources, ::UnityEngine::Bounds localBounds)
		{
			return ((::System::Boolean(*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::AI::NavMeshBuildSettings, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATA_OFFSET))(data, buildSettings, sources, localBounds);
		}

		static ::System::Boolean UpdateNavMeshDataListInternal(::UnityEngine::AI::NavMeshData* data, ::UnityEngine::AI::NavMeshBuildSettings buildSettings, ::System::Object* sources, ::UnityEngine::Bounds localBounds)
		{
			return ((::System::Boolean(*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::AI::NavMeshBuildSettings, ::System::Object*, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATALISTINTERNAL_OFFSET))(data, buildSettings, sources, localBounds);
		}

		static ::UnityEngine::AsyncOperation* UpdateNavMeshDataAsync(::UnityEngine::AI::NavMeshData* data, ::UnityEngine::AI::NavMeshBuildSettings buildSettings, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>* sources, ::UnityEngine::Bounds localBounds)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::AI::NavMeshBuildSettings, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATAASYNC_OFFSET))(data, buildSettings, sources, localBounds);
		}

		static ::UnityEngine::AsyncOperation* UpdateNavMeshDataAsyncListInternal(::UnityEngine::AI::NavMeshData* data, ::UnityEngine::AI::NavMeshBuildSettings buildSettings, ::System::Object* sources, ::UnityEngine::Bounds localBounds)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::AI::NavMeshBuildSettings, ::System::Object*, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATAASYNCLISTINTERNAL_OFFSET))(data, buildSettings, sources, localBounds);
		}

		static ::Il2CppArray<::UnityEngine::AI::NavMeshBuildSource>* CollectSourcesInternal_Injected(::System::Int32 includedLayerMask, ::UnityEngine::Bounds& includedWorldBounds, ::UnityEngine::Transform* root, ::System::Boolean useBounds, ::UnityEngine::AI::NavMeshCollectGeometry geometry, ::System::Int32 defaultArea, ::Il2CppArray<::UnityEngine::AI::NavMeshBuildMarkup>* markups)
		{
			return ((::Il2CppArray<::UnityEngine::AI::NavMeshBuildSource>*(*)(::System::Int32, ::UnityEngine::Bounds&, ::UnityEngine::Transform*, ::System::Boolean, ::UnityEngine::AI::NavMeshCollectGeometry, ::System::Int32, ::Il2CppArray<::UnityEngine::AI::NavMeshBuildMarkup>*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_COLLECTSOURCESINTERNAL_INJECTED_OFFSET))(includedLayerMask, includedWorldBounds, root, useBounds, geometry, defaultArea, markups);
		}

		static ::System::Boolean UpdateNavMeshDataListInternal_Injected(::UnityEngine::AI::NavMeshData* data, ::UnityEngine::AI::NavMeshBuildSettings& buildSettings, ::System::Object* sources, ::UnityEngine::Bounds& localBounds)
		{
			return ((::System::Boolean(*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::AI::NavMeshBuildSettings&, ::System::Object*, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATALISTINTERNAL_INJECTED_OFFSET))(data, buildSettings, sources, localBounds);
		}

		static ::UnityEngine::AsyncOperation* UpdateNavMeshDataAsyncListInternal_Injected(::UnityEngine::AI::NavMeshData* data, ::UnityEngine::AI::NavMeshBuildSettings& buildSettings, ::System::Object* sources, ::UnityEngine::Bounds& localBounds)
		{
			return ((::UnityEngine::AsyncOperation*(*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::AI::NavMeshBuildSettings&, ::System::Object*, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHBUILDER_UPDATENAVMESHDATAASYNCLISTINTERNAL_INJECTED_OFFSET))(data, buildSettings, sources, localBounds);
		}
	};
}
