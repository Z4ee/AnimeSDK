#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NapResourceFileType.h"
#include "unitysdk/UnityEngine/Object.h"

namespace System { class String; }
namespace UnityEngine { class AssetBundle; }
namespace UnityEngine { class AssetBundleCreateRequest; }
namespace UnityEngine { class NapAssetBundleIndexAsset; }

#define UNITYENGINE_NAPASSETBUNDLEMANAGER_CLEARALLNAPBLOCKLOCATIONCACHE_OFFSET UNITYSDK_OFFSET(0x1FC52770)
#define UNITYENGINE_NAPASSETBUNDLEMANAGER_CLEARNAPBLOCKLOCATIONCACHE_OFFSET UNITYSDK_OFFSET(0x1FC52780)
#define UNITYENGINE_NAPASSETBUNDLEMANAGER_GETALLLOADEDBLOCKPATHS_OFFSET UNITYSDK_OFFSET(0x1FC527F0)
#define UNITYENGINE_NAPASSETBUNDLEMANAGER_GETALLLOADEDBUNDLEHASHES_OFFSET UNITYSDK_OFFSET(0x1FC52800)
#define UNITYENGINE_NAPASSETBUNDLEMANAGER_GETLOADEDBUNDLE_OFFSET UNITYSDK_OFFSET(0x1FC527A0)
#define UNITYENGINE_NAPASSETBUNDLEMANAGER_GETLOGGINGCOSTTIME_OFFSET UNITYSDK_OFFSET(0x1FC52860)
#define UNITYENGINE_NAPASSETBUNDLEMANAGER_GETLOGGINGSUPPORT_OFFSET UNITYSDK_OFFSET(0x1FC52840)
#define UNITYENGINE_NAPASSETBUNDLEMANAGER_ISASSETLOADDONE_OFFSET UNITYSDK_OFFSET(0x1FC527C0)
#define UNITYENGINE_NAPASSETBUNDLEMANAGER_LOADASSETASYNC_OFFSET UNITYSDK_OFFSET(0x1FC527B0)
#define UNITYENGINE_NAPASSETBUNDLEMANAGER_LOADASSET_OFFSET UNITYSDK_OFFSET(0x1FC52790)
#define UNITYENGINE_NAPASSETBUNDLEMANAGER_SETENABLEDELAYUNLOAD_OFFSET UNITYSDK_OFFSET(0x1FC52820)
#define UNITYENGINE_NAPASSETBUNDLEMANAGER_SETLOGGINGCOSTTIME_OFFSET UNITYSDK_OFFSET(0x1FC52850)
#define UNITYENGINE_NAPASSETBUNDLEMANAGER_SETLOGGINGSUPPORT_OFFSET UNITYSDK_OFFSET(0x1FC52830)
#define UNITYENGINE_NAPASSETBUNDLEMANAGER_SETNAPASSETBUNDLEINDEXASSET_OFFSET UNITYSDK_OFFSET(0x1FC52760)
#define UNITYENGINE_NAPASSETBUNDLEMANAGER_SYNCLOAD_OFFSET UNITYSDK_OFFSET(0x1FC527E0)
#define UNITYENGINE_NAPASSETBUNDLEMANAGER_UNLOADASSET_OFFSET UNITYSDK_OFFSET(0x1FC527D0)
#define UNITYENGINE_NAPASSETBUNDLEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FC52810)
#define UNITYENGINE_NAPASSETBUNDLEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC52870)

namespace UnityEngine
{
	inline static constexpr unsigned int NapAssetBundleManager_TypeDefinitionIndex = 7684;

	class NapAssetBundleManager : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void SetNapAssetBundleIndexAsset(::UnityEngine::NapAssetBundleIndexAsset* asset)
		{
			return ((::System::Void(*)(::UnityEngine::NapAssetBundleIndexAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEMANAGER_SETNAPASSETBUNDLEINDEXASSET_OFFSET))(asset);
		}

		static ::System::Void ClearAllNapBlockLocationCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEMANAGER_CLEARALLNAPBLOCKLOCATIONCACHE_OFFSET))();
		}

		static ::System::Void ClearNapBlockLocationCache(::UnityEngine::NapResourceFileType type)
		{
			return ((::System::Void(*)(::UnityEngine::NapResourceFileType))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEMANAGER_CLEARNAPBLOCKLOCATIONCACHE_OFFSET))(type);
		}

		static ::UnityEngine::AssetBundle* LoadAsset(::System::UInt64 fileHash)
		{
			return ((::UnityEngine::AssetBundle*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEMANAGER_LOADASSET_OFFSET))(fileHash);
		}

		static ::UnityEngine::AssetBundle* GetLoadedBundle(::System::UInt64 fileHash)
		{
			return ((::UnityEngine::AssetBundle*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEMANAGER_GETLOADEDBUNDLE_OFFSET))(fileHash);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadAssetAsync(::System::UInt64 fileHash, ::System::Boolean highPriority)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::UInt64, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEMANAGER_LOADASSETASYNC_OFFSET))(fileHash, highPriority);
		}

		static ::System::Boolean IsAssetLoadDone(::System::UInt64 fileHash)
		{
			return ((::System::Boolean(*)(::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEMANAGER_ISASSETLOADDONE_OFFSET))(fileHash);
		}

		static ::System::Void UnloadAsset(::System::UInt64 fileHash)
		{
			return ((::System::Void(*)(::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEMANAGER_UNLOADASSET_OFFSET))(fileHash);
		}

		static ::System::Void SyncLoad(::System::UInt64 fileHash)
		{
			return ((::System::Void(*)(::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEMANAGER_SYNCLOAD_OFFSET))(fileHash);
		}

		static ::Il2CppArray<::System::String*>* GetAllLoadedBlockPaths()
		{
			return ((::Il2CppArray<::System::String*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEMANAGER_GETALLLOADEDBLOCKPATHS_OFFSET))();
		}

		static ::Il2CppArray<::System::UInt64>* GetAllLoadedBundleHashes()
		{
			return ((::Il2CppArray<::System::UInt64>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEMANAGER_GETALLLOADEDBUNDLEHASHES_OFFSET))();
		}

		static ::System::Void Update()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEMANAGER_UPDATE_OFFSET))();
		}

		static ::System::Void SetEnableDelayUnload(::System::Boolean enable, ::System::Boolean byFrame)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEMANAGER_SETENABLEDELAYUNLOAD_OFFSET))(enable, byFrame);
		}

		static ::System::Void SetLoggingSupport(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEMANAGER_SETLOGGINGSUPPORT_OFFSET))(enable);
		}

		static ::System::Boolean GetLoggingSupport()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEMANAGER_GETLOGGINGSUPPORT_OFFSET))();
		}

		static ::System::Void SetLoggingCostTime(::System::UInt64 costTime)
		{
			return ((::System::Void(*)(::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEMANAGER_SETLOGGINGCOSTTIME_OFFSET))(costTime);
		}

		static ::System::UInt64 GetLoggingCostTime()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEMANAGER_GETLOGGINGCOSTTIME_OFFSET))();
		}
	};
}
