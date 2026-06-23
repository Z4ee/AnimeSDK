#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/LightShadows.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DelayChangeLight.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightDataCullChange.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightDataEnableChange.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightDataShadowChange.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightDataShadowStrengthChange.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightLodJobData.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightLodJobManager_CalculateNapLodJob.h"
#include "unitysdk/UnityEngine/Rendering/Universal/UniversalAdditionalLightData_LightLodConfigData.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_463E8E2D3909DF52;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace Unity::Collections { template <typename T> class ManagedBlockQueue_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_ADDJOBDATA_OFFSET UNITYSDK_OFFSET(0x1BDC0720)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_BEGINJOB_OFFSET UNITYSDK_OFFSET(0x1BDC17D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_CLEARNULLDATA_OFFSET UNITYSDK_OFFSET(0x1BDC1060)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DELAYADDENABLECHANGE_OFFSET UNITYSDK_OFFSET(0x1BDC01F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DELAYADDSHADOWCHANGE_OFFSET UNITYSDK_OFFSET(0x1BDC0180)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DELAYADDSHADOWSTRENGTHCHANGE_OFFSET UNITYSDK_OFFSET(0x1BDC02D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DELAYADDSHOULDCULLCHANGE_OFFSET UNITYSDK_OFFSET(0x1BDC0260)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DELAYADD_OFFSET UNITYSDK_OFFSET(0x1BDC00A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DELAYREMOVE_OFFSET UNITYSDK_OFFSET(0x1BDC0110)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DISPATCHJOB_OFFSET UNITYSDK_OFFSET(0x1BDC1350)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BDBFD40)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_ENDJOB_OFFSET UNITYSDK_OFFSET(0x1BDC18D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_FINISHMAINTHREADWORK_OFFSET UNITYSDK_OFFSET(0x1BDC1AD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_FLUSHDATACHANGE_OFFSET UNITYSDK_OFFSET(0x1BDC16D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_GETLIGHT_OFFSET UNITYSDK_OFFSET(0x1BDC1230)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_GETSELFPOSITION_OFFSET UNITYSDK_OFFSET(0x1BDC12D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_GET_INS_OFFSET UNITYSDK_OFFSET(0x1BDBF9F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_ISLIGHTDATAVALIDTHEADSAFE_OFFSET UNITYSDK_OFFSET(0x1BDC10B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1BDBFAC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_REFRESH_OFFSET UNITYSDK_OFFSET(0x1BDC0350)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_REMOVEJOBDATAAT_OFFSET UNITYSDK_OFFSET(0x1BDC0DE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_REMOVEJOBDATA_OFFSET UNITYSDK_OFFSET(0x1BDC0C40)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_SETNEEDFLUSHTHREADSAFE_OFFSET UNITYSDK_OFFSET(0x1BDBFCB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_SETSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1BDBFCF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDC1F70)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDBFAB0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightLodJobManager_TypeDefinitionIndex = 26405;

	class LightLodJobManager : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::LightLodJobManager** StaticGet__instance()
		{
			return (::UnityEngine::Rendering::Universal::LightLodJobManager**)Il2CppClass::FromTypeDefinitionIndex(LightLodJobManager_TypeDefinitionIndex)->GetStaticField(0x211E0);
		}
		static ::UnityEngine::Rendering::Universal::LightLodJobData* StaticGet_dummy()
		{
			return (::UnityEngine::Rendering::Universal::LightLodJobData*)Il2CppClass::FromTypeDefinitionIndex(LightLodJobManager_TypeDefinitionIndex)->GetStaticField(0x5C50);
		}
		static ::System::Boolean* StaticGet__needMainThreadFlush()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LightLodJobManager_TypeDefinitionIndex)->GetStaticField(0x5C68);
		}
		static ::System::Boolean* StaticGet_enableUpdateLightLodJob()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LightLodJobManager_TypeDefinitionIndex)->GetStaticField(0x5C69);
		}
		::Class_1_463E8E2D3909DF52* _transformSnapshot; // 0x10
		::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_LightLodConfigData configData; // 0x18
		::Unity::Collections::ManagedBlockQueue_1<::UnityEngine::Rendering::Universal::LightDataEnableChange>* _lightDataEnableChangeQueue; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DelayChangeLight>* _delayChangeLights; // 0x48
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*, ::System::Int32>* _entityIndexMap; // 0x50
		::Unity::Collections::ManagedBlockQueue_1<::UnityEngine::Rendering::Universal::LightDataCullChange>* _lightDataCullChangeQueue; // 0x58
		::Unity::Collections::ManagedBlockQueue_1<::UnityEngine::Rendering::Universal::LightDataShadowChange>* _lightDataShadowChangeQueue; // 0x60
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>* _lightData; // 0x68
		::Unity::Collections::ManagedBlockQueue_1<::UnityEngine::Rendering::Universal::LightDataShadowStrengthChange>* _lightDataShadowStrengthChangeQueue; // 0x70
		::System::Int32 _totalCount; // 0x78
		::System::Int32 _lastUpdateIndex; // 0x7C
		::UnityEngine::Vector3 triggerPosition; // 0x80
		::System::Int32 _updateCount; // 0x8C
		::UnityEngine::Rendering::Universal::LightLodJobManager_CalculateNapLodJob _calculateNapLodJob; // 0x90
		::System::Int32 frameCount; // 0xB0
		::System::Boolean isApplicationPlaying; // 0xB4
		::System::Boolean _needRefresh; // 0xB5
		::System::Boolean _needRefreshNull; // 0xB6
		::System::Boolean _isInit; // 0xB7
		::Unity::Jobs::JobHandle _jobHandle; // 0xB8
		::Unity::Collections::NativeList_1<::UnityEngine::Rendering::Universal::LightLodJobData> _lightJobData; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::Universal::LightLodJobManager* get_Ins()
		{
			return ((::UnityEngine::Rendering::Universal::LightLodJobManager*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_GET_INS_OFFSET))();
		}

		static ::System::Void SetNeedFlushThreadSafe()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_SETNEEDFLUSHTHREADSAFE_OFFSET))();
		}

		::System::Void SetSnapshot(::Class_1_463E8E2D3909DF52* transformSnapshot)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_463E8E2D3909DF52*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_SETSNAPSHOT_OFFSET))(this, transformSnapshot);
		}

		::System::Void OnCreate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_ONCREATE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void DelayAdd(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* lightData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DELAYADD_OFFSET))(this, lightData);
		}

		::System::Void DelayRemove(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* lightData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DELAYREMOVE_OFFSET))(this, lightData);
		}

		::System::Void DelayAddShadowChange(::System::Int32 index, ::UnityEngine::LightShadows shadows)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::LightShadows))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DELAYADDSHADOWCHANGE_OFFSET))(this, index, shadows);
		}

		::System::Void DelayAddEnableChange(::System::Int32 index, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DELAYADDENABLECHANGE_OFFSET))(this, index, enable);
		}

		::System::Void DelayAddShouldCullChange(::System::Int32 index, ::System::Boolean shouldCull)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DELAYADDSHOULDCULLCHANGE_OFFSET))(this, index, shouldCull);
		}

		::System::Void DelayAddShadowStrengthChange(::System::Int32 index, ::System::Single shadowStrength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DELAYADDSHADOWSTRENGTHCHANGE_OFFSET))(this, index, shadowStrength);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_REFRESH_OFFSET))(this);
		}

		::System::Void AddJobData(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* lightData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_ADDJOBDATA_OFFSET))(this, lightData);
		}

		::System::Void ClearNullData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_CLEARNULLDATA_OFFSET))(this);
		}

		::System::Void RemoveJobData(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* lightData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_REMOVEJOBDATA_OFFSET))(this, lightData);
		}

		::System::Void RemoveJobDataAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_REMOVEJOBDATAAT_OFFSET))(this, index);
		}

		::System::Boolean IsLightDataValidTheadSafe(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_ISLIGHTDATAVALIDTHEADSAFE_OFFSET))(this, index);
		}

		::UnityEngine::Light* GetLight(::System::Int32 index)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_GETLIGHT_OFFSET))(this, index);
		}

		::UnityEngine::Vector3 GetSelfPosition(::System::Int32 transformId)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_GETSELFPOSITION_OFFSET))(this, transformId);
		}

		::System::Void DispatchJob(::Unity::Jobs::JobHandle jobHandle)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DISPATCHJOB_OFFSET))(this, jobHandle);
		}

		::System::Void FlushDataChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_FLUSHDATACHANGE_OFFSET))(this);
		}

		::System::Void BeginJob(::Unity::Jobs::JobHandle dependency)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_BEGINJOB_OFFSET))(this, dependency);
		}

		::System::Void EndJob()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_ENDJOB_OFFSET))(this);
		}

		::System::Void FinishMainThreadWork()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_FINISHMAINTHREADWORK_OFFSET))(this);
		}
	};
}
