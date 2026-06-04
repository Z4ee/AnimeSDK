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

#define UNITYENGINE_TRAILRENDERER_ADDPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1B2E0670)
#define UNITYENGINE_TRAILRENDERER_ADDPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E0660)
#define UNITYENGINE_TRAILRENDERER_ADDPOSITION_OFFSET UNITYSDK_OFFSET(0x1B2E0650)
#define UNITYENGINE_TRAILRENDERER_BAKEMESH_1_OFFSET UNITYSDK_OFFSET(0x1B2E05A0)
#define UNITYENGINE_TRAILRENDERER_BAKEMESH_OFFSET UNITYSDK_OFFSET(0x1B2E0560)
#define UNITYENGINE_TRAILRENDERER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B2E0550)
#define UNITYENGINE_TRAILRENDERER_GETCOLORGRADIENTCOPY_OFFSET UNITYSDK_OFFSET(0x1B2E0600)
#define UNITYENGINE_TRAILRENDERER_GETPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1B2E0630)
#define UNITYENGINE_TRAILRENDERER_GETPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E04C0)
#define UNITYENGINE_TRAILRENDERER_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1B2E0470)
#define UNITYENGINE_TRAILRENDERER_GETWIDTHCURVECOPY_OFFSET UNITYSDK_OFFSET(0x1B2E05C0)
#define UNITYENGINE_TRAILRENDERER_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1B2E0530)
#define UNITYENGINE_TRAILRENDERER_GET_AUTODESTRUCT_OFFSET UNITYSDK_OFFSET(0x1B2E02D0)
#define UNITYENGINE_TRAILRENDERER_GET_COLORGRADIENT_OFFSET UNITYSDK_OFFSET(0x1B2E05F0)
#define UNITYENGINE_TRAILRENDERER_GET_EMITTING_OFFSET UNITYSDK_OFFSET(0x1B2E02F0)
#define UNITYENGINE_TRAILRENDERER_GET_ENDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E0420)
#define UNITYENGINE_TRAILRENDERER_GET_ENDCOLOR_OFFSET UNITYSDK_OFFSET(0x1B2E03E0)
#define UNITYENGINE_TRAILRENDERER_GET_ENDWIDTH_OFFSET UNITYSDK_OFFSET(0x1B2E0290)
#define UNITYENGINE_TRAILRENDERER_GET_GENERATELIGHTINGDATA_OFFSET UNITYSDK_OFFSET(0x1B2E04F0)
#define UNITYENGINE_TRAILRENDERER_GET_MINVERTEXDISTANCE_OFFSET UNITYSDK_OFFSET(0x1B2E0350)
#define UNITYENGINE_TRAILRENDERER_GET_NUMCAPVERTICES_OFFSET UNITYSDK_OFFSET(0x1B2E0330)
#define UNITYENGINE_TRAILRENDERER_GET_NUMCORNERVERTICES_OFFSET UNITYSDK_OFFSET(0x1B2E0310)
#define UNITYENGINE_TRAILRENDERER_GET_NUMPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1B2E0230)
#define UNITYENGINE_TRAILRENDERER_GET_POSITIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1B2E0240)
#define UNITYENGINE_TRAILRENDERER_GET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x1B2E04D0)
#define UNITYENGINE_TRAILRENDERER_GET_STARTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E03B0)
#define UNITYENGINE_TRAILRENDERER_GET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x1B2E0370)
#define UNITYENGINE_TRAILRENDERER_GET_STARTWIDTH_OFFSET UNITYSDK_OFFSET(0x1B2E0270)
#define UNITYENGINE_TRAILRENDERER_GET_TEXTUREMODE_OFFSET UNITYSDK_OFFSET(0x1B2E0510)
#define UNITYENGINE_TRAILRENDERER_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1B2E0250)
#define UNITYENGINE_TRAILRENDERER_GET_WIDTHCURVE_OFFSET UNITYSDK_OFFSET(0x1B2E05B0)
#define UNITYENGINE_TRAILRENDERER_GET_WIDTHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1B2E02B0)
#define UNITYENGINE_TRAILRENDERER_MOVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E0690)
#define UNITYENGINE_TRAILRENDERER_MOVE_OFFSET UNITYSDK_OFFSET(0x1B2E0680)
#define UNITYENGINE_TRAILRENDERER_SETCOLORGRADIENT_OFFSET UNITYSDK_OFFSET(0x1B2E0620)
#define UNITYENGINE_TRAILRENDERER_SETPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1B2E0640)
#define UNITYENGINE_TRAILRENDERER_SETPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E0460)
#define UNITYENGINE_TRAILRENDERER_SETPOSITION_OFFSET UNITYSDK_OFFSET(0x1B2E0450)
#define UNITYENGINE_TRAILRENDERER_SETWIDTHCURVE_OFFSET UNITYSDK_OFFSET(0x1B2E05E0)
#define UNITYENGINE_TRAILRENDERER_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1B2E0540)
#define UNITYENGINE_TRAILRENDERER_SET_AUTODESTRUCT_OFFSET UNITYSDK_OFFSET(0x1B2E02E0)
#define UNITYENGINE_TRAILRENDERER_SET_COLORGRADIENT_OFFSET UNITYSDK_OFFSET(0x1B2E0610)
#define UNITYENGINE_TRAILRENDERER_SET_EMITTING_OFFSET UNITYSDK_OFFSET(0x1B2E0300)
#define UNITYENGINE_TRAILRENDERER_SET_ENDCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E0440)
#define UNITYENGINE_TRAILRENDERER_SET_ENDCOLOR_OFFSET UNITYSDK_OFFSET(0x1B2E0430)
#define UNITYENGINE_TRAILRENDERER_SET_ENDWIDTH_OFFSET UNITYSDK_OFFSET(0x1B2E02A0)
#define UNITYENGINE_TRAILRENDERER_SET_GENERATELIGHTINGDATA_OFFSET UNITYSDK_OFFSET(0x1B2E0500)
#define UNITYENGINE_TRAILRENDERER_SET_MINVERTEXDISTANCE_OFFSET UNITYSDK_OFFSET(0x1B2E0360)
#define UNITYENGINE_TRAILRENDERER_SET_NUMCAPVERTICES_OFFSET UNITYSDK_OFFSET(0x1B2E0340)
#define UNITYENGINE_TRAILRENDERER_SET_NUMCORNERVERTICES_OFFSET UNITYSDK_OFFSET(0x1B2E0320)
#define UNITYENGINE_TRAILRENDERER_SET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x1B2E04E0)
#define UNITYENGINE_TRAILRENDERER_SET_STARTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E03D0)
#define UNITYENGINE_TRAILRENDERER_SET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x1B2E03C0)
#define UNITYENGINE_TRAILRENDERER_SET_STARTWIDTH_OFFSET UNITYSDK_OFFSET(0x1B2E0280)
#define UNITYENGINE_TRAILRENDERER_SET_TEXTUREMODE_OFFSET UNITYSDK_OFFSET(0x1B2E0520)
#define UNITYENGINE_TRAILRENDERER_SET_TIME_OFFSET UNITYSDK_OFFSET(0x1B2E0260)
#define UNITYENGINE_TRAILRENDERER_SET_WIDTHCURVE_OFFSET UNITYSDK_OFFSET(0x1B2E05D0)
#define UNITYENGINE_TRAILRENDERER_SET_WIDTHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1B2E02C0)
#define UNITYENGINE_TRAILRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2E06A0)

