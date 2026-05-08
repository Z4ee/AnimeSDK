#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AsyncOperation.h"

namespace UnityEngine { class Object; }

#define UNITYENGINE_ASSETBUNDLEINSTANCEREQUEST_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x1C544F60)
#define UNITYENGINE_ASSETBUNDLEINSTANCEREQUEST_SYNC_OFFSET UNITYSDK_OFFSET(0x1C544F70)
#define UNITYENGINE_ASSETBUNDLEINSTANCEREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1C544F80)

namespace UnityEngine
{
	inline static constexpr unsigned int AssetBundleInstanceRequest_TypeDefinitionIndex = 7593;

	class AssetBundleInstanceRequest : public ::UnityEngine::AsyncOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLEINSTANCEREQUEST__CTOR_OFFSET))(this);
		}

		::UnityEngine::Object* get_asset()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLEINSTANCEREQUEST_GET_ASSET_OFFSET))(this);
		}

		::System::Boolean Sync()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLEINSTANCEREQUEST_SYNC_OFFSET))(this);
		}
	};
}
