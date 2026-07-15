#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_B3FC5A78246A8411;
class CpuTextureBuffer;
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }

#define WAVESIMPANEL_CALCULATERENDERMESHSIZE_OFFSET UNITYSDK_OFFSET(0x1053CD10)
#define WAVESIMPANEL_CALCULATESIMTEXTURESIZE_OFFSET UNITYSDK_OFFSET(0x1053CCA0)
#define WAVESIMPANEL_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1053CAA0)
#define WAVESIMPANEL_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x1053CD80)
#define WAVESIMPANEL_GET_ACTIVEPRIORITY_OFFSET UNITYSDK_OFFSET(0x1053CBA0)
#define WAVESIMPANEL_GET_ADVECDISTDAMPING_OFFSET UNITYSDK_OFFSET(0x1053CB30)
#define WAVESIMPANEL_GET_DAMPING_OFFSET UNITYSDK_OFFSET(0x1053CB20)
#define WAVESIMPANEL_GET_FADINGRATE_OFFSET UNITYSDK_OFFSET(0x1053CB90)
#define WAVESIMPANEL_GET_GENERATED_OFFSET UNITYSDK_OFFSET(0x1053CBE0)
#define WAVESIMPANEL_GET_PARTICLEADEVINTENSITY_OFFSET UNITYSDK_OFFSET(0x1053CB40)
#define WAVESIMPANEL_GET_PARTICLEDAMPING_OFFSET UNITYSDK_OFFSET(0x1053CB60)
#define WAVESIMPANEL_GET_PARTICLEVIRTUALBUOYANCYINTENSITY_OFFSET UNITYSDK_OFFSET(0x1053CB50)
#define WAVESIMPANEL_GET_PARTICLEVIRTUALBUOYANCYOFFSET_OFFSET UNITYSDK_OFFSET(0x1053CB70)
#define WAVESIMPANEL_GET_RENDERMESHSIZE_OFFSET UNITYSDK_OFFSET(0x1053CBD0)
#define WAVESIMPANEL_GET_SIMTEXTURESIZE_OFFSET UNITYSDK_OFFSET(0x1053CBC0)
#define WAVESIMPANEL_GET_STATICBOUNDARYTEXTURE_OFFSET UNITYSDK_OFFSET(0x1053CBB0)
#define WAVESIMPANEL_GET_USEBLENDINGASRENDER_OFFSET UNITYSDK_OFFSET(0x1053CB80)
#define WAVESIMPANEL_RESETSIMSIZE_OFFSET UNITYSDK_OFFSET(0x1053CBF0)
#define WAVESIMPANEL_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1053CA60)
#define WAVESIMPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1053CDD0)

inline static constexpr unsigned int WaveSimPanel_TypeDefinitionIndex = 45708;

