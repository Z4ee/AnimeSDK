#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RPGGRASSBLOCKMANAGERINTERFACE_ACTIVATEBEFORECULLCOMPUTEFORTHISFRAME_OFFSET UNITYSDK_OFFSET(0x1B2BA850)
#define UNITYENGINE_RPGGRASSBLOCKMANAGERINTERFACE_SETCOUNTINITVOLUMEJOBSPERFRAME_OFFSET UNITYSDK_OFFSET(0x1B2BA840)
#define UNITYENGINE_RPGGRASSBLOCKMANAGERINTERFACE_SETGRASSCURRENTQUALITYLEVEL_OFFSET UNITYSDK_OFFSET(0x1B2BA860)

namespace UnityEngine
{
	inline static constexpr unsigned int RPGGrassBlockManagerInterface_TypeDefinitionIndex = 4270;

	class RPGGrassBlockManagerInterface : public ::System::Object
	{
	public:
		static ::System::Void SetCountInitVolumeJobsPerFrame(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGGRASSBLOCKMANAGERINTERFACE_SETCOUNTINITVOLUMEJOBSPERFRAME_OFFSET))(a1);
		}

		static ::System::Void ActivateBeforeCullComputeForThisFrame()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RPGGRASSBLOCKMANAGERINTERFACE_ACTIVATEBEFORECULLCOMPUTEFORTHISFRAME_OFFSET))();
		}

		static ::System::Void SetGrassCurrentQualityLevel(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGGRASSBLOCKMANAGERINTERFACE_SETGRASSCURRENTQUALITYLEVEL_OFFSET))(a1);
		}
	};
}
