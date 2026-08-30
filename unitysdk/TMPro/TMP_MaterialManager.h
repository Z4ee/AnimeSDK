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

#define TMPRO_TMP_MATERIALMANAGER_ADDFALLBACKMATERIALREFERENCE_OFFSET UNITYSDK_OFFSET(0x18B57480)
#define TMPRO_TMP_MATERIALMANAGER_ADDMASKINGMATERIAL_OFFSET UNITYSDK_OFFSET(0x18B55310)
#define TMPRO_TMP_MATERIALMANAGER_CLEANUPFALLBACKMATERIALS_OFFSET UNITYSDK_OFFSET(0x18B544A0)
#define TMPRO_TMP_MATERIALMANAGER_CLEARMATERIALS_OFFSET UNITYSDK_OFFSET(0x18B55F50)
#define TMPRO_TMP_MATERIALMANAGER_COPYMATERIALPRESETPROPERTIES_OFFSET UNITYSDK_OFFSET(0x18B56D40)
#define TMPRO_TMP_MATERIALMANAGER_FINDROOTSORTOVERRIDECANVAS_OFFSET UNITYSDK_OFFSET(0x18B565A0)
#define TMPRO_TMP_MATERIALMANAGER_GETBASEMATERIAL_OFFSET UNITYSDK_OFFSET(0x18B550B0)
#define TMPRO_TMP_MATERIALMANAGER_GETFALLBACKMATERIAL_1_OFFSET UNITYSDK_OFFSET(0x18B56F90)
#define TMPRO_TMP_MATERIALMANAGER_GETFALLBACKMATERIAL_OFFSET UNITYSDK_OFFSET(0x18B569A0)
#define TMPRO_TMP_MATERIALMANAGER_GETMATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0x18B56710)
#define TMPRO_TMP_MATERIALMANAGER_GETSTENCILID_OFFSET UNITYSDK_OFFSET(0x18B561E0)
#define TMPRO_TMP_MATERIALMANAGER_GETSTENCILMATERIAL_OFFSET UNITYSDK_OFFSET(0x18B54780)
#define TMPRO_TMP_MATERIALMANAGER_ONPRERENDER_OFFSET UNITYSDK_OFFSET(0x18B54440)
#define TMPRO_TMP_MATERIALMANAGER_RELEASEBASEMATERIAL_OFFSET UNITYSDK_OFFSET(0x18B55810)
#define TMPRO_TMP_MATERIALMANAGER_RELEASEFALLBACKMATERIAL_OFFSET UNITYSDK_OFFSET(0x18B57860)
#define TMPRO_TMP_MATERIALMANAGER_RELEASESTENCILMATERIAL_OFFSET UNITYSDK_OFFSET(0x18B54CD0)
#define TMPRO_TMP_MATERIALMANAGER_REMOVEFALLBACKMATERIALREFERENCE_OFFSET UNITYSDK_OFFSET(0x18B57610)
#define TMPRO_TMP_MATERIALMANAGER_REMOVESTENCILMATERIAL_OFFSET UNITYSDK_OFFSET(0x18B55630)
#define TMPRO_TMP_MATERIALMANAGER_SETSTENCIL_OFFSET UNITYSDK_OFFSET(0x18B55280)
#define TMPRO_TMP_MATERIALMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B54210)

namespace TMPro
{
	inline static constexpr unsigned int TMP_MaterialManager_TypeDefinitionIndex = 43420;

