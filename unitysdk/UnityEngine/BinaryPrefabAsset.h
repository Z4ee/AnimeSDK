#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

namespace UnityEngine { class BinaryPrefabInstantiateRequest; }
namespace UnityEngine { class GameObject; }

#define UNITYENGINE_BINARYPREFABASSET_HASUNUSEDSOURCEPREFABINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D2FA7A0)
#define UNITYENGINE_BINARYPREFABASSET_INSTANTIATEASYNC_OFFSET UNITYSDK_OFFSET(0x1D2FA790)
#define UNITYENGINE_BINARYPREFABASSET_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x1D2FA780)
#define UNITYENGINE_BINARYPREFABASSET_TAKEUNUSEDSOURCEPREFABINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D2FA7B0)
#define UNITYENGINE_BINARYPREFABASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FA770)

namespace UnityEngine
{
	inline static constexpr unsigned int BinaryPrefabAsset_TypeDefinitionIndex = 5694;

	class BinaryPrefabAsset : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINARYPREFABASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* Instantiate()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINARYPREFABASSET_INSTANTIATE_OFFSET))(this);
		}

		::UnityEngine::BinaryPrefabInstantiateRequest* InstantiateAsync()
		{
			return ((::UnityEngine::BinaryPrefabInstantiateRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINARYPREFABASSET_INSTANTIATEASYNC_OFFSET))(this);
		}

		::System::Boolean HasUnusedSourcePrefabInstance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINARYPREFABASSET_HASUNUSEDSOURCEPREFABINSTANCE_OFFSET))(this);
		}

		::UnityEngine::GameObject* TakeUnusedSourcePrefabInstance()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINARYPREFABASSET_TAKEUNUSEDSOURCEPREFABINSTANCE_OFFSET))(this);
		}
	};
}