class WaveSimPanel : public ::RPG::Client::TAMonoPlugin_1<::Class_3_B3FC5A78246A8411*>
{
public:
	::System::Single simResolution; // 0x30
	::System::Single renderResolution; // 0x34
	::System::Boolean enableAdaptiveRender; // 0x38
	::System::Single TravelSpeed; // 0x3C
	::System::Single boundaryDamping; // 0x40
	::System::Single damping; // 0x44
	::System::Single advIntensity; // 0x48
	::System::Single AdvecDamping; // 0x4C
	::System::Single advecDistDamping; // 0x50
	::System::Single heightfiledBlendingFactor; // 0x54
	::System::Single floatingDamping; // 0x58
	::System::Single floatingAdevIntensity; // 0x5C
	::System::Single virtualBuoyancyIntensity; // 0x60
	::System::Single virtualBuoyancyOffset; // 0x64
	::System::Single particleAdevIntensity; // 0x68
	::System::Single particleVirtualBuoyancyIntensity; // 0x6C
	::System::Single particleDamping; // 0x70
	::System::Single particleVirtualBuoyancyOffset; // 0x74
	::System::Int32 maxFloatingObjects; // 0x78
	::System::Boolean useBlendingAsRender; // 0x7C
	::System::Single minWaveHeight; // 0x80
	::System::Single maxWaveHeight; // 0x84
	::System::Single fadingRate; // 0x88
	::System::Int32 activePriority; // 0x8C
	::System::Single maxFloatingHeight; // 0x90
	::System::Single minFloatingHeight; // 0x94
	::System::Single floatingIntensityScale; // 0x98
	::System::Single floatingRotationIntensity; // 0x9C
	::System::Single top; // 0xA0
	::System::Single bottom; // 0xA4
	::System::Single offset; // 0xA8
	::UnityEngine::Texture2D* staticBoundaryTexture; // 0xB0
	::CpuTextureBuffer* CPUBoundaryData; // 0xB8
	::UnityEngine::Vector2Int simTextureSize; // 0xC0
	::UnityEngine::Vector2Int renderMeshSize; // 0xC8
	::System::Boolean generated; // 0xD0
	::UnityEngine::Vector3 worldLdPos; // 0xD4
	::UnityEngine::Vector3 worldRtPos; // 0xE0
	::UnityEngine::Vector3 worldLtPos; // 0xEC
	::UnityEngine::Vector3 worldRdPos; // 0xF8
	::UnityEngine::Vector3 pysicalSize; // 0x104
	::UnityEngine::Vector2 IntersectionRangeY; // 0x110
	::UnityEngine::Material* waterMaterial; // 0x118
	::UnityEngine::Vector3 modelOffset; // 0x120
	::System::Boolean enableBlending; // 0x12C
	::System::Int32 floatingBufferOffset; // 0x130
	::System::Int32 floatingBufferCount; // 0x134
	::System::Boolean destoryed; // 0x138

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WAVESIMPANEL__CTOR_OFFSET))(this);
	}

	::System::Void Spawned()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WAVESIMPANEL_SPAWNED_OFFSET))(this);
	}

	::System::Void Despawned()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WAVESIMPANEL_DESPAWNED_OFFSET))(this);
	}

	::System::Single get_Damping()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WAVESIMPANEL_GET_DAMPING_OFFSET))(this);
	}

	::System::Single get_AdvecDistDamping()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WAVESIMPANEL_GET_ADVECDISTDAMPING_OFFSET))(this);
	}

	::System::Single get_ParticleAdevIntensity()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WAVESIMPANEL_GET_PARTICLEADEVINTENSITY_OFFSET))(this);
	}

	::System::Single get_ParticleVirtualBuoyancyIntensity()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WAVESIMPANEL_GET_PARTICLEVIRTUALBUOYANCYINTENSITY_OFFSET))(this);
	}

	::System::Single get_ParticleDamping()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WAVESIMPANEL_GET_PARTICLEDAMPING_OFFSET))(this);
	}

	::System::Single get_ParticleVirtualBuoyancyOffset()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WAVESIMPANEL_GET_PARTICLEVIRTUALBUOYANCYOFFSET_OFFSET))(this);
	}

	::System::Boolean get_UseBlendingAsRender()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WAVESIMPANEL_GET_USEBLENDINGASRENDER_OFFSET))(this);
	}

	::System::Single get_FadingRate()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + WAVESIMPANEL_GET_FADINGRATE_OFFSET))(this);
	}

	::System::Int32 get_ActivePriority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + WAVESIMPANEL_GET_ACTIVEPRIORITY_OFFSET))(this);
	}

	::UnityEngine::Texture2D* get_StaticBoundaryTexture()
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + WAVESIMPANEL_GET_STATICBOUNDARYTEXTURE_OFFSET))(this);
	}

	::UnityEngine::Vector2Int get_SimTextureSize()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + WAVESIMPANEL_GET_SIMTEXTURESIZE_OFFSET))(this);
	}

	::UnityEngine::Vector2Int get_RenderMeshSize()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + WAVESIMPANEL_GET_RENDERMESHSIZE_OFFSET))(this);
	}

	::System::Boolean get_Generated()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + WAVESIMPANEL_GET_GENERATED_OFFSET))(this);
	}

	::System::Void ResetSimSize(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + WAVESIMPANEL_RESETSIMSIZE_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2Int CalculateSimTextureSize()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + WAVESIMPANEL_CALCULATESIMTEXTURESIZE_OFFSET))(this);
	}

	::UnityEngine::Vector2Int CalculateRenderMeshSize()
	{
		return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + WAVESIMPANEL_CALCULATERENDERMESHSIZE_OFFSET))(this);
	}

	::System::String* GetTickLodTemplateName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + WAVESIMPANEL_GETTICKLODTEMPLATENAME_OFFSET))(this);
	}
};
