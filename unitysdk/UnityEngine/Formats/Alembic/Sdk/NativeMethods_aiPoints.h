#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOINTS_AISCHEMAGETSAMPLE_OFFSET UNITYSDK_OFFSET(0x187A6230)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int NativeMethods_aiPoints_TypeDefinitionIndex = 34963;

	struct alignas(1) NativeMethods_aiPoints
	{
		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiPointsSample aiSchemaGetSample(::System::IntPtr schema)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiPointsSample(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIPOINTS_AISCHEMAGETSAMPLE_OFFSET))(schema);
		}
		*/
	};
}
