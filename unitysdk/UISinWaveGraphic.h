#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UISinWaveGraphic_FrameRateMode.h"
#include "unitysdk/UISinWaveGraphic_MaterialEntry.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define UISINWAVEGRAPHIC_BUILDADAPTIVESAMPLES_OFFSET UNITYSDK_OFFSET(0x1C6AFB50)
#define UISINWAVEGRAPHIC_ENSURECANVASTEXCOORD1_OFFSET UNITYSDK_OFFSET(0x1C6B15F0)
#define UISINWAVEGRAPHIC_FRAMERATETOINTERVAL_OFFSET UNITYSDK_OFFSET(0x1C6AED50)
#define UISINWAVEGRAPHIC_GETENTRYHALFWIDTH_OFFSET UNITYSDK_OFFSET(0x1C6AF670)
#define UISINWAVEGRAPHIC_GETMODIFIEDMATERIALFORBASE_OFFSET UNITYSDK_OFFSET(0x1C6B1780)
#define UISINWAVEGRAPHIC_GET_HASBASEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C6AF400)
#define UISINWAVEGRAPHIC_GET_MATERIALCOUNT_OFFSET UNITYSDK_OFFSET(0x1C6AF5F0)
#define UISINWAVEGRAPHIC_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C6AF200)
#define UISINWAVEGRAPHIC_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C6AF070)
#define UISINWAVEGRAPHIC_SAMPLECURVE_OFFSET UNITYSDK_OFFSET(0x1C6AF710)
#define UISINWAVEGRAPHIC_START_OFFSET UNITYSDK_OFFSET(0x1C6AEDB0)
#define UISINWAVEGRAPHIC_SUBDIVIDEADAPTIVE_OFFSET UNITYSDK_OFFSET(0x1C6AF840)
#define UISINWAVEGRAPHIC_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1C6AFF60)
#define UISINWAVEGRAPHIC_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C6B1C80)
#define UISINWAVEGRAPHIC_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C6AEED0)
#define UISINWAVEGRAPHIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6B2260)
#define UISINWAVEGRAPHIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6B2020)
#define UISINWAVEGRAPHIC___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C6B22F0)
#define UISINWAVEGRAPHIC___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C6B2300)
#define UISINWAVEGRAPHIC___BASE_START_OFFSET UNITYSDK_OFFSET(0x1C6B2310)
#define UISINWAVEGRAPHIC___BASE_UPDATEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x1C6B23A0)
#define UISINWAVEGRAPHIC___BASE_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C6B2450)

inline static constexpr unsigned int UISinWaveGraphic_TypeDefinitionIndex = 65650;

