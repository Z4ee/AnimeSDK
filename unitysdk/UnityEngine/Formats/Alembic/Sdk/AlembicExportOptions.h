#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/Bool.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/TimeSamplingType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/TransformType.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0x1EAB2440)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x1EAB24C0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_SWAPFACES_OFFSET UNITYSDK_OFFSET(0x1EAB24A0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_SWAPHANDEDNESS_OFFSET UNITYSDK_OFFSET(0x1EAB2480)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_TIMESAMPLINGTYPE_OFFSET UNITYSDK_OFFSET(0x1EAB2420)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_TRANFORMTYPE_OFFSET UNITYSDK_OFFSET(0x1EAB2460)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0x1EAB2450)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x1EAB24D0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_SWAPFACES_OFFSET UNITYSDK_OFFSET(0x1EAB24B0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_SWAPHANDEDNESS_OFFSET UNITYSDK_OFFSET(0x1EAB2490)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_TIMESAMPLINGTYPE_OFFSET UNITYSDK_OFFSET(0x1EAB2430)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_TRANFORMTYPE_OFFSET UNITYSDK_OFFSET(0x1EAB2470)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAB24E0)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int AlembicExportOptions_TypeDefinitionIndex = 44644;

	class AlembicExportOptions : public ::System::Object
	{
	public:
		::UnityEngine::Formats::Alembic::Sdk::TimeSamplingType timeSamplingType; // 0x10
		::System::Single frameRate; // 0x14
		::UnityEngine::Formats::Alembic::Sdk::TransformType xformType; // 0x18
		::UnityEngine::Formats::Alembic::Sdk::Bool swapHandedness; // 0x1C
		::UnityEngine::Formats::Alembic::Sdk::Bool swapFaces; // 0x1D
		::System::Single scaleFactor; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS__CTOR_OFFSET))(this);
		}

		::UnityEngine::Formats::Alembic::Sdk::TimeSamplingType get_TimeSamplingType()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::TimeSamplingType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_TIMESAMPLINGTYPE_OFFSET))(this);
		}

		::System::Void set_TimeSamplingType(::UnityEngine::Formats::Alembic::Sdk::TimeSamplingType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::TimeSamplingType))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_TIMESAMPLINGTYPE_OFFSET))(this, a1);
		}

		::System::Single get_FrameRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_FRAMERATE_OFFSET))(this);
		}

		::System::Void set_FrameRate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_FRAMERATE_OFFSET))(this, a1);
		}

		::UnityEngine::Formats::Alembic::Sdk::TransformType get_TranformType()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::TransformType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_TRANFORMTYPE_OFFSET))(this);
		}

		::System::Void set_TranformType(::UnityEngine::Formats::Alembic::Sdk::TransformType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::TransformType))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_TRANFORMTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_SwapHandedness()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_SWAPHANDEDNESS_OFFSET))(this);
		}

		::System::Void set_SwapHandedness(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_SWAPHANDEDNESS_OFFSET))(this, a1);
		}

		::System::Boolean get_SwapFaces()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_SWAPFACES_OFFSET))(this);
		}

		::System::Void set_SwapFaces(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_SWAPFACES_OFFSET))(this, a1);
		}

		::System::Single get_ScaleFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_SCALEFACTOR_OFFSET))(this);
		}

		::System::Void set_ScaleFactor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_SCALEFACTOR_OFFSET))(this, a1);
		}
	};
}
