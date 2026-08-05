#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LyraSector/LyraPackedAssetUtils_PackedAssetKey.h"
#include "unitysdk/LyraSector/LyraSectorCoord.h"
#include "unitysdk/TestLyraSectorLoader_DistanceFieldVisualizeMode.h"
#include "unitysdk/TestLyraSectorLoader_SceneVoxelVisualizeMode.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class TestLyraSectorLoader_ClipmapLoaderData;
class TestLyraSectorLoader_KeyToPackedAssetDict;
class TestLyraSectorLoader_PackedAssetRequestInfo;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define TESTLYRASECTORLOADER_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C5AD4F0)
#define TESTLYRASECTORLOADER_CLEARASSETVISITSTAUS_OFFSET UNITYSDK_OFFSET(0x1C5ADD30)
#define TESTLYRASECTORLOADER_CLEARDATA_OFFSET UNITYSDK_OFFSET(0x1C5ADFA0)
#define TESTLYRASECTORLOADER_CLEARSERIALIZEDASSETREFERENCEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1C5AD590)
#define TESTLYRASECTORLOADER_GETDFASSETPATHFORMAT_OFFSET UNITYSDK_OFFSET(0x1C5AD620)
#define TESTLYRASECTORLOADER_GETPACKEDASSETPATHFORMAT_OFFSET UNITYSDK_OFFSET(0x1C5AD700)
#define TESTLYRASECTORLOADER_GETSVASSETPATHFORMAT_OFFSET UNITYSDK_OFFSET(0x1C5AD690)
#define TESTLYRASECTORLOADER_HASASSETREFERENCE_OFFSET UNITYSDK_OFFSET(0x1C5AD530)
#define TESTLYRASECTORLOADER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C5ADF50)
#define TESTLYRASECTORLOADER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C5AE330)
#define TESTLYRASECTORLOADER_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1C5AE380)
#define TESTLYRASECTORLOADER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C5ADDC0)
#define TESTLYRASECTORLOADER_RECORDENABLE_OFFSET UNITYSDK_OFFSET(0x1C5AD770)
#define TESTLYRASECTORLOADER_RECORDLOADED_OFFSET UNITYSDK_OFFSET(0x1C5ADC70)
#define TESTLYRASECTORLOADER_RECORDTYRLOAD_OFFSET UNITYSDK_OFFSET(0x1C5AD7C0)
#define TESTLYRASECTORLOADER_RECORDUNLOAD_OFFSET UNITYSDK_OFFSET(0x1C5ADCD0)
#define TESTLYRASECTORLOADER_SETSHOULDRELOADASSETS_OFFSET UNITYSDK_OFFSET(0x1C5AE730)
#define TESTLYRASECTORLOADER_START_OFFSET UNITYSDK_OFFSET(0x1C5ADD80)
#define TESTLYRASECTORLOADER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C5AE3C0)
#define TESTLYRASECTORLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5AE770)

inline static constexpr unsigned int TestLyraSectorLoader_TypeDefinitionIndex = 27863;

class TestLyraSectorLoader : public ::UnityEngine::MonoBehaviour
{
public:
	// static const ::System::String* SDF_ASSET_NAME; // 0x0
	// static const ::System::String* VOXEL_ASSET_NAME; // 0x0
	// static const ::System::String* LYRAGI_FOLDER_NAME; // 0x0
	// static const ::System::String* LYRA_SCENE_ASSET_NAME; // 0x0
	::Il2CppArray<::System::Collections::Generic::Dictionary_2<::LyraSector::LyraSectorCoord, ::System::Boolean>*>* coordDataVisitStatus; // 0x18
	::TestLyraSectorLoader_ClipmapLoaderData* m_DistanceFieldLoaderData; // 0x20
	::TestLyraSectorLoader_ClipmapLoaderData* m_SceneVoxelLoaderData; // 0x28
	::System::Collections::Generic::Dictionary_2<::LyraSector::LyraPackedAssetUtils_PackedAssetKey, ::TestLyraSectorLoader_PackedAssetRequestInfo*>* m_LoadedPackedAssetsRequests; // 0x30
	::System::Boolean forceEnableSDFAndVoxel; // 0x38
	::System::Boolean m_ShouldReloadAssets; // 0x39
	::System::String* m_LyraAssetDir; // 0x40
	::System::Boolean m_UseReplacedSceneName; // 0x48
	::System::Boolean m_EnableDistanceField; // 0x49
	::System::Boolean m_EnableSceneVoxel; // 0x4A
	::System::Boolean m_EnableDebugView; // 0x4B
	::TestLyraSectorLoader_DistanceFieldVisualizeMode m_DistanceFieldVisualizeMode; // 0x4C
	::System::Boolean m_DistaneFieldForceFullUpdate; // 0x50
	::TestLyraSectorLoader_SceneVoxelVisualizeMode m_SceneVoxelVisualizeMode; // 0x54
	::System::Boolean m_SceneVoxelForceFullUpdate; // 0x58
	::TestLyraSectorLoader_KeyToPackedAssetDict* m_PackedAssets; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_AWAKE_OFFSET))(this);
	}

	::System::Boolean HasAssetReference()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_HASASSETREFERENCE_OFFSET))(this);
	}

	::System::Boolean ClearSerializedAssetReferenceIfNeeded()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_CLEARSERIALIZEDASSETREFERENCEIFNEEDED_OFFSET))(this);
	}

	static ::System::String* GetDFAssetPathFormat(::System::String* lyraAssetDir)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_GETDFASSETPATHFORMAT_OFFSET))(lyraAssetDir);
	}

	static ::System::String* GetSVAssetPathFormat(::System::String* lyraAssetDir)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_GETSVASSETPATHFORMAT_OFFSET))(lyraAssetDir);
	}

	static ::System::String* GetPackedAssetPathFormat(::System::String* lyraAssetDir)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_GETPACKEDASSETPATHFORMAT_OFFSET))(lyraAssetDir);
	}

	::System::Void RecordEnable(::System::Boolean enable)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_RECORDENABLE_OFFSET))(this, enable);
	}

	::System::Void RecordTyrLoad(::LyraSector::LyraSectorCoord coord, ::System::Boolean isForDistance, ::System::Boolean assetExist)
	{
		return ((::System::Void(*)(::PVOID, ::LyraSector::LyraSectorCoord, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_RECORDTYRLOAD_OFFSET))(this, coord, isForDistance, assetExist);
	}

	::System::Void RecordLoaded(::LyraSector::LyraSectorCoord coord, ::System::Boolean isForDistance)
	{
		return ((::System::Void(*)(::PVOID, ::LyraSector::LyraSectorCoord, ::System::Boolean))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_RECORDLOADED_OFFSET))(this, coord, isForDistance);
	}

	::System::Void RecordUnload(::LyraSector::LyraSectorCoord coord, ::System::Boolean isForDistance)
	{
		return ((::System::Void(*)(::PVOID, ::LyraSector::LyraSectorCoord, ::System::Boolean))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_RECORDUNLOAD_OFFSET))(this, coord, isForDistance);
	}

	::System::Void ClearAssetVisitStaus()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_CLEARASSETVISITSTAUS_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_START_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_ONDESTROY_OFFSET))(this);
	}

	::System::Void ClearData()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_CLEARDATA_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDrawGizmos()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_ONDRAWGIZMOS_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_UPDATE_OFFSET))(this);
	}

	::System::Void SetShouldReloadAssets()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TESTLYRASECTORLOADER_SETSHOULDRELOADASSETS_OFFSET))(this);
	}
};
