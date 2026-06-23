#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPBatch/MaterialBatchJobItem.h"

#define UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_APPLYITEMTHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D810780)
#define UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_APPLYITEMTHREAD_OFFSET UNITYSDK_OFFSET(0x1D810930)
#define UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_CREATENATIVE_OFFSET UNITYSDK_OFFSET(0x1D810750)
#define UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_DESTROYNATIVE_OFFSET UNITYSDK_OFFSET(0x1D810760)
#define UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D810860)
#define UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D8107B0)
#define UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_RELEASE_OFFSET UNITYSDK_OFFSET(0x1D810830)
#define UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_SYNCJOBSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D810770)
#define UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D810790)

namespace UnityEngine::NAPBatch
{
	inline static constexpr unsigned int MaterialBatchApplier_TypeDefinitionIndex = 6131;

	class MaterialBatchApplier : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER__CTOR_OFFSET))(this);
		}

		static ::System::IntPtr CreateNative()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_CREATENATIVE_OFFSET))();
		}

		::System::Void DestroyNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_DESTROYNATIVE_OFFSET))(this);
		}

		::System::Void SyncJobsInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_SYNCJOBSINTERNAL_OFFSET))(this);
		}

		static ::System::Void ApplyItemThreadInternal(::UnityEngine::NAPBatch::MaterialBatchJobItem& item, ::System::Boolean threadSafeCall)
		{
			return ((::System::Void(*)(::UnityEngine::NAPBatch::MaterialBatchJobItem&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_APPLYITEMTHREADINTERNAL_OFFSET))(item, threadSafeCall);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_FINALIZE_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_RELEASE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_DISPOSE_OFFSET))(this);
		}

		static ::System::Void ApplyItemThread(::UnityEngine::NAPBatch::MaterialBatchJobItem& item, ::System::Boolean threadSafeCall)
		{
			return ((::System::Void(*)(::UnityEngine::NAPBatch::MaterialBatchJobItem&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPBATCH_MATERIALBATCHAPPLIER_APPLYITEMTHREAD_OFFSET))(item, threadSafeCall);
		}
	};
}
