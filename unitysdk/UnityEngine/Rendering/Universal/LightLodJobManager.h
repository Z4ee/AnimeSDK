#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Collections/NativeQueue_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccessArray.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightDataCullChange.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightDataEnableChange.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightDataShadowChange.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightDataShadowStrengthChange.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightLodJobData.h"
#include "unitysdk/UnityEngine/Rendering/Universal/UniversalAdditionalLightData_LightLodConfigData.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_ADDJOBDATA_OFFSET UNITYSDK_OFFSET(0x19AB8470)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_BEGINJOB_OFFSET UNITYSDK_OFFSET(0x19AB8DC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_COMPLETEJOB_OFFSET UNITYSDK_OFFSET(0x19AB9590)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DELAYADD_OFFSET UNITYSDK_OFFSET(0x19AB7C60)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DELAYREMOVE_OFFSET UNITYSDK_OFFSET(0x19AB7D10)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DISPATCHJOB_OFFSET UNITYSDK_OFFSET(0x19AB8A50)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19AB76B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_ENDJOB_OFFSET UNITYSDK_OFFSET(0x19AB93D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_FINISHMAINTHREADWORK_OFFSET UNITYSDK_OFFSET(0x19AB96E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_FLUSHDATA_OFFSET UNITYSDK_OFFSET(0x19AB8F80)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_GETLIGHT_OFFSET UNITYSDK_OFFSET(0x19AB89B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_GET_INS_OFFSET UNITYSDK_OFFSET(0x19AB7190)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_ISLIGHTDATAVALIDTHEADSAFE_OFFSET UNITYSDK_OFFSET(0x19AB8830)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_ONCREATE_OFFSET UNITYSDK_OFFSET(0x19AB72D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_REFRESH_OFFSET UNITYSDK_OFFSET(0x19AB7DC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_REMOVEJOBDATA_OFFSET UNITYSDK_OFFSET(0x19AB81D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AB9EB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB72C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightLodJobManager_TypeDefinitionIndex = 30014;

	class LightLodJobManager : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::LightLodJobManager** StaticGet__instance()
		{
			return (::UnityEngine::Rendering::Universal::LightLodJobManager**)Il2CppClass::FromTypeDefinitionIndex(LightLodJobManager_TypeDefinitionIndex)->GetStaticField(0x23D10);
		}
		static ::System::Boolean* StaticGet_enableUpdateLightLodJob()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LightLodJobManager_TypeDefinitionIndex)->GetStaticField(0x6660);
		}
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>* _lightData; // 0x10
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*, ::System::Int32>* _entityIndexMap; // 0x18
		::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>* _delayAddLights; // 0x20
		::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*>* _delayRemoveLights; // 0x28
		::UnityEngine::Rendering::Universal::UniversalAdditionalLightData_LightLodConfigData configData; // 0x30
		::Unity::Collections::NativeQueue_1<::UnityEngine::Rendering::Universal::LightDataCullChange> _lightDataCullChangeQueue; // 0x58
		::Unity::Collections::NativeQueue_1<::UnityEngine::Rendering::Universal::LightDataShadowChange> _lightDataShadowChangeQueue; // 0x70
		::UnityEngine::Jobs::TransformAccessArray _transformAccessArray; // 0x88
		::Unity::Jobs::JobHandle _jobHandle; // 0x90
		::Unity::Collections::NativeQueue_1<::UnityEngine::Rendering::Universal::LightDataShadowStrengthChange> _lightDataShadowStrengthChangeQueue; // 0xA0
		::Unity::Collections::NativeQueue_1<::UnityEngine::Rendering::Universal::LightDataEnableChange> _lightDataEnableChangeQueue; // 0xB8
		::Unity::Collections::NativeList_1<::UnityEngine::Rendering::Universal::LightLodJobData> _lightJobData; // 0xD0
		::System::Boolean _isInit; // 0xE0

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

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_REFRESH_OFFSET))(this);
		}

		::System::Void AddJobData(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* lightData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_ADDJOBDATA_OFFSET))(this, lightData);
		}

		::System::Void RemoveJobData(::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* lightData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_REMOVEJOBDATA_OFFSET))(this, lightData);
		}

		::System::Boolean IsLightDataValidTheadSafe(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_ISLIGHTDATAVALIDTHEADSAFE_OFFSET))(this, index);
		}

		::UnityEngine::Light* GetLight(::System::Int32 index)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_GETLIGHT_OFFSET))(this, index);
		}

		::System::Void DispatchJob()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_DISPATCHJOB_OFFSET))(this);
		}

		::System::Void BeginJob()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_BEGINJOB_OFFSET))(this);
		}

		::System::Void FlushData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_FLUSHDATA_OFFSET))(this);
		}

		::System::Void EndJob()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_ENDJOB_OFFSET))(this);
		}

		::System::Void CompleteJob()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_COMPLETEJOB_OFFSET))(this);
		}

		::System::Void FinishMainThreadWork()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LIGHTLODJOBMANAGER_FINISHMAINTHREADWORK_OFFSET))(this);
		}
	};
}
