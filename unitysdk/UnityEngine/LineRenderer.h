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

#define UNITYENGINE_LINERENDERER_BAKEMESH_1_OFFSET UNITYSDK_OFFSET(0x1B39BDF0)
#define UNITYENGINE_LINERENDERER_BAKEMESH_OFFSET UNITYSDK_OFFSET(0x1B39BDB0)
#define UNITYENGINE_LINERENDERER_GETCOLORGRADIENTCOPY_OFFSET UNITYSDK_OFFSET(0x1B39BE50)
#define UNITYENGINE_LINERENDERER_GETPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1B39BEE0)
#define UNITYENGINE_LINERENDERER_GETPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B39BCF0)
#define UNITYENGINE_LINERENDERER_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1B39BCA0)
#define UNITYENGINE_LINERENDERER_GETWIDTHCURVECOPY_OFFSET UNITYSDK_OFFSET(0x1B39BE10)
#define UNITYENGINE_LINERENDERER_GETWIDTHMULTIPLIERTHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B39BED0)
#define UNITYENGINE_LINERENDERER_GETWIDTHMULTIPLIERTHREAD_OFFSET UNITYSDK_OFFSET(0x1B39BEC0)
#define UNITYENGINE_LINERENDERER_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1B39BD60)
#define UNITYENGINE_LINERENDERER_GET_COLORGRADIENT_OFFSET UNITYSDK_OFFSET(0x1B39BE40)
#define UNITYENGINE_LINERENDERER_GET_ENDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B39BC60)
#define UNITYENGINE_LINERENDERER_GET_ENDCOLOR_OFFSET UNITYSDK_OFFSET(0x1B39BC20)
#define UNITYENGINE_LINERENDERER_GET_ENDWIDTH_OFFSET UNITYSDK_OFFSET(0x1B39BAB0)
#define UNITYENGINE_LINERENDERER_GET_GENERATELIGHTINGDATA_OFFSET UNITYSDK_OFFSET(0x1B39BD20)
#define UNITYENGINE_LINERENDERER_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x1B39BB40)
#define UNITYENGINE_LINERENDERER_GET_NUMCAPVERTICES_OFFSET UNITYSDK_OFFSET(0x1B39BB00)
#define UNITYENGINE_LINERENDERER_GET_NUMCORNERVERTICES_OFFSET UNITYSDK_OFFSET(0x1B39BAE0)
#define UNITYENGINE_LINERENDERER_GET_NUMPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1B39BA70)
#define UNITYENGINE_LINERENDERER_GET_POSITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1B39BA80)
#define UNITYENGINE_LINERENDERER_GET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x1B39BD00)
#define UNITYENGINE_LINERENDERER_GET_SORTINGFUDGE_OFFSET UNITYSDK_OFFSET(0x1B39BD80)
#define UNITYENGINE_LINERENDERER_GET_STARTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B39BC00)
#define UNITYENGINE_LINERENDERER_GET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x1B39BBC0)
#define UNITYENGINE_LINERENDERER_GET_STARTWIDTH_OFFSET UNITYSDK_OFFSET(0x1B39BAA0)
#define UNITYENGINE_LINERENDERER_GET_SUBDIVISIONDISTANCE_OFFSET UNITYSDK_OFFSET(0x1B39BB80)
#define UNITYENGINE_LINERENDERER_GET_SUBDIVISIONMAXPOINTSPERSEGMENT_OFFSET UNITYSDK_OFFSET(0x1B39BBA0)
#define UNITYENGINE_LINERENDERER_GET_SUBDIVISIONMODE_OFFSET UNITYSDK_OFFSET(0x1B39BB60)
#define UNITYENGINE_LINERENDERER_GET_TEXTUREMODE_OFFSET UNITYSDK_OFFSET(0x1B39BD40)
#define UNITYENGINE_LINERENDERER_GET_USEWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x1B39BB20)
#define UNITYENGINE_LINERENDERER_GET_WIDTHCURVE_OFFSET UNITYSDK_OFFSET(0x1B39BE00)
#define UNITYENGINE_LINERENDERER_GET_WIDTHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1B39BAC0)
#define UNITYENGINE_LINERENDERER_RESETVISIBLELINEPREFABSQUERY_OFFSET UNITYSDK_OFFSET(0x1B39BE80)
#define UNITYENGINE_LINERENDERER_SETCOLORGRADIENT_OFFSET UNITYSDK_OFFSET(0x1B39BE70)
#define UNITYENGINE_LINERENDERER_SETCOLORS_OFFSET UNITYSDK_OFFSET(0x1B39B9F0)
#define UNITYENGINE_LINERENDERER_SETPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1B39BEF0)
#define UNITYENGINE_LINERENDERER_SETPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B39BC90)
#define UNITYENGINE_LINERENDERER_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1B39BC80)
#define UNITYENGINE_LINERENDERER_SETVERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1B39BA50)
#define UNITYENGINE_LINERENDERER_SETWIDTHCURVE_OFFSET UNITYSDK_OFFSET(0x1B39BE30)
#define UNITYENGINE_LINERENDERER_SETWIDTHMULTIPLIERTHREADINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B39BEB0)
#define UNITYENGINE_LINERENDERER_SETWIDTHMULTIPLIERTHREAD_OFFSET UNITYSDK_OFFSET(0x1B39BEA0)
#define UNITYENGINE_LINERENDERER_SETWIDTH_OFFSET UNITYSDK_OFFSET(0x1B39B9A0)
#define UNITYENGINE_LINERENDERER_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1B39BD70)
#define UNITYENGINE_LINERENDERER_SET_COLORGRADIENT_OFFSET UNITYSDK_OFFSET(0x1B39BE60)
#define UNITYENGINE_LINERENDERER_SET_ENDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B39BC70)
#define UNITYENGINE_LINERENDERER_SET_ENDCOLOR_OFFSET UNITYSDK_OFFSET(0x1B39BA40)
#define UNITYENGINE_LINERENDERER_SET_ENDWIDTH_OFFSET UNITYSDK_OFFSET(0x1B39B9E0)
#define UNITYENGINE_LINERENDERER_SET_GENERATELIGHTINGDATA_OFFSET UNITYSDK_OFFSET(0x1B39BD30)
#define UNITYENGINE_LINERENDERER_SET_LOOP_OFFSET UNITYSDK_OFFSET(0x1B39BB50)
#define UNITYENGINE_LINERENDERER_SET_NUMCAPVERTICES_OFFSET UNITYSDK_OFFSET(0x1B39BB10)
#define UNITYENGINE_LINERENDERER_SET_NUMCORNERVERTICES_OFFSET UNITYSDK_OFFSET(0x1B39BAF0)
#define UNITYENGINE_LINERENDERER_SET_NUMPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1B39BA90)
#define UNITYENGINE_LINERENDERER_SET_POSITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1B39BA60)
#define UNITYENGINE_LINERENDERER_SET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x1B39BD10)
#define UNITYENGINE_LINERENDERER_SET_SORTINGFUDGE_OFFSET UNITYSDK_OFFSET(0x1B39BD90)
#define UNITYENGINE_LINERENDERER_SET_STARTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B39BC10)
#define UNITYENGINE_LINERENDERER_SET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x1B39BA30)
#define UNITYENGINE_LINERENDERER_SET_STARTWIDTH_OFFSET UNITYSDK_OFFSET(0x1B39B9D0)
#define UNITYENGINE_LINERENDERER_SET_SUBDIVISIONDISTANCE_OFFSET UNITYSDK_OFFSET(0x1B39BB90)
#define UNITYENGINE_LINERENDERER_SET_SUBDIVISIONMAXPOINTSPERSEGMENT_OFFSET UNITYSDK_OFFSET(0x1B39BBB0)
#define UNITYENGINE_LINERENDERER_SET_SUBDIVISIONMODE_OFFSET UNITYSDK_OFFSET(0x1B39BB70)
#define UNITYENGINE_LINERENDERER_SET_TEXTUREMODE_OFFSET UNITYSDK_OFFSET(0x1B39BD50)
#define UNITYENGINE_LINERENDERER_SET_USEWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x1B39BB30)
#define UNITYENGINE_LINERENDERER_SET_WIDTHCURVE_OFFSET UNITYSDK_OFFSET(0x1B39BE20)
#define UNITYENGINE_LINERENDERER_SET_WIDTHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1B39BAD0)
#define UNITYENGINE_LINERENDERER_SIMPLIFY_OFFSET UNITYSDK_OFFSET(0x1B39BDA0)
#define UNITYENGINE_LINERENDERER_VISIBLELINEPREFABSQUERY_OFFSET UNITYSDK_OFFSET(0x1B39BE90)
#define UNITYENGINE_LINERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B39BF00)

namespace UnityEngine
{
	inline static constexpr unsigned int LineRenderer_TypeDefinitionIndex = 5196;

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
