#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Renderer; }

#define UNITYENGINE_RPGDEFORMATIONMANAGER_ADDDEFORMATIONCASTEDRENDER_OFFSET UNITYSDK_OFFSET(0x18A30CC0)
#define UNITYENGINE_RPGDEFORMATIONMANAGER_ADDDEFORMATIONRECEIVEDRENDER_OFFSET UNITYSDK_OFFSET(0x18A30CE0)
#define UNITYENGINE_RPGDEFORMATIONMANAGER_REMOVEDEFORMATIONCASTEDRENDER_OFFSET UNITYSDK_OFFSET(0x18A30CD0)
#define UNITYENGINE_RPGDEFORMATIONMANAGER_REMOVEDEFORMATIONRECEIVEDRENDER_OFFSET UNITYSDK_OFFSET(0x18A30CF0)
#define UNITYENGINE_RPGDEFORMATIONMANAGER_REMOVEINVALIDRENDER_OFFSET UNITYSDK_OFFSET(0x18A30D00)

namespace UnityEngine
{
	inline static constexpr unsigned int RPGDeformationManager_TypeDefinitionIndex = 4084;

	class RPGDeformationManager : public ::System::Object
	{
	public:
		static ::System::Void AddDeformationCastedRender(::UnityEngine::Renderer* render)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGDEFORMATIONMANAGER_ADDDEFORMATIONCASTEDRENDER_OFFSET))(render);
		}

		static ::System::Void RemoveDeformationCastedRender(::UnityEngine::Renderer* render)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGDEFORMATIONMANAGER_REMOVEDEFORMATIONCASTEDRENDER_OFFSET))(render);
		}

		static ::System::Void AddDeformationReceivedRender(::UnityEngine::Renderer* render)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGDEFORMATIONMANAGER_ADDDEFORMATIONRECEIVEDRENDER_OFFSET))(render);
		}

		static ::System::Void RemoveDeformationReceivedRender(::UnityEngine::Renderer* render)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGDEFORMATIONMANAGER_REMOVEDEFORMATIONRECEIVEDRENDER_OFFSET))(render);
		}

		static ::System::Void RemoveInvalidRender(::System::Int32 instanceId)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGDEFORMATIONMANAGER_REMOVEINVALIDRENDER_OFFSET))(instanceId);
		}
	};
}
