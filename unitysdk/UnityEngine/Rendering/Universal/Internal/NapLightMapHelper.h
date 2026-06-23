#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class LightProbes; }
namespace UnityEngine { class LightmapData; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal::Internal { class NapLightMapData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER_ADDLIGHTMAP_OFFSET UNITYSDK_OFFSET(0x1CEFF6C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER_BINDANDTRIGGERLIGHTPROBE_OFFSET UNITYSDK_OFFSET(0x1CF020D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER_BINDLIGHTMAPDATA_OFFSET UNITYSDK_OFFSET(0x1CEFFA60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER_BINDLIGHTPROBEDATA_OFFSET UNITYSDK_OFFSET(0x1CF031E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER_BINDLIGHTPROBEREFERENCE_OFFSET UNITYSDK_OFFSET(0x1CF025A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER_BINDREFLECTIONPROBEDATA_OFFSET UNITYSDK_OFFSET(0x1CF01620)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER_DOTETRAHEDRALIZE_OFFSET UNITYSDK_OFFSET(0x1CF02560)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER_DYNAMICGETANDBINDREFLECTIONPROBEDATA_OFFSET UNITYSDK_OFFSET(0x1CF00470)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER_SAVELIGHTPROBEDATA_OFFSET UNITYSDK_OFFSET(0x1CF02DA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER_SETLIGHTPROBEDATAOFFSET_OFFSET UNITYSDK_OFFSET(0x1CF02750)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER_UNBINDANDTRIGGERLIGHTPROBES_OFFSET UNITYSDK_OFFSET(0x1CF02A90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER_UNBINDLIGHTMAP_OFFSET UNITYSDK_OFFSET(0x1CEFF940)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER_UNLOADASSET_OFFSET UNITYSDK_OFFSET(0x1CF00310)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF03510)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF03500)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int NapLightMapHelper_TypeDefinitionIndex = 26851;

	class NapLightMapHelper : public ::System::Object
	{
	public:
		static ::UnityEngine::LightProbes** StaticGet_sceneBaseLightProbe()
		{
			return (::UnityEngine::LightProbes**)Il2CppClass::FromTypeDefinitionIndex(NapLightMapHelper_TypeDefinitionIndex)->GetStaticField(0x21850);
		}
		::Il2CppArray<::UnityEngine::LightmapData*>* sceneBasedLightMaps; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER__CCTOR_OFFSET))();
		}

		static ::System::Int32 AddLightMap(::Il2CppArray<::UnityEngine::LightmapData*>* lightmapDatas, ::System::Boolean singleton)
		{
			return ((::System::Int32(*)(::Il2CppArray<::UnityEngine::LightmapData*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER_ADDLIGHTMAP_OFFSET))(lightmapDatas, singleton);
		}

		static ::System::Void UnbindLightMap(::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER_UNBINDLIGHTMAP_OFFSET))(startIndex, count);
		}

		static ::System::Void BindLightMapData(::UnityEngine::Rendering::Universal::Internal::NapLightMapData* lightMapData, ::System::Boolean exclusive, ::System::Int32& lightMapOffset, ::System::Int32& lightMapCount)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::NapLightMapData*, ::System::Boolean, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER_BINDLIGHTMAPDATA_OFFSET))(lightMapData, exclusive, lightMapOffset, lightMapCount);
		}

		static ::System::Void UnloadAsset(::UnityEngine::Texture* tex)
		{
			return ((::System::Void(*)(::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER_UNLOADASSET_OFFSET))(tex);
		}

		static ::System::Boolean DynamicGetAndBindReflectionProbeData(::UnityEngine::Rendering::Universal::Internal::NapLightMapData* lightMapData, ::System::String* logTag, ::System::Boolean setImportance, ::System::Int32 v2Index)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::Universal::Internal::NapLightMapData*, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER_DYNAMICGETANDBINDREFLECTIONPROBEDATA_OFFSET))(lightMapData, logTag, setImportance, v2Index);
		}

		static ::System::Boolean BindReflectionProbeData(::UnityEngine::Rendering::Universal::Internal::NapLightMapData* lightMapData, ::System::String* logTag, ::System::Boolean setImportance, ::System::Int32 v2Index, ::System::Boolean disableDynamicLoad)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::Universal::Internal::NapLightMapData*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER_BINDREFLECTIONPROBEDATA_OFFSET))(lightMapData, logTag, setImportance, v2Index, disableDynamicLoad);
		}

		static ::System::Void BindAndTriggerLightProbe(::UnityEngine::Rendering::Universal::Internal::NapLightMapData* lightMapData, ::System::Boolean singleton, ::System::String* logTag, ::System::Boolean sameCheck)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::NapLightMapData*, ::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER_BINDANDTRIGGERLIGHTPROBE_OFFSET))(lightMapData, singleton, logTag, sameCheck);
		}

		static ::System::Void BindLightProbeReference(::UnityEngine::Rendering::Universal::Internal::NapLightMapData* lightMapData)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::NapLightMapData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER_BINDLIGHTPROBEREFERENCE_OFFSET))(lightMapData);
		}

		static ::System::Void SetLightProbeDataOffset(::UnityEngine::Rendering::Universal::Internal::NapLightMapData* lightMapData, ::UnityEngine::Vector3 offset)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::NapLightMapData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER_SETLIGHTPROBEDATAOFFSET_OFFSET))(lightMapData, offset);
		}

		static ::System::Void UnBindAndTriggerLightProbes(::UnityEngine::Rendering::Universal::Internal::NapLightMapData* lightMapData)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::NapLightMapData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER_UNBINDANDTRIGGERLIGHTPROBES_OFFSET))(lightMapData);
		}

		static ::System::Void DoTetrahedralize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER_DOTETRAHEDRALIZE_OFFSET))();
		}

		static ::System::Void SaveLightProbeData(::UnityEngine::Rendering::Universal::Internal::NapLightMapData* lightMapData)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::NapLightMapData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER_SAVELIGHTPROBEDATA_OFFSET))(lightMapData);
		}

		static ::System::Void BindLightProbeData(::UnityEngine::Rendering::Universal::Internal::NapLightMapData* lightMapData, ::System::String* logTag)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::NapLightMapData*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPLIGHTMAPHELPER_BINDLIGHTPROBEDATA_OFFSET))(lightMapData, logTag);
		}
	};
}
