#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_ASSETBUNDLELOADINGCACHE_GET_BLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0x1A419320)
#define UNITYENGINE_ASSETBUNDLELOADINGCACHE_GET_BLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x1A419340)
#define UNITYENGINE_ASSETBUNDLELOADINGCACHE_GET_MAXBLOCKSPERFILE_OFFSET UNITYSDK_OFFSET(0x1A419300)
#define UNITYENGINE_ASSETBUNDLELOADINGCACHE_GET_MEMORYBUDGETKB_OFFSET UNITYSDK_OFFSET(0x1A4191A0)
#define UNITYENGINE_ASSETBUNDLELOADINGCACHE_SET_BLOCKCOUNT_OFFSET UNITYSDK_OFFSET(0x1A419330)
#define UNITYENGINE_ASSETBUNDLELOADINGCACHE_SET_MAXBLOCKSPERFILE_OFFSET UNITYSDK_OFFSET(0x1A419310)
#define UNITYENGINE_ASSETBUNDLELOADINGCACHE_SET_MEMORYBUDGETKB_OFFSET UNITYSDK_OFFSET(0x1A419230)

namespace UnityEngine
{
	inline static constexpr unsigned int AssetBundleLoadingCache_TypeDefinitionIndex = 5414;

	class AssetBundleLoadingCache : public ::System::Object
	{
	public:
		static ::System::UInt32 get_maxBlocksPerFile()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLELOADINGCACHE_GET_MAXBLOCKSPERFILE_OFFSET))();
		}

		static ::System::Void set_maxBlocksPerFile(::System::UInt32 value)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLELOADINGCACHE_SET_MAXBLOCKSPERFILE_OFFSET))(value);
		}

		static ::System::UInt32 get_blockCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLELOADINGCACHE_GET_BLOCKCOUNT_OFFSET))();
		}

		static ::System::Void set_blockCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLELOADINGCACHE_SET_BLOCKCOUNT_OFFSET))(value);
		}

		static ::System::UInt32 get_blockSize()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLELOADINGCACHE_GET_BLOCKSIZE_OFFSET))();
		}

		static ::System::UInt32 get_memoryBudgetKB()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLELOADINGCACHE_GET_MEMORYBUDGETKB_OFFSET))();
		}

		static ::System::Void set_memoryBudgetKB(::System::UInt32 value)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLELOADINGCACHE_SET_MEMORYBUDGETKB_OFFSET))(value);
		}
	};
}
