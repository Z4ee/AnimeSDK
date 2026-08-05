#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NapBundleInfo.h"
#include "unitysdk/UnityEngine/NapResourceFileType.h"
#include "unitysdk/UnityEngine/Object.h"

#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETALLASSETHASH_OFFSET UNITYSDK_OFFSET(0x1FC52710)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETALLBUNDLEID_OFFSET UNITYSDK_OFFSET(0x1FC52720)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETBUNDLEIDFROMASSETHASH_OFFSET UNITYSDK_OFFSET(0x1FC526E0)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETBUNDLEINFO_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FC526D0)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETBUNDLEINFO_OFFSET UNITYSDK_OFFSET(0x1FC52680)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETCHILDREN_OFFSET UNITYSDK_OFFSET(0x1FC52700)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETDIRECTCHILDREN_OFFSET UNITYSDK_OFFSET(0x1FC526F0)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_SETENABLEBUNDLEINDEXMEMORYOPT_OFFSET UNITYSDK_OFFSET(0x1FC52750)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_SETNEXT_OFFSET UNITYSDK_OFFSET(0x1FC52730)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET_SETRESOURCEFILETYPE_OFFSET UNITYSDK_OFFSET(0x1FC52740)
#define UNITYENGINE_NAPASSETBUNDLEINDEXASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC52630)

namespace UnityEngine
{
	inline static constexpr unsigned int NapAssetBundleIndexAsset_TypeDefinitionIndex = 7683;

	class NapAssetBundleIndexAsset : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::NapBundleInfo GetBundleInfo(::System::UInt64 bundleId)
		{
			return ((::UnityEngine::NapBundleInfo(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETBUNDLEINFO_OFFSET))(this, bundleId);
		}

		::System::UInt64 GetBundleIDFromAssetHash(::System::UInt64 assetHash)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETBUNDLEIDFROMASSETHASH_OFFSET))(this, assetHash);
		}

		::Il2CppArray<::System::UInt64>* GetDirectChildren(::System::UInt64 bundleId)
		{
			return ((::Il2CppArray<::System::UInt64>*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETDIRECTCHILDREN_OFFSET))(this, bundleId);
		}

		::Il2CppArray<::System::UInt64>* GetChildren(::System::UInt64 bundleId)
		{
			return ((::Il2CppArray<::System::UInt64>*(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETCHILDREN_OFFSET))(this, bundleId);
		}

		::Il2CppArray<::System::UInt64>* GetAllAssetHash()
		{
			return ((::Il2CppArray<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETALLASSETHASH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt64>* GetAllBundleId()
		{
			return ((::Il2CppArray<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETALLBUNDLEID_OFFSET))(this);
		}

		::System::Void SetNext(::UnityEngine::NapAssetBundleIndexAsset* asset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NapAssetBundleIndexAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_SETNEXT_OFFSET))(this, asset);
		}

		::System::Void SetResourceFileType(::UnityEngine::NapResourceFileType resourceFileType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NapResourceFileType))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_SETRESOURCEFILETYPE_OFFSET))(this, resourceFileType);
		}

		static ::System::Void SetEnableBundleIndexMemoryOpt(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_SETENABLEBUNDLEINDEXMEMORYOPT_OFFSET))(enable);
		}

		::System::Void GetBundleInfo_Injected(::System::UInt64 bundleId, ::UnityEngine::NapBundleInfo& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::UnityEngine::NapBundleInfo&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPASSETBUNDLEINDEXASSET_GETBUNDLEINFO_INJECTED_OFFSET))(this, bundleId, ret);
		}
	};
}
