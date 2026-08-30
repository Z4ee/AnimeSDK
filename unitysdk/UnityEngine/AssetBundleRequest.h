#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AsyncOperation.h"

namespace UnityEngine { class Object; }

#define UNITYENGINE_ASSETBUNDLEREQUEST_GET_ALLASSETS_OFFSET UNITYSDK_OFFSET(0x1ECF9C00)
#define UNITYENGINE_ASSETBUNDLEREQUEST_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x1ECF9BF0)
#define UNITYENGINE_ASSETBUNDLEREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECF9C10)

namespace UnityEngine
{
	inline static constexpr unsigned int AssetBundleRequest_TypeDefinitionIndex = 5759;

	class AssetBundleRequest : public ::UnityEngine::AsyncOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLEREQUEST__CTOR_OFFSET))(this);
		}

		::UnityEngine::Object* get_asset()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLEREQUEST_GET_ASSET_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Object*>* get_allAssets()
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLEREQUEST_GET_ALLASSETS_OFFSET))(this);
		}
	};
}
