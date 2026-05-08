#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class AssetBundleCreateRequest; }
namespace UnityEngine { class AssetBundleRequest; }

#define UNITYENGINE_ASSETBUNDLE_LOADALLASSETS_1_OFFSET UNITYSDK_OFFSET(0x1C544E90)
#define UNITYENGINE_ASSETBUNDLE_LOADALLASSETS_OFFSET UNITYSDK_OFFSET(0x1C544DF0)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETASYNCHASH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C544DC0)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETASYNC_OFFSET UNITYSDK_OFFSET(0x1C544D40)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETHASH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C544D30)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETINSTANCECACHE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C544DD0)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETINSTANCECACHE_OFFSET UNITYSDK_OFFSET(0x1C544DE0)
#define UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C544F10)
#define UNITYENGINE_ASSETBUNDLE_LOADASSET_1_OFFSET UNITYSDK_OFFSET(0x1C544CB0)
#define UNITYENGINE_ASSETBUNDLE_LOADASSET_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C544CA0)
#define UNITYENGINE_ASSETBUNDLE_LOADASSET_OFFSET UNITYSDK_OFFSET(0x1C544BB0)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNCHASH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C544B10)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC_OFFSET UNITYSDK_OFFSET(0x1C544B20)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILEHASH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C544B40)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILE_1_OFFSET UNITYSDK_OFFSET(0x1C544B80)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C544B30)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMFILE_OFFSET UNITYSDK_OFFSET(0x1C544B60)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMMEMORYASYNC_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C544B90)
#define UNITYENGINE_ASSETBUNDLE_LOADFROMMEMORYASYNC_OFFSET UNITYSDK_OFFSET(0x1C544BA0)
#define UNITYENGINE_ASSETBUNDLE_RESOURCEPATHHASH_OFFSET UNITYSDK_OFFSET(0x1C544B50)
#define UNITYENGINE_ASSETBUNDLE_SET_ENABLEBLKOPENFILECACHE_OFFSET UNITYSDK_OFFSET(0x1C544F30)
#define UNITYENGINE_ASSETBUNDLE_UNLOAD_OFFSET UNITYSDK_OFFSET(0x1C544F20)
#define UNITYENGINE_ASSETBUNDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C544AC0)

namespace UnityEngine
{
	inline static constexpr unsigned int AssetBundle_TypeDefinitionIndex = 7591;

