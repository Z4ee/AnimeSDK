#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ParticleSystemBakeMeshOptions.h"
#include "unitysdk/UnityEngine/ParticleSystemRenderMode.h"
#include "unitysdk/UnityEngine/ParticleSystemRenderSpace.h"
#include "unitysdk/UnityEngine/ParticleSystemSortMode.h"
#include "unitysdk/UnityEngine/ParticleSystemVertexStream.h"
#include "unitysdk/UnityEngine/ParticleSystemVertexStreams.h"
#include "unitysdk/UnityEngine/Renderer.h"
#include "unitysdk/UnityEngine/SpriteMaskInteraction.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_PARTICLESYSTEMRENDERER_AREVERTEXSTREAMSENABLED_OFFSET UNITYSDK_OFFSET(0x1B321670)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_BAKEMESH_1_OFFSET UNITYSDK_OFFSET(0x1B322210)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_BAKEMESH_OFFSET UNITYSDK_OFFSET(0x1B3221D0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_BAKETRAILSMESH_1_OFFSET UNITYSDK_OFFSET(0x1B322260)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_BAKETRAILSMESH_OFFSET UNITYSDK_OFFSET(0x1B322220)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_DISABLEVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x1B321660)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_ENABLEVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x1B320780)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GETACTIVEVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x1B3218E0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GETENABLEDVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x1B3218C0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GETMESHES_OFFSET UNITYSDK_OFFSET(0x1B322170)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ACTIVEVERTEXSTREAMSCOUNT_OFFSET UNITYSDK_OFFSET(0x1B3218D0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1B321900)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ALLOWROLL_OFFSET UNITYSDK_OFFSET(0x1B321BE0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_APPLYPARTICLECOLOR_OFFSET UNITYSDK_OFFSET(0x1B3220C0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_CAMERAVELOCITYSCALE_OFFSET UNITYSDK_OFFSET(0x1B3219A0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD0_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B321C70)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD0_OFFSET UNITYSDK_OFFSET(0x1B321C20)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD1_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B321CF0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD1_OFFSET UNITYSDK_OFFSET(0x1B321CA0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD2_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B321D70)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD2_OFFSET UNITYSDK_OFFSET(0x1B321D20)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD3_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B321DF0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD3_OFFSET UNITYSDK_OFFSET(0x1B321DA0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD4_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B321E70)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD4_OFFSET UNITYSDK_OFFSET(0x1B321E20)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD5_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B321EF0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD5_OFFSET UNITYSDK_OFFSET(0x1B321EA0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD6_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B321F70)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD6_OFFSET UNITYSDK_OFFSET(0x1B321F20)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD7_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B321FF0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD7_OFFSET UNITYSDK_OFFSET(0x1B321FA0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ENABLEADVANCEDGPUINSTANCING_OFFSET UNITYSDK_OFFSET(0x1B321BC0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ENABLEGPUINSTANCING_OFFSET UNITYSDK_OFFSET(0x1B321BA0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ENABLETRAILMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B322080)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_FLIP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B321B30)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_FLIP_OFFSET UNITYSDK_OFFSET(0x1B321AE0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_LENGTHSCALE_OFFSET UNITYSDK_OFFSET(0x1B321960)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MASKINTERACTION_OFFSET UNITYSDK_OFFSET(0x1B321B60)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MAXPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x1B321A40)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MESHCOUNT_OFFSET UNITYSDK_OFFSET(0x1B3221C0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MESH_OFFSET UNITYSDK_OFFSET(0x1B322150)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MINPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x1B321A20)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_NORMALDIRECTION_OFFSET UNITYSDK_OFFSET(0x1B3219C0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_PARTICLECOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B322120)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_PARTICLECOLOR_OFFSET UNITYSDK_OFFSET(0x1B3220E0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_PIVOT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B321AB0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_PIVOT_OFFSET UNITYSDK_OFFSET(0x1B321A60)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_RENDERCAMERA_OFFSET UNITYSDK_OFFSET(0x1B3220A0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x1B321920)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ROTATIONXAXIS_OFFSET UNITYSDK_OFFSET(0x1B322020)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ROTATIONYAXIS_OFFSET UNITYSDK_OFFSET(0x1B322040)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ROTATIONZAXIS_OFFSET UNITYSDK_OFFSET(0x1B322060)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x1B3219E0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_SORTINGFUDGE_OFFSET UNITYSDK_OFFSET(0x1B321A00)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_SORTMODE_OFFSET UNITYSDK_OFFSET(0x1B321940)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_TRAILMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B321B80)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_USEOCTAGONSHAPE_OFFSET UNITYSDK_OFFSET(0x1B321C00)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_VELOCITYSCALE_OFFSET UNITYSDK_OFFSET(0x1B321980)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_INTERNAL_GETENABLEDVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x1B321690)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_INTERNAL_SETVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x1B320790)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SETACTIVEVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x1B3218F0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SETMESHES_1_OFFSET UNITYSDK_OFFSET(0x1B322190)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SETMESHES_OFFSET UNITYSDK_OFFSET(0x1B322180)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SETOVERRIDEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1B322290)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SETOVERRIDEWORLDAABB_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B322280)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SETOVERRIDEWORLDAABB_OFFSET UNITYSDK_OFFSET(0x1B322270)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1B321910)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ALLOWROLL_OFFSET UNITYSDK_OFFSET(0x1B321BF0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_APPLYPARTICLECOLOR_OFFSET UNITYSDK_OFFSET(0x1B3220D0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_CAMERAVELOCITYSCALE_OFFSET UNITYSDK_OFFSET(0x1B3219B0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD0_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B321C90)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD0_OFFSET UNITYSDK_OFFSET(0x1B321C80)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD1_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B321D10)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD1_OFFSET UNITYSDK_OFFSET(0x1B321D00)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD2_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B321D90)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD2_OFFSET UNITYSDK_OFFSET(0x1B321D80)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD3_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B321E10)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD3_OFFSET UNITYSDK_OFFSET(0x1B321E00)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD4_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B321E90)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD4_OFFSET UNITYSDK_OFFSET(0x1B321E80)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD5_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B321F10)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD5_OFFSET UNITYSDK_OFFSET(0x1B321F00)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD6_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B321F90)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD6_OFFSET UNITYSDK_OFFSET(0x1B321F80)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD7_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B322010)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD7_OFFSET UNITYSDK_OFFSET(0x1B322000)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ENABLEADVANCEDGPUINSTANCING_OFFSET UNITYSDK_OFFSET(0x1B321BD0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ENABLEGPUINSTANCING_OFFSET UNITYSDK_OFFSET(0x1B321BB0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ENABLETRAILMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B322090)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_FLIP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B321B50)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_FLIP_OFFSET UNITYSDK_OFFSET(0x1B321B40)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_LENGTHSCALE_OFFSET UNITYSDK_OFFSET(0x1B321970)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_MASKINTERACTION_OFFSET UNITYSDK_OFFSET(0x1B321B70)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_MAXPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x1B321A50)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_MESH_OFFSET UNITYSDK_OFFSET(0x1B322160)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_MINPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x1B321A30)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_NORMALDIRECTION_OFFSET UNITYSDK_OFFSET(0x1B3219D0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_PARTICLECOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B322140)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_PARTICLECOLOR_OFFSET UNITYSDK_OFFSET(0x1B322130)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_PIVOT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B321AD0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_PIVOT_OFFSET UNITYSDK_OFFSET(0x1B321AC0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_RENDERCAMERA_OFFSET UNITYSDK_OFFSET(0x1B3220B0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x1B321930)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ROTATIONXAXIS_OFFSET UNITYSDK_OFFSET(0x1B322030)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ROTATIONYAXIS_OFFSET UNITYSDK_OFFSET(0x1B322050)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ROTATIONZAXIS_OFFSET UNITYSDK_OFFSET(0x1B322070)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x1B3219F0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_SORTINGFUDGE_OFFSET UNITYSDK_OFFSET(0x1B321A10)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_SORTMODE_OFFSET UNITYSDK_OFFSET(0x1B321950)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_TRAILMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B321B90)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_USEOCTAGONSHAPE_OFFSET UNITYSDK_OFFSET(0x1B321C10)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_VELOCITYSCALE_OFFSET UNITYSDK_OFFSET(0x1B321990)
#define UNITYENGINE_PARTICLESYSTEMRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3222C0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemRenderer_TypeDefinitionIndex = 5792;

	class ParticleSystemRenderer : public ::UnityEngine::Renderer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER__CTOR_OFFSET))(this);
		}

		::System::Void EnableVertexStreams(::UnityEngine::ParticleSystemVertexStreams a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemVertexStreams))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_ENABLEVERTEXSTREAMS_OFFSET))(this, a1);
		}

		::System::Void DisableVertexStreams(::UnityEngine::ParticleSystemVertexStreams a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemVertexStreams))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_DISABLEVERTEXSTREAMS_OFFSET))(this, a1);
		}

		::System::Boolean AreVertexStreamsEnabled(::UnityEngine::ParticleSystemVertexStreams a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ParticleSystemVertexStreams))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_AREVERTEXSTREAMSENABLED_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemVertexStreams GetEnabledVertexStreams(::UnityEngine::ParticleSystemVertexStreams a1)
		{
			return ((::UnityEngine::ParticleSystemVertexStreams(*)(::PVOID, ::UnityEngine::ParticleSystemVertexStreams))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GETENABLEDVERTEXSTREAMS_OFFSET))(this, a1);
		}

		::System::Void Internal_SetVertexStreams(::UnityEngine::ParticleSystemVertexStreams a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemVertexStreams, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_INTERNAL_SETVERTEXSTREAMS_OFFSET))(this, a1, a2);
		}

		::UnityEngine::ParticleSystemVertexStreams Internal_GetEnabledVertexStreams(::UnityEngine::ParticleSystemVertexStreams a1)
		{
			return ((::UnityEngine::ParticleSystemVertexStreams(*)(::PVOID, ::UnityEngine::ParticleSystemVertexStreams))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_INTERNAL_GETENABLEDVERTEXSTREAMS_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemRenderSpace get_alignment()
		{
			return ((::UnityEngine::ParticleSystemRenderSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ALIGNMENT_OFFSET))(this);
		}

		::System::Void set_alignment(::UnityEngine::ParticleSystemRenderSpace a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemRenderSpace))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ALIGNMENT_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemRenderMode get_renderMode()
		{
			return ((::UnityEngine::ParticleSystemRenderMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_RENDERMODE_OFFSET))(this);
		}

		::System::Void set_renderMode(::UnityEngine::ParticleSystemRenderMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemRenderMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_RENDERMODE_OFFSET))(this, a1);
		}

		::UnityEngine::ParticleSystemSortMode get_sortMode()
		{
			return ((::UnityEngine::ParticleSystemSortMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_SORTMODE_OFFSET))(this);
		}

		::System::Void set_sortMode(::UnityEngine::ParticleSystemSortMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemSortMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_SORTMODE_OFFSET))(this, a1);
		}

		::System::Single get_lengthScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_LENGTHSCALE_OFFSET))(this);
		}

		::System::Void set_lengthScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_LENGTHSCALE_OFFSET))(this, a1);
		}

		::System::Single get_velocityScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_VELOCITYSCALE_OFFSET))(this);
		}

		::System::Void set_velocityScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_VELOCITYSCALE_OFFSET))(this, a1);
		}

		::System::Single get_cameraVelocityScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_CAMERAVELOCITYSCALE_OFFSET))(this);
		}

		::System::Void set_cameraVelocityScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_CAMERAVELOCITYSCALE_OFFSET))(this, a1);
		}

		::System::Single get_normalDirection()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_NORMALDIRECTION_OFFSET))(this);
		}

		::System::Void set_normalDirection(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_NORMALDIRECTION_OFFSET))(this, a1);
		}

		::System::Single get_shadowBias()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_SHADOWBIAS_OFFSET))(this);
		}

		::System::Void set_shadowBias(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_SHADOWBIAS_OFFSET))(this, a1);
		}

		::System::Single get_sortingFudge()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_SORTINGFUDGE_OFFSET))(this);
		}

		::System::Void set_sortingFudge(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_SORTINGFUDGE_OFFSET))(this, a1);
		}

		::System::Single get_minParticleSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MINPARTICLESIZE_OFFSET))(this);
		}

		::System::Void set_minParticleSize(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_MINPARTICLESIZE_OFFSET))(this, a1);
		}

		::System::Single get_maxParticleSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MAXPARTICLESIZE_OFFSET))(this);
		}

		::System::Void set_maxParticleSize(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_MAXPARTICLESIZE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_pivot()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_PIVOT_OFFSET))(this);
		}

		::System::Void set_pivot(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_PIVOT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_flip()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_FLIP_OFFSET))(this);
		}

		::System::Void set_flip(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_FLIP_OFFSET))(this, a1);
		}

		::UnityEngine::SpriteMaskInteraction get_maskInteraction()
		{
			return ((::UnityEngine::SpriteMaskInteraction(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MASKINTERACTION_OFFSET))(this);
		}

		::System::Void set_maskInteraction(::UnityEngine::SpriteMaskInteraction a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SpriteMaskInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_MASKINTERACTION_OFFSET))(this, a1);
		}

		::UnityEngine::Material* get_trailMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_TRAILMATERIAL_OFFSET))(this);
		}

		::System::Void set_trailMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_TRAILMATERIAL_OFFSET))(this, a1);
		}

		::System::Boolean get_enableGPUInstancing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ENABLEGPUINSTANCING_OFFSET))(this);
		}

		::System::Void set_enableGPUInstancing(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ENABLEGPUINSTANCING_OFFSET))(this, a1);
		}

		::System::Boolean get_enableAdvancedGPUInstancing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ENABLEADVANCEDGPUINSTANCING_OFFSET))(this);
		}

		::System::Void set_enableAdvancedGPUInstancing(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ENABLEADVANCEDGPUINSTANCING_OFFSET))(this, a1);
		}

		::System::Boolean get_allowRoll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ALLOWROLL_OFFSET))(this);
		}

		::System::Void set_allowRoll(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ALLOWROLL_OFFSET))(this, a1);
		}

		::System::Boolean get_useOctagonShape()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_USEOCTAGONSHAPE_OFFSET))(this);
		}

		::System::Void set_useOctagonShape(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_USEOCTAGONSHAPE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_coord0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD0_OFFSET))(this);
		}

		::System::Void set_coord0(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD0_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_coord1()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD1_OFFSET))(this);
		}

		::System::Void set_coord1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_coord2()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD2_OFFSET))(this);
		}

		::System::Void set_coord2(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD2_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_coord3()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD3_OFFSET))(this);
		}

		::System::Void set_coord3(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD3_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_coord4()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD4_OFFSET))(this);
		}

		::System::Void set_coord4(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD4_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_coord5()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD5_OFFSET))(this);
		}

		::System::Void set_coord5(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD5_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_coord6()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD6_OFFSET))(this);
		}

		::System::Void set_coord6(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD6_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_coord7()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD7_OFFSET))(this);
		}

		::System::Void set_coord7(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD7_OFFSET))(this, a1);
		}

		::System::Boolean get_rotationXAxis()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ROTATIONXAXIS_OFFSET))(this);
		}

		::System::Void set_rotationXAxis(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ROTATIONXAXIS_OFFSET))(this, a1);
		}

		::System::Boolean get_rotationYAxis()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ROTATIONYAXIS_OFFSET))(this);
		}

		::System::Void set_rotationYAxis(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ROTATIONYAXIS_OFFSET))(this, a1);
		}

		::System::Boolean get_rotationZAxis()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ROTATIONZAXIS_OFFSET))(this);
		}

		::System::Void set_rotationZAxis(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ROTATIONZAXIS_OFFSET))(this, a1);
		}

		::System::Boolean get_enableTrailMaterial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ENABLETRAILMATERIAL_OFFSET))(this);
		}

		::System::Void set_enableTrailMaterial(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ENABLETRAILMATERIAL_OFFSET))(this, a1);
		}

		::UnityEngine::Camera* get_renderCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_RENDERCAMERA_OFFSET))(this);
		}

		::System::Void set_renderCamera(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_RENDERCAMERA_OFFSET))(this, a1);
		}

		::System::Boolean get_applyParticleColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_APPLYPARTICLECOLOR_OFFSET))(this);
		}

		::System::Void set_applyParticleColor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_APPLYPARTICLECOLOR_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_particleColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_PARTICLECOLOR_OFFSET))(this);
		}

		::System::Void set_particleColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_PARTICLECOLOR_OFFSET))(this, a1);
		}

		::UnityEngine::Mesh* get_mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MESH_OFFSET))(this);
		}

		::System::Void set_mesh(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_MESH_OFFSET))(this, a1);
		}

		::System::Int32 GetMeshes(::Il2CppArray<::UnityEngine::Mesh*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Mesh*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GETMESHES_OFFSET))(this, a1);
		}

		::System::Void SetMeshes(::Il2CppArray<::UnityEngine::Mesh*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Mesh*>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SETMESHES_OFFSET))(this, a1, a2);
		}

		::System::Void SetMeshes_1(::Il2CppArray<::UnityEngine::Mesh*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Mesh*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SETMESHES_1_OFFSET))(this, a1);
		}

		::System::Int32 get_meshCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MESHCOUNT_OFFSET))(this);
		}

		::System::Void BakeMesh(::UnityEngine::Mesh* a1, ::UnityEngine::ParticleSystemBakeMeshOptions a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::ParticleSystemBakeMeshOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_BAKEMESH_OFFSET))(this, a1, a2);
		}

		::System::Void BakeMesh_1(::UnityEngine::Mesh* a1, ::UnityEngine::Camera* a2, ::UnityEngine::ParticleSystemBakeMeshOptions a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Camera*, ::UnityEngine::ParticleSystemBakeMeshOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_BAKEMESH_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BakeTrailsMesh(::UnityEngine::Mesh* a1, ::UnityEngine::ParticleSystemBakeMeshOptions a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::ParticleSystemBakeMeshOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_BAKETRAILSMESH_OFFSET))(this, a1, a2);
		}

		::System::Void BakeTrailsMesh_1(::UnityEngine::Mesh* a1, ::UnityEngine::Camera* a2, ::UnityEngine::ParticleSystemBakeMeshOptions a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Camera*, ::UnityEngine::ParticleSystemBakeMeshOptions))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_BAKETRAILSMESH_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_activeVertexStreamsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ACTIVEVERTEXSTREAMSCOUNT_OFFSET))(this);
		}

		::System::Void SetActiveVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SETACTIVEVERTEXSTREAMS_OFFSET))(this, a1);
		}

		::System::Void GetActiveVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GETACTIVEVERTEXSTREAMS_OFFSET))(this, a1);
		}

		::System::Void SetOverrideWorldAABB(::System::Boolean a1, ::UnityEngine::Bounds a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SETOVERRIDEWORLDAABB_OFFSET))(this, a1, a2);
		}

		::System::Void SetOverrideBounds(::System::Boolean a1, ::UnityEngine::Bounds a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SETOVERRIDEBOUNDS_OFFSET))(this, a1, a2);
		}

		::System::Void get_pivot_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_PIVOT_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_pivot_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_PIVOT_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_flip_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_FLIP_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_flip_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_FLIP_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_coord0_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD0_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_coord0_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD0_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_coord1_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD1_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_coord1_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD1_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_coord2_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD2_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_coord2_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD2_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_coord3_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD3_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_coord3_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD3_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_coord4_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD4_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_coord4_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD4_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_coord5_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD5_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_coord5_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD5_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_coord6_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD6_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_coord6_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD6_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_coord7_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD7_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_coord7_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD7_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_particleColor_Injected(::UnityEngine::Color& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_PARTICLECOLOR_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_particleColor_Injected(::UnityEngine::Color& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_PARTICLECOLOR_INJECTED_OFFSET))(this, a1);
		}

		::System::Void SetOverrideWorldAABB_Injected(::System::Boolean a1, ::UnityEngine::Bounds& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SETOVERRIDEWORLDAABB_INJECTED_OFFSET))(this, a1, a2);
		}
	};
}
