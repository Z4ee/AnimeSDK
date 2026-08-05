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

#define TMPRO_TEXTMESHPRO_ADD_ONPRERENDERTEXT_OFFSET UNITYSDK_OFFSET(0x1E587AE0)
#define TMPRO_TEXTMESHPRO_AWAKE_OFFSET UNITYSDK_OFFSET(0x1E570540)
#define TMPRO_TEXTMESHPRO_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1E588780)
#define TMPRO_TEXTMESHPRO_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1E588790)
#define TMPRO_TEXTMESHPRO_CLEARMESH_OFFSET UNITYSDK_OFFSET(0x1E584FC0)
#define TMPRO_TEXTMESHPRO_COMPUTEMARGINSIZE_OFFSET UNITYSDK_OFFSET(0x1E5723F0)
#define TMPRO_TEXTMESHPRO_CREATEMATERIALINSTANCE_OFFSET UNITYSDK_OFFSET(0x1E573620)
#define TMPRO_TEXTMESHPRO_DESTROYSUBMESHOBJECTS_OFFSET UNITYSDK_OFFSET(0x1E585990)
#define TMPRO_TEXTMESHPRO_DISABLEMASKING_OFFSET UNITYSDK_OFFSET(0x1E573480)
#define TMPRO_TEXTMESHPRO_ENABLEMASKING_OFFSET UNITYSDK_OFFSET(0x1E5730E0)
#define TMPRO_TEXTMESHPRO_FORCEMESHUPDATE_OFFSET UNITYSDK_OFFSET(0x1E587A60)
#define TMPRO_TEXTMESHPRO_GENERATETEXTMESH_OFFSET UNITYSDK_OFFSET(0x1E579C90)
#define TMPRO_TEXTMESHPRO_GETCOMPOUNDBOUNDS_OFFSET UNITYSDK_OFFSET(0x1E586130)
#define TMPRO_TEXTMESHPRO_GETMATERIALS_OFFSET UNITYSDK_OFFSET(0x1E573BA0)
#define TMPRO_TEXTMESHPRO_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E5737D0)
#define TMPRO_TEXTMESHPRO_GETSHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0x1E573E80)
#define TMPRO_TEXTMESHPRO_GETTEXTCONTAINERLOCALCORNERS_OFFSET UNITYSDK_OFFSET(0x1E578820)
#define TMPRO_TEXTMESHPRO_GETTEXTINFO_OFFSET UNITYSDK_OFFSET(0x1E587A80)
#define TMPRO_TEXTMESHPRO_GET_AUTOSIZETEXTCONTAINER_OFFSET UNITYSDK_OFFSET(0x1E587180)
#define TMPRO_TEXTMESHPRO_GET_MASKTYPE_OFFSET UNITYSDK_OFFSET(0x1E587280)
#define TMPRO_TEXTMESHPRO_GET_MESHFILTER_OFFSET UNITYSDK_OFFSET(0x1E571D00)
#define TMPRO_TEXTMESHPRO_GET_MESH_OFFSET UNITYSDK_OFFSET(0x1E571FE0)
#define TMPRO_TEXTMESHPRO_GET_RENDERER_OFFSET UNITYSDK_OFFSET(0x1E586730)
#define TMPRO_TEXTMESHPRO_GET_SORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0x1E586460)
#define TMPRO_TEXTMESHPRO_GET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0x1E586BC0)
#define TMPRO_TEXTMESHPRO_GET_TEXTCONTAINER_OFFSET UNITYSDK_OFFSET(0x1E587270)
#define TMPRO_TEXTMESHPRO_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1E570DF0)
#define TMPRO_TEXTMESHPRO_INTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x1E578DD0)
#define TMPRO_TEXTMESHPRO_LOADFONTASSET_OFFSET UNITYSDK_OFFSET(0x1E570F90)
#define TMPRO_TEXTMESHPRO_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1E572710)
#define TMPRO_TEXTMESHPRO_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1E578990)
#define TMPRO_TEXTMESHPRO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E5725E0)
#define TMPRO_TEXTMESHPRO_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E571B90)
#define TMPRO_TEXTMESHPRO_ONPRERENDEROBJECT_OFFSET UNITYSDK_OFFSET(0x1E5791A0)
#define TMPRO_TEXTMESHPRO_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1E578B70)
#define TMPRO_TEXTMESHPRO_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1E5789B0)
#define TMPRO_TEXTMESHPRO_REBUILD_OFFSET UNITYSDK_OFFSET(0x1E5878C0)
#define TMPRO_TEXTMESHPRO_REMOVE_ONPRERENDERTEXT_OFFSET UNITYSDK_OFFSET(0x1E587B60)
#define TMPRO_TEXTMESHPRO_SETACTIVESUBMESHES_OFFSET UNITYSDK_OFFSET(0x1E5721B0)
#define TMPRO_TEXTMESHPRO_SETACTIVESUBTEXTOBJECTRENDERERS_OFFSET UNITYSDK_OFFSET(0x1E5799A0)
#define TMPRO_TEXTMESHPRO_SETALLDIRTY_OFFSET UNITYSDK_OFFSET(0x1E5725B0)
#define TMPRO_TEXTMESHPRO_SETARRAYSIZES_OFFSET UNITYSDK_OFFSET(0x1E575710)
#define TMPRO_TEXTMESHPRO_SETCULLING_OFFSET UNITYSDK_OFFSET(0x1E574FB0)
#define TMPRO_TEXTMESHPRO_SETFACECOLOR_OFFSET UNITYSDK_OFFSET(0x1E574A30)
#define TMPRO_TEXTMESHPRO_SETLAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0x1E5789D0)
#define TMPRO_TEXTMESHPRO_SETMASKCOORDINATES_1_OFFSET UNITYSDK_OFFSET(0x1E572FE0)
#define TMPRO_TEXTMESHPRO_SETMASKCOORDINATES_OFFSET UNITYSDK_OFFSET(0x1E572F50)
#define TMPRO_TEXTMESHPRO_SETMASK_1_OFFSET UNITYSDK_OFFSET(0x1E5872A0)
#define TMPRO_TEXTMESHPRO_SETMASK_2_OFFSET UNITYSDK_OFFSET(0x1E587340)
#define TMPRO_TEXTMESHPRO_SETMASK_OFFSET UNITYSDK_OFFSET(0x1E572D40)
#define TMPRO_TEXTMESHPRO_SETMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0x1E572980)
#define TMPRO_TEXTMESHPRO_SETMESHFILTERS_OFFSET UNITYSDK_OFFSET(0x1E585200)
#define TMPRO_TEXTMESHPRO_SETOUTLINECOLOR_OFFSET UNITYSDK_OFFSET(0x1E574C30)
#define TMPRO_TEXTMESHPRO_SETOUTLINETHICKNESS_OFFSET UNITYSDK_OFFSET(0x1E574820)
#define TMPRO_TEXTMESHPRO_SETPERSPECTIVECORRECTION_OFFSET UNITYSDK_OFFSET(0x1E575670)
#define TMPRO_TEXTMESHPRO_SETSHADERDEPTH_OFFSET UNITYSDK_OFFSET(0x1E574E30)
#define TMPRO_TEXTMESHPRO_SETSHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0x1E574110)
#define TMPRO_TEXTMESHPRO_SETSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E573E50)
#define TMPRO_TEXTMESHPRO_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0x1E573990)
#define TMPRO_TEXTMESHPRO_SET_AUTOSIZETEXTCONTAINER_OFFSET UNITYSDK_OFFSET(0x1E587190)
#define TMPRO_TEXTMESHPRO_SET_MASKTYPE_OFFSET UNITYSDK_OFFSET(0x1E587290)
#define TMPRO_TEXTMESHPRO_SET_SORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0x1E5868D0)
#define TMPRO_TEXTMESHPRO_SET_SORTINGORDER_OFFSET UNITYSDK_OFFSET(0x1E586E90)
#define TMPRO_TEXTMESHPRO_UPDATEENVMAPMATRIX_OFFSET UNITYSDK_OFFSET(0x1E572990)
#define TMPRO_TEXTMESHPRO_UPDATEFONTASSET_OFFSET UNITYSDK_OFFSET(0x1E588770)
#define TMPRO_TEXTMESHPRO_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1E587BE0)
#define TMPRO_TEXTMESHPRO_UPDATEMASK_OFFSET UNITYSDK_OFFSET(0x1E573350)
#define TMPRO_TEXTMESHPRO_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E5873A0)
#define TMPRO_TEXTMESHPRO_UPDATEMESHPADDING_OFFSET UNITYSDK_OFFSET(0x1E5797F0)
#define TMPRO_TEXTMESHPRO_UPDATESDFSCALE_OFFSET UNITYSDK_OFFSET(0x1E578EB0)
#define TMPRO_TEXTMESHPRO_UPDATESUBMESHSORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0x1E585BD0)
#define TMPRO_TEXTMESHPRO_UPDATESUBMESHSORTINGORDER_OFFSET UNITYSDK_OFFSET(0x1E585E80)
#define TMPRO_TEXTMESHPRO_UPDATEVERTEXDATA_1_OFFSET UNITYSDK_OFFSET(0x1E5881E0)
#define TMPRO_TEXTMESHPRO_UPDATEVERTEXDATA_OFFSET UNITYSDK_OFFSET(0x1E587C00)
#define TMPRO_TEXTMESHPRO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E588840)
#define TMPRO_TEXTMESHPRO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5887A0)

