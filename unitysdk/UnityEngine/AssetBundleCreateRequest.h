#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AsyncOperation.h"

namespace UnityEngine { class AssetBundle; }

#define UNITYENGINE_ASSETBUNDLECREATEREQUEST_GET_ASSETBUNDLE_OFFSET UNITYSDK_OFFSET(0x1B26CCC0)
#define UNITYENGINE_ASSETBUNDLECREATEREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B26CCD0)

namespace UnityEngine
{
	inline static constexpr unsigned int AssetBundleCreateRequest_TypeDefinitionIndex = 5690;

	class AssetBundleCreateRequest : public ::UnityEngine::AsyncOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLECREATEREQUEST__CTOR_OFFSET))(this);
		}

		::UnityEngine::AssetBundle* get_assetBundle()
		{
			return ((::UnityEngine::AssetBundle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLECREATEREQUEST_GET_ASSETBUNDLE_OFFSET))(this);
		}
	};
}
