#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPMainCameraDesc_TypeDefinitionIndex = 4792;

	struct alignas(4) CRPMainCameraDesc
	{
		::System::Boolean isInit; // 0x10
		::System::Int32 width; // 0x14
		::System::Int32 height; // 0x18
		::System::Int32 pixelWidth; // 0x1C
		::System::Int32 pixelHeight; // 0x20
		::System::Single fov; // 0x24
		::System::Single aspect; // 0x28
		::System::Single nearPlane; // 0x2C
		::System::Single farPlane; // 0x30
		::UnityEngine::Vector3 forward; // 0x34
		::System::Int32 cameraType; // 0x40
		::System::Boolean finalRender2RT; // 0x44
		::System::Int32 cullingMask; // 0x48
		::System::Int32 srcID; // 0x4C
		::System::Int32 desID; // 0x50
		::UnityEngine::Matrix4x4 matProj; // 0x54
		::System::UInt32 _Flag; // 0x94
		::System::UInt32 _DebugFlag; // 0x98
	};
}
