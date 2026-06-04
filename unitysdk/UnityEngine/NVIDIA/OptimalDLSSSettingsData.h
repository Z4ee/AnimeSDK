#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_NVIDIA_OPTIMALDLSSSETTINGSDATA_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x6EE0)
#define UNITYENGINE_NVIDIA_OPTIMALDLSSSETTINGSDATA_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x140A50)
#define UNITYENGINE_NVIDIA_OPTIMALDLSSSETTINGSDATA_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x63E0)
#define UNITYENGINE_NVIDIA_OPTIMALDLSSSETTINGSDATA_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0x6EF0)
#define UNITYENGINE_NVIDIA_OPTIMALDLSSSETTINGSDATA_GET_OUTRENDERHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E110)
#define UNITYENGINE_NVIDIA_OPTIMALDLSSSETTINGSDATA_GET_OUTRENDERWIDTH_OFFSET UNITYSDK_OFFSET(0x5FB0)
#define UNITYENGINE_NVIDIA_OPTIMALDLSSSETTINGSDATA_GET_SHARPNESS_OFFSET UNITYSDK_OFFSET(0xD510)

namespace UnityEngine::NVIDIA
{
	inline static constexpr unsigned int OptimalDLSSSettingsData_TypeDefinitionIndex = 5004;

	struct alignas(4) OptimalDLSSSettingsData
	{
		::System::UInt32 m_OutRenderWidth; // 0x10
		::System::UInt32 m_OutRenderHeight; // 0x14
		::System::Single m_Sharpness; // 0x18
		::System::UInt32 m_MaxWidth; // 0x1C
		::System::UInt32 m_MaxHeight; // 0x20
		::System::UInt32 m_MinWidth; // 0x24
		::System::UInt32 m_MinHeight; // 0x28

		::System::UInt32 get_outRenderWidth()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_OPTIMALDLSSSETTINGSDATA_GET_OUTRENDERWIDTH_OFFSET))(this);
		}

		::System::UInt32 get_outRenderHeight()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_OPTIMALDLSSSETTINGSDATA_GET_OUTRENDERHEIGHT_OFFSET))(this);
		}

		::System::Single get_sharpness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_OPTIMALDLSSSETTINGSDATA_GET_SHARPNESS_OFFSET))(this);
		}

		::System::UInt32 get_maxWidth()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_OPTIMALDLSSSETTINGSDATA_GET_MAXWIDTH_OFFSET))(this);
		}

		::System::UInt32 get_maxHeight()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_OPTIMALDLSSSETTINGSDATA_GET_MAXHEIGHT_OFFSET))(this);
		}

		::System::UInt32 get_minWidth()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_OPTIMALDLSSSETTINGSDATA_GET_MINWIDTH_OFFSET))(this);
		}

		::System::UInt32 get_minHeight()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_OPTIMALDLSSSETTINGSDATA_GET_MINHEIGHT_OFFSET))(this);
		}
	};
}
