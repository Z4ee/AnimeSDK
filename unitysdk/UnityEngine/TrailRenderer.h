#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LineAlignment.h"
#include "unitysdk/UnityEngine/LineTextureMode.h"
#include "unitysdk/UnityEngine/Renderer.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_TRAILRENDERER_ADDPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1A48FB50)
#define UNITYENGINE_TRAILRENDERER_ADDPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A48FB40)
#define UNITYENGINE_TRAILRENDERER_ADDPOSITION_OFFSET UNITYSDK_OFFSET(0x1A48FB30)
#define UNITYENGINE_TRAILRENDERER_BAKEMESH_1_OFFSET UNITYSDK_OFFSET(0x1A48FA80)
#define UNITYENGINE_TRAILRENDERER_BAKEMESH_OFFSET UNITYSDK_OFFSET(0x1A48FA40)
#define UNITYENGINE_TRAILRENDERER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A48FA30)
#define UNITYENGINE_TRAILRENDERER_GETCOLORGRADIENTCOPY_OFFSET UNITYSDK_OFFSET(0x1A48FAE0)
#define UNITYENGINE_TRAILRENDERER_GETPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1A48FB10)
#define UNITYENGINE_TRAILRENDERER_GETPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A48F9A0)
#define UNITYENGINE_TRAILRENDERER_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1A48F950)
#define UNITYENGINE_TRAILRENDERER_GETWIDTHCURVECOPY_OFFSET UNITYSDK_OFFSET(0x1A48FAA0)
#define UNITYENGINE_TRAILRENDERER_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1A48FA10)
#define UNITYENGINE_TRAILRENDERER_GET_AUTODESTRUCT_OFFSET UNITYSDK_OFFSET(0x1A48F7B0)
#define UNITYENGINE_TRAILRENDERER_GET_COLORGRADIENT_OFFSET UNITYSDK_OFFSET(0x1A48FAD0)
#define UNITYENGINE_TRAILRENDERER_GET_EMITTING_OFFSET UNITYSDK_OFFSET(0x1A48F7D0)
#define UNITYENGINE_TRAILRENDERER_GET_ENDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A48F900)
#define UNITYENGINE_TRAILRENDERER_GET_ENDCOLOR_OFFSET UNITYSDK_OFFSET(0x1A48F8C0)
#define UNITYENGINE_TRAILRENDERER_GET_ENDWIDTH_OFFSET UNITYSDK_OFFSET(0x1A48F770)
#define UNITYENGINE_TRAILRENDERER_GET_GENERATELIGHTINGDATA_OFFSET UNITYSDK_OFFSET(0x1A48F9D0)
#define UNITYENGINE_TRAILRENDERER_GET_MINVERTEXDISTANCE_OFFSET UNITYSDK_OFFSET(0x1A48F830)
#define UNITYENGINE_TRAILRENDERER_GET_NUMCAPVERTICES_OFFSET UNITYSDK_OFFSET(0x1A48F810)
#define UNITYENGINE_TRAILRENDERER_GET_NUMCORNERVERTICES_OFFSET UNITYSDK_OFFSET(0x1A48F7F0)
#define UNITYENGINE_TRAILRENDERER_GET_NUMPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1A48F710)
#define UNITYENGINE_TRAILRENDERER_GET_POSITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1A48F720)
#define UNITYENGINE_TRAILRENDERER_GET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x1A48F9B0)
#define UNITYENGINE_TRAILRENDERER_GET_STARTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A48F890)
#define UNITYENGINE_TRAILRENDERER_GET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x1A48F850)
#define UNITYENGINE_TRAILRENDERER_GET_STARTWIDTH_OFFSET UNITYSDK_OFFSET(0x1A48F750)
#define UNITYENGINE_TRAILRENDERER_GET_TEXTUREMODE_OFFSET UNITYSDK_OFFSET(0x1A48F9F0)
#define UNITYENGINE_TRAILRENDERER_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1A48F730)
#define UNITYENGINE_TRAILRENDERER_GET_WIDTHCURVE_OFFSET UNITYSDK_OFFSET(0x1A48FA90)
#define UNITYENGINE_TRAILRENDERER_GET_WIDTHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1A48F790)
#define UNITYENGINE_TRAILRENDERER_MOVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A48FB70)
#define UNITYENGINE_TRAILRENDERER_MOVE_OFFSET UNITYSDK_OFFSET(0x1A48FB60)
#define UNITYENGINE_TRAILRENDERER_SETCOLORGRADIENT_OFFSET UNITYSDK_OFFSET(0x1A48FB00)
#define UNITYENGINE_TRAILRENDERER_SETPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1A48FB20)
#define UNITYENGINE_TRAILRENDERER_SETPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A48F940)
#define UNITYENGINE_TRAILRENDERER_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1A48F930)
#define UNITYENGINE_TRAILRENDERER_SETWIDTHCURVE_OFFSET UNITYSDK_OFFSET(0x1A48FAC0)
#define UNITYENGINE_TRAILRENDERER_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1A48FA20)
#define UNITYENGINE_TRAILRENDERER_SET_AUTODESTRUCT_OFFSET UNITYSDK_OFFSET(0x1A48F7C0)
#define UNITYENGINE_TRAILRENDERER_SET_COLORGRADIENT_OFFSET UNITYSDK_OFFSET(0x1A48FAF0)
#define UNITYENGINE_TRAILRENDERER_SET_EMITTING_OFFSET UNITYSDK_OFFSET(0x1A48F7E0)
#define UNITYENGINE_TRAILRENDERER_SET_ENDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A48F920)
#define UNITYENGINE_TRAILRENDERER_SET_ENDCOLOR_OFFSET UNITYSDK_OFFSET(0x1A48F910)
#define UNITYENGINE_TRAILRENDERER_SET_ENDWIDTH_OFFSET UNITYSDK_OFFSET(0x1A48F780)
#define UNITYENGINE_TRAILRENDERER_SET_GENERATELIGHTINGDATA_OFFSET UNITYSDK_OFFSET(0x1A48F9E0)
#define UNITYENGINE_TRAILRENDERER_SET_MINVERTEXDISTANCE_OFFSET UNITYSDK_OFFSET(0x1A48F840)
#define UNITYENGINE_TRAILRENDERER_SET_NUMCAPVERTICES_OFFSET UNITYSDK_OFFSET(0x1A48F820)
#define UNITYENGINE_TRAILRENDERER_SET_NUMCORNERVERTICES_OFFSET UNITYSDK_OFFSET(0x1A48F800)
#define UNITYENGINE_TRAILRENDERER_SET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x1A48F9C0)
#define UNITYENGINE_TRAILRENDERER_SET_STARTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A48F8B0)
#define UNITYENGINE_TRAILRENDERER_SET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x1A48F8A0)
#define UNITYENGINE_TRAILRENDERER_SET_STARTWIDTH_OFFSET UNITYSDK_OFFSET(0x1A48F760)
#define UNITYENGINE_TRAILRENDERER_SET_TEXTUREMODE_OFFSET UNITYSDK_OFFSET(0x1A48FA00)
#define UNITYENGINE_TRAILRENDERER_SET_TIME_OFFSET UNITYSDK_OFFSET(0x1A48F740)
#define UNITYENGINE_TRAILRENDERER_SET_WIDTHCURVE_OFFSET UNITYSDK_OFFSET(0x1A48FAB0)
#define UNITYENGINE_TRAILRENDERER_SET_WIDTHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1A48F7A0)
#define UNITYENGINE_TRAILRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A48FB80)

