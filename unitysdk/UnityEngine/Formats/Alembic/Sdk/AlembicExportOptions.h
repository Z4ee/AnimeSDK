#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/Bool.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/TimeSamplingType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/TransformType.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0x1A1DD080)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x1A1DD100)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_SWAPFACES_OFFSET UNITYSDK_OFFSET(0x1A1DD0E0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_SWAPHANDEDNESS_OFFSET UNITYSDK_OFFSET(0x1A1DD0C0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_TIMESAMPLINGTYPE_OFFSET UNITYSDK_OFFSET(0x1A1DD060)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_TRANFORMTYPE_OFFSET UNITYSDK_OFFSET(0x1A1DD0A0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0x1A1DD090)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x1A1DD110)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_SWAPFACES_OFFSET UNITYSDK_OFFSET(0x1A1DD0F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_SWAPHANDEDNESS_OFFSET UNITYSDK_OFFSET(0x1A1DD0D0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_TIMESAMPLINGTYPE_OFFSET UNITYSDK_OFFSET(0x1A1DD070)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_TRANFORMTYPE_OFFSET UNITYSDK_OFFSET(0x1A1DD0B0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1DD120)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int AlembicExportOptions_TypeDefinitionIndex = 40776;

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

		::System::Void set_TimeSamplingType(::UnityEngine::Formats::Alembic::Sdk::TimeSamplingType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::TimeSamplingType))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_TIMESAMPLINGTYPE_OFFSET))(this, value);
		}

		::System::Single get_FrameRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_FRAMERATE_OFFSET))(this);
		}

		::System::Void set_FrameRate(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_FRAMERATE_OFFSET))(this, value);
		}

		::UnityEngine::Formats::Alembic::Sdk::TransformType get_TranformType()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::TransformType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_TRANFORMTYPE_OFFSET))(this);
		}

		::System::Void set_TranformType(::UnityEngine::Formats::Alembic::Sdk::TransformType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Formats::Alembic::Sdk::TransformType))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_TRANFORMTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_SwapHandedness()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_SWAPHANDEDNESS_OFFSET))(this);
		}

		::System::Void set_SwapHandedness(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_SWAPHANDEDNESS_OFFSET))(this, value);
		}

		::System::Boolean get_SwapFaces()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_SWAPFACES_OFFSET))(this);
		}

		::System::Void set_SwapFaces(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_SWAPFACES_OFFSET))(this, value);
		}

		::System::Single get_ScaleFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_SCALEFACTOR_OFFSET))(this);
		}

		::System::Void set_ScaleFactor(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_SCALEFACTOR_OFFSET))(this, value);
		}
	};
}
