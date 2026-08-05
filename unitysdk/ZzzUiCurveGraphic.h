#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/ZzzUiCurveGraphic_CurveType.h"

class ZzzUiCurveGraphic_CurveSegment;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class VertexHelper; }

#define ZZZUICURVEGRAPHIC_ADDTOLIST_1_OFFSET UNITYSDK_OFFSET(0x1A692E10)
#define ZZZUICURVEGRAPHIC_ADDTOLIST_2_OFFSET UNITYSDK_OFFSET(0x1A692F20)
#define ZZZUICURVEGRAPHIC_ADDTOLIST_OFFSET UNITYSDK_OFFSET(0x1A692D70)
#define ZZZUICURVEGRAPHIC_APPLYSPHEREMASK_OFFSET UNITYSDK_OFFSET(0x1A691720)
#define ZZZUICURVEGRAPHIC_APPLYTOPOSRADIUSLIST_OFFSET UNITYSDK_OFFSET(0x1A691680)
#define ZZZUICURVEGRAPHIC_CALCULATEBEZIERPOINT_OFFSET UNITYSDK_OFFSET(0x1A694400)
#define ZZZUICURVEGRAPHIC_CLEARCURVESANIMATEDTAG_1_OFFSET UNITYSDK_OFFSET(0x1A6929A0)
#define ZZZUICURVEGRAPHIC_CLEARCURVESANIMATEDTAG_OFFSET UNITYSDK_OFFSET(0x1A692850)
#define ZZZUICURVEGRAPHIC_CLEARCURVESOPENTAG_OFFSET UNITYSDK_OFFSET(0x1A692AF0)
#define ZZZUICURVEGRAPHIC_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A692CD0)
#define ZZZUICURVEGRAPHIC_COMPUTECURVES_OFFSET UNITYSDK_OFFSET(0x1A691A00)
#define ZZZUICURVEGRAPHIC_CURVEFILLANIMATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1A691570)
#define ZZZUICURVEGRAPHIC_CURVEFILLANIMATIONPLAY_OFFSET UNITYSDK_OFFSET(0x1A691520)
#define ZZZUICURVEGRAPHIC_CURVEFILLANIMATIONRESET_OFFSET UNITYSDK_OFFSET(0x1A6914D0)
#define ZZZUICURVEGRAPHIC_CURVEFILLANIMATIONSTOP_OFFSET UNITYSDK_OFFSET(0x1A6915C0)
#define ZZZUICURVEGRAPHIC_DRAWBEZIERCURVELIST_OFFSET UNITYSDK_OFFSET(0x1A693250)
#define ZZZUICURVEGRAPHIC_DRAWBEZIERCURVE_OFFSET UNITYSDK_OFFSET(0x1A693440)
#define ZZZUICURVEGRAPHIC_ENABLEUIVERTEXCOLORCALC_OFFSET UNITYSDK_OFFSET(0x1A690E00)
#define ZZZUICURVEGRAPHIC_GETAPPROXPOINT_OFFSET UNITYSDK_OFFSET(0x1A6925F0)
#define ZZZUICURVEGRAPHIC_LINETOOSHORT_OFFSET UNITYSDK_OFFSET(0x1A692C40)
#define ZZZUICURVEGRAPHIC_ONMATERIALCHANGED_OFFSET UNITYSDK_OFFSET(0x1A690E60)
#define ZZZUICURVEGRAPHIC_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1A693170)
#define ZZZUICURVEGRAPHIC_REFRESHMESH_OFFSET UNITYSDK_OFFSET(0x1A691910)
#define ZZZUICURVEGRAPHIC_REMOVESAMECURVE_OFFSET UNITYSDK_OFFSET(0x1A6922D0)
#define ZZZUICURVEGRAPHIC_SPLITTOMIXEDCURVES_OFFSET UNITYSDK_OFFSET(0x1A691BA0)
#define ZZZUICURVEGRAPHIC_START_OFFSET UNITYSDK_OFFSET(0x1A690BD0)
#define ZZZUICURVEGRAPHIC_UPDATECURVEANIMATION_OFFSET UNITYSDK_OFFSET(0x1A691140)
#define ZZZUICURVEGRAPHIC_UPDATEMASKPOSRADIUS_OFFSET UNITYSDK_OFFSET(0x1A6912B0)
#define ZZZUICURVEGRAPHIC_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A6910E0)
#define ZZZUICURVEGRAPHIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A694720)
#define ZZZUICURVEGRAPHIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A694530)
#define ZZZUICURVEGRAPHIC___BASE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1A6947F0)
#define ZZZUICURVEGRAPHIC___BASE_START_OFFSET UNITYSDK_OFFSET(0x1A694800)

inline static constexpr unsigned int ZzzUiCurveGraphic_TypeDefinitionIndex = 45744;

