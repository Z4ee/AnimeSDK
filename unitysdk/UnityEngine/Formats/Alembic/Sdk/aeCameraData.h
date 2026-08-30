#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Formats/Alembic/Sdk/Bool.h"

#define UNITYENGINE_FORMATS_ALEMBIC_SDK_AECAMERADATA_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1CE43500)

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int aeCameraData_TypeDefinitionIndex = 44649;

	struct alignas(4) aeCameraData
	{
		::UnityEngine::Formats::Alembic::Sdk::Bool visibility; // 0x10
		::System::Single nearClippingPlane; // 0x14
		::System::Single farClippingPlane; // 0x18
		::System::Single fieldOfView; // 0x1C
		::System::Single aspectRatio; // 0x20
		::System::Single focusDistance; // 0x24
		::System::Single focalLength; // 0x28
		::System::Single aperture; // 0x2C

		static ::UnityEngine::Formats::Alembic::Sdk::aeCameraData get_defaultValue()
		{
			return ((::UnityEngine::Formats::Alembic::Sdk::aeCameraData(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_FORMATS_ALEMBIC_SDK_AECAMERADATA_GET_DEFAULTVALUE_OFFSET))();
		}
	};
}
