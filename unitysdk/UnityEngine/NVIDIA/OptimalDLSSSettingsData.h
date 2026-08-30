#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_NVIDIA_OPTIMALDLSSSETTINGSDATA_GET_MAXHEIGHT_OFFSET UNITYSDK_OFFSET(0x7845E0)
#define UNITYENGINE_NVIDIA_OPTIMALDLSSSETTINGSDATA_GET_MAXWIDTH_OFFSET UNITYSDK_OFFSET(0x784470)
#define UNITYENGINE_NVIDIA_OPTIMALDLSSSETTINGSDATA_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0xF020)
#define UNITYENGINE_NVIDIA_OPTIMALDLSSSETTINGSDATA_GET_MINWIDTH_OFFSET UNITYSDK_OFFSET(0xF080)
#define UNITYENGINE_NVIDIA_OPTIMALDLSSSETTINGSDATA_GET_OUTRENDERHEIGHT_OFFSET UNITYSDK_OFFSET(0x784260)
#define UNITYENGINE_NVIDIA_OPTIMALDLSSSETTINGSDATA_GET_OUTRENDERWIDTH_OFFSET UNITYSDK_OFFSET(0x19050)
#define UNITYENGINE_NVIDIA_OPTIMALDLSSSETTINGSDATA_GET_SHARPNESS_OFFSET UNITYSDK_OFFSET(0xB5A200)

namespace UnityEngine::NVIDIA
{
	inline static constexpr unsigned int OptimalDLSSSettingsData_TypeDefinitionIndex = 5021;

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
