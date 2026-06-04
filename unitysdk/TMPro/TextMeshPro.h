#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TMPro/MaskingTypes.h"
#include "unitysdk/TMPro/TMP_Text.h"
#include "unitysdk/TMPro/TMP_Text_UnicodeChar.h"
#include "unitysdk/TMPro/TMP_VertexDataUpdateFlags.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/UI/CanvasUpdate.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace TMPro { class TMP_SubMesh; }
namespace TMPro { class TMP_TextInfo; }
namespace TMPro { class TextContainer; }
namespace UnityEngine { class CanvasRenderer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define TMPRO_TEXTMESHPRO_ADD_ONPRERENDERTEXT_OFFSET UNITYSDK_OFFSET(0x1B213660)
#define TMPRO_TEXTMESHPRO_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B201940)
#define TMPRO_TEXTMESHPRO_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1B214FE0)
#define TMPRO_TEXTMESHPRO_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1B214FF0)
#define TMPRO_TEXTMESHPRO_CLEARMESH_OFFSET UNITYSDK_OFFSET(0x1B212640)
#define TMPRO_TEXTMESHPRO_COMPUTEMARGINSIZE_OFFSET UNITYSDK_OFFSET(0x1B202AE0)
#define TMPRO_TEXTMESHPRO_CREATEMATERIALINSTANCE_OFFSET UNITYSDK_OFFSET(0x1B203610)
#define TMPRO_TEXTMESHPRO_DESTROYSUBMESHOBJECTS_OFFSET UNITYSDK_OFFSET(0x1B212960)
#define TMPRO_TEXTMESHPRO_DISABLEMASKING_OFFSET UNITYSDK_OFFSET(0x1B203510)
#define TMPRO_TEXTMESHPRO_ENABLEMASKING_OFFSET UNITYSDK_OFFSET(0x1B2033B0)
#define TMPRO_TEXTMESHPRO_FORCEMESHUPDATE_OFFSET UNITYSDK_OFFSET(0x1B213580)
#define TMPRO_TEXTMESHPRO_GENERATETEXTMESH_OFFSET UNITYSDK_OFFSET(0x1B208780)
#define TMPRO_TEXTMESHPRO_GETCOMPOUNDBOUNDS_OFFSET UNITYSDK_OFFSET(0x1B212C30)
#define TMPRO_TEXTMESHPRO_GETMATERIALS_OFFSET UNITYSDK_OFFSET(0x1B203850)
#define TMPRO_TEXTMESHPRO_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B2036C0)
#define TMPRO_TEXTMESHPRO_GETSHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0x1B203B00)
#define TMPRO_TEXTMESHPRO_GETTEXTCONTAINERLOCALCORNERS_OFFSET UNITYSDK_OFFSET(0x1B207880)
#define TMPRO_TEXTMESHPRO_GETTEXTINFO_OFFSET UNITYSDK_OFFSET(0x1B2135A0)
#define TMPRO_TEXTMESHPRO_GET_AUTOSIZETEXTCONTAINER_OFFSET UNITYSDK_OFFSET(0x1B2131B0)
#define TMPRO_TEXTMESHPRO_GET_MASKTYPE_OFFSET UNITYSDK_OFFSET(0x1B213250)
#define TMPRO_TEXTMESHPRO_GET_MESHFILTER_OFFSET UNITYSDK_OFFSET(0x1B2028D0)
#define TMPRO_TEXTMESHPRO_GET_MESH_OFFSET UNITYSDK_OFFSET(0x1B2029C0)
#define TMPRO_TEXTMESHPRO_GET_RENDERER_OFFSET UNITYSDK_OFFSET(0x1B212F00)
#define TMPRO_TEXTMESHPRO_GET_SORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0x1B212E60)
#define TMPRO_TEXTMESHPRO_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0x1B213050)
#define TMPRO_TEXTMESHPRO_GET_TEXTCONTAINER_OFFSET UNITYSDK_OFFSET(0x1B213240)
#define TMPRO_TEXTMESHPRO_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B201EA0)
#define TMPRO_TEXTMESHPRO_INTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x1B207D20)
#define TMPRO_TEXTMESHPRO_LOADFONTASSET_OFFSET UNITYSDK_OFFSET(0x1B201F30)
#define TMPRO_TEXTMESHPRO_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B202D90)
#define TMPRO_TEXTMESHPRO_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B207930)
#define TMPRO_TEXTMESHPRO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B202D20)
#define TMPRO_TEXTMESHPRO_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B202740)
#define TMPRO_TEXTMESHPRO_ONPRERENDEROBJECT_OFFSET UNITYSDK_OFFSET(0x1B208220)
#define TMPRO_TEXTMESHPRO_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1B207B00)
#define TMPRO_TEXTMESHPRO_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1B2079B0)
#define TMPRO_TEXTMESHPRO_REBUILD_OFFSET UNITYSDK_OFFSET(0x1B2134F0)
#define TMPRO_TEXTMESHPRO_REMOVE_ONPRERENDERTEXT_OFFSET UNITYSDK_OFFSET(0x1B2136D0)
#define TMPRO_TEXTMESHPRO_SETACTIVESUBMESHES_OFFSET UNITYSDK_OFFSET(0x1B202A30)
#define TMPRO_TEXTMESHPRO_SETACTIVESUBTEXTOBJECTRENDERERS_OFFSET UNITYSDK_OFFSET(0x1B208630)
#define TMPRO_TEXTMESHPRO_SETALLDIRTY_OFFSET UNITYSDK_OFFSET(0x1B202CA0)
#define TMPRO_TEXTMESHPRO_SETARRAYSIZES_OFFSET UNITYSDK_OFFSET(0x1B204B90)
#define TMPRO_TEXTMESHPRO_SETCULLING_OFFSET UNITYSDK_OFFSET(0x1B204790)
#define TMPRO_TEXTMESHPRO_SETFACECOLOR_OFFSET UNITYSDK_OFFSET(0x1B204430)
#define TMPRO_TEXTMESHPRO_SETLAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0x1B207A30)
#define TMPRO_TEXTMESHPRO_SETMASKCOORDINATES_1_OFFSET UNITYSDK_OFFSET(0x1B2032F0)
#define TMPRO_TEXTMESHPRO_SETMASKCOORDINATES_OFFSET UNITYSDK_OFFSET(0x1B203290)
#define TMPRO_TEXTMESHPRO_SETMASK_1_OFFSET UNITYSDK_OFFSET(0x1B213270)
#define TMPRO_TEXTMESHPRO_SETMASK_2_OFFSET UNITYSDK_OFFSET(0x1B2132E0)
#define TMPRO_TEXTMESHPRO_SETMASK_OFFSET UNITYSDK_OFFSET(0x1B2030A0)
#define TMPRO_TEXTMESHPRO_SETMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0x1B202DF0)
#define TMPRO_TEXTMESHPRO_SETMESHFILTERS_OFFSET UNITYSDK_OFFSET(0x1B2126E0)
#define TMPRO_TEXTMESHPRO_SETOUTLINECOLOR_OFFSET UNITYSDK_OFFSET(0x1B204530)
#define TMPRO_TEXTMESHPRO_SETOUTLINETHICKNESS_OFFSET UNITYSDK_OFFSET(0x1B204330)
#define TMPRO_TEXTMESHPRO_SETPERSPECTIVECORRECTION_OFFSET UNITYSDK_OFFSET(0x1B204B10)
#define TMPRO_TEXTMESHPRO_SETSHADERDEPTH_OFFSET UNITYSDK_OFFSET(0x1B204630)
#define TMPRO_TEXTMESHPRO_SETSHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0x1B203D50)
#define TMPRO_TEXTMESHPRO_SETSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B203AD0)
#define TMPRO_TEXTMESHPRO_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0x1B1D8E00)
#define TMPRO_TEXTMESHPRO_SET_AUTOSIZETEXTCONTAINER_OFFSET UNITYSDK_OFFSET(0x1B2131C0)
#define TMPRO_TEXTMESHPRO_SET_MASKTYPE_OFFSET UNITYSDK_OFFSET(0x1B213260)
#define TMPRO_TEXTMESHPRO_SET_SORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0x1B212F90)
#define TMPRO_TEXTMESHPRO_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0x1B2130F0)
#define TMPRO_TEXTMESHPRO_UPDATEENVMAPMATRIX_OFFSET UNITYSDK_OFFSET(0x1B202E00)
#define TMPRO_TEXTMESHPRO_UPDATEFONTASSET_OFFSET UNITYSDK_OFFSET(0x1B214FD0)
#define TMPRO_TEXTMESHPRO_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1B213740)
#define TMPRO_TEXTMESHPRO_UPDATEMASK_OFFSET UNITYSDK_OFFSET(0x1B2034E0)
#define TMPRO_TEXTMESHPRO_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B213340)
#define TMPRO_TEXTMESHPRO_UPDATEMESHPADDING_OFFSET UNITYSDK_OFFSET(0x1B208510)
#define TMPRO_TEXTMESHPRO_UPDATESDFSCALE_OFFSET UNITYSDK_OFFSET(0x1B207DF0)
#define TMPRO_TEXTMESHPRO_UPDATESUBMESHSORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0x1B2129D0)
#define TMPRO_TEXTMESHPRO_UPDATESUBMESHSORTINGORDER_OFFSET UNITYSDK_OFFSET(0x1B212B00)
#define TMPRO_TEXTMESHPRO_UPDATEVERTEXDATA_1_OFFSET UNITYSDK_OFFSET(0x1B214410)
#define TMPRO_TEXTMESHPRO_UPDATEVERTEXDATA_OFFSET UNITYSDK_OFFSET(0x1B213760)
#define TMPRO_TEXTMESHPRO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2150A0)
#define TMPRO_TEXTMESHPRO__CTOR_OFFSET UNITYSDK_OFFSET(0x1B215000)

namespace TMPro
{
	inline static constexpr unsigned int TextMeshPro_TypeDefinitionIndex = 41073;

