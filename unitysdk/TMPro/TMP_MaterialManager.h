#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace TMPro { class TMP_FontAsset; }
namespace TMPro { class TMP_MaterialManager_FallbackMaterial; }
namespace TMPro { class TMP_MaterialManager_MaskingMaterial; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class MaskableGraphic; }

#define TMPRO_TMP_MATERIALMANAGER_ADDFALLBACKMATERIALREFERENCE_OFFSET UNITYSDK_OFFSET(0x18939CC0)
#define TMPRO_TMP_MATERIALMANAGER_ADDMASKINGMATERIAL_OFFSET UNITYSDK_OFFSET(0x18937D00)
#define TMPRO_TMP_MATERIALMANAGER_CLEANUPFALLBACKMATERIALS_OFFSET UNITYSDK_OFFSET(0x18936FF0)
#define TMPRO_TMP_MATERIALMANAGER_CLEARMATERIALS_OFFSET UNITYSDK_OFFSET(0x18938860)
#define TMPRO_TMP_MATERIALMANAGER_COPYMATERIALPRESETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x18939540)
#define TMPRO_TMP_MATERIALMANAGER_FINDROOTSORTOVERRIDECANVAS_OFFSET UNITYSDK_OFFSET(0x18938E00)
#define TMPRO_TMP_MATERIALMANAGER_GETBASEMATERIAL_OFFSET UNITYSDK_OFFSET(0x18937AC0)
#define TMPRO_TMP_MATERIALMANAGER_GETFALLBACKMATERIAL_1_OFFSET UNITYSDK_OFFSET(0x18939790)
#define TMPRO_TMP_MATERIALMANAGER_GETFALLBACKMATERIAL_OFFSET UNITYSDK_OFFSET(0x18939150)
#define TMPRO_TMP_MATERIALMANAGER_GETMATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0x18938F50)
#define TMPRO_TMP_MATERIALMANAGER_GETSTENCILID_OFFSET UNITYSDK_OFFSET(0x18938AC0)
#define TMPRO_TMP_MATERIALMANAGER_GETSTENCILMATERIAL_OFFSET UNITYSDK_OFFSET(0x18937290)
#define TMPRO_TMP_MATERIALMANAGER_ONPRERENDER_OFFSET UNITYSDK_OFFSET(0x18936F90)
#define TMPRO_TMP_MATERIALMANAGER_RELEASEBASEMATERIAL_OFFSET UNITYSDK_OFFSET(0x18938170)
#define TMPRO_TMP_MATERIALMANAGER_RELEASEFALLBACKMATERIAL_OFFSET UNITYSDK_OFFSET(0x1893A0D0)
#define TMPRO_TMP_MATERIALMANAGER_RELEASESTENCILMATERIAL_OFFSET UNITYSDK_OFFSET(0x18937730)
#define TMPRO_TMP_MATERIALMANAGER_REMOVEFALLBACKMATERIALREFERENCE_OFFSET UNITYSDK_OFFSET(0x18939E90)
#define TMPRO_TMP_MATERIALMANAGER_REMOVESTENCILMATERIAL_OFFSET UNITYSDK_OFFSET(0x18937F90)
#define TMPRO_TMP_MATERIALMANAGER_SETSTENCIL_OFFSET UNITYSDK_OFFSET(0x18937C70)
#define TMPRO_TMP_MATERIALMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18936D90)

namespace TMPro
{
	inline static constexpr unsigned int TMP_MaterialManager_TypeDefinitionIndex = 34348;

