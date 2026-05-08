#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int ShadowProjector_SliceData_SliceDataPerFrame_TypeDefinitionIndex = 30367;

	struct alignas(4) ShadowProjector_SliceData_SliceDataPerFrame
	{
		::UnityEngine::Bounds boundsWS; // 0x10
		::UnityEngine::Matrix4x4 shadowViewToWorldMatrixForBounds; // 0x28
		::UnityEngine::Bounds boundsSVS; // 0x68
		::UnityEngine::Vector3 nearPlaneCenterWS; // 0x80
		::UnityEngine::Matrix4x4 shadowViewMatrix; // 0x8C
		::UnityEngine::Matrix4x4 shadowProjMatrix; // 0xCC
		::UnityEngine::Matrix4x4 frustumLocalToWorldMatrix; // 0x10C
		::UnityEngine::Matrix4x4 worldToAtlasUVMatrix; // 0x14C
		::UnityEngine::Vector2 sliceOffset; // 0x18C
		::UnityEngine::Vector2Int sliceResolution; // 0x194
		::UnityEngine::Vector4 sliceUVOffsetExtend; // 0x19C
	};
}