	class AssetBundle : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsyncHash_Internal(::System::String* path, ::System::UInt64 hash, ::System::String* ext, ::System::UInt32 crc, ::System::UInt64 offset, ::System::UInt64 size)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::String*, ::System::UInt64, ::System::String*, ::System::UInt32, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNCHASH_INTERNAL_OFFSET))(path, hash, ext, crc, offset, size);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync(::System::String* path, ::System::UInt64 hash, ::System::String* ext, ::System::UInt32 crc, ::System::UInt64 offset, ::System::UInt64 size)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::System::String*, ::System::UInt64, ::System::String*, ::System::UInt32, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEASYNC_OFFSET))(path, hash, ext, crc, offset, size);
		}

		static ::UnityEngine::AssetBundle* LoadFromFile_Internal(::System::String* path, ::System::UInt32 crc, ::System::UInt64 offset, ::System::UInt64 size)
		{
			return ((::UnityEngine::AssetBundle*(*)(::System::String*, ::System::UInt32, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILE_INTERNAL_OFFSET))(path, crc, offset, size);
		}

		static ::UnityEngine::AssetBundle* LoadFromFileHash_Internal(::System::String* path, ::System::UInt64 hash, ::System::String* ext, ::System::UInt32 crc, ::System::UInt64 offset, ::System::UInt64 size)
		{
			return ((::UnityEngine::AssetBundle*(*)(::System::String*, ::System::UInt64, ::System::String*, ::System::UInt32, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILEHASH_INTERNAL_OFFSET))(path, hash, ext, crc, offset, size);
		}

		static ::System::UInt64 ResourcePathHash(::System::String* str)
		{
			return ((::System::UInt64(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_RESOURCEPATHHASH_OFFSET))(str);
		}

		static ::UnityEngine::AssetBundle* LoadFromFile(::System::String* path)
		{
			return ((::UnityEngine::AssetBundle*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILE_OFFSET))(path);
		}

		static ::UnityEngine::AssetBundle* LoadFromFile_1(::System::String* path, ::System::UInt64 hash, ::System::String* ext, ::System::UInt32 crc, ::System::UInt64 offset, ::System::UInt64 size)
		{
			return ((::UnityEngine::AssetBundle*(*)(::System::String*, ::System::UInt64, ::System::String*, ::System::UInt32, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMFILE_1_OFFSET))(path, hash, ext, crc, offset, size);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromMemoryAsync_Internal(::Il2CppArray<::System::Byte>* binary, ::System::UInt32 crc)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::Il2CppArray<::System::Byte>*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMMEMORYASYNC_INTERNAL_OFFSET))(binary, crc);
		}

		static ::UnityEngine::AssetBundleCreateRequest* LoadFromMemoryAsync(::Il2CppArray<::System::Byte>* binary)
		{
			return ((::UnityEngine::AssetBundleCreateRequest*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADFROMMEMORYASYNC_OFFSET))(binary);
		}

		::UnityEngine::Object* LoadAsset(::System::String* name, ::System::Type* type)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSET_OFFSET))(this, name, type);
		}

		::UnityEngine::Object* LoadAsset_1(::System::UInt64 hash, ::System::Type* type)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::UInt64, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSET_1_OFFSET))(this, hash, type);
		}

		::UnityEngine::Object* LoadAsset_Internal(::System::String* name, ::System::Type* type)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSET_INTERNAL_OFFSET))(this, name, type);
		}

		::UnityEngine::Object* LoadAssetHash_Internal(::System::UInt64 hash, ::System::Type* type)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::UInt64, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETHASH_INTERNAL_OFFSET))(this, hash, type);
		}

		::UnityEngine::AssetBundleRequest* LoadAssetAsync(::System::UInt64 hash, ::System::Type* type)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::UInt64, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETASYNC_OFFSET))(this, hash, type);
		}

		::UnityEngine::Object* LoadAssetInstanceCache_Internal(::System::String* name, ::System::Type* type)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETINSTANCECACHE_INTERNAL_OFFSET))(this, name, type);
		}

		::UnityEngine::Object* LoadAssetInstanceCache(::System::String* name, ::System::Type* type)
		{
			return ((::UnityEngine::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETINSTANCECACHE_OFFSET))(this, name, type);
		}

		::Il2CppArray<::UnityEngine::Object*>* LoadAllAssets()
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADALLASSETS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Object*>* LoadAllAssets_1(::System::Type* type)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADALLASSETS_1_OFFSET))(this, type);
		}

		::UnityEngine::AssetBundleRequest* LoadAssetAsyncHash_Internal(::System::UInt64 hash, ::System::Type* type)
		{
			return ((::UnityEngine::AssetBundleRequest*(*)(::PVOID, ::System::UInt64, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETASYNCHASH_INTERNAL_OFFSET))(this, hash, type);
		}

		::System::Void Unload(::System::Boolean unloadAllLoadedObjects)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_UNLOAD_OFFSET))(this, unloadAllLoadedObjects);
		}

		::Il2CppArray<::UnityEngine::Object*>* LoadAssetWithSubAssets_Internal(::System::String* name, ::System::Type* type)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_LOADASSETWITHSUBASSETS_INTERNAL_OFFSET))(this, name, type);
		}

		static ::System::Void set_enableBLKOpenFileCache(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSETBUNDLE_SET_ENABLEBLKOPENFILECACHE_OFFSET))(value);
		}
	};
}
