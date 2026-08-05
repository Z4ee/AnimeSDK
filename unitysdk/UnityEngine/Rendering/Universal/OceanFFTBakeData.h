#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture3D; }

#define UNITYENGINE_RENDERING_UNIVERSAL_OCEANFFTBAKEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCA6AB0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int OceanFFTBakeData_TypeDefinitionIndex = 27896;

	class OceanFFTBakeData : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Int32 fourierPasses; // 0x18
		::System::Single waveAmplitude; // 0x1C
		::System::Single windAngle; // 0x20
		::System::Single windSpeed; // 0x24
		::System::Int32 displacementTextureSize; // 0x28
		::System::Int32 normalFoamTextureSize; // 0x2C
		::System::Int32 maxHeightTextureSize; // 0x30
		::System::Int32 blurIteraCount; // 0x34
		::System::Int32 bakeFrameCount; // 0x38
		::System::Single bakeTime; // 0x3C
		::System::Int32 randomSeed; // 0x40
		::UnityEngine::Vector2 DisplacementMinMax; // 0x44
		::System::Single PlaySpeed; // 0x4C
		::System::Single WorldSize; // 0x50
		::UnityEngine::Texture3D* DisplacementTexture3D; // 0x58
		::UnityEngine::Texture3D* NormalFoamTexture3D; // 0x60
		::UnityEngine::Texture2D* MaxHeightTexture2D; // 0x68
		::System::Single BakedWindAngle; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OCEANFFTBAKEDATA__CTOR_OFFSET))(this);
		}
	};
}
