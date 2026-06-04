#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICAMERA_AISCHEMAGETSAMPLE_OFFSET UNITYSDK_OFFSET(0x1B044710)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int NativeMethods_aiCamera_TypeDefinitionIndex = 41614;

	struct alignas(1) NativeMethods_aiCamera
	{
		/*
		static ::UnityEngine::Formats::Alembic::Sdk::aiCameraSample aiSchemaGetSample(::System::IntPtr a1)
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aiCameraSample(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_NATIVEMETHODS_AICAMERA_AISCHEMAGETSAMPLE_OFFSET))(a1);
		}
		*/
	};
}
