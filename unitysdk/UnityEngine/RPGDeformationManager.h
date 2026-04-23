#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Renderer; }

#define UNITYENGINE_RPGDEFORMATIONMANAGER_ADDDEFORMATIONCASTEDRENDER_OFFSET UNITYSDK_OFFSET(0x1A46ABB0)
#define UNITYENGINE_RPGDEFORMATIONMANAGER_ADDDEFORMATIONRECEIVEDRENDER_OFFSET UNITYSDK_OFFSET(0x1A46ABD0)
#define UNITYENGINE_RPGDEFORMATIONMANAGER_REMOVEDEFORMATIONCASTEDRENDER_OFFSET UNITYSDK_OFFSET(0x1A46ABC0)
#define UNITYENGINE_RPGDEFORMATIONMANAGER_REMOVEDEFORMATIONRECEIVEDRENDER_OFFSET UNITYSDK_OFFSET(0x1A46ABE0)
#define UNITYENGINE_RPGDEFORMATIONMANAGER_REMOVEINVALIDRENDER_OFFSET UNITYSDK_OFFSET(0x1A46ABF0)

namespace UnityEngine
{
	inline static constexpr unsigned int RPGDeformationManager_TypeDefinitionIndex = 4086;

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