	class TMP_MaterialManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int64>** StaticGet_m_fallbackMaterialLookup()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(TMP_MaterialManager_TypeDefinitionIndex)->GetStaticField(0x5900);
		}
		static ::System::Collections::Generic::List_1<::TMPro::TMP_MaterialManager_MaskingMaterial*>** StaticGet_m_materialList()
		{
			return (::System::Collections::Generic::List_1<::TMPro::TMP_MaterialManager_MaskingMaterial*>**)Il2CppClass::FromTypeDefinitionIndex(TMP_MaterialManager_TypeDefinitionIndex)->GetStaticField(0x5908);
		}
		static ::System::Collections::Generic::List_1<::TMPro::TMP_MaterialManager_FallbackMaterial*>** StaticGet_m_fallbackCleanupList()
		{
			return (::System::Collections::Generic::List_1<::TMPro::TMP_MaterialManager_FallbackMaterial*>**)Il2CppClass::FromTypeDefinitionIndex(TMP_MaterialManager_TypeDefinitionIndex)->GetStaticField(0x5910);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int64, ::TMPro::TMP_MaterialManager_FallbackMaterial*>** StaticGet_m_fallbackMaterials()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int64, ::TMPro::TMP_MaterialManager_FallbackMaterial*>**)Il2CppClass::FromTypeDefinitionIndex(TMP_MaterialManager_TypeDefinitionIndex)->GetStaticField(0x5918);
		}
		static ::System::Boolean* StaticGet_isFallbackListDirty()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TMP_MaterialManager_TypeDefinitionIndex)->GetStaticField(0x1940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void OnPreRender()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_ONPRERENDER_OFFSET))();
		}

		static ::UnityEngine::Material* GetStencilMaterial(::UnityEngine::Material* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_GETSTENCILMATERIAL_OFFSET))(a1, a2);
		}

		static ::System::Void ReleaseStencilMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_RELEASESTENCILMATERIAL_OFFSET))(a1);
		}

		static ::UnityEngine::Material* GetBaseMaterial(::UnityEngine::Material* a1)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_GETBASEMATERIAL_OFFSET))(a1);
		}

		static ::UnityEngine::Material* SetStencil(::UnityEngine::Material* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_SETSTENCIL_OFFSET))(a1, a2);
		}

		static ::System::Void AddMaskingMaterial(::UnityEngine::Material* a1, ::UnityEngine::Material* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_ADDMASKINGMATERIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void RemoveStencilMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_REMOVESTENCILMATERIAL_OFFSET))(a1);
		}

		static ::System::Void ReleaseBaseMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_RELEASEBASEMATERIAL_OFFSET))(a1);
		}

		static ::System::Void ClearMaterials()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_CLEARMATERIALS_OFFSET))();
		}

		static ::System::Int32 GetStencilID(::UnityEngine::GameObject* a1)
		{
			return ((::System::Int32(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_GETSTENCILID_OFFSET))(a1);
		}

		static ::UnityEngine::Material* GetMaterialForRendering(::UnityEngine::UI::MaskableGraphic* a1, ::UnityEngine::Material* a2)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::UI::MaskableGraphic*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_GETMATERIALFORRENDERING_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Transform* FindRootSortOverrideCanvas(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_FINDROOTSORTOVERRIDECANVAS_OFFSET))(a1);
		}

		static ::UnityEngine::Material* GetFallbackMaterial(::TMPro::TMP_FontAsset* a1, ::UnityEngine::Material* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Material*(*)(::TMPro::TMP_FontAsset*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_GETFALLBACKMATERIAL_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Material* GetFallbackMaterial_1(::UnityEngine::Material* a1, ::UnityEngine::Material* a2)
		{
			return ((::UnityEngine::Material*(*)(::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_GETFALLBACKMATERIAL_1_OFFSET))(a1, a2);
		}

		static ::System::Void AddFallbackMaterialReference(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_ADDFALLBACKMATERIALREFERENCE_OFFSET))(a1);
		}

		static ::System::Void RemoveFallbackMaterialReference(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_REMOVEFALLBACKMATERIALREFERENCE_OFFSET))(a1);
		}

		static ::System::Void CleanupFallbackMaterials()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_CLEANUPFALLBACKMATERIALS_OFFSET))();
		}

		static ::System::Void ReleaseFallbackMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_RELEASEFALLBACKMATERIAL_OFFSET))(a1);
		}

		static ::System::Void CopyMaterialPresetProperties(::UnityEngine::Material* a1, ::UnityEngine::Material* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Material*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TMP_MATERIALMANAGER_COPYMATERIALPRESETPROPERTIES_OFFSET))(a1, a2);
		}
	};
}
