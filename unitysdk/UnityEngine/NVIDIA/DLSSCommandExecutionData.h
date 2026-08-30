#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_NVIDIA_DLSSCOMMANDEXECUTIONDATA_SET_FEATURESLOT_OFFSET UNITYSDK_OFFSET(0x3C44F70)
#define UNITYENGINE_NVIDIA_DLSSCOMMANDEXECUTIONDATA_SET_INVERTXAXIS_OFFSET UNITYSDK_OFFSET(0x3C64DD0)
#define UNITYENGINE_NVIDIA_DLSSCOMMANDEXECUTIONDATA_SET_INVERTYAXIS_OFFSET UNITYSDK_OFFSET(0x3C14FB0)
#define UNITYENGINE_NVIDIA_DLSSCOMMANDEXECUTIONDATA_SET_JITTEROFFSETX_OFFSET UNITYSDK_OFFSET(0x3AE84E0)
#define UNITYENGINE_NVIDIA_DLSSCOMMANDEXECUTIONDATA_SET_JITTEROFFSETY_OFFSET UNITYSDK_OFFSET(0x3C6E0E0)
#define UNITYENGINE_NVIDIA_DLSSCOMMANDEXECUTIONDATA_SET_MVSCALEX_OFFSET UNITYSDK_OFFSET(0x3A546B0)
#define UNITYENGINE_NVIDIA_DLSSCOMMANDEXECUTIONDATA_SET_MVSCALEY_OFFSET UNITYSDK_OFFSET(0x3A546C0)
#define UNITYENGINE_NVIDIA_DLSSCOMMANDEXECUTIONDATA_SET_PREEXPOSURE_OFFSET UNITYSDK_OFFSET(0xB596D0)
#define UNITYENGINE_NVIDIA_DLSSCOMMANDEXECUTIONDATA_SET_RESET_OFFSET UNITYSDK_OFFSET(0x18EB0)
#define UNITYENGINE_NVIDIA_DLSSCOMMANDEXECUTIONDATA_SET_SHARPNESS_OFFSET UNITYSDK_OFFSET(0x3A545E0)
#define UNITYENGINE_NVIDIA_DLSSCOMMANDEXECUTIONDATA_SET_SUBRECTHEIGHT_OFFSET UNITYSDK_OFFSET(0x3AE8360)
#define UNITYENGINE_NVIDIA_DLSSCOMMANDEXECUTIONDATA_SET_SUBRECTOFFSETX_OFFSET UNITYSDK_OFFSET(0xF6B0)
#define UNITYENGINE_NVIDIA_DLSSCOMMANDEXECUTIONDATA_SET_SUBRECTOFFSETY_OFFSET UNITYSDK_OFFSET(0x3AF6880)
#define UNITYENGINE_NVIDIA_DLSSCOMMANDEXECUTIONDATA_SET_SUBRECTWIDTH_OFFSET UNITYSDK_OFFSET(0xFDC0)

namespace UnityEngine::NVIDIA
{
	inline static constexpr unsigned int DLSSCommandExecutionData_TypeDefinitionIndex = 5019;

	struct alignas(4) DLSSCommandExecutionData
	{
		::System::Int32 m_Reset; // 0x10
		::System::Single m_Sharpness; // 0x14
		::System::Single m_MVScaleX; // 0x18
		::System::Single m_MVScaleY; // 0x1C
		::System::Single m_JitterOffsetX; // 0x20
		::System::Single m_JitterOffsetY; // 0x24
		::System::Single m_PreExposure; // 0x28
		::System::UInt32 m_SubrectOffsetX; // 0x2C
		::System::UInt32 m_SubrectOffsetY; // 0x30
		::System::UInt32 m_SubrectWidth; // 0x34
		::System::UInt32 m_SubrectHeight; // 0x38
		::System::UInt32 m_InvertXAxis; // 0x3C
		::System::UInt32 m_InvertYAxis; // 0x40
		::System::UInt32 m_FeatureSlot; // 0x44

		::System::Void set_reset(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCOMMANDEXECUTIONDATA_SET_RESET_OFFSET))(this, a1);
		}

		::System::Void set_sharpness(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCOMMANDEXECUTIONDATA_SET_SHARPNESS_OFFSET))(this, a1);
		}

		::System::Void set_mvScaleX(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCOMMANDEXECUTIONDATA_SET_MVSCALEX_OFFSET))(this, a1);
		}

		::System::Void set_mvScaleY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCOMMANDEXECUTIONDATA_SET_MVSCALEY_OFFSET))(this, a1);
		}

		::System::Void set_jitterOffsetX(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCOMMANDEXECUTIONDATA_SET_JITTEROFFSETX_OFFSET))(this, a1);
		}

		::System::Void set_jitterOffsetY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCOMMANDEXECUTIONDATA_SET_JITTEROFFSETY_OFFSET))(this, a1);
		}

		::System::Void set_preExposure(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCOMMANDEXECUTIONDATA_SET_PREEXPOSURE_OFFSET))(this, a1);
		}

		::System::Void set_subrectOffsetX(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCOMMANDEXECUTIONDATA_SET_SUBRECTOFFSETX_OFFSET))(this, a1);
		}

		::System::Void set_subrectOffsetY(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCOMMANDEXECUTIONDATA_SET_SUBRECTOFFSETY_OFFSET))(this, a1);
		}

		::System::Void set_subrectWidth(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCOMMANDEXECUTIONDATA_SET_SUBRECTWIDTH_OFFSET))(this, a1);
		}

		::System::Void set_subrectHeight(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCOMMANDEXECUTIONDATA_SET_SUBRECTHEIGHT_OFFSET))(this, a1);
		}

		::System::Void set_invertXAxis(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCOMMANDEXECUTIONDATA_SET_INVERTXAXIS_OFFSET))(this, a1);
		}

		::System::Void set_invertYAxis(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCOMMANDEXECUTIONDATA_SET_INVERTYAXIS_OFFSET))(this, a1);
		}

		::System::Void set_featureSlot(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_NVIDIA_DLSSCOMMANDEXECUTIONDATA_SET_FEATURESLOT_OFFSET))(this, a1);
		}
	};
}
