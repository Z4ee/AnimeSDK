#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LineAlignment.h"
#include "unitysdk/UnityEngine/LineTextureMode.h"
#include "unitysdk/UnityEngine/Renderer.h"
#include "unitysdk/UnityEngine/TrailRenderer_SubdivisionMode.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_TRAILRENDERER_ADDPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1B3A6590)
#define UNITYENGINE_TRAILRENDERER_ADDPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3A6580)
#define UNITYENGINE_TRAILRENDERER_ADDPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3A6570)
#define UNITYENGINE_TRAILRENDERER_BAKEMESH_1_OFFSET UNITYSDK_OFFSET(0x1B3A64A0)
#define UNITYENGINE_TRAILRENDERER_BAKEMESH_OFFSET UNITYSDK_OFFSET(0x1B3A6460)
#define UNITYENGINE_TRAILRENDERER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B3A6450)
#define UNITYENGINE_TRAILRENDERER_GETCOLORGRADIENTCOPY_OFFSET UNITYSDK_OFFSET(0x1B3A6500)
#define UNITYENGINE_TRAILRENDERER_GETPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1B3A6550)
#define UNITYENGINE_TRAILRENDERER_GETPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3A63A0)
#define UNITYENGINE_TRAILRENDERER_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3A6360)
#define UNITYENGINE_TRAILRENDERER_GETTIMETHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B3A65D0)
#define UNITYENGINE_TRAILRENDERER_GETTIMETHREAD_OFFSET UNITYSDK_OFFSET(0x1B3A65C0)
#define UNITYENGINE_TRAILRENDERER_GETWIDTHCURVECOPY_OFFSET UNITYSDK_OFFSET(0x1B3A64C0)
#define UNITYENGINE_TRAILRENDERER_GETWIDTHMULTIPLIERTHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B3A6610)
#define UNITYENGINE_TRAILRENDERER_GETWIDTHMULTIPLIERTHREAD_OFFSET UNITYSDK_OFFSET(0x1B3A6600)
#define UNITYENGINE_TRAILRENDERER_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1B3A6410)
#define UNITYENGINE_TRAILRENDERER_GET_AUTODESTRUCT_OFFSET UNITYSDK_OFFSET(0x1B3A6140)
#define UNITYENGINE_TRAILRENDERER_GET_COLORGRADIENT_OFFSET UNITYSDK_OFFSET(0x1B3A64F0)
#define UNITYENGINE_TRAILRENDERER_GET_EMITTING_OFFSET UNITYSDK_OFFSET(0x1B3A6160)
#define UNITYENGINE_TRAILRENDERER_GET_ENDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3A6310)
#define UNITYENGINE_TRAILRENDERER_GET_ENDCOLOR_OFFSET UNITYSDK_OFFSET(0x1B3A62D0)
#define UNITYENGINE_TRAILRENDERER_GET_ENDWIDTH_OFFSET UNITYSDK_OFFSET(0x1B3A6100)
#define UNITYENGINE_TRAILRENDERER_GET_GENERATELIGHTINGDATA_OFFSET UNITYSDK_OFFSET(0x1B3A63D0)
#define UNITYENGINE_TRAILRENDERER_GET_MAXTRAILLENGTH_OFFSET UNITYSDK_OFFSET(0x1B3A61E0)
#define UNITYENGINE_TRAILRENDERER_GET_MINVERTEXDISTANCE_OFFSET UNITYSDK_OFFSET(0x1B3A61C0)
#define UNITYENGINE_TRAILRENDERER_GET_NUMCAPVERTICES_OFFSET UNITYSDK_OFFSET(0x1B3A61A0)
#define UNITYENGINE_TRAILRENDERER_GET_NUMCORNERVERTICES_OFFSET UNITYSDK_OFFSET(0x1B3A6180)
#define UNITYENGINE_TRAILRENDERER_GET_NUMPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1B3A60A0)
#define UNITYENGINE_TRAILRENDERER_GET_POSITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1B3A60B0)
#define UNITYENGINE_TRAILRENDERER_GET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x1B3A63B0)
#define UNITYENGINE_TRAILRENDERER_GET_SORTINGFUDGE_OFFSET UNITYSDK_OFFSET(0x1B3A6430)
#define UNITYENGINE_TRAILRENDERER_GET_STARTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3A62A0)
#define UNITYENGINE_TRAILRENDERER_GET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x1B3A6260)
#define UNITYENGINE_TRAILRENDERER_GET_STARTWIDTH_OFFSET UNITYSDK_OFFSET(0x1B3A60E0)
#define UNITYENGINE_TRAILRENDERER_GET_SUBDIVISIONDISTANCE_OFFSET UNITYSDK_OFFSET(0x1B3A6220)
#define UNITYENGINE_TRAILRENDERER_GET_SUBDIVISIONMAXPOINTSPERSEGMENT_OFFSET UNITYSDK_OFFSET(0x1B3A6240)
#define UNITYENGINE_TRAILRENDERER_GET_SUBDIVISIONMODE_OFFSET UNITYSDK_OFFSET(0x1B3A6200)
#define UNITYENGINE_TRAILRENDERER_GET_TEXTUREMODE_OFFSET UNITYSDK_OFFSET(0x1B3A63F0)
#define UNITYENGINE_TRAILRENDERER_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1B3A60C0)
#define UNITYENGINE_TRAILRENDERER_GET_WIDTHCURVE_OFFSET UNITYSDK_OFFSET(0x1B3A64B0)
#define UNITYENGINE_TRAILRENDERER_GET_WIDTHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1B3A6120)
#define UNITYENGINE_TRAILRENDERER_RESETVISIBLETRAILPREFABSQUERY_OFFSET UNITYSDK_OFFSET(0x1B3A6530)
#define UNITYENGINE_TRAILRENDERER_SETCOLORGRADIENT_OFFSET UNITYSDK_OFFSET(0x1B3A6520)
#define UNITYENGINE_TRAILRENDERER_SETPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1B3A6560)
#define UNITYENGINE_TRAILRENDERER_SETPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3A6350)
#define UNITYENGINE_TRAILRENDERER_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3A6340)
#define UNITYENGINE_TRAILRENDERER_SETTIMETHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B3A65B0)
#define UNITYENGINE_TRAILRENDERER_SETTIMETHREAD_OFFSET UNITYSDK_OFFSET(0x1B3A65A0)
#define UNITYENGINE_TRAILRENDERER_SETWIDTHCURVE_OFFSET UNITYSDK_OFFSET(0x1B3A64E0)
#define UNITYENGINE_TRAILRENDERER_SETWIDTHMULTIPLIERTHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B3A65F0)
#define UNITYENGINE_TRAILRENDERER_SETWIDTHMULTIPLIERTHREAD_OFFSET UNITYSDK_OFFSET(0x1B3A65E0)
#define UNITYENGINE_TRAILRENDERER_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1B3A6420)
#define UNITYENGINE_TRAILRENDERER_SET_AUTODESTRUCT_OFFSET UNITYSDK_OFFSET(0x1B3A6150)
#define UNITYENGINE_TRAILRENDERER_SET_COLORGRADIENT_OFFSET UNITYSDK_OFFSET(0x1B3A6510)
#define UNITYENGINE_TRAILRENDERER_SET_EMITTING_OFFSET UNITYSDK_OFFSET(0x1B3A6170)
#define UNITYENGINE_TRAILRENDERER_SET_ENDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3A6330)
#define UNITYENGINE_TRAILRENDERER_SET_ENDCOLOR_OFFSET UNITYSDK_OFFSET(0x1B3A6320)
#define UNITYENGINE_TRAILRENDERER_SET_ENDWIDTH_OFFSET UNITYSDK_OFFSET(0x1B3A6110)
#define UNITYENGINE_TRAILRENDERER_SET_GENERATELIGHTINGDATA_OFFSET UNITYSDK_OFFSET(0x1B3A63E0)
#define UNITYENGINE_TRAILRENDERER_SET_MAXTRAILLENGTH_OFFSET UNITYSDK_OFFSET(0x1B3A61F0)
#define UNITYENGINE_TRAILRENDERER_SET_MINVERTEXDISTANCE_OFFSET UNITYSDK_OFFSET(0x1B3A61D0)
#define UNITYENGINE_TRAILRENDERER_SET_NUMCAPVERTICES_OFFSET UNITYSDK_OFFSET(0x1B3A61B0)
#define UNITYENGINE_TRAILRENDERER_SET_NUMCORNERVERTICES_OFFSET UNITYSDK_OFFSET(0x1B3A6190)
#define UNITYENGINE_TRAILRENDERER_SET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x1B3A63C0)
#define UNITYENGINE_TRAILRENDERER_SET_SORTINGFUDGE_OFFSET UNITYSDK_OFFSET(0x1B3A6440)
#define UNITYENGINE_TRAILRENDERER_SET_STARTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3A62C0)
#define UNITYENGINE_TRAILRENDERER_SET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x1B3A62B0)
#define UNITYENGINE_TRAILRENDERER_SET_STARTWIDTH_OFFSET UNITYSDK_OFFSET(0x1B3A60F0)
#define UNITYENGINE_TRAILRENDERER_SET_SUBDIVISIONDISTANCE_OFFSET UNITYSDK_OFFSET(0x1B3A6230)
#define UNITYENGINE_TRAILRENDERER_SET_SUBDIVISIONMAXPOINTSPERSEGMENT_OFFSET UNITYSDK_OFFSET(0x1B3A6250)
#define UNITYENGINE_TRAILRENDERER_SET_SUBDIVISIONMODE_OFFSET UNITYSDK_OFFSET(0x1B3A6210)
#define UNITYENGINE_TRAILRENDERER_SET_TEXTUREMODE_OFFSET UNITYSDK_OFFSET(0x1B3A6400)
#define UNITYENGINE_TRAILRENDERER_SET_TIME_OFFSET UNITYSDK_OFFSET(0x1B3A60D0)
#define UNITYENGINE_TRAILRENDERER_SET_WIDTHCURVE_OFFSET UNITYSDK_OFFSET(0x1B3A64D0)
#define UNITYENGINE_TRAILRENDERER_SET_WIDTHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1B3A6130)
#define UNITYENGINE_TRAILRENDERER_VISIBLETRAILPREFABSQUERY_OFFSET UNITYSDK_OFFSET(0x1B3A6540)
#define UNITYENGINE_TRAILRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3A6620)

