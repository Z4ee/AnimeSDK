#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class ComputeShader; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int LightLoop_BuildGPULightListParameters_TypeDefinitionIndex = 6008;

	struct alignas(8) LightLoop_BuildGPULightListParameters
	{
		::System::Int32 totalLightCount; // 0x10
		::System::Int32 totalWorldLightCount; // 0x14
		::System::Boolean isOrthographic; // 0x18
		::System::Boolean runLightList; // 0x19
		::System::Boolean clearLightLists; // 0x1A
		::System::Boolean enableFeatureVariants; // 0x1B
		::System::Boolean computeMaterialVariants; // 0x1C
		::System::Boolean computeLightVariants; // 0x1D
		::System::Boolean skyEnabled; // 0x1E
		::System::Int32 punctualLightCount; // 0x20
		::System::Int32 envLightCount; // 0x24
		::UnityEngine::Matrix4x4 lightListProjscrMatrices; // 0x28
		::UnityEngine::Matrix4x4 lightListInvProjscrMatrices; // 0x68
		::System::Single nearClipPlane; // 0xA8
		::System::Single farClipPlane; // 0xAC
		::UnityEngine::Vector4 screenSize; // 0xB0
		::System::Int32 msaaSamples; // 0xC0
		::UnityEngine::Vector2Int screenSizeInt; // 0xC4
		::UnityEngine::ComputeShader* screenSpaceAABBShader; // 0xD0
		::System::Int32 screenSpaceAABBKernel; // 0xD8
		::UnityEngine::Matrix4x4 lightListProjHMatrices; // 0xDC
		::UnityEngine::Matrix4x4 lightListInvProjHMatrices; // 0x11C
		::UnityEngine::ComputeShader* bigTilePrepassShader; // 0x160
		::System::Int32 bigTilePrepassKernel; // 0x168
		::System::Boolean runBigTilePrepass; // 0x16C
		::System::Int32 numBigTilesX; // 0x170
		::System::Int32 numBigTilesY; // 0x174
		::UnityEngine::ComputeShader* buildPerTileLightListShader; // 0x178
		::System::Int32 buildPerTileLightListKernel; // 0x180
		::System::Boolean runFPTL; // 0x184
		::System::Int32 numTilesFPTLX; // 0x188
		::System::Int32 numTilesFPTLY; // 0x18C
		::System::Int32 numTilesFPTL; // 0x190
		::UnityEngine::ComputeShader* buildPerVoxelLightListShader; // 0x198
		::System::Int32 buildPerVoxelLightListKernel; // 0x1A0
		::System::Int32 numTilesClusterX; // 0x1A4
		::System::Int32 numTilesClusterY; // 0x1A8
		::System::Single clusterScale; // 0x1AC
		::UnityEngine::ComputeShader* buildWorldGridLightListShader; // 0x1B0
	};
}