namespace UnityEngine
{
	inline static constexpr unsigned int TrailRenderer_TypeDefinitionIndex = 4118;

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

		::System::Void set_time(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_TIME_OFFSET))(this, a1);
		}

		::System::Single get_startWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_STARTWIDTH_OFFSET))(this);
		}

		::System::Void set_startWidth(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_STARTWIDTH_OFFSET))(this, a1);
		}

		::System::Single get_endWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_ENDWIDTH_OFFSET))(this);
		}

		::System::Void set_endWidth(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_ENDWIDTH_OFFSET))(this, a1);
		}

		::System::Single get_widthMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_WIDTHMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_widthMultiplier(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_WIDTHMULTIPLIER_OFFSET))(this, a1);
		}

		::System::Boolean get_autodestruct()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_AUTODESTRUCT_OFFSET))(this);
		}

		::System::Void set_autodestruct(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_AUTODESTRUCT_OFFSET))(this, a1);
		}

		::System::Boolean get_emitting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_EMITTING_OFFSET))(this);
		}

		::System::Void set_emitting(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_EMITTING_OFFSET))(this, a1);
		}

		::System::Int32 get_numCornerVertices()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_NUMCORNERVERTICES_OFFSET))(this);
		}

		::System::Void set_numCornerVertices(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_NUMCORNERVERTICES_OFFSET))(this, a1);
		}

		::System::Int32 get_numCapVertices()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_NUMCAPVERTICES_OFFSET))(this);
		}

		::System::Void set_numCapVertices(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_NUMCAPVERTICES_OFFSET))(this, a1);
		}

		::System::Single get_minVertexDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_MINVERTEXDISTANCE_OFFSET))(this);
		}

		::System::Void set_minVertexDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_MINVERTEXDISTANCE_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_startColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_STARTCOLOR_OFFSET))(this);
		}

		::System::Void set_startColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_STARTCOLOR_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_endColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_ENDCOLOR_OFFSET))(this);
		}

		::System::Void set_endColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_ENDCOLOR_OFFSET))(this, a1);
		}

		::System::Int32 get_positionCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_POSITIONCOUNT_OFFSET))(this);
		}

		::System::Void SetPosition(::System::Int32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SETPOSITION_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 GetPosition(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GETPOSITION_OFFSET))(this, a1);
		}

		::System::Single get_shadowBias()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_SHADOWBIAS_OFFSET))(this);
		}

		::System::Void set_shadowBias(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_SHADOWBIAS_OFFSET))(this, a1);
		}

		::System::Boolean get_generateLightingData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_GENERATELIGHTINGDATA_OFFSET))(this);
		}

		::System::Void set_generateLightingData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_GENERATELIGHTINGDATA_OFFSET))(this, a1);
		}

		::UnityEngine::LineTextureMode get_textureMode()
		{
			return ((::UnityEngine::LineTextureMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_TEXTUREMODE_OFFSET))(this);
		}

		::System::Void set_textureMode(::UnityEngine::LineTextureMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LineTextureMode))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_TEXTUREMODE_OFFSET))(this, a1);
		}

		::UnityEngine::LineAlignment get_alignment()
		{
			return ((::UnityEngine::LineAlignment(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_ALIGNMENT_OFFSET))(this);
		}

		::System::Void set_alignment(::UnityEngine::LineAlignment a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LineAlignment))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_ALIGNMENT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_CLEAR_OFFSET))(this);
		}

		::System::Void BakeMesh(::UnityEngine::Mesh* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_BAKEMESH_OFFSET))(this, a1, a2);
		}

		::System::Void BakeMesh_1(::UnityEngine::Mesh* a1, ::UnityEngine::Camera* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_BAKEMESH_1_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::AnimationCurve* get_widthCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_WIDTHCURVE_OFFSET))(this);
		}

		::System::Void set_widthCurve(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_WIDTHCURVE_OFFSET))(this, a1);
		}

		::UnityEngine::Gradient* get_colorGradient()
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_COLORGRADIENT_OFFSET))(this);
		}

		::System::Void set_colorGradient(::UnityEngine::Gradient* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_COLORGRADIENT_OFFSET))(this, a1);
		}

		::UnityEngine::AnimationCurve* GetWidthCurveCopy()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GETWIDTHCURVECOPY_OFFSET))(this);
		}

		::System::Void SetWidthCurve(::UnityEngine::AnimationCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SETWIDTHCURVE_OFFSET))(this, a1);
		}

		::UnityEngine::Gradient* GetColorGradientCopy()
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GETCOLORGRADIENTCOPY_OFFSET))(this);
		}

		::System::Void SetColorGradient(::UnityEngine::Gradient* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SETCOLORGRADIENT_OFFSET))(this, a1);
		}

		::System::Int32 GetPositions(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GETPOSITIONS_OFFSET))(this, a1);
		}

		::System::Void SetPositions(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SETPOSITIONS_OFFSET))(this, a1);
		}

		::System::Void AddPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_ADDPOSITION_OFFSET))(this, a1);
		}

		::System::Void AddPositions(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_ADDPOSITIONS_OFFSET))(this, a1);
		}

		::System::Void Move(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_MOVE_OFFSET))(this, a1);
		}

		::System::Void get_startColor_Injected(::UnityEngine::Color& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_STARTCOLOR_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_startColor_Injected(::UnityEngine::Color& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_STARTCOLOR_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_endColor_Injected(::UnityEngine::Color& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GET_ENDCOLOR_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_endColor_Injected(::UnityEngine::Color& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SET_ENDCOLOR_INJECTED_OFFSET))(this, a1);
		}

		::System::Void SetPosition_Injected(::System::Int32 a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_SETPOSITION_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void GetPosition_Injected(::System::Int32 a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_GETPOSITION_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void AddPosition_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_ADDPOSITION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void Move_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_MOVE_INJECTED_OFFSET))(this, a1);
		}
	};
}
