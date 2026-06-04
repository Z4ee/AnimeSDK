#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RPGDensityMapGrassBlockData; }

#define UNITYENGINE_RPGDENSITYMAPGRASSBLOCK_CHANGETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B2BA810)
#define UNITYENGINE_RPGDENSITYMAPGRASSBLOCK_GRASSVOLUMEHASINIT_OFFSET UNITYSDK_OFFSET(0x1B2BA800)
#define UNITYENGINE_RPGDENSITYMAPGRASSBLOCK_REMOVEGRASSVOLUMEUSEVOLUMEKEY_OFFSET UNITYSDK_OFFSET(0x1B2BA7F0)
#define UNITYENGINE_RPGDENSITYMAPGRASSBLOCK_SETGRASSBLOCKDATA_OFFSET UNITYSDK_OFFSET(0x1B2BA7E0)

namespace UnityEngine
{
	inline static constexpr unsigned int RPGDensityMapGrassBlock_TypeDefinitionIndex = 4265;

	class RPGDensityMapGrassBlock : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void SetGrassBlockData(::UnityEngine::RPGDensityMapGrassBlockData* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3, ::System::Collections::Generic::List_1<::System::UInt32>* a4, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a5, ::System::Collections::Generic::List_1<::System::Single>* a6, ::System::Collections::Generic::List_1<::System::Byte>* a7, ::System::Byte a8, ::System::Collections::Generic::List_1<::System::UInt64>* a9)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RPGDensityMapGrassBlockData*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Collections::Generic::List_1<::System::Single>*, ::System::Collections::Generic::List_1<::System::Byte>*, ::System::Byte, ::System::Collections::Generic::List_1<::System::UInt64>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGDENSITYMAPGRASSBLOCK_SETGRASSBLOCKDATA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Boolean RemoveGrassVolumeUseVolumeKey(::System::UInt64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGDENSITYMAPGRASSBLOCK_REMOVEGRASSVOLUMEUSEVOLUMEKEY_OFFSET))(this, a1);
		}

		::System::Boolean GrassVolumeHasInit(::System::UInt64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGDENSITYMAPGRASSBLOCK_GRASSVOLUMEHASINIT_OFFSET))(this, a1);
		}

		::System::Void ChangeTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGDENSITYMAPGRASSBLOCK_CHANGETRANSFORM_OFFSET))(this);
		}
	};
}
