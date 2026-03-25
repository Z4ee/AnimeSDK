#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPMainCameraDesc_TypeDefinitionIndex = 4605;

	struct alignas(4) CRPMainCameraDesc
	{
		::System::Boolean isInit; // 0x10
		::System::Int32 width; // 0x14
		::System::Int32 height; // 0x18
		::System::Single fov; // 0x1C
		::System::Single aspect; // 0x20
		::System::Single nearPlane; // 0x24
		::System::Single farPlane; // 0x28
		::UnityEngine::Vector3 forward; // 0x2C
		::System::Int32 cameraType; // 0x38
		::System::Boolean finalRender2RT; // 0x3C
		::System::Int32 cullingMask; // 0x40
		::System::Int32 srcID; // 0x44
		::System::Int32 desID; // 0x48
		::UnityEngine::Matrix4x4 matProj; // 0x4C
		::System::UInt32 _Flag; // 0x8C
		::System::UInt32 _DebugFlag; // 0x90
	};
}