class UISinWaveGraphic : public ::UnityEngine::UI::MaskableGraphic
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Component*>** StaticGet__s_TempComponents()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Component*>**)Il2CppClass::FromTypeDefinitionIndex(UISinWaveGraphic_TypeDefinitionIndex)->GetStaticField(0x3FB70);
	}
	::System::Single tolerance; // 0xF8
	::System::Int32 maxSegments; // 0xFC
	::System::Int32 widthSegments; // 0x100
	::UISinWaveGraphic_FrameRateMode frameRateMode; // 0x104
	::System::Single frequency; // 0x108
	::System::Single amplitude; // 0x10C
	::UnityEngine::AnimationCurve* amplitudeCurve; // 0x110
	::System::Single width; // 0x118
	::System::Single speed; // 0x11C
	::System::Boolean generateUV1; // 0x120
	::System::Collections::Generic::List_1<::UISinWaveGraphic_MaterialEntry>* materials; // 0x128
	::System::Single _frameTimer; // 0x130
	::System::Single _frameInterval; // 0x134
	::System::Single _lastFramePhase; // 0x138
	::System::Single _accumulatedPhase; // 0x13C
	::UnityEngine::Mesh* _mesh; // 0x140
	::System::Collections::Generic::List_1<::System::Single>* _tParams; // 0x148
	::Il2CppArray<::System::Single>* _arcLengths; // 0x150
	::Il2CppArray<::System::Single>* _cacheSin; // 0x158
	::Il2CppArray<::System::Single>* _cacheCos; // 0x160
	::Il2CppArray<::System::Single>* _cacheAmpEval; // 0x168
	::Il2CppArray<::UnityEngine::Vector3>* _vertices; // 0x170
	::Il2CppArray<::UnityEngine::Vector2>* _uvs; // 0x178
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* _uv1s; // 0x180
	::Il2CppArray<::UnityEngine::Color32>* _colors; // 0x188
	::Il2CppArray<::System::Int32>* _triangles; // 0x190
	::System::Single _adaptPhaseOffset; // 0x198
	::System::Single _adaptFreqRad; // 0x19C
	::System::Single _adaptCenterY; // 0x1A0
	::System::Single _adaptRectWidth; // 0x1A4
	::System::Single _adaptRectXMin; // 0x1A8
	::System::Single _adaptTolSq; // 0x1AC
	::System::Int32 _adaptMaxDepth; // 0x1B0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISINWAVEGRAPHIC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UISINWAVEGRAPHIC__CCTOR_OFFSET))();
	}

	static ::System::Single FrameRateToInterval(::UISinWaveGraphic_FrameRateMode mode)
	{
		return ((::System::Single(*)(::UISinWaveGraphic_FrameRateMode))((::PBYTE)hIl2Cpp + UISINWAVEGRAPHIC_FRAMERATETOINTERVAL_OFFSET))(mode);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISINWAVEGRAPHIC_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISINWAVEGRAPHIC_UPDATE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISINWAVEGRAPHIC_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISINWAVEGRAPHIC_ONDISABLE_OFFSET))(this);
	}

	::System::Boolean get_HasBaseMaterial()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UISINWAVEGRAPHIC_GET_HASBASEMATERIAL_OFFSET))(this);
	}

	::System::Int32 get_MaterialCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UISINWAVEGRAPHIC_GET_MATERIALCOUNT_OFFSET))(this);
	}

	::System::Single GetEntryHalfWidth(::System::Int32 subMeshIndex)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UISINWAVEGRAPHIC_GETENTRYHALFWIDTH_OFFSET))(this, subMeshIndex);
	}

	::UnityEngine::Vector2 SampleCurve(::System::Single t)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UISINWAVEGRAPHIC_SAMPLECURVE_OFFSET))(this, t);
	}

	::System::Void SubdivideAdaptive(::System::Single t0, ::System::Single t1, ::UnityEngine::Vector2 p0, ::UnityEngine::Vector2 p1, ::System::Int32 depth)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + UISINWAVEGRAPHIC_SUBDIVIDEADAPTIVE_OFFSET))(this, t0, t1, p0, p1, depth);
	}

	::System::Void BuildAdaptiveSamples(::System::Single phaseOffset, ::System::Single freqRad, ::UnityEngine::Rect rect)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UISINWAVEGRAPHIC_BUILDADAPTIVESAMPLES_OFFSET))(this, phaseOffset, freqRad, rect);
	}

	::System::Void UpdateGeometry()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISINWAVEGRAPHIC_UPDATEGEOMETRY_OFFSET))(this);
	}

	::System::Void EnsureCanvasTexCoord1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISINWAVEGRAPHIC_ENSURECANVASTEXCOORD1_OFFSET))(this);
	}

	::UnityEngine::Material* GetModifiedMaterialForBase(::UnityEngine::Material* baseMat)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UISINWAVEGRAPHIC_GETMODIFIEDMATERIALFORBASE_OFFSET))(this, baseMat);
	}

	::System::Void UpdateMaterial()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISINWAVEGRAPHIC_UPDATEMATERIAL_OFFSET))(this);
	}

	::System::Void __base_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISINWAVEGRAPHIC___BASE_ONDISABLE_OFFSET))(this);
	}

	::System::Void __base_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISINWAVEGRAPHIC___BASE_ONENABLE_OFFSET))(this);
	}

	::System::Void __base_Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISINWAVEGRAPHIC___BASE_START_OFFSET))(this);
	}

	::System::Void __base_UpdateGeometry()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISINWAVEGRAPHIC___BASE_UPDATEGEOMETRY_OFFSET))(this);
	}

	::System::Void __base_UpdateMaterial()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UISINWAVEGRAPHIC___BASE_UPDATEMATERIAL_OFFSET))(this);
	}
};
