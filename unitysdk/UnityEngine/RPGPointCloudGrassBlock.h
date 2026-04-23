#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RPGPointCloudGrassBlockData; }

#define UNITYENGINE_RPGPOINTCLOUDGRASSBLOCK_CHANGETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A46B070)
#define UNITYENGINE_RPGPOINTCLOUDGRASSBLOCK_GRASSVOLUMEHASINIT_OFFSET UNITYSDK_OFFSET(0x1A46B060)
#define UNITYENGINE_RPGPOINTCLOUDGRASSBLOCK_REMOVEGRASSVOLUMEUSEVOLUMEKEY_OFFSET UNITYSDK_OFFSET(0x1A46B050)
#define UNITYENGINE_RPGPOINTCLOUDGRASSBLOCK_SETGRASSBLOCKDATA_OFFSET UNITYSDK_OFFSET(0x1A46B040)

namespace UnityEngine
{
	inline static constexpr unsigned int RPGPointCloudGrassBlock_TypeDefinitionIndex = 4093;

	class RPGPointCloudGrassBlock : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void SetGrassBlockData(::UnityEngine::RPGPointCloudGrassBlockData* grassBlockData, ::System::Collections::Generic::List_1<::System::String*>* lod0PrefabPaths, ::System::Collections::Generic::List_1<::System::UInt32>* lodArrayStarts, ::System::Collections::Generic::List_1<::System::UInt32>* lodArrayEnds, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* lodArrayPrefabs, ::System::Collections::Generic::List_1<::System::Single>* lodArrayDistances, ::System::Collections::Generic::List_1<::System::Byte>* lodIndices, ::System::Byte qualityLevel, ::System::Collections::Generic::List_1<::System::UInt64>* volumeKeys)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RPGPointCloudGrassBlockData*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Collections::Generic::List_1<::System::Byte>*, ::System::Byte, ::System::Collections::Generic::List_1<::System::UInt64>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGPOINTCLOUDGRASSBLOCK_SETGRASSBLOCKDATA_OFFSET))(this, grassBlockData, lod0PrefabPaths, lodArrayStarts, lodArrayEnds, lodArrayPrefabs, lodArrayDistances, lodIndices, qualityLevel, volumeKeys);
		}

		::System::Boolean RemoveGrassVolumeUseVolumeKey(::System::UInt64 volumeKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGPOINTCLOUDGRASSBLOCK_REMOVEGRASSVOLUMEUSEVOLUMEKEY_OFFSET))(this, volumeKey);
		}

		::System::Boolean GrassVolumeHasInit(::System::UInt64 volumeKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGPOINTCLOUDGRASSBLOCK_GRASSVOLUMEHASINIT_OFFSET))(this, volumeKey);
		}

		::System::Void ChangeTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGPOINTCLOUDGRASSBLOCK_CHANGETRANSFORM_OFFSET))(this);
		}
	};
}
