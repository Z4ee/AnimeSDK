#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LyraSector/LyraSectorCoord.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/LyraBakedDataManager_AsyncDecompressLyraSectorJobStatus.h"

namespace LyraSector { class LyraPackedAsset; }
namespace LyraSector { class LyraSparseTreeBakedData; }
namespace UnityEngine::Rendering::Universal::Internal { class LyraBakedDataManager_AsyncDecompressLyraSectorJobsData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORSINGLEJOBDATA_ADDTOJOBSDATAIFFINISHEDLASTJOB_OFFSET UNITYSDK_OFFSET(0x1109DE40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORSINGLEJOBDATA_FINISEDBINARYDECOMPRESSION_OFFSET UNITYSDK_OFFSET(0x1109DDA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORSINGLEJOBDATA_FINISHEDALLJOB_OFFSET UNITYSDK_OFFSET(0x1109DDF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORSINGLEJOBDATA_FINISHEDLASTJOB_OFFSET UNITYSDK_OFFSET(0x1109DD50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORSINGLEJOBDATA_RELEASEJOBDATA_OFFSET UNITYSDK_OFFSET(0x1109E0C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORSINGLEJOBDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1109E100)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_AsyncDecompressLyraSectorSingleJobData_TypeDefinitionIndex = 26924;

	class LyraBakedDataManager_AsyncDecompressLyraSectorSingleJobData : public ::System::Object
	{
	public:
		::LyraSector::LyraPackedAsset* packedAsset; // 0x10
		::LyraSector::LyraSparseTreeBakedData* decompressedSector; // 0x18
		::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_AsyncDecompressLyraSectorJobStatus nextJobStatus; // 0x20
		::LyraSector::LyraSectorCoord coord; // 0x24
		::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_AsyncDecompressLyraSectorJobStatus jobStatus; // 0x34
		::System::Boolean isForDistanceField; // 0x38
		::System::Int32 currentBlockIndex; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORSINGLEJOBDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean FinishedLastJob()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORSINGLEJOBDATA_FINISHEDLASTJOB_OFFSET))(this);
		}

		::System::Boolean FinisedBinaryDecompression()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORSINGLEJOBDATA_FINISEDBINARYDECOMPRESSION_OFFSET))(this);
		}

		::System::Boolean FinishedAllJob()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORSINGLEJOBDATA_FINISHEDALLJOB_OFFSET))(this);
		}

		::System::Int32 AddToJobsDataIfFinishedLastJob(::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_AsyncDecompressLyraSectorJobsData* jobsData)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::LyraBakedDataManager_AsyncDecompressLyraSectorJobsData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORSINGLEJOBDATA_ADDTOJOBSDATAIFFINISHEDLASTJOB_OFFSET))(this, jobsData);
		}

		::System::Void ReleaseJobData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_ASYNCDECOMPRESSLYRASECTORSINGLEJOBDATA_RELEASEJOBDATA_OFFSET))(this);
		}
	};
}
