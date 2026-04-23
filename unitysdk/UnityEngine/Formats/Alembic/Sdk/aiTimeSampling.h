#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AITIMESAMPLING_GETTIME_OFFSET UNITYSDK_OFFSET(0x22D9B80)
#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AITIMESAMPLING_GET_SAMPLECOUNT_OFFSET UNITYSDK_OFFSET(0x22D9B00)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aiTimeSampling_TypeDefinitionIndex = 40817;

	struct alignas(8) aiTimeSampling
	{
		::System::IntPtr self; // 0x10

		::System::Int32 get_sampleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AITIMESAMPLING_GET_SAMPLECOUNT_OFFSET))(this);
		}

		::System::Double GetTime(::System::Int32 index)
		{
			return ((::System::Double(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AITIMESAMPLING_GETTIME_OFFSET))(this, index);
		}
	};
}
