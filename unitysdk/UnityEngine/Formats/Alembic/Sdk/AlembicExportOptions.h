#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/Bool.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/TimeSamplingType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/TransformType.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0x187A31A0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x187A3220)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_SWAPFACES_OFFSET UNITYSDK_OFFSET(0x187A3200)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_SWAPHANDEDNESS_OFFSET UNITYSDK_OFFSET(0x187A31E0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_TIMESAMPLINGTYPE_OFFSET UNITYSDK_OFFSET(0x187A3180)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_GET_TRANFORMTYPE_OFFSET UNITYSDK_OFFSET(0x187A31C0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_FRAMERATE_OFFSET UNITYSDK_OFFSET(0x187A31B0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_SCALEFACTOR_OFFSET UNITYSDK_OFFSET(0x187A3230)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_SWAPFACES_OFFSET UNITYSDK_OFFSET(0x187A3210)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_SWAPHANDEDNESS_OFFSET UNITYSDK_OFFSET(0x187A31F0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_TIMESAMPLINGTYPE_OFFSET UNITYSDK_OFFSET(0x187A3190)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS_SET_TRANFORMTYPE_OFFSET UNITYSDK_OFFSET(0x187A31D0)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_ALEMBICEXPORTOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x187A3240)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int AlembicExportOptions_TypeDefinitionIndex = 34948;

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