class ZzzUiCurveGraphic : public ::UnityEngine::UI::MaskableGraphic
{
public:
	static ::System::Int32* StaticGet_AnimationProgress()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ZzzUiCurveGraphic_TypeDefinitionIndex)->GetStaticField(0xC1B0);
	}
	static ::System::Int32* StaticGet_IconPosArraySize()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ZzzUiCurveGraphic_TypeDefinitionIndex)->GetStaticField(0xC1B4);
	}
	static ::System::Int32* StaticGet_CurveCloseShadowColor()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ZzzUiCurveGraphic_TypeDefinitionIndex)->GetStaticField(0xC1B8);
	}
	static ::System::Int32* StaticGet_CurveCloseColor()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ZzzUiCurveGraphic_TypeDefinitionIndex)->GetStaticField(0xC1BC);
	}
	static ::System::Int32* StaticGet_CurveOpenShadowColor()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ZzzUiCurveGraphic_TypeDefinitionIndex)->GetStaticField(0xC1C0);
	}
	static ::System::Int32* StaticGet_WorldScaleUV()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ZzzUiCurveGraphic_TypeDefinitionIndex)->GetStaticField(0xC1C4);
	}
	static ::System::Int32* StaticGet_CurveOpenColor()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ZzzUiCurveGraphic_TypeDefinitionIndex)->GetStaticField(0xC1C8);
	}
	static ::System::Int32* StaticGet_IconPosRadiusArray()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ZzzUiCurveGraphic_TypeDefinitionIndex)->GetStaticField(0xC1CC);
	}
	::System::Boolean overrideCurveType; // 0xF8
	::ZzzUiCurveGraphic_CurveType curveType; // 0xFC
	::System::Single curveSmoothness; // 0x100
	::System::Single lineWidth; // 0x104
	::System::Int32 segments; // 0x108
	::System::Boolean useMask; // 0x10C
	::System::Boolean realWorldUV; // 0x10D
	::System::Single realWorldUVScale; // 0x110
	::System::Boolean mixCurve; // 0x114
	::System::Boolean fixMixCurveJoint; // 0x115
	::System::Boolean removeSameCurve; // 0x116
	::UnityEngine::Color curveOpenColor; // 0x118
	::UnityEngine::Color curveCloseColor; // 0x128
	::System::Boolean renderCurveCloseShadow; // 0x138
	::UnityEngine::Color curveOpenShadowColor; // 0x13C
	::UnityEngine::Color curveCloseShadowColor; // 0x14C
	::UnityEngine::Vector2 curveCloseShadowOffset; // 0x15C
	::System::Single animationTotalTime; // 0x164
	::UnityEngine::AnimationCurve* CurveFillAnimationCurve; // 0x168
	::System::Collections::Generic::List_1<::ZzzUiCurveGraphic_CurveSegment*>* curves; // 0x170
	::System::Collections::Generic::List_1<::ZzzUiCurveGraphic_CurveSegment*>* _mixedCurves; // 0x178
	::System::Single _animationTime; // 0x180
	::System::Boolean _animationOver; // 0x184
	::System::Collections::Generic::List_1<::UnityEngine::Vector4>* PosRadiusList; // 0x188
	::System::Collections::Generic::List_1<::UnityEngine::Vector4>* transformedPosRadiusList; // 0x190

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC__CCTOR_OFFSET))();
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_UPDATE_OFFSET))(this);
	}

	::System::Void UpdateCurveAnimation(::System::Single deltaTime)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_UPDATECURVEANIMATION_OFFSET))(this, deltaTime);
	}

	::System::Void CurveFillAnimationReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_CURVEFILLANIMATIONRESET_OFFSET))(this);
	}

	::System::Void CurveFillAnimationPlay()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_CURVEFILLANIMATIONPLAY_OFFSET))(this);
	}

	::System::Void CurveFillAnimationPause()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_CURVEFILLANIMATIONPAUSE_OFFSET))(this);
	}

	::System::Void CurveFillAnimationStop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_CURVEFILLANIMATIONSTOP_OFFSET))(this);
	}

	::System::Void EnableUIVertexColorCalc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_ENABLEUIVERTEXCOLORCALC_OFFSET))(this);
	}

	::System::Void OnMaterialChanged()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_ONMATERIALCHANGED_OFFSET))(this);
	}

	::System::Void ApplyToPosRadiusList(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* list)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_APPLYTOPOSRADIUSLIST_OFFSET))(this, list);
	}

	::System::Void ApplySphereMask(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* posRadiusArray)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_APPLYSPHEREMASK_OFFSET))(this, posRadiusArray);
	}

	::System::Void UpdateMaskPosRadius()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_UPDATEMASKPOSRADIUS_OFFSET))(this);
	}

	::System::Void RefreshMesh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_REFRESHMESH_OFFSET))(this);
	}

	::System::Void RemoveSameCurve(::System::Collections::Generic::List_1<::ZzzUiCurveGraphic_CurveSegment*>* crvs, ::System::Single epsilon)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ZzzUiCurveGraphic_CurveSegment*>*, ::System::Single))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_REMOVESAMECURVE_OFFSET))(this, crvs, epsilon);
	}

	::System::String* GetApproxPoint(::UnityEngine::Vector2 point, ::System::Single epsilon)
	{
		return ((::System::String*(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_GETAPPROXPOINT_OFFSET))(this, point, epsilon);
	}

	::System::Void ComputeCurves(::System::Collections::Generic::List_1<::ZzzUiCurveGraphic_CurveSegment*>* crvs, ::System::Boolean removeSameCurve)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ZzzUiCurveGraphic_CurveSegment*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_COMPUTECURVES_OFFSET))(this, crvs, removeSameCurve);
	}

	::System::Void ClearCurvesAnimatedTag(::System::Collections::Generic::List_1<::ZzzUiCurveGraphic_CurveSegment*>* crvs)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ZzzUiCurveGraphic_CurveSegment*>*))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_CLEARCURVESANIMATEDTAG_OFFSET))(this, crvs);
	}

	::System::Void ClearCurvesAnimatedTag_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_CLEARCURVESANIMATEDTAG_1_OFFSET))(this);
	}

	::System::Void ClearCurvesOpenTag()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_CLEARCURVESOPENTAG_OFFSET))(this);
	}

	::System::Boolean LineTooShort(::UnityEngine::Vector2 start, ::UnityEngine::Vector2 end)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_LINETOOSHORT_OFFSET))(this, start, end);
	}

	::System::Void SplitToMixedCurves()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_SPLITTOMIXEDCURVES_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_CLEAR_OFFSET))(this);
	}

	::System::Void AddToList(::ZzzUiCurveGraphic_CurveSegment* segment)
	{
		return ((::System::Void(*)(::PVOID, ::ZzzUiCurveGraphic_CurveSegment*))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_ADDTOLIST_OFFSET))(this, segment);
	}

	::System::Void AddToList_1(::UnityEngine::Vector2 startPoint, ::UnityEngine::Vector2 endPoint, ::System::Boolean invertStartEnd, ::System::Boolean invertUV)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_ADDTOLIST_1_OFFSET))(this, startPoint, endPoint, invertStartEnd, invertUV);
	}

	::System::Void AddToList_2(::UnityEngine::RectTransform* startPointRectTransform, ::UnityEngine::RectTransform* endPointRectTransform, ::System::Boolean invertStartEnd, ::System::Boolean invertUV, ::System::Boolean isOpen, ::System::Boolean isAnimated)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_ADDTOLIST_2_OFFSET))(this, startPointRectTransform, endPointRectTransform, invertStartEnd, invertUV, isOpen, isAnimated);
	}

	::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_ONPOPULATEMESH_OFFSET))(this, vh);
	}

	::System::Void DrawBezierCurveList(::UnityEngine::UI::VertexHelper* vh, ::System::Collections::Generic::List_1<::ZzzUiCurveGraphic_CurveSegment*>* curves, ::System::Int32 curveSegments, ::UnityEngine::Vector2 shadowOffset, ::System::Boolean isShadowPass)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::System::Collections::Generic::List_1<::ZzzUiCurveGraphic_CurveSegment*>*, ::System::Int32, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_DRAWBEZIERCURVELIST_OFFSET))(this, vh, curves, curveSegments, shadowOffset, isShadowPass);
	}

	::System::Void DrawBezierCurve(::UnityEngine::UI::VertexHelper* vh, ::ZzzUiCurveGraphic_CurveSegment* curve, ::System::Int32 curveSegments, ::UnityEngine::Vector2 shadowOffset, ::System::Boolean isShadowPass)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::ZzzUiCurveGraphic_CurveSegment*, ::System::Int32, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_DRAWBEZIERCURVE_OFFSET))(this, vh, curve, curveSegments, shadowOffset, isShadowPass);
	}

	static ::UnityEngine::Vector2 CalculateBezierPoint(::System::Single t, ::UnityEngine::Vector2 p0, ::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, ::UnityEngine::Vector2 p3)
	{
		return ((::UnityEngine::Vector2(*)(::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC_CALCULATEBEZIERPOINT_OFFSET))(t, p0, p1, p2, p3);
	}

	::System::Void __base_OnPopulateMesh(::UnityEngine::UI::VertexHelper* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC___BASE_ONPOPULATEMESH_OFFSET))(this, P0);
	}

	::System::Void __base_Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZZZUICURVEGRAPHIC___BASE_START_OFFSET))(this);
	}
};
