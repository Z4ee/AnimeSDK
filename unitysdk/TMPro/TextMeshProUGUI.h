#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TMPro/TMP_Text.h"
#include "unitysdk/TMPro/TMP_Text_UnicodeChar.h"
#include "unitysdk/TMPro/TMP_VertexDataUpdateFlags.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/CanvasUpdate.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace TMPro { class TMP_SubMeshUI; }
namespace TMPro { class TMP_TextInfo; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class CanvasRenderer; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define TMPRO_TEXTMESHPROUGUI_ADD_ONPRERENDERTEXT_OFFSET UNITYSDK_OFFSET(0x1D32FDB0)
#define TMPRO_TEXTMESHPROUGUI_AWAKE_OFFSET UNITYSDK_OFFSET(0x1D317D90)
#define TMPRO_TEXTMESHPROUGUI_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1D32E8F0)
#define TMPRO_TEXTMESHPROUGUI_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1D32E900)
#define TMPRO_TEXTMESHPROUGUI_CLEARMESH_OFFSET UNITYSDK_OFFSET(0x1D32DA80)
#define TMPRO_TEXTMESHPROUGUI_COMPUTEMARGINSIZE_OFFSET UNITYSDK_OFFSET(0x1D319650)
#define TMPRO_TEXTMESHPROUGUI_CULL_OFFSET UNITYSDK_OFFSET(0x1D32F100)
#define TMPRO_TEXTMESHPROUGUI_DELAYEDGRAPHICREBUILD_OFFSET UNITYSDK_OFFSET(0x1D32E910)
#define TMPRO_TEXTMESHPROUGUI_DELAYEDMATERIALREBUILD_OFFSET UNITYSDK_OFFSET(0x1D32E960)
#define TMPRO_TEXTMESHPROUGUI_DESTROYSUBMESHOBJECTS_OFFSET UNITYSDK_OFFSET(0x1D32DC90)
#define TMPRO_TEXTMESHPROUGUI_DISABLEMASKING_OFFSET UNITYSDK_OFFSET(0x1D31AD10)
#define TMPRO_TEXTMESHPROUGUI_ENABLEMASKING_OFFSET UNITYSDK_OFFSET(0x1D31A440)
#define TMPRO_TEXTMESHPROUGUI_FORCEMESHUPDATE_OFFSET UNITYSDK_OFFSET(0x1D32FAE0)
#define TMPRO_TEXTMESHPROUGUI_GENERATETEXTMESH_OFFSET UNITYSDK_OFFSET(0x1D322070)
#define TMPRO_TEXTMESHPROUGUI_GETCANVASSPACECLIPPINGRECT_OFFSET UNITYSDK_OFFSET(0x1D32E200)
#define TMPRO_TEXTMESHPROUGUI_GETCANVAS_OFFSET UNITYSDK_OFFSET(0x1D319270)
#define TMPRO_TEXTMESHPROUGUI_GETCOMPOUNDBOUNDS_OFFSET UNITYSDK_OFFSET(0x1D32DED0)
#define TMPRO_TEXTMESHPROUGUI_GETMATERIALS_OFFSET UNITYSDK_OFFSET(0x1D31B0A0)
#define TMPRO_TEXTMESHPROUGUI_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D31AD20)
#define TMPRO_TEXTMESHPROUGUI_GETMODIFIEDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D32EFC0)
#define TMPRO_TEXTMESHPROUGUI_GETSHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0x1D31B390)
#define TMPRO_TEXTMESHPROUGUI_GETTEXTCONTAINERLOCALCORNERS_OFFSET UNITYSDK_OFFSET(0x1D3207F0)
#define TMPRO_TEXTMESHPROUGUI_GETTEXTINFO_OFFSET UNITYSDK_OFFSET(0x1D32FC30)
#define TMPRO_TEXTMESHPROUGUI_GET_AUTOSIZETEXTCONTAINER_OFFSET UNITYSDK_OFFSET(0x1D32E6F0)
#define TMPRO_TEXTMESHPROUGUI_GET_CANVASRENDERER_OFFSET UNITYSDK_OFFSET(0x1D32E750)
#define TMPRO_TEXTMESHPROUGUI_GET_MASKOFFSET_OFFSET UNITYSDK_OFFSET(0x1D32F0C0)
#define TMPRO_TEXTMESHPROUGUI_GET_MATERIALFORRENDERING_OFFSET UNITYSDK_OFFSET(0x1D31D200)
#define TMPRO_TEXTMESHPROUGUI_GET_MESH_OFFSET UNITYSDK_OFFSET(0x1D32E740)
#define TMPRO_TEXTMESHPROUGUI_INTERNALCROSSFADEALPHA_OFFSET UNITYSDK_OFFSET(0x1D32FA30)
#define TMPRO_TEXTMESHPROUGUI_INTERNALCROSSFADECOLOR_OFFSET UNITYSDK_OFFSET(0x1D32F8E0)
#define TMPRO_TEXTMESHPROUGUI_INTERNALUPDATE_OFFSET UNITYSDK_OFFSET(0x1D321510)
#define TMPRO_TEXTMESHPROUGUI_LOADFONTASSET_OFFSET UNITYSDK_OFFSET(0x1D318490)
#define TMPRO_TEXTMESHPROUGUI_ONCANVASHIERARCHYCHANGED_OFFSET UNITYSDK_OFFSET(0x1D320B50)
#define TMPRO_TEXTMESHPROUGUI_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1D319B70)
#define TMPRO_TEXTMESHPROUGUI_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1D320960)
#define TMPRO_TEXTMESHPROUGUI_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D3198E0)
#define TMPRO_TEXTMESHPROUGUI_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D3190E0)
#define TMPRO_TEXTMESHPROUGUI_ONPRERENDERCANVAS_OFFSET UNITYSDK_OFFSET(0x1D321990)
#define TMPRO_TEXTMESHPROUGUI_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET UNITYSDK_OFFSET(0x1D320F50)
#define TMPRO_TEXTMESHPROUGUI_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1D320E70)
#define TMPRO_TEXTMESHPROUGUI_REBUILD_OFFSET UNITYSDK_OFFSET(0x1D32E9B0)
#define TMPRO_TEXTMESHPROUGUI_RECALCULATECLIPPING_OFFSET UNITYSDK_OFFSET(0x1D319850)
#define TMPRO_TEXTMESHPROUGUI_REMOVE_ONPRERENDERTEXT_OFFSET UNITYSDK_OFFSET(0x1D32FE30)
#define TMPRO_TEXTMESHPROUGUI_SETACTIVESUBMESHES_OFFSET UNITYSDK_OFFSET(0x1D319410)
#define TMPRO_TEXTMESHPROUGUI_SETALLDIRTY_OFFSET UNITYSDK_OFFSET(0x1D319820)
#define TMPRO_TEXTMESHPROUGUI_SETARRAYSIZES_OFFSET UNITYSDK_OFFSET(0x1D31D3B0)
#define TMPRO_TEXTMESHPROUGUI_SETCULLING_OFFSET UNITYSDK_OFFSET(0x1D31C880)
#define TMPRO_TEXTMESHPROUGUI_SETFACECOLOR_OFFSET UNITYSDK_OFFSET(0x1D31C190)
#define TMPRO_TEXTMESHPROUGUI_SETLAYOUTDIRTY_OFFSET UNITYSDK_OFFSET(0x1D320990)
#define TMPRO_TEXTMESHPROUGUI_SETMATERIALDIRTY_OFFSET UNITYSDK_OFFSET(0x1D319EF0)
#define TMPRO_TEXTMESHPROUGUI_SETMESHARRAYS_OFFSET UNITYSDK_OFFSET(0x1D31D310)
#define TMPRO_TEXTMESHPROUGUI_SETOUTLINECOLOR_OFFSET UNITYSDK_OFFSET(0x1D31C380)
#define TMPRO_TEXTMESHPROUGUI_SETOUTLINETHICKNESS_OFFSET UNITYSDK_OFFSET(0x1D31BDA0)
#define TMPRO_TEXTMESHPROUGUI_SETPERSPECTIVECORRECTION_OFFSET UNITYSDK_OFFSET(0x1D31D270)
#define TMPRO_TEXTMESHPROUGUI_SETSHADERDEPTH_OFFSET UNITYSDK_OFFSET(0x1D31C570)
#define TMPRO_TEXTMESHPROUGUI_SETSHAREDMATERIALS_OFFSET UNITYSDK_OFFSET(0x1D31B630)
#define TMPRO_TEXTMESHPROUGUI_SETSHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D31B360)
#define TMPRO_TEXTMESHPROUGUI_SETVERTICESDIRTY_OFFSET UNITYSDK_OFFSET(0x1D31AF00)
#define TMPRO_TEXTMESHPROUGUI_SET_AUTOSIZETEXTCONTAINER_OFFSET UNITYSDK_OFFSET(0x1D32E700)
#define TMPRO_TEXTMESHPROUGUI_SET_MASKOFFSET_OFFSET UNITYSDK_OFFSET(0x1D32F0D0)
#define TMPRO_TEXTMESHPROUGUI_UPDATECULLING_OFFSET UNITYSDK_OFFSET(0x1D32F550)
#define TMPRO_TEXTMESHPROUGUI_UPDATEENVMAPMATRIX_OFFSET UNITYSDK_OFFSET(0x1D31A090)
#define TMPRO_TEXTMESHPROUGUI_UPDATEFONTASSET_OFFSET UNITYSDK_OFFSET(0x1D330CC0)
#define TMPRO_TEXTMESHPROUGUI_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1D32FEB0)
#define TMPRO_TEXTMESHPROUGUI_UPDATEMASK_OFFSET UNITYSDK_OFFSET(0x1D31A740)
#define TMPRO_TEXTMESHPROUGUI_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1D32EB50)
#define TMPRO_TEXTMESHPROUGUI_UPDATEMESHPADDING_OFFSET UNITYSDK_OFFSET(0x1D321EC0)
#define TMPRO_TEXTMESHPROUGUI_UPDATESDFSCALE_OFFSET UNITYSDK_OFFSET(0x1D3215F0)
#define TMPRO_TEXTMESHPROUGUI_UPDATESUBOBJECTPIVOT_OFFSET UNITYSDK_OFFSET(0x1D321330)
#define TMPRO_TEXTMESHPROUGUI_UPDATEVERTEXDATA_1_OFFSET UNITYSDK_OFFSET(0x1D330680)
#define TMPRO_TEXTMESHPROUGUI_UPDATEVERTEXDATA_OFFSET UNITYSDK_OFFSET(0x1D32FF50)
#define TMPRO_TEXTMESHPROUGUI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D330D60)
#define TMPRO_TEXTMESHPROUGUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D330CD0)

namespace TMPro
{
	inline static constexpr unsigned int TextMeshProUGUI_TypeDefinitionIndex = 39250;

