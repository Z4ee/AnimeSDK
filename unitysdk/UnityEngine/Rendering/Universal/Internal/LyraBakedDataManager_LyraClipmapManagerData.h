#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LyraSector/LyraSectorCoord.h"
#include "unitysdk/System/Object.h"

namespace LyraSector { class LyraPackedAsset; }
namespace LyraSector { class LyraSectorRenderingData; }
namespace LyraSector { class LyraSparseTreeBakedData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Threading { class Mutex; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering::Universal::Internal { class LyraBakedDataManager_AsyncDecompressLyraSectorSingleJobData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRACLIPMAPMANAGERDATA_ADDASSET_OFFSET UNITYSDK_OFFSET(0x190BE630)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRACLIPMAPMANAGERDATA_REMOVEASSETIMPL_OFFSET UNITYSDK_OFFSET(0x190C8D30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRACLIPMAPMANAGERDATA_REMOVEASSET_OFFSET UNITYSDK_OFFSET(0x190BEBD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRACLIPMAPMANAGERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x190BBD00)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_LyraClipmapManagerData_TypeDefinitionIndex = 30470;

	class LyraBakedDataManager_LyraClipmapManagerData : public ::System::Object
	{
	public:
		::UnityEngine::Texture2D* m_AlbedoLutTex; // 0x10
		::System::Collections::Generic::Dictionary_2<::LyraSector::LyraSectorCoord, ::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_AsyncDecompressLyraSectorSingleJobData*>* m_DecompressingSectorJobs; // 0x18
		::System::Threading::Mutex* m_SectorMutex; // 0x20
		::System::Collections::Generic::Dictionary_2<::LyraSector::LyraSectorCoord, ::LyraSector::LyraPackedAsset*>* m_LoadedPackedAssets; // 0x28
		::System::Collections::Generic::Dictionary_2<::LyraSector::LyraSectorCoord, ::LyraSector::LyraSectorRenderingData*>* m_SectorGpuData; // 0x30
		::System::Collections::Generic::Dictionary_2<::LyraSector::LyraSectorCoord, ::LyraSector::LyraSparseTreeBakedData*>* m_DecompressedSectors; // 0x38
		::System::Collections::Generic::Dictionary_2<::LyraSector::LyraPackedAsset*, ::System::Collections::Generic::HashSet_1<::LyraSector::LyraSectorCoord>*>* m_LoadedSectorAssetsCoords; // 0x40
		::System::Collections::Generic::HashSet_1<::LyraSector::LyraSectorCoord>* m_ChangedAssetsCoords; // 0x48
		::System::Boolean m_IsForDistanceField; // 0x50
		::System::Int32 m_LoadedAssetSize; // 0x54

		::System::Void _ctor(::System::Boolean isForDistanceField)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRACLIPMAPMANAGERDATA__CTOR_OFFSET))(this, isForDistanceField);
		}

		::System::Void AddAsset(::LyraSector::LyraSectorCoord& coord, ::LyraSector::LyraPackedAsset* packedAsset)
		{
			return ((::System::Void(*)(::PVOID, ::LyraSector::LyraSectorCoord&, ::LyraSector::LyraPackedAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRACLIPMAPMANAGERDATA_ADDASSET_OFFSET))(this, coord, packedAsset);
		}

		::System::Void RemoveAssetImpl(::LyraSector::LyraSectorCoord& coord)
		{
			return ((::System::Void(*)(::PVOID, ::LyraSector::LyraSectorCoord&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRACLIPMAPMANAGERDATA_REMOVEASSETIMPL_OFFSET))(this, coord);
		}

		::System::Void RemoveAsset(::LyraSector::LyraSectorCoord& coord)
		{
			return ((::System::Void(*)(::PVOID, ::LyraSector::LyraSectorCoord&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_LYRACLIPMAPMANAGERDATA_REMOVEASSET_OFFSET))(this, coord);
		}
	};
}
