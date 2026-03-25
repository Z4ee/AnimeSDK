#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RPGGRASSBLOCKMANAGERINTERFACE_ACTIVATEBEFORECULLCOMPUTEFORTHISFRAME_OFFSET UNITYSDK_OFFSET(0x18A30D80)
#define UNITYENGINE_RPGGRASSBLOCKMANAGERINTERFACE_SETCOUNTINITVOLUMEJOBSPERFRAME_OFFSET UNITYSDK_OFFSET(0x18A30D70)
#define UNITYENGINE_RPGGRASSBLOCKMANAGERINTERFACE_SETGRASSCURRENTQUALITYLEVEL_OFFSET UNITYSDK_OFFSET(0x18A30D90)

namespace UnityEngine
{
	inline static constexpr unsigned int RPGGrassBlockManagerInterface_TypeDefinitionIndex = 4094;

	class RPGGrassBlockManagerInterface : public ::System::Object
	{
	public:
		static ::System::Void SetCountInitVolumeJobsPerFrame(::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGGRASSBLOCKMANAGERINTERFACE_SETCOUNTINITVOLUMEJOBSPERFRAME_OFFSET))(count);
		}

		static ::System::Void ActivateBeforeCullComputeForThisFrame()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RPGGRASSBLOCKMANAGERINTERFACE_ACTIVATEBEFORECULLCOMPUTEFORTHISFRAME_OFFSET))();
		}

		static ::System::Void SetGrassCurrentQualityLevel(::System::Int32 qualityLevel)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGGRASSBLOCKMANAGERINTERFACE_SETGRASSCURRENTQUALITYLEVEL_OFFSET))(qualityLevel);
		}
	};
}
