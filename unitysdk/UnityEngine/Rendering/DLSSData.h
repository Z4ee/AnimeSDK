#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DLSSData_TypeDefinitionIndex = 4798;

	struct alignas(8) DLSSData
	{
		::System::IntPtr SetTextureCallback; // 0x10
		::System::IntPtr ExecuteCallback; // 0x18
		::System::IntPtr ExecuteData; // 0x20
		::System::Int32 ExecuteEventID; // 0x28
		::System::Int32 FeatureSlot; // 0x2C
		::System::Boolean Enabled; // 0x30
		::System::Int32 Quality; // 0x34
		::System::Single MipMapBias; // 0x38
		::System::Boolean ClipColor; // 0x3C
		::System::Boolean ClipColorByTAA; // 0x3D
	};
}
