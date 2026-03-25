#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NVIDIA/DLSSFeatureFlags.h"
#include "unitysdk/UnityEngine/NVIDIA/DLSSQuality.h"

#define UNITYENGINE_NVIDIA_DLSSCOMMANDINITIALIZATIONDATA_GET_FEATURESLOT_OFFSET UNITYSDK_OFFSET(0x5E00)
#define UNITYENGINE_NVIDIA_DLSSCOMMANDINITIALIZATIONDATA_GET_OUTPUTRTHEIGHT_OFFSET UNITYSDK_OFFSET(0x793A0)
#define UNITYENGINE_NVIDIA_DLSSCOMMANDINITIALIZATIONDATA_GET_OUTPUTRTWIDTH_OFFSET UNITYSDK_OFFSET(0xD250)
#define UNITYENGINE_NVIDIA_DLSSCOMMANDINITIALIZATIONDATA_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0x68F0)
#define UNITYENGINE_NVIDIA_DLSSCOMMANDINITIALIZATIONDATA_SETFLAG_OFFSET UNITYSDK_OFFSET(0x211EB80)
#define UNITYENGINE_NVIDIA_DLSSCOMMANDINITIALIZATIONDATA_SET_FEATURESLOT_OFFSET UNITYSDK_OFFSET(0xBC50)
#define UNITYENGINE_NVIDIA_DLSSCOMMANDINITIALIZATIONDATA_SET_INPUTRTHEIGHT_OFFSET UNITYSDK_OFFSET(0x1D50)
#define UNITYENGINE_NVIDIA_DLSSCOMMANDINITIALIZATIONDATA_SET_INPUTRTWIDTH_OFFSET UNITYSDK_OFFSET(0x29130)
#define UNITYENGINE_NVIDIA_DLSSCOMMANDINITIALIZATIONDATA_SET_OUTPUTRTHEIGHT_OFFSET UNITYSDK_OFFSET(0x2105690)
#define UNITYENGINE_NVIDIA_DLSSCOMMANDINITIALIZATIONDATA_SET_OUTPUTRTWIDTH_OFFSET UNITYSDK_OFFSET(0xD260)
#define UNITYENGINE_NVIDIA_DLSSCOMMANDINITIALIZATIONDATA_SET_QUALITY_OFFSET UNITYSDK_OFFSET(0x26F0)

namespace UnityEngine::NVIDIA
{
	inline static constexpr unsigned int DLSSCommandInitializationData_TypeDefinitionIndex = 5164;

	struct alignas(4) DLSSCommandInitializationData
	{
		::System::UInt32 m_InputRTWidth; // 0x10
		::System::UInt32 m_InputRTHeight; // 0x14
		::System::UInt32 m_OutputRTWidth; // 0x18
		::System::UInt32 m_OutputRTHeight; // 0x1C
		::UnityEngine::NVIDIA::DLSSQuality m_Quality; // 0x20
		::UnityEngine::NVIDIA::DLSSFeatureFlags m_Flags; // 0x24
		::System::UInt32 m_FeatureSlot; // 0x28

		::System::Void set_inputRTWidth(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCOMMANDINITIALIZATIONDATA_SET_INPUTRTWIDTH_OFFSET))(this, value);
		}

		::System::Void set_inputRTHeight(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCOMMANDINITIALIZATIONDATA_SET_INPUTRTHEIGHT_OFFSET))(this, value);
		}

		::System::Void set_outputRTWidth(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCOMMANDINITIALIZATIONDATA_SET_OUTPUTRTWIDTH_OFFSET))(this, value);
		}

		::System::UInt32 get_outputRTWidth()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCOMMANDINITIALIZATIONDATA_GET_OUTPUTRTWIDTH_OFFSET))(this);
		}

		::System::Void set_outputRTHeight(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCOMMANDINITIALIZATIONDATA_SET_OUTPUTRTHEIGHT_OFFSET))(this, value);
		}

		::System::UInt32 get_outputRTHeight()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCOMMANDINITIALIZATIONDATA_GET_OUTPUTRTHEIGHT_OFFSET))(this);
		}

		::System::Void set_quality(::UnityEngine::NVIDIA::DLSSQuality value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NVIDIA::DLSSQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCOMMANDINITIALIZATIONDATA_SET_QUALITY_OFFSET))(this, value);
		}

		::UnityEngine::NVIDIA::DLSSQuality get_quality()
		{
			return ((::UnityEngine::NVIDIA::DLSSQuality(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCOMMANDINITIALIZATIONDATA_GET_QUALITY_OFFSET))(this);
		}

		::System::Void set_featureSlot(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCOMMANDINITIALIZATIONDATA_SET_FEATURESLOT_OFFSET))(this, value);
		}

		::System::UInt32 get_featureSlot()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCOMMANDINITIALIZATIONDATA_GET_FEATURESLOT_OFFSET))(this);
		}

		::System::Void SetFlag(::UnityEngine::NVIDIA::DLSSFeatureFlags flag, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NVIDIA::DLSSFeatureFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCOMMANDINITIALIZATIONDATA_SETFLAG_OFFSET))(this, flag, value);
		}
	};
}
