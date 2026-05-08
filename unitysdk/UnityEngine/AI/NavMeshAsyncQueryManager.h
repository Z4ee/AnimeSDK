#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::AI { class NavMeshQueryAsyncOperation; }

#define UNITYENGINE_AI_NAVMESHASYNCQUERYMANAGER_CALCULATEPATHASYNC_INJECTED_OFFSET UNITYSDK_OFFSET(0x1C02A860)
#define UNITYENGINE_AI_NAVMESHASYNCQUERYMANAGER_CALCULATEPATHASYNC_OFFSET UNITYSDK_OFFSET(0x1C02A850)
#define UNITYENGINE_AI_NAVMESHASYNCQUERYMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C02A870)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshAsyncQueryManager_TypeDefinitionIndex = 24813;

	class NavMeshAsyncQueryManager : public ::System::Object
	{
	public:
		static ::UnityEngine::AI::NavMeshQueryAsyncOperation* CalculatePathAsync(::UnityEngine::Vector3 sourcePosition, ::UnityEngine::Vector3 targetPosition, ::System::UInt32 maxCorners, ::System::Int32 areaMask)
		{
			return ((::UnityEngine::AI::NavMeshQueryAsyncOperation*(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHASYNCQUERYMANAGER_CALCULATEPATHASYNC_OFFSET))(sourcePosition, targetPosition, maxCorners, areaMask);
		}

		static ::System::Void Update()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHASYNCQUERYMANAGER_UPDATE_OFFSET))();
		}

		static ::UnityEngine::AI::NavMeshQueryAsyncOperation* CalculatePathAsync_Injected(::UnityEngine::Vector3& sourcePosition, ::UnityEngine::Vector3& targetPosition, ::System::UInt32 maxCorners, ::System::Int32 areaMask)
		{
			return ((::UnityEngine::AI::NavMeshQueryAsyncOperation*(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHASYNCQUERYMANAGER_CALCULATEPATHASYNC_INJECTED_OFFSET))(sourcePosition, targetPosition, maxCorners, areaMask);
		}
	};
}