	class TMP_MaterialManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int64, ::TMPro::TMP_MaterialManager_FallbackMaterial*>** StaticGet_m_fallbackMaterials()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int64, ::TMPro::TMP_MaterialManager_FallbackMaterial*>**)Il2CppClass::FromTypeDefinitionIndex(TMP_MaterialManager_TypeDefinitionIndex)->GetStaticField(0x2C960);
		}
		static ::System::Collections::Generic::List_1<::TMPro::TMP_MaterialManager_FallbackMaterial*>** StaticGet_m_fallbackCleanupList()
		{
			return (::System::Collections::Generic::List_1<::TMPro::TMP_MaterialManager_FallbackMaterial*>**)Il2CppClass::FromTypeDefinitionIndex(TMP_MaterialManager_TypeDefinitionIndex)->GetStaticField(0x2C968);
		}
		static ::System::Collections::Generic::List_1<::TMPro::TMP_MaterialManager_MaskingMaterial*>** StaticGet_m_materialList()
		{
			return (::System::Collections::Generic::List_1<::TMPro::TMP_MaterialManager_MaskingMaterial*>**)Il2CppClass::FromTypeDefinitionIndex(TMP_MaterialManager_TypeDefinitionIndex)->GetStaticField(0x2C970);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int64>** StaticGet_m_fallbackMaterialLookup()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(TMP_MaterialManager_TypeDefinitionIndex)->GetStaticField(0x2C978);
		}
		static ::System::Boolean* StaticGet_isFallbackListDirty()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TMP_MaterialManager_TypeDefinitionIndex)->GetStaticField(0xED50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void OnPreRender()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_ONPRERENDER_OFFSET))();
		}

		static ::UnityEngine::Material* GetStencilMaterial(::UnityEngine::Material* baseMaterial, ::System::Int32 stencilID)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_GETSTENCILMATERIAL_OFFSET))(baseMaterial, stencilID);
		}

		static ::System::Void ReleaseStencilMaterial(::UnityEngine::Material* stencilMaterial)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_RELEASESTENCILMATERIAL_OFFSET))(stencilMaterial);
		}

		static ::UnityEngine::Material* GetBaseMaterial(::UnityEngine::Material* stencilMaterial)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_GETBASEMATERIAL_OFFSET))(stencilMaterial);
		}

		static ::UnityEngine::Material* SetStencil(::UnityEngine::Material* material, ::System::Int32 stencilID)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_SETSTENCIL_OFFSET))(material, stencilID);
		}

		static ::System::Void AddMaskingMaterial(::UnityEngine::Material* baseMaterial, ::UnityEngine::Material* stencilMaterial, ::System::Int32 stencilID)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_ADDMASKINGMATERIAL_OFFSET))(baseMaterial, stencilMaterial, stencilID);
		}

		static ::System::Void RemoveStencilMaterial(::UnityEngine::Material* stencilMaterial)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_REMOVESTENCILMATERIAL_OFFSET))(stencilMaterial);
		}

		static ::System::Void ReleaseBaseMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_RELEASEBASEMATERIAL_OFFSET))(baseMaterial);
		}

		static ::System::Void ClearMaterials()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_CLEARMATERIALS_OFFSET))();
		}

		static ::System::Int32 GetStencilID(::UnityEngine::GameObject* obj)
		{
			return ((::System::Int32(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_GETSTENCILID_OFFSET))(obj);
		}

		static ::UnityEngine::Material* GetMaterialForRendering(::UnityEngine::UI::MaskableGraphic* graphic, ::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::UI::MaskableGraphic*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_GETMATERIALFORRENDERING_OFFSET))(graphic, baseMaterial);
		}

		static ::UnityEngine::Transform* FindRootSortOverrideCanvas(::UnityEngine::Transform* start)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_FINDROOTSORTOVERRIDECANVAS_OFFSET))(start);
		}

		static ::UnityEngine::Material* GetFallbackMaterial(::TMPro::TMP_FontAsset* fontAsset, ::UnityEngine::Material* sourceMaterial, ::System::Int32 atlasIndex)
		{
			return ((::UnityEngine::Material*(*)(::TMPro::TMP_FontAsset*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_GETFALLBACKMATERIAL_OFFSET))(fontAsset, sourceMaterial, atlasIndex);
		}

		static ::UnityEngine::Material* GetFallbackMaterial_1(::UnityEngine::Material* sourceMaterial, ::UnityEngine::Material* targetMaterial)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_GETFALLBACKMATERIAL_1_OFFSET))(sourceMaterial, targetMaterial);
		}

		static ::System::Void AddFallbackMaterialReference(::UnityEngine::Material* targetMaterial)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_ADDFALLBACKMATERIALREFERENCE_OFFSET))(targetMaterial);
		}

		static ::System::Void RemoveFallbackMaterialReference(::UnityEngine::Material* targetMaterial)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_REMOVEFALLBACKMATERIALREFERENCE_OFFSET))(targetMaterial);
		}

		static ::System::Void CleanupFallbackMaterials()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_CLEANUPFALLBACKMATERIALS_OFFSET))();
		}

		static ::System::Void ReleaseFallbackMaterial(::UnityEngine::Material* fallbackMaterial)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_RELEASEFALLBACKMATERIAL_OFFSET))(fallbackMaterial);
		}

		static ::System::Void CopyMaterialPresetProperties(::UnityEngine::Material* source, ::UnityEngine::Material* destination)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_COPYMATERIALPRESETPROPERTIES_OFFSET))(source, destination);
		}
	};
}
