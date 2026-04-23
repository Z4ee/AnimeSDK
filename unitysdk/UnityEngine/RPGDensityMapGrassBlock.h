#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RPGDensityMapGrassBlockData; }

#define UNITYENGINE_RPGDENSITYMAPGRASSBLOCK_CHANGETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A46AC30)
#define UNITYENGINE_RPGDENSITYMAPGRASSBLOCK_GRASSVOLUMEHASINIT_OFFSET UNITYSDK_OFFSET(0x1A46AC20)
#define UNITYENGINE_RPGDENSITYMAPGRASSBLOCK_REMOVEGRASSVOLUMEUSEVOLUMEKEY_OFFSET UNITYSDK_OFFSET(0x1A46AC10)
#define UNITYENGINE_RPGDENSITYMAPGRASSBLOCK_SETGRASSBLOCKDATA_OFFSET UNITYSDK_OFFSET(0x1A46AC00)

namespace UnityEngine
{
	inline static constexpr unsigned int RPGDensityMapGrassBlock_TypeDefinitionIndex = 4091;

	class RPGDensityMapGrassBlock : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void SetGrassBlockData(::UnityEngine::RPGDensityMapGrassBlockData* grassBlockData, ::System::Collections::Generic::List_1<::System::String*>* lod0PrefabPaths, ::System::Collections::Generic::List_1<::System::UInt32>* lodArrayStarts, ::System::Collections::Generic::List_1<::System::UInt32>* lodArrayEnds, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* lodArrayPrefabs, ::System::Collections::Generic::List_1<::System::Single>* lodArrayDistances, ::System::Collections::Generic::List_1<::System::Byte>* lodIndices, ::System::Byte qualityLevel, ::System::Collections::Generic::List_1<::System::UInt64>* volumeKeys)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RPGDensityMapGrassBlockData*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Collections::Generic::List_1<::System::Byte>*, ::System::Byte, ::System::Collections::Generic::List_1<::System::UInt64>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGDENSITYMAPGRASSBLOCK_SETGRASSBLOCKDATA_OFFSET))(this, grassBlockData, lod0PrefabPaths, lodArrayStarts, lodArrayEnds, lodArrayPrefabs, lodArrayDistances, lodIndices, qualityLevel, volumeKeys);
		}

		::System::Boolean RemoveGrassVolumeUseVolumeKey(::System::UInt64 volumeKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGDENSITYMAPGRASSBLOCK_REMOVEGRASSVOLUMEUSEVOLUMEKEY_OFFSET))(this, volumeKey);
		}

		::System::Boolean GrassVolumeHasInit(::System::UInt64 volumeKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGDENSITYMAPGRASSBLOCK_GRASSVOLUMEHASINIT_OFFSET))(this, volumeKey);
		}

		::System::Void ChangeTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGDENSITYMAPGRASSBLOCK_CHANGETRANSFORM_OFFSET))(this);
		}
	};
}
