#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LineAlignment.h"
#include "unitysdk/UnityEngine/LineRenderer_SubdivisionMode.h"
#include "unitysdk/UnityEngine/LineTextureMode.h"
#include "unitysdk/UnityEngine/Renderer.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_LINERENDERER_BAKEMESH_1_OFFSET UNITYSDK_OFFSET(0x1EA87130)
#define UNITYENGINE_LINERENDERER_BAKEMESH_OFFSET UNITYSDK_OFFSET(0x1EA870F0)
#define UNITYENGINE_LINERENDERER_GETCOLORGRADIENTCOPY_OFFSET UNITYSDK_OFFSET(0x1EA87190)
#define UNITYENGINE_LINERENDERER_GETPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1EA87220)
#define UNITYENGINE_LINERENDERER_GETPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EA87030)
#define UNITYENGINE_LINERENDERER_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1EA86FE0)
#define UNITYENGINE_LINERENDERER_GETWIDTHCURVECOPY_OFFSET UNITYSDK_OFFSET(0x1EA87150)
#define UNITYENGINE_LINERENDERER_GETWIDTHMULTIPLIERTHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1EA87210)
#define UNITYENGINE_LINERENDERER_GETWIDTHMULTIPLIERTHREAD_OFFSET UNITYSDK_OFFSET(0x1EA87200)
#define UNITYENGINE_LINERENDERER_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1EA870A0)
#define UNITYENGINE_LINERENDERER_GET_COLORGRADIENT_OFFSET UNITYSDK_OFFSET(0x1EA87180)
#define UNITYENGINE_LINERENDERER_GET_ENDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EA86FA0)
#define UNITYENGINE_LINERENDERER_GET_ENDCOLOR_OFFSET UNITYSDK_OFFSET(0x1EA86F60)
#define UNITYENGINE_LINERENDERER_GET_ENDWIDTH_OFFSET UNITYSDK_OFFSET(0x1EA86DF0)
#define UNITYENGINE_LINERENDERER_GET_GENERATELIGHTINGDATA_OFFSET UNITYSDK_OFFSET(0x1EA87060)
#define UNITYENGINE_LINERENDERER_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x1EA86E80)
#define UNITYENGINE_LINERENDERER_GET_NUMCAPVERTICES_OFFSET UNITYSDK_OFFSET(0x1EA86E40)
#define UNITYENGINE_LINERENDERER_GET_NUMCORNERVERTICES_OFFSET UNITYSDK_OFFSET(0x1EA86E20)
#define UNITYENGINE_LINERENDERER_GET_NUMPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1EA86DB0)
#define UNITYENGINE_LINERENDERER_GET_POSITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1EA86DC0)
#define UNITYENGINE_LINERENDERER_GET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x1EA87040)
#define UNITYENGINE_LINERENDERER_GET_SORTINGFUDGE_OFFSET UNITYSDK_OFFSET(0x1EA870C0)
#define UNITYENGINE_LINERENDERER_GET_STARTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EA86F40)
#define UNITYENGINE_LINERENDERER_GET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x1EA86F00)
#define UNITYENGINE_LINERENDERER_GET_STARTWIDTH_OFFSET UNITYSDK_OFFSET(0x1EA86DE0)
#define UNITYENGINE_LINERENDERER_GET_SUBDIVISIONDISTANCE_OFFSET UNITYSDK_OFFSET(0x1EA86EC0)
#define UNITYENGINE_LINERENDERER_GET_SUBDIVISIONMAXPOINTSPERSEGMENT_OFFSET UNITYSDK_OFFSET(0x1EA86EE0)
#define UNITYENGINE_LINERENDERER_GET_SUBDIVISIONMODE_OFFSET UNITYSDK_OFFSET(0x1EA86EA0)
#define UNITYENGINE_LINERENDERER_GET_TEXTUREMODE_OFFSET UNITYSDK_OFFSET(0x1EA87080)
#define UNITYENGINE_LINERENDERER_GET_USEWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x1EA86E60)
#define UNITYENGINE_LINERENDERER_GET_WIDTHCURVE_OFFSET UNITYSDK_OFFSET(0x1EA87140)
#define UNITYENGINE_LINERENDERER_GET_WIDTHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1EA86E00)
#define UNITYENGINE_LINERENDERER_RESETVISIBLELINEPREFABSQUERY_OFFSET UNITYSDK_OFFSET(0x1EA871C0)
#define UNITYENGINE_LINERENDERER_SETCOLORGRADIENT_OFFSET UNITYSDK_OFFSET(0x1EA871B0)
#define UNITYENGINE_LINERENDERER_SETCOLORS_OFFSET UNITYSDK_OFFSET(0x1EA86D30)
#define UNITYENGINE_LINERENDERER_SETPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1EA87230)
#define UNITYENGINE_LINERENDERER_SETPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EA86FD0)
#define UNITYENGINE_LINERENDERER_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1EA86FC0)
#define UNITYENGINE_LINERENDERER_SETVERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1EA86D90)
#define UNITYENGINE_LINERENDERER_SETWIDTHCURVE_OFFSET UNITYSDK_OFFSET(0x1EA87170)
#define UNITYENGINE_LINERENDERER_SETWIDTHMULTIPLIERTHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1EA871F0)
#define UNITYENGINE_LINERENDERER_SETWIDTHMULTIPLIERTHREAD_OFFSET UNITYSDK_OFFSET(0x1EA871E0)
#define UNITYENGINE_LINERENDERER_SETWIDTH_OFFSET UNITYSDK_OFFSET(0x1EA86CE0)
#define UNITYENGINE_LINERENDERER_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1EA870B0)
#define UNITYENGINE_LINERENDERER_SET_COLORGRADIENT_OFFSET UNITYSDK_OFFSET(0x1EA871A0)
#define UNITYENGINE_LINERENDERER_SET_ENDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EA86FB0)
#define UNITYENGINE_LINERENDERER_SET_ENDCOLOR_OFFSET UNITYSDK_OFFSET(0x1EA86D80)
#define UNITYENGINE_LINERENDERER_SET_ENDWIDTH_OFFSET UNITYSDK_OFFSET(0x1EA86D20)
#define UNITYENGINE_LINERENDERER_SET_GENERATELIGHTINGDATA_OFFSET UNITYSDK_OFFSET(0x1EA87070)
#define UNITYENGINE_LINERENDERER_SET_LOOP_OFFSET UNITYSDK_OFFSET(0x1EA86E90)
#define UNITYENGINE_LINERENDERER_SET_NUMCAPVERTICES_OFFSET UNITYSDK_OFFSET(0x1EA86E50)
#define UNITYENGINE_LINERENDERER_SET_NUMCORNERVERTICES_OFFSET UNITYSDK_OFFSET(0x1EA86E30)
#define UNITYENGINE_LINERENDERER_SET_NUMPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1EA86DD0)
#define UNITYENGINE_LINERENDERER_SET_POSITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1EA86DA0)
#define UNITYENGINE_LINERENDERER_SET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x1EA87050)
#define UNITYENGINE_LINERENDERER_SET_SORTINGFUDGE_OFFSET UNITYSDK_OFFSET(0x1EA870D0)
#define UNITYENGINE_LINERENDERER_SET_STARTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EA86F50)
#define UNITYENGINE_LINERENDERER_SET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x1EA86D70)
#define UNITYENGINE_LINERENDERER_SET_STARTWIDTH_OFFSET UNITYSDK_OFFSET(0x1EA86D10)
#define UNITYENGINE_LINERENDERER_SET_SUBDIVISIONDISTANCE_OFFSET UNITYSDK_OFFSET(0x1EA86ED0)
#define UNITYENGINE_LINERENDERER_SET_SUBDIVISIONMAXPOINTSPERSEGMENT_OFFSET UNITYSDK_OFFSET(0x1EA86EF0)
#define UNITYENGINE_LINERENDERER_SET_SUBDIVISIONMODE_OFFSET UNITYSDK_OFFSET(0x1EA86EB0)
#define UNITYENGINE_LINERENDERER_SET_TEXTUREMODE_OFFSET UNITYSDK_OFFSET(0x1EA87090)
#define UNITYENGINE_LINERENDERER_SET_USEWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x1EA86E70)
#define UNITYENGINE_LINERENDERER_SET_WIDTHCURVE_OFFSET UNITYSDK_OFFSET(0x1EA87160)
#define UNITYENGINE_LINERENDERER_SET_WIDTHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1EA86E10)
#define UNITYENGINE_LINERENDERER_SIMPLIFY_OFFSET UNITYSDK_OFFSET(0x1EA870E0)
#define UNITYENGINE_LINERENDERER_VISIBLELINEPREFABSQUERY_OFFSET UNITYSDK_OFFSET(0x1EA871D0)
#define UNITYENGINE_LINERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA87240)

