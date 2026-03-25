#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISUBD_AISCHEMAGETSAMPLE_OFFSET UNITYSDK_OFFSET(0x187A6330)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int NativeMethods_aiSubD_TypeDefinitionIndex = 34962;

	struct alignas(1) NativeMethods_aiSubD
	{
		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiPolyMeshSample aiSchemaGetSample(::System::IntPtr schema)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiPolyMeshSample(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AISUBD_AISCHEMAGETSAMPLE_OFFSET))(schema);
		}
		*/
	};
}