namespace TMPro
{
	inline static constexpr unsigned int TextMeshPro_TypeDefinitionIndex = 39915;

	class TextMeshPro : public ::TMPro::TMP_Text
	{
	public:
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_HandleVerticalLineBreakingMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x9650);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_ComputeTextMetricsMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x9658);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_GenerateTextPhaseIIIMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x9660);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_GenerateTextMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x9668);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_ComputeCharacterAdvanceMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x9670);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_HandleLineTerminationMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x9678);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_GenerateTextPhaseIMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x9680);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_HandleGPOSFeaturesMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x9688);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_HandleWhiteSpacesMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x9690);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_HandleHorizontalLineBreakingMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x9698);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_SaveGlyphVertexDataMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x96A0);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_SaveProcessingStatesMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x96A8);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_CalculateVerticesPositionMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x96B0);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_SetArraySizesMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x96B8);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_ParseMarkupTextMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x96C0);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_HandleCarriageReturnMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x96C8);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_HandleVisibleCharacterMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x96D0);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_SavePageInfoMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x96D8);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_CharacterLookupMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x96E0);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_GenerateTextPhaseIIMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshPro_TypeDefinitionIndex)->GetStaticField(0x96E8);
		}
		::System::Boolean m_hasFontAssetChanged; // 0x6E8
		::System::Single m_previousLossyScaleY; // 0x6EC
		::UnityEngine::Renderer* m_renderer; // 0x6F0
		::UnityEngine::MeshFilter* m_meshFilter; // 0x6F8
		::UnityEngine::CanvasRenderer* m_CanvasRenderer; // 0x700
		::System::Boolean m_isFirstAllocation; // 0x708
		::System::Int32 m_max_characters; // 0x70C
		::System::Int32 m_max_numberOfLines; // 0x710
		::Il2CppArray<::TMPro::TMP_SubMesh*>* m_subTextObjects; // 0x718
		::TMPro::MaskingTypes m_maskType; // 0x720
		::UnityEngine::Matrix4x4 m_EnvMapMatrix; // 0x724
		::Il2CppArray<::UnityEngine::Vector3>* m_RectTransformCorners; // 0x768
		::System::Boolean m_isRegisteredForEvents; // 0x770
		::System::Int32 _SortingLayer; // 0x774
		::System::Int32 _SortingLayerID; // 0x778
		::System::Int32 _SortingOrder; // 0x77C
		::System::Action_1<::TMPro::TMP_TextInfo*>* OnPreRenderText; // 0x780
		::System::Boolean m_currentAutoSizeMode; // 0x788

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

		::System::Void SetMask(::TMPro::MaskingTypes maskType)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::MaskingTypes))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETMASK_OFFSET))(this, maskType);
		}

		::System::Void SetMaskCoordinates(::UnityEngine::Vector4 coords)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETMASKCOORDINATES_OFFSET))(this, coords);
		}

		::System::Void SetMaskCoordinates_1(::UnityEngine::Vector4 coords, ::System::Single softX, ::System::Single softY)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETMASKCOORDINATES_1_OFFSET))(this, coords, softX, softY);
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

		::UnityEngine::Material* GetMaterial(::UnityEngine::Material* mat)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GETMATERIAL_OFFSET))(this, mat);
		}

		::Il2CppArray<::UnityEngine::Material*>* GetMaterials(::Il2CppArray<::UnityEngine::Material*>* mats)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GETMATERIALS_OFFSET))(this, mats);
		}

		::System::Void SetSharedMaterial(::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETSHAREDMATERIAL_OFFSET))(this, mat);
		}

		::Il2CppArray<::UnityEngine::Material*>* GetSharedMaterials()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GETSHAREDMATERIALS_OFFSET))(this);
		}

		::System::Void SetSharedMaterials(::Il2CppArray<::UnityEngine::Material*>* materials)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETSHAREDMATERIALS_OFFSET))(this, materials);
		}

		::System::Void SetOutlineThickness(::System::Single thickness)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETOUTLINETHICKNESS_OFFSET))(this, thickness);
		}

		::System::Void SetFaceColor(::UnityEngine::Color32 color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETFACECOLOR_OFFSET))(this, color);
		}

		::System::Void SetOutlineColor(::UnityEngine::Color32 color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETOUTLINECOLOR_OFFSET))(this, color);
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

		::System::Int32 SetArraySizes(::Il2CppArray<::TMPro::TMP_Text_UnicodeChar>* unicodeChars)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::TMPro::TMP_Text_UnicodeChar>*))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETARRAYSIZES_OFFSET))(this, unicodeChars);
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

		::System::Void SetMeshFilters(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETMESHFILTERS_OFFSET))(this, state);
		}

		::System::Void SetActiveSubMeshes(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETACTIVESUBMESHES_OFFSET))(this, state);
		}

		::System::Void SetActiveSubTextObjectRenderers(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETACTIVESUBTEXTOBJECTRENDERERS_OFFSET))(this, state);
		}

		::System::Void DestroySubMeshObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_DESTROYSUBMESHOBJECTS_OFFSET))(this);
		}

		::System::Void UpdateSubMeshSortingLayerID(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_UPDATESUBMESHSORTINGLAYERID_OFFSET))(this, id);
		}

		::System::Void UpdateSubMeshSortingOrder(::System::Int32 order)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_UPDATESUBMESHSORTINGORDER_OFFSET))(this, order);
		}

		::UnityEngine::Bounds GetCompoundBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GETCOMPOUNDBOUNDS_OFFSET))(this);
		}

		::System::Void UpdateSDFScale(::System::Single scaleDelta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_UPDATESDFSCALE_OFFSET))(this, scaleDelta);
		}

		::System::Int32 get_sortingLayerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GET_SORTINGLAYERID_OFFSET))(this);
		}

		::System::Void set_sortingLayerID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SET_SORTINGLAYERID_OFFSET))(this, value);
		}

		::System::Int32 get_sortingOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GET_SORTINGORDER_OFFSET))(this);
		}

		::System::Void set_sortingOrder(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SET_SORTINGORDER_OFFSET))(this, value);
		}

		::System::Boolean get_autoSizeTextContainer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GET_AUTOSIZETEXTCONTAINER_OFFSET))(this);
		}

		::System::Void set_autoSizeTextContainer(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SET_AUTOSIZETEXTCONTAINER_OFFSET))(this, value);
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

		::System::Void set_maskType(::TMPro::MaskingTypes value)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::MaskingTypes))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SET_MASKTYPE_OFFSET))(this, value);
		}

		::System::Void SetMask_1(::TMPro::MaskingTypes type, ::UnityEngine::Vector4 maskCoords)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::MaskingTypes, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETMASK_1_OFFSET))(this, type, maskCoords);
		}

		::System::Void SetMask_2(::TMPro::MaskingTypes type, ::UnityEngine::Vector4 maskCoords, ::System::Single softnessX, ::System::Single softnessY)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::MaskingTypes, ::UnityEngine::Vector4, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_SETMASK_2_OFFSET))(this, type, maskCoords, softnessX, softnessY);
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

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate update)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_REBUILD_OFFSET))(this, update);
		}

		::System::Void UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_UPDATEMATERIAL_OFFSET))(this);
		}

		::System::Void UpdateMeshPadding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_UPDATEMESHPADDING_OFFSET))(this);
		}

		::System::Void ForceMeshUpdate(::System::Boolean ignoreActiveState, ::System::Boolean forceTextReparsing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_FORCEMESHUPDATE_OFFSET))(this, ignoreActiveState, forceTextReparsing);
		}

		::TMPro::TMP_TextInfo* GetTextInfo(::System::String* text)
		{
			return ((::TMPro::TMP_TextInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_GETTEXTINFO_OFFSET))(this, text);
		}

		::System::Void ClearMesh(::System::Boolean updateMesh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_CLEARMESH_OFFSET))(this, updateMesh);
		}

		::System::Void add_OnPreRenderText(::System::Action_1<::TMPro::TMP_TextInfo*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::TMPro::TMP_TextInfo*>*))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_ADD_ONPRERENDERTEXT_OFFSET))(this, value);
		}

		::System::Void remove_OnPreRenderText(::System::Action_1<::TMPro::TMP_TextInfo*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::TMPro::TMP_TextInfo*>*))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_REMOVE_ONPRERENDERTEXT_OFFSET))(this, value);
		}

		::System::Void UpdateGeometry(::UnityEngine::Mesh* mesh, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_UPDATEGEOMETRY_OFFSET))(this, mesh, index);
		}

		::System::Void UpdateVertexData(::TMPro::TMP_VertexDataUpdateFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_VertexDataUpdateFlags))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPRO_UPDATEVERTEXDATA_OFFSET))(this, flags);
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