namespace UnityEngine
{
	inline static constexpr unsigned int LineRenderer_TypeDefinitionIndex = 5195;

	class LineRenderer : public ::UnityEngine::Renderer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER__CTOR_OFFSET))(this);
		}

		::System::Void SetWidth(::System::Single start, ::System::Single end)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETWIDTH_OFFSET))(this, start, end);
		}

		::System::Void SetColors(::UnityEngine::Color start, ::UnityEngine::Color end)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETCOLORS_OFFSET))(this, start, end);
		}

		::System::Void SetVertexCount(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETVERTEXCOUNT_OFFSET))(this, count);
		}

		::System::Int32 get_numPositions()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_NUMPOSITIONS_OFFSET))(this);
		}

		::System::Void set_numPositions(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_NUMPOSITIONS_OFFSET))(this, value);
		}

		::System::Single get_startWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_STARTWIDTH_OFFSET))(this);
		}

		::System::Void set_startWidth(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_STARTWIDTH_OFFSET))(this, value);
		}

		::System::Single get_endWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_ENDWIDTH_OFFSET))(this);
		}

		::System::Void set_endWidth(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_ENDWIDTH_OFFSET))(this, value);
		}

		::System::Single get_widthMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_WIDTHMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_widthMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_WIDTHMULTIPLIER_OFFSET))(this, value);
		}

		::System::Int32 get_numCornerVertices()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_NUMCORNERVERTICES_OFFSET))(this);
		}

		::System::Void set_numCornerVertices(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_NUMCORNERVERTICES_OFFSET))(this, value);
		}

		::System::Int32 get_numCapVertices()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_NUMCAPVERTICES_OFFSET))(this);
		}

		::System::Void set_numCapVertices(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_NUMCAPVERTICES_OFFSET))(this, value);
		}

		::System::Boolean get_useWorldSpace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_USEWORLDSPACE_OFFSET))(this);
		}

		::System::Void set_useWorldSpace(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_USEWORLDSPACE_OFFSET))(this, value);
		}

		::System::Boolean get_loop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_LOOP_OFFSET))(this);
		}

		::System::Void set_loop(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_LOOP_OFFSET))(this, value);
		}

		::UnityEngine::LineRenderer_SubdivisionMode get_subdivisionMode()
		{
			return ((::UnityEngine::LineRenderer_SubdivisionMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_SUBDIVISIONMODE_OFFSET))(this);
		}

		::System::Void set_subdivisionMode(::UnityEngine::LineRenderer_SubdivisionMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LineRenderer_SubdivisionMode))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_SUBDIVISIONMODE_OFFSET))(this, value);
		}

		::System::Int32 get_subdivisionDistance()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_SUBDIVISIONDISTANCE_OFFSET))(this);
		}

		::System::Void set_subdivisionDistance(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_SUBDIVISIONDISTANCE_OFFSET))(this, value);
		}

		::System::Int32 get_subdivisionMaxPointsPerSegment()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_SUBDIVISIONMAXPOINTSPERSEGMENT_OFFSET))(this);
		}

		::System::Void set_subdivisionMaxPointsPerSegment(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_SUBDIVISIONMAXPOINTSPERSEGMENT_OFFSET))(this, value);
		}

		::UnityEngine::Color get_startColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_STARTCOLOR_OFFSET))(this);
		}

		::System::Void set_startColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_STARTCOLOR_OFFSET))(this, value);
		}

		::UnityEngine::Color get_endColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_ENDCOLOR_OFFSET))(this);
		}

		::System::Void set_endColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_ENDCOLOR_OFFSET))(this, value);
		}

		::System::Int32 get_positionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_POSITIONCOUNT_OFFSET))(this);
		}

		::System::Void set_positionCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_POSITIONCOUNT_OFFSET))(this, value);
		}

		::System::Void SetPosition(::System::Int32 index, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETPOSITION_OFFSET))(this, index, position);
		}

		::UnityEngine::Vector3 GetPosition(::System::Int32 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GETPOSITION_OFFSET))(this, index);
		}

		::System::Single get_shadowBias()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_SHADOWBIAS_OFFSET))(this);
		}

		::System::Void set_shadowBias(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_SHADOWBIAS_OFFSET))(this, value);
		}

		::System::Boolean get_generateLightingData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_GENERATELIGHTINGDATA_OFFSET))(this);
		}

		::System::Void set_generateLightingData(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_GENERATELIGHTINGDATA_OFFSET))(this, value);
		}

		::UnityEngine::LineTextureMode get_textureMode()
		{
			return ((::UnityEngine::LineTextureMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_TEXTUREMODE_OFFSET))(this);
		}

		::System::Void set_textureMode(::UnityEngine::LineTextureMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LineTextureMode))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_TEXTUREMODE_OFFSET))(this, value);
		}

		::UnityEngine::LineAlignment get_alignment()
		{
			return ((::UnityEngine::LineAlignment(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_ALIGNMENT_OFFSET))(this);
		}

		::System::Void set_alignment(::UnityEngine::LineAlignment value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LineAlignment))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_ALIGNMENT_OFFSET))(this, value);
		}

		::System::Single get_sortingFudge()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_SORTINGFUDGE_OFFSET))(this);
		}

		::System::Void set_sortingFudge(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_SORTINGFUDGE_OFFSET))(this, value);
		}

		::System::Void Simplify(::System::Single tolerance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SIMPLIFY_OFFSET))(this, tolerance);
		}

		::System::Void BakeMesh(::UnityEngine::Mesh* mesh, ::System::Boolean useTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_BAKEMESH_OFFSET))(this, mesh, useTransform);
		}

		::System::Void BakeMesh_1(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, ::System::Boolean useTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_BAKEMESH_1_OFFSET))(this, mesh, camera, useTransform);
		}

		::UnityEngine::AnimationCurve* get_widthCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_WIDTHCURVE_OFFSET))(this);
		}

		::System::Void set_widthCurve(::UnityEngine::AnimationCurve* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_WIDTHCURVE_OFFSET))(this, value);
		}

		::UnityEngine::Gradient* get_colorGradient()
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_COLORGRADIENT_OFFSET))(this);
		}

		::System::Void set_colorGradient(::UnityEngine::Gradient* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_COLORGRADIENT_OFFSET))(this, value);
		}

		::UnityEngine::AnimationCurve* GetWidthCurveCopy()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GETWIDTHCURVECOPY_OFFSET))(this);
		}

		::System::Void SetWidthCurve(::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETWIDTHCURVE_OFFSET))(this, curve);
		}

		::UnityEngine::Gradient* GetColorGradientCopy()
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GETCOLORGRADIENTCOPY_OFFSET))(this);
		}

		::System::Void SetColorGradient(::UnityEngine::Gradient* curve)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETCOLORGRADIENT_OFFSET))(this, curve);
		}

		static ::System::Void ResetVisibleLinePrefabsQuery()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_RESETVISIBLELINEPREFABSQUERY_OFFSET))();
		}

		static ::Il2CppArray<::UnityEngine::GameObject*>* VisibleLinePrefabsQuery()
		{
			return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_VISIBLELINEPREFABSQUERY_OFFSET))();
		}

		::System::Void SetWidthMultiplierThread(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETWIDTHMULTIPLIERTHREAD_OFFSET))(this, v);
		}

		::System::Single GetWidthMultiplierThread()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GETWIDTHMULTIPLIERTHREAD_OFFSET))(this);
		}

		static ::System::Void SetWidthMultiplierThreadInternal(::UnityEngine::LineRenderer* self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::LineRenderer*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETWIDTHMULTIPLIERTHREADINTERNAL_OFFSET))(self, value);
		}

		static ::System::Single GetWidthMultiplierThreadInternal(::UnityEngine::LineRenderer* self)
		{
			return ((::System::Single(*)(::UnityEngine::LineRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GETWIDTHMULTIPLIERTHREADINTERNAL_OFFSET))(self);
		}

		::System::Int32 GetPositions(::Il2CppArray<::UnityEngine::Vector3>* positions)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GETPOSITIONS_OFFSET))(this, positions);
		}

		::System::Void SetPositions(::Il2CppArray<::UnityEngine::Vector3>* positions)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETPOSITIONS_OFFSET))(this, positions);
		}

		::System::Void get_startColor_Injected(::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_STARTCOLOR_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_startColor_Injected(::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_STARTCOLOR_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_endColor_Injected(::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GET_ENDCOLOR_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_endColor_Injected(::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SET_ENDCOLOR_INJECTED_OFFSET))(this, value);
		}

		::System::Void SetPosition_Injected(::System::Int32 index, ::UnityEngine::Vector3& position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_SETPOSITION_INJECTED_OFFSET))(this, index, position);
		}

		::System::Void GetPosition_Injected(::System::Int32 index, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_LINERENDERER_GETPOSITION_INJECTED_OFFSET))(this, index, ret);
		}
	};
}
