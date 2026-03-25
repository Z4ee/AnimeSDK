#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIXFORM_AISCHEMAGETSAMPLE_OFFSET UNITYSDK_OFFSET(0x187A63B0)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int NativeMethods_aiXform_TypeDefinitionIndex = 34959;

	struct alignas(1) NativeMethods_aiXform
	{
		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiXformSample aiSchemaGetSample(::System::IntPtr schema)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiXformSample(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AIXFORM_AISCHEMAGETSAMPLE_OFFSET))(schema);
		}
		*/
	};
}
