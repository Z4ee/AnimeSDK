#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DelayChangeLight.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightLODChange.h"
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

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_ADDJOBDATA_OFFSET UNITYSDK_OFFSET(0x1CEFBE30)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_BEGINJOB_OFFSET UNITYSDK_OFFSET(0x1CEFCFA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_CLEARNULLDATA_OFFSET UNITYSDK_OFFSET(0x1CEFC690)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DELAYADDLIGHTLODCHANGE_OFFSET UNITYSDK_OFFSET(0x1CEFB9D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DELAYADD_OFFSET UNITYSDK_OFFSET(0x1CEFB8F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DELAYREMOVE_OFFSET UNITYSDK_OFFSET(0x1CEFB960)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DISPATCHJOB_OFFSET UNITYSDK_OFFSET(0x1CEFCB00)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CEFB600)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_ENDJOB_OFFSET UNITYSDK_OFFSET(0x1CEFD090)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_FINISHMAINTHREADWORK_OFFSET UNITYSDK_OFFSET(0x1CEFD280)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_FLUSHDATACHANGE_OFFSET UNITYSDK_OFFSET(0x1CEFCEB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_GETLIGHT_OFFSET UNITYSDK_OFFSET(0x1CEFC860)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_GETSELFPOSITION_OFFSET UNITYSDK_OFFSET(0x1CEFC900)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_GET_INS_OFFSET UNITYSDK_OFFSET(0x1CEFB380)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_ISLIGHTDATAVALIDTHEADSAFE_OFFSET UNITYSDK_OFFSET(0x1CEFC6E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1CEFB440)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_REFRESH_OFFSET UNITYSDK_OFFSET(0x1CEFBA60)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_REMOVEJOBDATAAT_OFFSET UNITYSDK_OFFSET(0x1CEFC420)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_REMOVEJOBDATA_OFFSET UNITYSDK_OFFSET(0x1CEFC280)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_SETSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1CEFB5B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_UPDATECONFIGDATA_OFFSET UNITYSDK_OFFSET(0x1CEFC980)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEFD6D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEFB430)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightLodJobManager_TypeDefinitionIndex = 27092;

	class LightLodJobManager : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::LightLodJobManager** StaticGet__instance()
		{
			return (::UnityEngine::Rendering::Universal::LightLodJobManager**)Il2CppClass::FromTypeDefinitionIndex(LightLodJobManager_TypeDefinitionIndex)->GetStaticField(0x22A60);
		}
		static ::System::Boolean* StaticGet_enableUpdateLightLodJob()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LightLodJobManager_TypeDefinitionIndex)->GetStaticField(0x5BC0);
		}
		static ::System::Boolean* StaticGet__needMainThreadFlush()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LightLodJobManager_TypeDefinitionIndex)->GetStaticField(0x5BC1);
		}
		static ::UnityEngine::Rendering::Universal::LightLodJobData* StaticGet_dummy()
		{
			return (::UnityEngine::Rendering::Universal::LightLodJobData*)Il2CppClass::FromTypeDefinitionIndex(LightLodJobManager_TypeDefinitionIndex)->GetStaticField(0x5BC4);
		}
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*, ::System::Int32>* _entityIndexMap; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DelayChangeLight>* _delayChangeLights; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>* _lightData; // 0x20
		::Class_1_463E8E2D3909DF52* _transformSnapshot; // 0x28
		::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_LightLodConfigData configData; // 0x30
		::Unity::Collections::ManagedBlockQueue_1<::UnityEngine::Rendering::Universal::LightLODChange>* _lightLODChangeQueue; // 0x58
		::System::Boolean isApplicationPlaying; // 0x60
		::System::Boolean _needRefresh; // 0x61
		::System::Boolean _hasValidConfigData; // 0x62
		::System::Boolean _isInit; // 0x63
		::UnityEngine::Rendering::Universal::LightLodJobManager_CalculateNapLodJob _calculateNapLodJob; // 0x68
		::System::Int32 frameCount; // 0x80
		::System::Boolean _needRefreshNull; // 0x84
		::Unity::Collections::NativeList_1<::UnityEngine::Rendering::Universal::LightLodJobData> _lightJobData; // 0x88
		::Unity::Jobs::JobHandle _jobHandle; // 0x98
		::UnityEngine::Vector3 triggerPosition; // 0xA8
		::System::Int32 _lodUpdateStartIndex; // 0xB4

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

		::System::Void DelayAddLightLODChange(::UnityEngine::Rendering::Universal::LightLODChange lodChange)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::LightLODChange))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DELAYADDLIGHTLODCHANGE_OFFSET))(this, lodChange);
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

		::System::Void UpdateConfigData(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_LightLodConfigData& data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_LightLodConfigData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_UPDATECONFIGDATA_OFFSET))(this, data);
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
