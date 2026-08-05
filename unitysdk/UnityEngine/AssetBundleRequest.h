#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AsyncOperation.h"

namespace UnityEngine { class Object; }

#define UNITYENGINE_ASSETBUNDLEREQUEST_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x1FC525F0)
#define UNITYENGINE_ASSETBUNDLEREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC52600)

namespace UnityEngine
{
	inline static constexpr unsigned int AssetBundleRequest_TypeDefinitionIndex = 7675;

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
	};
}
