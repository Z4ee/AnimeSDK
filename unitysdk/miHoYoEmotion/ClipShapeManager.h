#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/miHoYoEmotion/ClipShapeManager_CurveBinding_BoneParamType.h"
#include "unitysdk/miHoYoEmotion/ElementManager.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace miHoYoEmotion { class ClipShapeData; }
namespace miHoYoEmotion { class ClipShapeManager_ClipShapeRuntime; }
namespace miHoYoEmotion { class ClipShapeManager_CurveBinding; }
namespace miHoYoEmotion { class EyeKey; }

#define MIHOYOEMOTION_CLIPSHAPEMANAGER_APPLYBINDINGDATAATLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1BAF6520)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_APPLYBINDINGDATA_OFFSET UNITYSDK_OFFSET(0x1BAF0190)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_CACHEBINDINGVALUE_OFFSET UNITYSDK_OFFSET(0x1BAF00B0)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_CLEARBINDINGVALUECACHE_OFFSET UNITYSDK_OFFSET(0x1BAF0010)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_CLEARSMRREFERENCES_OFFSET UNITYSDK_OFFSET(0x1BAF3860)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_GET_EYEKEY_OFFSET UNITYSDK_OFFSET(0x1BAF1C50)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_GET_FACEMESHRENDERER_OFFSET UNITYSDK_OFFSET(0x1BAF1C20)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_GET_PHONEMESHAPERUNTIMES_OFFSET UNITYSDK_OFFSET(0x1BAF1C40)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_INITEMOANIM_OFFSET UNITYSDK_OFFSET(0x1BAF6690)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_INITFACEMESHRENDERER_OFFSET UNITYSDK_OFFSET(0x1BAF2750)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1BAF64D0)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x1BAF24A0)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1BAF21F0)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_REFRESHBINDINGLIST_OFFSET UNITYSDK_OFFSET(0x1BAE9CF0)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_SET_FACEMESHRENDERER_OFFSET UNITYSDK_OFFSET(0x1BAF1C30)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_START_OFFSET UNITYSDK_OFFSET(0x1BAF1E20)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_UPDATERUNTIMEINDEX_OFFSET UNITYSDK_OFFSET(0x1BAF6A20)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_UPDATESHAPEDATA_OFFSET UNITYSDK_OFFSET(0x1BAF1ED0)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER_UPDATESHAPERUNTIME_OFFSET UNITYSDK_OFFSET(0x1BAF6860)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BAF7500)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAF6F90)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER___BASE_INITEMOANIM_OFFSET UNITYSDK_OFFSET(0x1BAF75B0)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER___BASE_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x1BAF7640)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER___BASE_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1BAF7650)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER___BASE_START_OFFSET UNITYSDK_OFFSET(0x1BAF7660)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER___BASE_UPDATESHAPEDATA_OFFSET UNITYSDK_OFFSET(0x1BAF76F0)
#define MIHOYOEMOTION_CLIPSHAPEMANAGER___BASE_UPDATESHAPERUNTIME_OFFSET UNITYSDK_OFFSET(0x1BAF7780)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int ClipShapeManager_TypeDefinitionIndex = 39354;

	class ClipShapeManager : public ::miHoYoEmotion::ElementManager
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_faceRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(ClipShapeManager_TypeDefinitionIndex)->GetStaticField(0x2AF90);
		}
		::UnityEngine::SkinnedMeshRenderer* _faceMeshRenderer_k__BackingField; // 0x48
		::System::Boolean matchBlendName; // 0x50
		::System::Collections::Generic::List_1<::miHoYoEmotion::ClipShapeManager_CurveBinding*>* currModelBindingList; // 0x58
		::Il2CppArray<::miHoYoEmotion::ClipShapeManager_ClipShapeRuntime*>* _phonemeShapeRuntimes; // 0x60
		::Il2CppArray<::miHoYoEmotion::ClipShapeManager_ClipShapeRuntime*>* _emotionShapeRuntimes; // 0x68
		::miHoYoEmotion::ClipShapeData* _clipShapeData; // 0x70
		::System::Boolean useBone; // 0x78
		::System::Boolean isRefreshBindingList; // 0x79
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* blendName2MeshIndex; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* currIndex2MeshIndex; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* meshIndex2CurrIndex; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* blendShapeName2CurrIndex; // 0x98
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::miHoYoEmotion::ClipShapeManager_CurveBinding_BoneParamType, ::System::String*>, ::System::Int32>* boneBindingType2CurrIndex; // 0xA0
		::miHoYoEmotion::EyeKey* eyeKey; // 0xA8
		::System::Collections::Generic::Dictionary_2<::miHoYoEmotion::ClipShapeManager_CurveBinding*, ::System::Single>* bindingCacheValue; // 0xB0
		::System::Boolean _runtimeIndexUpdated; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER__CCTOR_OFFSET))();
		}

		::UnityEngine::SkinnedMeshRenderer* get_faceMeshRenderer()
		{
			return ((::UnityEngine::SkinnedMeshRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_GET_FACEMESHRENDERER_OFFSET))(this);
		}

		::System::Void set_faceMeshRenderer(::UnityEngine::SkinnedMeshRenderer* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_SET_FACEMESHRENDERER_OFFSET))(this, value);
		}

		::Il2CppArray<::miHoYoEmotion::ClipShapeManager_ClipShapeRuntime*>* get_PhonemeShapeRuntimes()
		{
			return ((::Il2CppArray<::miHoYoEmotion::ClipShapeManager_ClipShapeRuntime*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_GET_PHONEMESHAPERUNTIMES_OFFSET))(this);
		}

		::miHoYoEmotion::EyeKey* get_EyeKey()
		{
			return ((::miHoYoEmotion::EyeKey*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_GET_EYEKEY_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_START_OFFSET))(this);
		}

		::System::Void OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_ONREALENABLE_OFFSET))(this);
		}

		::System::Void OnRealDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_ONREALDISABLE_OFFSET))(this);
		}

		::System::Void InitFaceMeshRenderer(::UnityEngine::SkinnedMeshRenderer* smr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_INITFACEMESHRENDERER_OFFSET))(this, smr);
		}

		::System::Boolean RefreshBindingList(::UnityEngine::SkinnedMeshRenderer* smr, ::System::Boolean force, ::UnityEngine::Mesh* lod0Mesh)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::System::Boolean, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_REFRESHBINDINGLIST_OFFSET))(this, smr, force, lod0Mesh);
		}

		::System::Void ClearSmrReferences()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_CLEARSMRREFERENCES_OFFSET))(this);
		}

		::System::Void ClearBindingValueCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_CLEARBINDINGVALUECACHE_OFFSET))(this);
		}

		::System::Void CacheBindingValue(::miHoYoEmotion::ClipShapeManager_CurveBinding* binding, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::miHoYoEmotion::ClipShapeManager_CurveBinding*, ::System::Single))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_CACHEBINDINGVALUE_OFFSET))(this, binding, value);
		}

		::System::Void ApplyBindingData(::System::Boolean isStopped)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_APPLYBINDINGDATA_OFFSET))(this, isStopped);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Void ApplyBindingDataAtLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_APPLYBINDINGDATAATLATEUPDATE_OFFSET))(this);
		}

		::System::Void InitEmoAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_INITEMOANIM_OFFSET))(this);
		}

		::System::Void UpdateShapeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_UPDATESHAPEDATA_OFFSET))(this);
		}

		::System::Void UpdateShapeRuntime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_UPDATESHAPERUNTIME_OFFSET))(this);
		}

		::System::Void UpdateRuntimeIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER_UPDATERUNTIMEINDEX_OFFSET))(this);
		}

		::System::Void __base_InitEmoAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER___BASE_INITEMOANIM_OFFSET))(this);
		}

		::System::Void __base_OnRealDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER___BASE_ONREALDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER___BASE_ONREALENABLE_OFFSET))(this);
		}

		::System::Void __base_Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER___BASE_START_OFFSET))(this);
		}

		::System::Void __base_UpdateShapeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER___BASE_UPDATESHAPEDATA_OFFSET))(this);
		}

		::System::Void __base_UpdateShapeRuntime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_CLIPSHAPEMANAGER___BASE_UPDATESHAPERUNTIME_OFFSET))(this);
		}
	};
}
