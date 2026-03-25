#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICURVES_AISCHEMAGETSAMPLE_OFFSET UNITYSDK_OFFSET(0x187A61B0)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int NativeMethods_aiCurves_TypeDefinitionIndex = 34964;

	struct alignas(1) NativeMethods_aiCurves
	{
		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiCurvesSample aiSchemaGetSample(::System::IntPtr schema)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiCurvesSample(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICURVES_AISCHEMAGETSAMPLE_OFFSET))(schema);
		}
		*/
	};
}
