#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Renderer; }

#define UNITYENGINE_RPGDEFORMATIONMANAGER_ADDDEFORMATIONCASTEDRENDER_OFFSET UNITYSDK_OFFSET(0x1CDF5A90)
#define UNITYENGINE_RPGDEFORMATIONMANAGER_ADDDEFORMATIONRECEIVEDRENDER_OFFSET UNITYSDK_OFFSET(0x1CDF5AB0)
#define UNITYENGINE_RPGDEFORMATIONMANAGER_REMOVEDEFORMATIONCASTEDRENDER_OFFSET UNITYSDK_OFFSET(0x1CDF5AA0)
#define UNITYENGINE_RPGDEFORMATIONMANAGER_REMOVEDEFORMATIONRECEIVEDRENDER_OFFSET UNITYSDK_OFFSET(0x1CDF5AC0)
#define UNITYENGINE_RPGDEFORMATIONMANAGER_REMOVEINVALIDRENDER_OFFSET UNITYSDK_OFFSET(0x1CDF5AD0)
#define UNITYENGINE_RPGDEFORMATIONMANAGER_UPDATEDEFORMATIONCENTER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1CDF5AF0)
#define UNITYENGINE_RPGDEFORMATIONMANAGER_UPDATEDEFORMATIONCENTER_OFFSET UNITYSDK_OFFSET(0x1CDF5AE0)

namespace UnityEngine
{
	inline static constexpr unsigned int RPGDeformationManager_TypeDefinitionIndex = 4265;

	class RPGDeformationManager : public ::System::Object
	{
	public:
		static ::System::Void AddDeformationCastedRender(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGDEFORMATIONMANAGER_ADDDEFORMATIONCASTEDRENDER_OFFSET))(a1);
		}

		static ::System::Void RemoveDeformationCastedRender(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGDEFORMATIONMANAGER_REMOVEDEFORMATIONCASTEDRENDER_OFFSET))(a1);
		}

		static ::System::Void AddDeformationReceivedRender(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGDEFORMATIONMANAGER_ADDDEFORMATIONRECEIVEDRENDER_OFFSET))(a1);
		}

		static ::System::Void RemoveDeformationReceivedRender(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGDEFORMATIONMANAGER_REMOVEDEFORMATIONRECEIVEDRENDER_OFFSET))(a1);
		}

		static ::System::Void RemoveInvalidRender(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGDEFORMATIONMANAGER_REMOVEINVALIDRENDER_OFFSET))(a1);
		}

		static ::System::Void UpdateDeformationCenter(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGDEFORMATIONMANAGER_UPDATEDEFORMATIONCENTER_OFFSET))(a1);
		}

		static ::System::Void UpdateDeformationCenter_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGDEFORMATIONMANAGER_UPDATEDEFORMATIONCENTER_INJECTED_OFFSET))(a1);
		}
	};
}