	class TextMeshPro : public ::TMPro::TMP_Text
	{
	public:
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_GenerateTextMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x11FD0);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_SavePageInfoMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x11FD8);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_GenerateTextPhaseIMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x11FE0);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_HandleGPOSFeaturesMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x11FE8);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_ComputeTextMetricsMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x11FF0);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_GenerateTextPhaseIIIMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x11FF8);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_HandleVisibleCharacterMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x12000);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_ComputeCharacterAdvanceMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x12008);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_SetArraySizesMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x12010);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_CharacterLookupMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x12018);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_SaveProcessingStatesMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x12020);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_HandleWhiteSpacesMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x12028);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_GenerateTextPhaseIIMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x12030);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_CalculateVerticesPositionMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x12038);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_HandleHorizontalLineBreakingMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x12040);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_HandleVerticalLineBreakingMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x12048);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_SaveGlyphVertexDataMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x12050);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_ParseMarkupTextMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x12058);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_HandleCarriageReturnMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x12060);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_HandleLineTerminationMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x12068);
		}
		::System::Boolean m_hasFontAssetChanged; // 0x6E0
		::System::Single m_previousLossyScaleY; // 0x6E4
		::UnityEngine::Renderer* m_renderer; // 0x6E8
		::UnityEngine::MeshFilter* m_meshFilter; // 0x6F0
		::UnityEngine::CanvasRenderer* m_CanvasRenderer; // 0x6F8
		::System::Boolean m_isFirstAllocation; // 0x700
		::System::Int32 m_max_characters; // 0x704
		::System::Int32 m_max_numberOfLines; // 0x708
		::Il2CppArray<::TMPro::TMP_SubMesh*>* m_subTextObjects; // 0x710
		::TMPro::MaskingTypes m_maskType; // 0x718
		::UnityEngine::Matrix4x4 m_EnvMapMatrix; // 0x71C
		::Il2CppArray<::UnityEngine::Vector3>* m_RectTransformCorners; // 0x760
		::System::Boolean m_isRegisteredForEvents; // 0x768
		::System::Int32 _SortingLayer; // 0x76C
		::System::Int32 _SortingLayerID; // 0x770
		::System::Int32 _SortingOrder; // 0x774
		::System::Action_1<::TMPro::TMP_TextInfo*>* OnPreRenderText; // 0x778
		::System::Boolean m_currentAutoSizeMode; // 0x780

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_ONDESTROY_OFFSET))(this);
		}

		::System::Void LoadFontAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_LOADFONTASSET_OFFSET))(this);
		}

		::System::Void UpdateEnvMapMatrix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_UPDATEENVMAPMATRIX_OFFSET))(this);
		}

		::System::Void SetMask(::TMPro::MaskingTypes a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::MaskingTypes))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETMASK_OFFSET))(this, a1);
		}

		::System::Void SetMaskCoordinates(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETMASKCOORDINATES_OFFSET))(this, a1);
		}

		::System::Void SetMaskCoordinates_1(::UnityEngine::Vector4 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETMASKCOORDINATES_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EnableMasking()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_ENABLEMASKING_OFFSET))(this);
		}

		::System::Void DisableMasking()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_DISABLEMASKING_OFFSET))(this);
		}

		::System::Void UpdateMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_UPDATEMASK_OFFSET))(this);
		}

		::UnityEngine::Material* GetMaterial(::UnityEngine::Material* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GETMATERIAL_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Material*>* GetMaterials(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GETMATERIALS_OFFSET))(this, a1);
		}

		::System::Void SetSharedMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETSHAREDMATERIAL_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Material*>* GetSharedMaterials()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GETSHAREDMATERIALS_OFFSET))(this);
		}

		::System::Void SetSharedMaterials(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETSHAREDMATERIALS_OFFSET))(this, a1);
		}

		::System::Void SetOutlineThickness(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETOUTLINETHICKNESS_OFFSET))(this, a1);
		}

		::System::Void SetFaceColor(::UnityEngine::Color32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETFACECOLOR_OFFSET))(this, a1);
		}

		::System::Void SetOutlineColor(::UnityEngine::Color32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETOUTLINECOLOR_OFFSET))(this, a1);
		}

		::System::Void CreateMaterialInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_CREATEMATERIALINSTANCE_OFFSET))(this);
		}

		::System::Void SetShaderDepth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETSHADERDEPTH_OFFSET))(this);
		}

		::System::Void SetCulling()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETCULLING_OFFSET))(this);
		}

		::System::Void SetPerspectiveCorrection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETPERSPECTIVECORRECTION_OFFSET))(this);
		}

		::System::Int32 SetArraySizes(::Il2CppArray<::TMPro::TMP_Text_UnicodeChar>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::TMPro::TMP_Text_UnicodeChar>*))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETARRAYSIZES_OFFSET))(this, a1);
		}

		::System::Void ComputeMarginSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_COMPUTEMARGINSIZE_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void InternalUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_INTERNALUPDATE_OFFSET))(this);
		}

		::System::Void OnPreRenderObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_ONPRERENDEROBJECT_OFFSET))(this);
		}

		::System::Void GenerateTextMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GENERATETEXTMESH_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* GetTextContainerLocalCorners()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GETTEXTCONTAINERLOCALCORNERS_OFFSET))(this);
		}

		::System::Void SetMeshFilters(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETMESHFILTERS_OFFSET))(this, a1);
		}

		::System::Void SetActiveSubMeshes(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETACTIVESUBMESHES_OFFSET))(this, a1);
		}

		::System::Void SetActiveSubTextObjectRenderers(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETACTIVESUBTEXTOBJECTRENDERERS_OFFSET))(this, a1);
		}

		::System::Void DestroySubMeshObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_DESTROYSUBMESHOBJECTS_OFFSET))(this);
		}

		::System::Void UpdateSubMeshSortingLayerID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_UPDATESUBMESHSORTINGLAYERID_OFFSET))(this, a1);
		}

		::System::Void UpdateSubMeshSortingOrder(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_UPDATESUBMESHSORTINGORDER_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds GetCompoundBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GETCOMPOUNDBOUNDS_OFFSET))(this);
		}

		::System::Void UpdateSDFScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_UPDATESDFSCALE_OFFSET))(this, a1);
		}

		::System::Int32 get_sortingLayerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GET_SORTINGLAYERID_OFFSET))(this);
		}

		::System::Void set_sortingLayerID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SET_SORTINGLAYERID_OFFSET))(this, a1);
		}

		::System::Int32 get_sortingOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GET_SORTINGORDER_OFFSET))(this);
		}

		::System::Void set_sortingOrder(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SET_SORTINGORDER_OFFSET))(this, a1);
		}

		::System::Boolean get_autoSizeTextContainer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GET_AUTOSIZETEXTCONTAINER_OFFSET))(this);
		}

		::System::Void set_autoSizeTextContainer(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SET_AUTOSIZETEXTCONTAINER_OFFSET))(this, a1);
		}

		::TMPro::TextContainer* get_textContainer()
		{
			return ((::TMPro::TextContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GET_TEXTCONTAINER_OFFSET))(this);
		}

		::UnityEngine::Transform* get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GET_TRANSFORM_OFFSET))(this);
		}

		::UnityEngine::Renderer* get_renderer()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GET_RENDERER_OFFSET))(this);
		}

		::UnityEngine::Mesh* get_mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GET_MESH_OFFSET))(this);
		}

		::UnityEngine::MeshFilter* get_meshFilter()
		{
			return ((::UnityEngine::MeshFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GET_MESHFILTER_OFFSET))(this);
		}

		::TMPro::MaskingTypes get_maskType()
		{
			return ((::TMPro::MaskingTypes(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GET_MASKTYPE_OFFSET))(this);
		}

		::System::Void set_maskType(::TMPro::MaskingTypes a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::MaskingTypes))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SET_MASKTYPE_OFFSET))(this, a1);
		}

		::System::Void SetMask_1(::TMPro::MaskingTypes a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::MaskingTypes, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETMASK_1_OFFSET))(this, a1, a2);
		}

		::System::Void SetMask_2(::TMPro::MaskingTypes a1, ::UnityEngine::Vector4 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::MaskingTypes, ::UnityEngine::Vector4, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETMASK_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void SetVerticesDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETVERTICESDIRTY_OFFSET))(this);
		}

		::System::Void SetLayoutDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETLAYOUTDIRTY_OFFSET))(this);
		}

		::System::Void SetMaterialDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETMATERIALDIRTY_OFFSET))(this);
		}

		::System::Void SetAllDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETALLDIRTY_OFFSET))(this);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_REBUILD_OFFSET))(this, a1);
		}

		::System::Void UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_UPDATEMATERIAL_OFFSET))(this);
		}

		::System::Void UpdateMeshPadding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_UPDATEMESHPADDING_OFFSET))(this);
		}

		::System::Void ForceMeshUpdate(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_FORCEMESHUPDATE_OFFSET))(this, a1, a2);
		}

		::TMPro::TMP_TextInfo* GetTextInfo(::System::String* a1)
		{
			return ((::TMPro::TMP_TextInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GETTEXTINFO_OFFSET))(this, a1);
		}

		::System::Void ClearMesh(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_CLEARMESH_OFFSET))(this, a1);
		}

		::System::Void add_OnPreRenderText(::System::Action_1<::TMPro::TMP_TextInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::TMPro::TMP_TextInfo*>*))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_ADD_ONPRERENDERTEXT_OFFSET))(this, a1);
		}

		::System::Void remove_OnPreRenderText(::System::Action_1<::TMPro::TMP_TextInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::TMPro::TMP_TextInfo*>*))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_REMOVE_ONPRERENDERTEXT_OFFSET))(this, a1);
		}

		::System::Void UpdateGeometry(::UnityEngine::Mesh* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_UPDATEGEOMETRY_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateVertexData(::TMPro::TMP_VertexDataUpdateFlags a1)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_VertexDataUpdateFlags))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_UPDATEVERTEXDATA_OFFSET))(this, a1);
		}

		::System::Void UpdateVertexData_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_UPDATEVERTEXDATA_1_OFFSET))(this);
		}

		::System::Void UpdateFontAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_UPDATEFONTASSET_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
		}
	};
}