	class TextMeshProUGUI : public ::TMPro::TMP_Text
	{
	public:
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_SaveGlyphVertexDataMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshProUGUI_TypeDefinitionIndex)->GetStaticField(0x9680);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_GenerateTextMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshProUGUI_TypeDefinitionIndex)->GetStaticField(0x9688);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_SavePageInfoMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshProUGUI_TypeDefinitionIndex)->GetStaticField(0x9690);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_HandleCarriageReturnMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshProUGUI_TypeDefinitionIndex)->GetStaticField(0x9698);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_HandleWhiteSpacesMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshProUGUI_TypeDefinitionIndex)->GetStaticField(0x96A0);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_HandleGPOSFeaturesMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshProUGUI_TypeDefinitionIndex)->GetStaticField(0x96A8);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_HandleLineTerminationMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshProUGUI_TypeDefinitionIndex)->GetStaticField(0x96B0);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_GenerateTextPhaseIMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshProUGUI_TypeDefinitionIndex)->GetStaticField(0x96B8);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_ComputeCharacterAdvanceMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshProUGUI_TypeDefinitionIndex)->GetStaticField(0x96C0);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_HandleVisibleCharacterMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshProUGUI_TypeDefinitionIndex)->GetStaticField(0x96C8);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_HandleHorizontalLineBreakingMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshProUGUI_TypeDefinitionIndex)->GetStaticField(0x96D0);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_ComputeTextMetricsMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshProUGUI_TypeDefinitionIndex)->GetStaticField(0x96D8);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_ParseMarkupTextMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshProUGUI_TypeDefinitionIndex)->GetStaticField(0x96E0);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_GenerateTextPhaseIIMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshProUGUI_TypeDefinitionIndex)->GetStaticField(0x96E8);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_SetArraySizesMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshProUGUI_TypeDefinitionIndex)->GetStaticField(0x96F0);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_HandleVerticalLineBreakingMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshProUGUI_TypeDefinitionIndex)->GetStaticField(0x96F8);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_GenerateTextPhaseIIIMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshProUGUI_TypeDefinitionIndex)->GetStaticField(0x9700);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_CharacterLookupMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshProUGUI_TypeDefinitionIndex)->GetStaticField(0x9708);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_CalculateVerticesPositionMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshProUGUI_TypeDefinitionIndex)->GetStaticField(0x9710);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_k_SaveProcessingStatesMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(TextMeshProUGUI_TypeDefinitionIndex)->GetStaticField(0x9718);
		}
		::System::Boolean m_hasFontAssetChanged; // 0x6E8
		::Il2CppArray<::TMPro::TMP_SubMeshUI*>* m_subTextObjects; // 0x6F0
		::System::Single m_previousLossyScaleY; // 0x6F8
		::Il2CppArray<::UnityEngine::Vector3>* m_RectTransformCorners; // 0x700
		::UnityEngine::CanvasRenderer* m_canvasRenderer; // 0x708
		::UnityEngine::Canvas* m_canvas; // 0x710
		::System::Single m_CanvasScaleFactor; // 0x718
		::System::Boolean m_isFirstAllocation; // 0x71C
		::System::Int32 m_max_characters; // 0x720
		::UnityEngine::Material* m_baseMaterial; // 0x728
		::System::Boolean m_isScrollRegionSet; // 0x730
		::UnityEngine::Vector4 m_maskOffset; // 0x734
		::UnityEngine::Matrix4x4 m_EnvMapMatrix; // 0x744
		::System::Boolean m_isRegisteredForEvents; // 0x784
		::System::Boolean m_isRebuildingLayout; // 0x785
		::UnityEngine::Coroutine* m_DelayedGraphicRebuild; // 0x788
		::UnityEngine::Coroutine* m_DelayedMaterialRebuild; // 0x790
		::UnityEngine::Rect m_ClipRect; // 0x798
		::System::Boolean m_ValidRect; // 0x7A8
		::System::Action_1<::TMPro::TMP_TextInfo*>* OnPreRenderText; // 0x7B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_ONDESTROY_OFFSET))(this);
		}

		::System::Void LoadFontAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_LOADFONTASSET_OFFSET))(this);
		}

		::UnityEngine::Canvas* GetCanvas()
		{
			return ((::UnityEngine::Canvas*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GETCANVAS_OFFSET))(this);
		}

		::System::Void UpdateEnvMapMatrix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_UPDATEENVMAPMATRIX_OFFSET))(this);
		}

		::System::Void EnableMasking()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_ENABLEMASKING_OFFSET))(this);
		}

		::System::Void DisableMasking()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_DISABLEMASKING_OFFSET))(this);
		}

		::System::Void UpdateMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_UPDATEMASK_OFFSET))(this);
		}

		::UnityEngine::Material* GetMaterial(::UnityEngine::Material* mat)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GETMATERIAL_OFFSET))(this, mat);
		}

		::Il2CppArray<::UnityEngine::Material*>* GetMaterials(::Il2CppArray<::UnityEngine::Material*>* mats)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GETMATERIALS_OFFSET))(this, mats);
		}

		::System::Void SetSharedMaterial(::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETSHAREDMATERIAL_OFFSET))(this, mat);
		}

		::Il2CppArray<::UnityEngine::Material*>* GetSharedMaterials()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GETSHAREDMATERIALS_OFFSET))(this);
		}

		::System::Void SetSharedMaterials(::Il2CppArray<::UnityEngine::Material*>* materials)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETSHAREDMATERIALS_OFFSET))(this, materials);
		}

		::System::Void SetOutlineThickness(::System::Single thickness)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETOUTLINETHICKNESS_OFFSET))(this, thickness);
		}

		::System::Void SetFaceColor(::UnityEngine::Color32 color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETFACECOLOR_OFFSET))(this, color);
		}

		::System::Void SetOutlineColor(::UnityEngine::Color32 color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETOUTLINECOLOR_OFFSET))(this, color);
		}

		::System::Void SetShaderDepth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETSHADERDEPTH_OFFSET))(this);
		}

		::System::Void SetCulling()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETCULLING_OFFSET))(this);
		}

		::System::Void SetPerspectiveCorrection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETPERSPECTIVECORRECTION_OFFSET))(this);
		}

		::System::Void SetMeshArrays(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETMESHARRAYS_OFFSET))(this, size);
		}

		::System::Int32 SetArraySizes(::Il2CppArray<::TMPro::TMP_Text_UnicodeChar>* unicodeChars)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::TMPro::TMP_Text_UnicodeChar>*))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETARRAYSIZES_OFFSET))(this, unicodeChars);
		}

		::System::Void ComputeMarginSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_COMPUTEMARGINSIZE_OFFSET))(this);
		}

		::System::Void OnDidApplyAnimationProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_ONDIDAPPLYANIMATIONPROPERTIES_OFFSET))(this);
		}

		::System::Void OnCanvasHierarchyChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_ONCANVASHIERARCHYCHANGED_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnRectTransformDimensionsChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_ONRECTTRANSFORMDIMENSIONSCHANGE_OFFSET))(this);
		}

		::System::Void InternalUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_INTERNALUPDATE_OFFSET))(this);
		}

		::System::Void OnPreRenderCanvas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_ONPRERENDERCANVAS_OFFSET))(this);
		}

		::System::Void GenerateTextMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GENERATETEXTMESH_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* GetTextContainerLocalCorners()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GETTEXTCONTAINERLOCALCORNERS_OFFSET))(this);
		}

		::System::Void SetActiveSubMeshes(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETACTIVESUBMESHES_OFFSET))(this, state);
		}

		::System::Void DestroySubMeshObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_DESTROYSUBMESHOBJECTS_OFFSET))(this);
		}

		::UnityEngine::Bounds GetCompoundBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GETCOMPOUNDBOUNDS_OFFSET))(this);
		}

		::UnityEngine::Rect GetCanvasSpaceClippingRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GETCANVASSPACECLIPPINGRECT_OFFSET))(this);
		}

		::System::Void UpdateSDFScale(::System::Single scaleDelta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_UPDATESDFSCALE_OFFSET))(this, scaleDelta);
		}

		::UnityEngine::Material* get_materialForRendering()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GET_MATERIALFORRENDERING_OFFSET))(this);
		}

		::System::Boolean get_autoSizeTextContainer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GET_AUTOSIZETEXTCONTAINER_OFFSET))(this);
		}

		::System::Void set_autoSizeTextContainer(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SET_AUTOSIZETEXTCONTAINER_OFFSET))(this, value);
		}

		::UnityEngine::Mesh* get_mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GET_MESH_OFFSET))(this);
		}

		::UnityEngine::CanvasRenderer* get_canvasRenderer()
		{
			return ((::UnityEngine::CanvasRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GET_CANVASRENDERER_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_CALCULATELAYOUTINPUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
		}

		::System::Void SetVerticesDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETVERTICESDIRTY_OFFSET))(this);
		}

		::System::Void SetLayoutDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETLAYOUTDIRTY_OFFSET))(this);
		}

		::System::Void SetMaterialDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETMATERIALDIRTY_OFFSET))(this);
		}

		::System::Void SetAllDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SETALLDIRTY_OFFSET))(this);
		}

		::System::Collections::IEnumerator* DelayedGraphicRebuild()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_DELAYEDGRAPHICREBUILD_OFFSET))(this);
		}

		::System::Collections::IEnumerator* DelayedMaterialRebuild()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_DELAYEDMATERIALREBUILD_OFFSET))(this);
		}

		::System::Void Rebuild(::UnityEngine::UI::CanvasUpdate update)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::CanvasUpdate))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_REBUILD_OFFSET))(this, update);
		}

		::System::Void UpdateSubObjectPivot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_UPDATESUBOBJECTPIVOT_OFFSET))(this);
		}

		::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GETMODIFIEDMATERIAL_OFFSET))(this, baseMaterial);
		}

		::System::Void UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_UPDATEMATERIAL_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_maskOffset()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GET_MASKOFFSET_OFFSET))(this);
		}

		::System::Void set_maskOffset(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_SET_MASKOFFSET_OFFSET))(this, value);
		}

		::System::Void RecalculateClipping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_RECALCULATECLIPPING_OFFSET))(this);
		}

		::System::Void Cull(::UnityEngine::Rect clipRect, ::System::Boolean validRect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_CULL_OFFSET))(this, clipRect, validRect);
		}

		::System::Void UpdateCulling()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_UPDATECULLING_OFFSET))(this);
		}

		::System::Void UpdateMeshPadding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_UPDATEMESHPADDING_OFFSET))(this);
		}

		::System::Void InternalCrossFadeColor(::UnityEngine::Color targetColor, ::System::Single duration, ::System::Boolean ignoreTimeScale, ::System::Boolean useAlpha)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_INTERNALCROSSFADECOLOR_OFFSET))(this, targetColor, duration, ignoreTimeScale, useAlpha);
		}

		::System::Void InternalCrossFadeAlpha(::System::Single alpha, ::System::Single duration, ::System::Boolean ignoreTimeScale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_INTERNALCROSSFADEALPHA_OFFSET))(this, alpha, duration, ignoreTimeScale);
		}

		::System::Void ForceMeshUpdate(::System::Boolean ignoreActiveState, ::System::Boolean forceTextReparsing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_FORCEMESHUPDATE_OFFSET))(this, ignoreActiveState, forceTextReparsing);
		}

		::TMPro::TMP_TextInfo* GetTextInfo(::System::String* text)
		{
			return ((::TMPro::TMP_TextInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_GETTEXTINFO_OFFSET))(this, text);
		}

		::System::Void ClearMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_CLEARMESH_OFFSET))(this);
		}

		::System::Void add_OnPreRenderText(::System::Action_1<::TMPro::TMP_TextInfo*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::TMPro::TMP_TextInfo*>*))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_ADD_ONPRERENDERTEXT_OFFSET))(this, value);
		}

		::System::Void remove_OnPreRenderText(::System::Action_1<::TMPro::TMP_TextInfo*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::TMPro::TMP_TextInfo*>*))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_REMOVE_ONPRERENDERTEXT_OFFSET))(this, value);
		}

		::System::Void UpdateGeometry(::UnityEngine::Mesh* mesh, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Int32))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_UPDATEGEOMETRY_OFFSET))(this, mesh, index);
		}

		::System::Void UpdateVertexData(::TMPro::TMP_VertexDataUpdateFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::TMPro::TMP_VertexDataUpdateFlags))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_UPDATEVERTEXDATA_OFFSET))(this, flags);
		}

		::System::Void UpdateVertexData_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_UPDATEVERTEXDATA_1_OFFSET))(this);
		}

		::System::Void UpdateFontAsset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TEXTMESHPROUGUI_UPDATEFONTASSET_OFFSET))(this);
		}
	};
}
