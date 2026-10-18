#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Texture; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SimpRTXSceneResources_TypeDefinitionIndex = 4895;

	struct alignas(8) SimpRTXSceneResources
	{
		::UnityEngine::ComputeBuffer* BVHNodes; // 0x10
		::UnityEngine::ComputeBuffer* ObjectData; // 0x18
		::UnityEngine::Texture* SDFAtlas; // 0x20
		::System::Int32 ObjectCount; // 0x28
		::System::Int32 BVHNodeCount; // 0x2C
		::System::Int32 BVHMaxDepth; // 0x30
		::UnityEngine::Texture* SimpRTXAtlas; // 0x38
		::UnityEngine::Texture* SimpRTXDatas; // 0x40
		::System::Single SimpRTXQuadGroupCount; // 0x48
		::System::Single SimpRTXCylinderGroupCount; // 0x4C
		::System::Single SimpRTXIntensity; // 0x50
		::UnityEngine::Vector4 SimpRTXAtlasDimension; // 0x54
		::UnityEngine::Texture* SurfaceCardInfo; // 0x68
		::UnityEngine::Texture* SurfaceCardAtlas; // 0x70
		::System::Int32 MaxCardsPerDirection; // 0x78
		::System::Single CardBoundsExpand; // 0x7C
		::UnityEngine::ComputeBuffer* SWRTIndices; // 0x80
		::UnityEngine::ComputeBuffer* SWRTPositions; // 0x88
		::UnityEngine::ComputeBuffer* SWRTTangents; // 0x90
		::UnityEngine::ComputeBuffer* SWRTUVs; // 0x98
		::UnityEngine::ComputeBuffer* SWRTBVHNodes8; // 0xA0
		::UnityEngine::ComputeBuffer* SWRTTriangleIndex8; // 0xA8
		::UnityEngine::ComputeBuffer* SWRTTriangle8; // 0xB0
		::UnityEngine::ComputeBuffer* SWRTBlasOffsets8; // 0xB8
		::UnityEngine::ComputeBuffer* SWRTRendererIndex8; // 0xC0
		::UnityEngine::ComputeBuffer* SWRTBlasIndex; // 0xC8
		::UnityEngine::ComputeBuffer* SWRTMaterials; // 0xD0
		::UnityEngine::ComputeBuffer* SWRTLocalToWorlds; // 0xD8
		::UnityEngine::ComputeBuffer* SWRTWorldToLocals; // 0xE0
		::UnityEngine::Texture* SWRTAlbedoAtlas; // 0xE8
		::UnityEngine::Texture* SWRTNormalAtlas; // 0xF0
	};
}
