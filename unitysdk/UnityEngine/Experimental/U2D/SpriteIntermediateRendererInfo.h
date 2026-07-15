#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace UnityEngine::Experimental::U2D
{
	inline static constexpr unsigned int SpriteIntermediateRendererInfo_TypeDefinitionIndex = 4912;

	struct alignas(8) SpriteIntermediateRendererInfo
	{
		::System::Int32 SpriteID; // 0x10
		::System::Int32 TextureID; // 0x14
		::System::Int32 MaterialID; // 0x18
		::UnityEngine::Color Color; // 0x1C
		::UnityEngine::Matrix4x4 Transform; // 0x2C
		::UnityEngine::Bounds Bounds; // 0x6C
		::System::Int32 Layer; // 0x84
		::System::Int32 SortingLayer; // 0x88
		::System::Int32 SortingOrder; // 0x8C
		::System::UInt64 SceneCullingMask; // 0x90
		::System::IntPtr IndexData; // 0x98
		::System::IntPtr VertexData; // 0xA0
		::System::Int32 IndexCount; // 0xA8
		::System::Int32 VertexCount; // 0xAC
		::System::Int32 ShaderChannelMask; // 0xB0
	};
}