namespace UnityEngine
{
	inline static constexpr unsigned int TrailRenderer_TypeDefinitionIndex = 5194;

	class TrailRenderer : public ::UnityEngine::Renderer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_numPositions()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_NUMPOSITIONS_OFFSET))(this);
		}

		::System::Single get_time()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_TIME_OFFSET))(this);
		}

		::System::Void set_time(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_TIME_OFFSET))(this, value);
		}

		::System::Single get_startWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_STARTWIDTH_OFFSET))(this);
		}

		::System::Void set_startWidth(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_STARTWIDTH_OFFSET))(this, value);
		}

		::System::Single get_endWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_ENDWIDTH_OFFSET))(this);
		}

		::System::Void set_endWidth(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_ENDWIDTH_OFFSET))(this, value);
		}

		::System::Single get_widthMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_WIDTHMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_widthMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_WIDTHMULTIPLIER_OFFSET))(this, value);
		}

		::System::Boolean get_autodestruct()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_AUTODESTRUCT_OFFSET))(this);
		}

		::System::Void set_autodestruct(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_AUTODESTRUCT_OFFSET))(this, value);
		}

		::System::Boolean get_emitting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_EMITTING_OFFSET))(this);
		}

		::System::Void set_emitting(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_EMITTING_OFFSET))(this, value);
		}

		::System::Int32 get_numCornerVertices()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_NUMCORNERVERTICES_OFFSET))(this);
		}

		::System::Void set_numCornerVertices(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_NUMCORNERVERTICES_OFFSET))(this, value);
		}

		::System::Int32 get_numCapVertices()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_NUMCAPVERTICES_OFFSET))(this);
		}

		::System::Void set_numCapVertices(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_NUMCAPVERTICES_OFFSET))(this, value);
		}

		::System::Single get_minVertexDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_MINVERTEXDISTANCE_OFFSET))(this);
		}

		::System::Void set_minVertexDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_MINVERTEXDISTANCE_OFFSET))(this, value);
		}

		::System::Single get_maxTrailLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_MAXTRAILLENGTH_OFFSET))(this);
		}

		::System::Void set_maxTrailLength(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_MAXTRAILLENGTH_OFFSET))(this, value);
		}

		::UnityEngine::TrailRenderer_SubdivisionMode get_subdivisionMode()
		{
			return ((::UnityEngine::TrailRenderer_SubdivisionMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_SUBDIVISIONMODE_OFFSET))(this);
		}

		::System::Void set_subdivisionMode(::UnityEngine::TrailRenderer_SubdivisionMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::TrailRenderer_SubdivisionMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_SUBDIVISIONMODE_OFFSET))(this, value);
		}

		::System::Int32 get_subdivisionDistance()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_SUBDIVISIONDISTANCE_OFFSET))(this);
		}

		::System::Void set_subdivisionDistance(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_SUBDIVISIONDISTANCE_OFFSET))(this, value);
		}

		::System::Int32 get_subdivisionMaxPointsPerSegment()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_SUBDIVISIONMAXPOINTSPERSEGMENT_OFFSET))(this);
		}

		::System::Void set_subdivisionMaxPointsPerSegment(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_SUBDIVISIONMAXPOINTSPERSEGMENT_OFFSET))(this, value);
		}

		::UnityEngine::Color get_startColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_STARTCOLOR_OFFSET))(this);
		}

		::System::Void set_startColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_STARTCOLOR_OFFSET))(this, value);
		}

		::UnityEngine::Color get_endColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_ENDCOLOR_OFFSET))(this);
		}

		::System::Void set_endColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_ENDCOLOR_OFFSET))(this, value);
		}

		::System::Int32 get_positionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_POSITIONCOUNT_OFFSET))(this);
		}

		::System::Void SetPosition(::System::Int32 index, ::UnityEngine::Vector4 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SETPOSITION_OFFSET))(this, index, position);
		}

		::UnityEngine::Vector4 GetPosition(::System::Int32 index)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GETPOSITION_OFFSET))(this, index);
		}

		::System::Single get_shadowBias()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_SHADOWBIAS_OFFSET))(this);
		}

		::System::Void set_shadowBias(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_SHADOWBIAS_OFFSET))(this, value);
		}

		::System::Boolean get_generateLightingData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_GENERATELIGHTINGDATA_OFFSET))(this);
		}

		::System::Void set_generateLightingData(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_GENERATELIGHTINGDATA_OFFSET))(this, value);
		}

		::UnityEngine::LineTextureMode get_textureMode()
		{
			return ((::UnityEngine::LineTextureMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_TEXTUREMODE_OFFSET))(this);
		}

		::System::Void set_textureMode(::UnityEngine::LineTextureMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LineTextureMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_TEXTUREMODE_OFFSET))(this, value);
		}

		::UnityEngine::LineAlignment get_alignment()
		{
			return ((::UnityEngine::LineAlignment(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_ALIGNMENT_OFFSET))(this);
		}

		::System::Void set_alignment(::UnityEngine::LineAlignment value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LineAlignment))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_ALIGNMENT_OFFSET))(this, value);
		}

		::System::Single get_sortingFudge()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_SORTINGFUDGE_OFFSET))(this);
		}

		::System::Void set_sortingFudge(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_SORTINGFUDGE_OFFSET))(this, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_CLEAR_OFFSET))(this);
		}

		::System::Void BakeMesh(::UnityEngine::Mesh* mesh, ::System::Boolean useTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_BAKEMESH_OFFSET))(this, mesh, useTransform);
		}

		::System::Void BakeMesh_1(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, ::System::Boolean useTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_BAKEMESH_1_OFFSET))(this, mesh, camera, useTransform);
		}

		::UnityEngine::AnimationCurve* get_widthCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_WIDTHCURVE_OFFSET))(this);
		}

		::System::Void set_widthCurve(::UnityEngine::AnimationCurve* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_WIDTHCURVE_OFFSET))(this, value);
		}

		::UnityEngine::Gradient* get_colorGradient()
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_COLORGRADIENT_OFFSET))(this);
		}

		::System::Void set_colorGradient(::UnityEngine::Gradient* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_COLORGRADIENT_OFFSET))(this, value);
		}

		::UnityEngine::AnimationCurve* GetWidthCurveCopy()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GETWIDTHCURVECOPY_OFFSET))(this);
		}

		::System::Void SetWidthCurve(::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SETWIDTHCURVE_OFFSET))(this, curve);
		}

		::UnityEngine::Gradient* GetColorGradientCopy()
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GETCOLORGRADIENTCOPY_OFFSET))(this);
		}

		::System::Void SetColorGradient(::UnityEngine::Gradient* curve)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SETCOLORGRADIENT_OFFSET))(this, curve);
		}

		static ::System::Void ResetVisibleTrailPrefabsQuery()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_RESETVISIBLETRAILPREFABSQUERY_OFFSET))();
		}

		static ::Il2CppArray<::UnityEngine::GameObject*>* VisibleTrailPrefabsQuery()
		{
			return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_VISIBLETRAILPREFABSQUERY_OFFSET))();
		}

		::System::Int32 GetPositions(::Il2CppArray<::UnityEngine::Vector4>* positions)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GETPOSITIONS_OFFSET))(this, positions);
		}

		::System::Void SetPositions(::Il2CppArray<::UnityEngine::Vector4>* positions)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SETPOSITIONS_OFFSET))(this, positions);
		}

		::System::Void AddPosition(::UnityEngine::Vector4 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_ADDPOSITION_OFFSET))(this, position);
		}

		::System::Void AddPositions(::Il2CppArray<::UnityEngine::Vector4>* positions)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_ADDPOSITIONS_OFFSET))(this, positions);
		}

		::System::Void SetTimeThread(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SETTIMETHREAD_OFFSET))(this, value);
		}

		::System::Single GetTimeThread()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GETTIMETHREAD_OFFSET))(this);
		}

		::System::Void SetWidthMultiplierThread(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SETWIDTHMULTIPLIERTHREAD_OFFSET))(this, v);
		}

		::System::Single GetWidthMultiplierThread()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GETWIDTHMULTIPLIERTHREAD_OFFSET))(this);
		}

		static ::System::Void SetTimeThreadInternal(::UnityEngine::TrailRenderer* self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::TrailRenderer*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SETTIMETHREADINTERNAL_OFFSET))(self, value);
		}

		static ::System::Single GetTimeThreadInternal(::UnityEngine::TrailRenderer* self)
		{
			return ((::System::Single(*)(::UnityEngine::TrailRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GETTIMETHREADINTERNAL_OFFSET))(self);
		}

		static ::System::Void SetWidthMultiplierThreadInternal(::UnityEngine::TrailRenderer* self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::TrailRenderer*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SETWIDTHMULTIPLIERTHREADINTERNAL_OFFSET))(self, value);
		}

		static ::System::Single GetWidthMultiplierThreadInternal(::UnityEngine::TrailRenderer* self)
		{
			return ((::System::Single(*)(::UnityEngine::TrailRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GETWIDTHMULTIPLIERTHREADINTERNAL_OFFSET))(self);
		}

		::System::Void get_startColor_Injected(::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_STARTCOLOR_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_startColor_Injected(::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_STARTCOLOR_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_endColor_Injected(::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_ENDCOLOR_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_endColor_Injected(::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_ENDCOLOR_INJECTED_OFFSET))(this, value);
		}

		::System::Void SetPosition_Injected(::System::Int32 index, ::UnityEngine::Vector4& position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SETPOSITION_INJECTED_OFFSET))(this, index, position);
		}

		::System::Void GetPosition_Injected(::System::Int32 index, ::UnityEngine::Vector4& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GETPOSITION_INJECTED_OFFSET))(this, index, ret);
		}

		::System::Void AddPosition_Injected(::UnityEngine::Vector4& position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_ADDPOSITION_INJECTED_OFFSET))(this, position);
		}
	};
}