namespace UnityEngine
{
	inline static constexpr unsigned int TrailRenderer_TypeDefinitionIndex = 3944;

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

		::System::Void SetPosition(::System::Int32 index, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SETPOSITION_OFFSET))(this, index, position);
		}

		::UnityEngine::Vector3 GetPosition(::System::Int32 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GETPOSITION_OFFSET))(this, index);
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

		::System::Int32 GetPositions(::Il2CppArray<::UnityEngine::Vector3>* positions)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GETPOSITIONS_OFFSET))(this, positions);
		}

		::System::Void SetPositions(::Il2CppArray<::UnityEngine::Vector3>* positions)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SETPOSITIONS_OFFSET))(this, positions);
		}

		::System::Void AddPosition(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_ADDPOSITION_OFFSET))(this, position);
		}

		::System::Void AddPositions(::Il2CppArray<::UnityEngine::Vector3>* positions)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_ADDPOSITIONS_OFFSET))(this, positions);
		}

		::System::Void Move(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_MOVE_OFFSET))(this, position);
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

		::System::Void SetPosition_Injected(::System::Int32 index, ::UnityEngine::Vector3& position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SETPOSITION_INJECTED_OFFSET))(this, index, position);
		}

		::System::Void GetPosition_Injected(::System::Int32 index, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GETPOSITION_INJECTED_OFFSET))(this, index, ret);
		}

		::System::Void AddPosition_Injected(::UnityEngine::Vector3& position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_ADDPOSITION_INJECTED_OFFSET))(this, position);
		}

		::System::Void Move_Injected(::UnityEngine::Vector3& position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_MOVE_INJECTED_OFFSET))(this, position);
		}
	};
}
