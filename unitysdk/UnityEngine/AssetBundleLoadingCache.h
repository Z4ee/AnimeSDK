#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_ASSETBUNDLELOADINGCACHE_GET_BLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0x1B26CD10)
#define UNITYENGINE_ASSETBUNDLELOADINGCACHE_GET_BLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x1B26CD30)
#define UNITYENGINE_ASSETBUNDLELOADINGCACHE_GET_MAXBLOCKSPERFILE_OFFSET UNITYSDK_OFFSET(0x1B26CCF0)
#define UNITYENGINE_ASSETBUNDLELOADINGCACHE_GET_MEMORYBUDGETKB_OFFSET UNITYSDK_OFFSET(0x1B26CB90)
#define UNITYENGINE_ASSETBUNDLELOADINGCACHE_SET_BLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0x1B26CD20)
#define UNITYENGINE_ASSETBUNDLELOADINGCACHE_SET_MAXBLOCKSPERFILE_OFFSET UNITYSDK_OFFSET(0x1B26CD00)
#define UNITYENGINE_ASSETBUNDLELOADINGCACHE_SET_MEMORYBUDGETKB_OFFSET UNITYSDK_OFFSET(0x1B26CC20)

namespace UnityEngine
{
	inline static constexpr unsigned int AssetBundleLoadingCache_TypeDefinitionIndex = 5691;

	class AssetBundleLoadingCache : public ::System::Object
	{
	public:
		static ::System::UInt32 get_maxBlocksPerFile()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLELOADINGCACHE_GET_MAXBLOCKSPERFILE_OFFSET))();
		}

		static ::System::Void set_maxBlocksPerFile(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLELOADINGCACHE_SET_MAXBLOCKSPERFILE_OFFSET))(a1);
		}

		static ::System::UInt32 get_blockCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLELOADINGCACHE_GET_BLOCKCOUNT_OFFSET))();
		}

		static ::System::Void set_blockCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLELOADINGCACHE_SET_BLOCKCOUNT_OFFSET))(a1);
		}

		static ::System::UInt32 get_blockSize()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLELOADINGCACHE_GET_BLOCKSIZE_OFFSET))();
		}

		static ::System::UInt32 get_memoryBudgetKB()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLELOADINGCACHE_GET_MEMORYBUDGETKB_OFFSET))();
		}

		static ::System::Void set_memoryBudgetKB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLELOADINGCACHE_SET_MEMORYBUDGETKB_OFFSET))(a1);
		}
	};
}
