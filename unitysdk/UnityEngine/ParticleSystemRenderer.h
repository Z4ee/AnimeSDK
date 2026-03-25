#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
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

#define UNITYENGINE_PARTICLESYSTEMRENDERER_AREVERTEXSTREAMSENABLED_OFFSET UNITYSDK_OFFSET(0x18A998C0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_BAKEMESH_1_OFFSET UNITYSDK_OFFSET(0x18A9A460)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_BAKEMESH_OFFSET UNITYSDK_OFFSET(0x18A9A420)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_BAKETRAILSMESH_1_OFFSET UNITYSDK_OFFSET(0x18A9A4B0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_BAKETRAILSMESH_OFFSET UNITYSDK_OFFSET(0x18A9A470)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_DISABLEVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x18A998B0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_ENABLEVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x18A99170)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GETACTIVEVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x18A99B30)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GETENABLEDVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x18A99B10)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GETMESHES_OFFSET UNITYSDK_OFFSET(0x18A9A3C0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ACTIVEVERTEXSTREAMSCOUNT_OFFSET UNITYSDK_OFFSET(0x18A99B20)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x18A99B50)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ALLOWROLL_OFFSET UNITYSDK_OFFSET(0x18A99E30)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_APPLYPARTICLECOLOR_OFFSET UNITYSDK_OFFSET(0x18A9A310)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_CAMERAVELOCITYSCALE_OFFSET UNITYSDK_OFFSET(0x18A99BF0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD0_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A99EC0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD0_OFFSET UNITYSDK_OFFSET(0x18A99E70)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD1_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A99F40)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD1_OFFSET UNITYSDK_OFFSET(0x18A99EF0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD2_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A99FC0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD2_OFFSET UNITYSDK_OFFSET(0x18A99F70)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD3_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A9A040)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD3_OFFSET UNITYSDK_OFFSET(0x18A99FF0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD4_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A9A0C0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD4_OFFSET UNITYSDK_OFFSET(0x18A9A070)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD5_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A9A140)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD5_OFFSET UNITYSDK_OFFSET(0x18A9A0F0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD6_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A9A1C0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD6_OFFSET UNITYSDK_OFFSET(0x18A9A170)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD7_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A9A240)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD7_OFFSET UNITYSDK_OFFSET(0x18A9A1F0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ENABLEADVANCEDGPUINSTANCING_OFFSET UNITYSDK_OFFSET(0x18A99E10)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ENABLEGPUINSTANCING_OFFSET UNITYSDK_OFFSET(0x18A99DF0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ENABLETRAILMATERIAL_OFFSET UNITYSDK_OFFSET(0x18A9A2D0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_FLIP_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A99D80)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_FLIP_OFFSET UNITYSDK_OFFSET(0x18A99D30)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_LENGTHSCALE_OFFSET UNITYSDK_OFFSET(0x18A99BB0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MASKINTERACTION_OFFSET UNITYSDK_OFFSET(0x18A99DB0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MAXPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x18A99C90)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MESHCOUNT_OFFSET UNITYSDK_OFFSET(0x18A9A410)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MESH_OFFSET UNITYSDK_OFFSET(0x18A9A3A0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MINPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x18A99C70)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_NORMALDIRECTION_OFFSET UNITYSDK_OFFSET(0x18A99C10)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_PARTICLECOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A9A370)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_PARTICLECOLOR_OFFSET UNITYSDK_OFFSET(0x18A9A330)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_PIVOT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A99D00)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_PIVOT_OFFSET UNITYSDK_OFFSET(0x18A99CB0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_RENDERCAMERA_OFFSET UNITYSDK_OFFSET(0x18A9A2F0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x18A99B70)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ROTATIONXAXIS_OFFSET UNITYSDK_OFFSET(0x18A9A270)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ROTATIONYAXIS_OFFSET UNITYSDK_OFFSET(0x18A9A290)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ROTATIONZAXIS_OFFSET UNITYSDK_OFFSET(0x18A9A2B0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x18A99C30)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_SORTINGFUDGE_OFFSET UNITYSDK_OFFSET(0x18A99C50)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_SORTMODE_OFFSET UNITYSDK_OFFSET(0x18A99B90)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_TRAILMATERIAL_OFFSET UNITYSDK_OFFSET(0x18A99DD0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_USEOCTAGONSHAPE_OFFSET UNITYSDK_OFFSET(0x18A99E50)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_GET_VELOCITYSCALE_OFFSET UNITYSDK_OFFSET(0x18A99BD0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_INTERNAL_GETENABLEDVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x18A998E0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_INTERNAL_SETVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x18A99180)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SETACTIVEVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x18A99B40)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SETMESHES_1_OFFSET UNITYSDK_OFFSET(0x18A9A3E0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SETMESHES_OFFSET UNITYSDK_OFFSET(0x18A9A3D0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SETOVERRIDEBOUNDS_OFFSET UNITYSDK_OFFSET(0x18A9A4E0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SETOVERRIDEWORLDAABB_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A9A4D0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SETOVERRIDEWORLDAABB_OFFSET UNITYSDK_OFFSET(0x18A9A4C0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x18A99B60)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ALLOWROLL_OFFSET UNITYSDK_OFFSET(0x18A99E40)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_APPLYPARTICLECOLOR_OFFSET UNITYSDK_OFFSET(0x18A9A320)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_CAMERAVELOCITYSCALE_OFFSET UNITYSDK_OFFSET(0x18A99C00)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD0_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A99EE0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD0_OFFSET UNITYSDK_OFFSET(0x18A99ED0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD1_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A99F60)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD1_OFFSET UNITYSDK_OFFSET(0x18A99F50)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD2_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A99FE0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD2_OFFSET UNITYSDK_OFFSET(0x18A99FD0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD3_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A9A060)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD3_OFFSET UNITYSDK_OFFSET(0x18A9A050)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD4_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A9A0E0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD4_OFFSET UNITYSDK_OFFSET(0x18A9A0D0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD5_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A9A160)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD5_OFFSET UNITYSDK_OFFSET(0x18A9A150)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD6_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A9A1E0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD6_OFFSET UNITYSDK_OFFSET(0x18A9A1D0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD7_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A9A260)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD7_OFFSET UNITYSDK_OFFSET(0x18A9A250)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ENABLEADVANCEDGPUINSTANCING_OFFSET UNITYSDK_OFFSET(0x18A99E20)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ENABLEGPUINSTANCING_OFFSET UNITYSDK_OFFSET(0x18A99E00)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ENABLETRAILMATERIAL_OFFSET UNITYSDK_OFFSET(0x18A9A2E0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_FLIP_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A99DA0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_FLIP_OFFSET UNITYSDK_OFFSET(0x18A99D90)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_LENGTHSCALE_OFFSET UNITYSDK_OFFSET(0x18A99BC0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_MASKINTERACTION_OFFSET UNITYSDK_OFFSET(0x18A99DC0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_MAXPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x18A99CA0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_MESH_OFFSET UNITYSDK_OFFSET(0x18A9A3B0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_MINPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x18A99C80)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_NORMALDIRECTION_OFFSET UNITYSDK_OFFSET(0x18A99C20)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_PARTICLECOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A9A390)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_PARTICLECOLOR_OFFSET UNITYSDK_OFFSET(0x18A9A380)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_PIVOT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A99D20)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_PIVOT_OFFSET UNITYSDK_OFFSET(0x18A99D10)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_RENDERCAMERA_OFFSET UNITYSDK_OFFSET(0x18A9A300)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_RENDERMODE_OFFSET UNITYSDK_OFFSET(0x18A99B80)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ROTATIONXAXIS_OFFSET UNITYSDK_OFFSET(0x18A9A280)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ROTATIONYAXIS_OFFSET UNITYSDK_OFFSET(0x18A9A2A0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ROTATIONZAXIS_OFFSET UNITYSDK_OFFSET(0x18A9A2C0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x18A99C40)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_SORTINGFUDGE_OFFSET UNITYSDK_OFFSET(0x18A99C60)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_SORTMODE_OFFSET UNITYSDK_OFFSET(0x18A99BA0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_TRAILMATERIAL_OFFSET UNITYSDK_OFFSET(0x18A99DE0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_USEOCTAGONSHAPE_OFFSET UNITYSDK_OFFSET(0x18A99E60)
#define UNITYENGINE_PARTICLESYSTEMRENDERER_SET_VELOCITYSCALE_OFFSET UNITYSDK_OFFSET(0x18A99BE0)
#define UNITYENGINE_PARTICLESYSTEMRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A9A510)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemRenderer_TypeDefinitionIndex = 5503;

	class ParticleSystemRenderer : public ::UnityEngine::Renderer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER__CTOR_OFFSET))(this);
		}

		::System::Void EnableVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemVertexStreams))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_ENABLEVERTEXSTREAMS_OFFSET))(this, streams);
		}

		::System::Void DisableVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemVertexStreams))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_DISABLEVERTEXSTREAMS_OFFSET))(this, streams);
		}

		::System::Boolean AreVertexStreamsEnabled(::UnityEngine::ParticleSystemVertexStreams streams)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ParticleSystemVertexStreams))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_AREVERTEXSTREAMSENABLED_OFFSET))(this, streams);
		}

		::UnityEngine::ParticleSystemVertexStreams GetEnabledVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams)
		{
			return ((::UnityEngine::ParticleSystemVertexStreams(*)(::PVOID, ::UnityEngine::ParticleSystemVertexStreams))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GETENABLEDVERTEXSTREAMS_OFFSET))(this, streams);
		}

		::System::Void Internal_SetVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemVertexStreams, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_INTERNAL_SETVERTEXSTREAMS_OFFSET))(this, streams, enabled);
		}

		::UnityEngine::ParticleSystemVertexStreams Internal_GetEnabledVertexStreams(::UnityEngine::ParticleSystemVertexStreams streams)
		{
			return ((::UnityEngine::ParticleSystemVertexStreams(*)(::PVOID, ::UnityEngine::ParticleSystemVertexStreams))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_INTERNAL_GETENABLEDVERTEXSTREAMS_OFFSET))(this, streams);
		}

		::UnityEngine::ParticleSystemRenderSpace get_alignment()
		{
			return ((::UnityEngine::ParticleSystemRenderSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ALIGNMENT_OFFSET))(this);
		}

		::System::Void set_alignment(::UnityEngine::ParticleSystemRenderSpace value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemRenderSpace))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ALIGNMENT_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystemRenderMode get_renderMode()
		{
			return ((::UnityEngine::ParticleSystemRenderMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_RENDERMODE_OFFSET))(this);
		}

		::System::Void set_renderMode(::UnityEngine::ParticleSystemRenderMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemRenderMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_RENDERMODE_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystemSortMode get_sortMode()
		{
			return ((::UnityEngine::ParticleSystemSortMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_SORTMODE_OFFSET))(this);
		}

		::System::Void set_sortMode(::UnityEngine::ParticleSystemSortMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemSortMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_SORTMODE_OFFSET))(this, value);
		}

		::System::Single get_lengthScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_LENGTHSCALE_OFFSET))(this);
		}

		::System::Void set_lengthScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_LENGTHSCALE_OFFSET))(this, value);
		}

		::System::Single get_velocityScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_VELOCITYSCALE_OFFSET))(this);
		}

		::System::Void set_velocityScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_VELOCITYSCALE_OFFSET))(this, value);
		}

		::System::Single get_cameraVelocityScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_CAMERAVELOCITYSCALE_OFFSET))(this);
		}

		::System::Void set_cameraVelocityScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_CAMERAVELOCITYSCALE_OFFSET))(this, value);
		}

		::System::Single get_normalDirection()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_NORMALDIRECTION_OFFSET))(this);
		}

		::System::Void set_normalDirection(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_NORMALDIRECTION_OFFSET))(this, value);
		}

		::System::Single get_shadowBias()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_SHADOWBIAS_OFFSET))(this);
		}

		::System::Void set_shadowBias(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_SHADOWBIAS_OFFSET))(this, value);
		}

		::System::Single get_sortingFudge()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_SORTINGFUDGE_OFFSET))(this);
		}

		::System::Void set_sortingFudge(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_SORTINGFUDGE_OFFSET))(this, value);
		}

		::System::Single get_minParticleSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MINPARTICLESIZE_OFFSET))(this);
		}

		::System::Void set_minParticleSize(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_MINPARTICLESIZE_OFFSET))(this, value);
		}

		::System::Single get_maxParticleSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MAXPARTICLESIZE_OFFSET))(this);
		}

		::System::Void set_maxParticleSize(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_MAXPARTICLESIZE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_pivot()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_PIVOT_OFFSET))(this);
		}

		::System::Void set_pivot(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_PIVOT_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_flip()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_FLIP_OFFSET))(this);
		}

		::System::Void set_flip(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_FLIP_OFFSET))(this, value);
		}

		::UnityEngine::SpriteMaskInteraction get_maskInteraction()
		{
			return ((::UnityEngine::SpriteMaskInteraction(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MASKINTERACTION_OFFSET))(this);
		}

		::System::Void set_maskInteraction(::UnityEngine::SpriteMaskInteraction value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SpriteMaskInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_MASKINTERACTION_OFFSET))(this, value);
		}

		::UnityEngine::Material* get_trailMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_TRAILMATERIAL_OFFSET))(this);
		}

		::System::Void set_trailMaterial(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_TRAILMATERIAL_OFFSET))(this, value);
		}

		::System::Boolean get_enableGPUInstancing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ENABLEGPUINSTANCING_OFFSET))(this);
		}

		::System::Void set_enableGPUInstancing(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ENABLEGPUINSTANCING_OFFSET))(this, value);
		}

		::System::Boolean get_enableAdvancedGPUInstancing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ENABLEADVANCEDGPUINSTANCING_OFFSET))(this);
		}

		::System::Void set_enableAdvancedGPUInstancing(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ENABLEADVANCEDGPUINSTANCING_OFFSET))(this, value);
		}

		::System::Boolean get_allowRoll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ALLOWROLL_OFFSET))(this);
		}

		::System::Void set_allowRoll(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ALLOWROLL_OFFSET))(this, value);
		}

		::System::Boolean get_useOctagonShape()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_USEOCTAGONSHAPE_OFFSET))(this);
		}

		::System::Void set_useOctagonShape(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_USEOCTAGONSHAPE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_coord0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD0_OFFSET))(this);
		}

		::System::Void set_coord0(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD0_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_coord1()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD1_OFFSET))(this);
		}

		::System::Void set_coord1(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD1_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_coord2()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD2_OFFSET))(this);
		}

		::System::Void set_coord2(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD2_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_coord3()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD3_OFFSET))(this);
		}

		::System::Void set_coord3(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD3_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_coord4()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD4_OFFSET))(this);
		}

		::System::Void set_coord4(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD4_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_coord5()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD5_OFFSET))(this);
		}

		::System::Void set_coord5(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD5_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_coord6()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD6_OFFSET))(this);
		}

		::System::Void set_coord6(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD6_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_coord7()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD7_OFFSET))(this);
		}

		::System::Void set_coord7(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD7_OFFSET))(this, value);
		}

		::System::Boolean get_rotationXAxis()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ROTATIONXAXIS_OFFSET))(this);
		}

		::System::Void set_rotationXAxis(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ROTATIONXAXIS_OFFSET))(this, value);
		}

		::System::Boolean get_rotationYAxis()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ROTATIONYAXIS_OFFSET))(this);
		}

		::System::Void set_rotationYAxis(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ROTATIONYAXIS_OFFSET))(this, value);
		}

		::System::Boolean get_rotationZAxis()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ROTATIONZAXIS_OFFSET))(this);
		}

		::System::Void set_rotationZAxis(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ROTATIONZAXIS_OFFSET))(this, value);
		}

		::System::Boolean get_enableTrailMaterial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ENABLETRAILMATERIAL_OFFSET))(this);
		}

		::System::Void set_enableTrailMaterial(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_ENABLETRAILMATERIAL_OFFSET))(this, value);
		}

		::UnityEngine::Camera* get_renderCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_RENDERCAMERA_OFFSET))(this);
		}

		::System::Void set_renderCamera(::UnityEngine::Camera* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_RENDERCAMERA_OFFSET))(this, value);
		}

		::System::Boolean get_applyParticleColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_APPLYPARTICLECOLOR_OFFSET))(this);
		}

		::System::Void set_applyParticleColor(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_APPLYPARTICLECOLOR_OFFSET))(this, value);
		}

		::UnityEngine::Color get_particleColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_PARTICLECOLOR_OFFSET))(this);
		}

		::System::Void set_particleColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_PARTICLECOLOR_OFFSET))(this, value);
		}

		::UnityEngine::Mesh* get_mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MESH_OFFSET))(this);
		}

		::System::Void set_mesh(::UnityEngine::Mesh* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_MESH_OFFSET))(this, value);
		}

		::System::Int32 GetMeshes(::Il2CppArray<::UnityEngine::Mesh*>* meshes)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Mesh*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GETMESHES_OFFSET))(this, meshes);
		}

		::System::Void SetMeshes(::Il2CppArray<::UnityEngine::Mesh*>* meshes, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Mesh*>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SETMESHES_OFFSET))(this, meshes, size);
		}

		::System::Void SetMeshes_1(::Il2CppArray<::UnityEngine::Mesh*>* meshes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Mesh*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SETMESHES_1_OFFSET))(this, meshes);
		}

		::System::Int32 get_meshCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_MESHCOUNT_OFFSET))(this);
		}

		::System::Void BakeMesh(::UnityEngine::Mesh* mesh, ::System::Boolean useTransform, ::System::Boolean addPadding)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_BAKEMESH_OFFSET))(this, mesh, useTransform, addPadding);
		}

		::System::Void BakeMesh_1(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, ::System::Boolean useTransform, ::System::Boolean addPadding)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Camera*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_BAKEMESH_1_OFFSET))(this, mesh, camera, useTransform, addPadding);
		}

		::System::Void BakeTrailsMesh(::UnityEngine::Mesh* mesh, ::System::Boolean useTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_BAKETRAILSMESH_OFFSET))(this, mesh, useTransform);
		}

		::System::Void BakeTrailsMesh_1(::UnityEngine::Mesh* mesh, ::UnityEngine::Camera* camera, ::System::Boolean useTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_BAKETRAILSMESH_1_OFFSET))(this, mesh, camera, useTransform);
		}

		::System::Int32 get_activeVertexStreamsCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_ACTIVEVERTEXSTREAMSCOUNT_OFFSET))(this);
		}

		::System::Void SetActiveVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>* streams)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SETACTIVEVERTEXSTREAMS_OFFSET))(this, streams);
		}

		::System::Void GetActiveVertexStreams(::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>* streams)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystemVertexStream>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GETACTIVEVERTEXSTREAMS_OFFSET))(this, streams);
		}

		::System::Void SetOverrideWorldAABB(::System::Boolean override, ::UnityEngine::Bounds bounds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SETOVERRIDEWORLDAABB_OFFSET))(this, override, bounds);
		}

		::System::Void SetOverrideBounds(::System::Boolean override, ::UnityEngine::Bounds bounds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SETOVERRIDEBOUNDS_OFFSET))(this, override, bounds);
		}

		::System::Void get_pivot_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_PIVOT_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_pivot_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_PIVOT_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_flip_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_FLIP_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_flip_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_FLIP_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_coord0_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD0_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_coord0_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD0_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_coord1_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD1_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_coord1_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD1_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_coord2_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD2_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_coord2_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD2_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_coord3_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD3_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_coord3_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD3_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_coord4_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD4_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_coord4_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD4_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_coord5_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD5_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_coord5_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD5_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_coord6_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD6_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_coord6_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD6_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_coord7_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_COORD7_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_coord7_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_COORD7_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_particleColor_Injected(::UnityEngine::Color& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_GET_PARTICLECOLOR_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_particleColor_Injected(::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SET_PARTICLECOLOR_INJECTED_OFFSET))(this, value);
		}

		::System::Void SetOverrideWorldAABB_Injected(::System::Boolean override, ::UnityEngine::Bounds& bounds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMRENDERER_SETOVERRIDEWORLDAABB_INJECTED_OFFSET))(this, override, bounds);
		}
	};
}
