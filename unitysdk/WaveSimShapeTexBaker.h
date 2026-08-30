#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class WaveSimPanel;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define WAVESIMSHAPETEXBAKER_GETPANEL_OFFSET UNITYSDK_OFFSET(0x1050A600)
#define WAVESIMSHAPETEXBAKER_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1050A420)
#define WAVESIMSHAPETEXBAKER_SETCOLLECTDEBUG_OFFSET UNITYSDK_OFFSET(0x1050A480)
#define WAVESIMSHAPETEXBAKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1050A6C0)

inline static constexpr unsigned int WaveSimShapeTexBaker_TypeDefinitionIndex = 47962;

class WaveSimShapeTexBaker : public ::RPG::Client::TAMonoBase
{
public:
	::System::Boolean syncFromWaveSimPanel; // 0x18
	::System::Int32 resolution; // 0x1C
	::System::Boolean invert; // 0x20
	::System::Single boundsBakePadding; // 0x24
	::UnityEngine::Vector3 boundsMinSize; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* includeRoots; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* excludeRoots; // 0x40
	::System::String* autoIncludeSuffix; // 0x48
	::System::Boolean fallbackToWholeSceneIfBlockDataNotFound; // 0x50
	::System::Boolean applyBakedSTToMaterial; // 0x51
	::System::String* runtimeMaskTextureProperty; // 0x58
	::UnityEngine::Vector4 bakedMaskST; // 0x60
	::System::Int32 chapNumber; // 0x70
	::System::String* sceneCode; // 0x78
	::System::Int32 maskIndex; // 0x80
	::System::String* exportRootFolder; // 0x88
	::System::String* lastExportAssetPath; // 0x90
	::System::String* lastExportNameKey; // 0x98
	::System::String* debugCollectMode; // 0xA0
	::System::String* debugBlockRootName; // 0xA8
	::System::Int32 debugExcludedRenderers; // 0xB0
	::System::Int32 debugScannedGameObjects; // 0xB4
	::System::Int32 debugScannedMeshRenderers; // 0xB8
	::System::Int32 debugCollectedMeshRenderers; // 0xBC
	::System::Int32 debugFilteredWater; // 0xC0
	::System::Int32 debugFilteredInactive; // 0xC4
	::System::Int32 debugFilteredExcluded; // 0xC8
	::System::Int32 debugFilteredTooSmall; // 0xCC
	::System::Int32 debugFilteredDuplicate; // 0xD0
	::System::String* debugLastCollectError; // 0xD8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WAVESIMSHAPETEXBAKER__CTOR_OFFSET))(this);
	}

	::System::Void Method_6_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WAVESIMSHAPETEXBAKER_METHOD_6_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void SetCollectDebug(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Int32 a11, ::System::String* a12)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + WAVESIMSHAPETEXBAKER_SETCOLLECTDEBUG_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::WaveSimPanel* GetPanel()
	{
		return ((::WaveSimPanel*(*)(::PVOID))((::PBYTE)hIl2Cpp + WAVESIMSHAPETEXBAKER_GETPANEL_OFFSET))(this);
	}
};
