#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/PBDMassUseType.h"
#include "unitysdk/UnityEngine/PBDMeshCurveType.h"
#include "unitysdk/UnityEngine/PBDMeshGeneartionType.h"
#include "unitysdk/UnityEngine/PBDParticleHook.h"
#include "unitysdk/UnityEngine/PBDRotationMethod.h"
#include "unitysdk/UnityEngine/PBDUpdateStage.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class PBDDeformAsset; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class SphereCollider; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_PBDDEFORMER_APPLYIMPULSEALL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FBC9E60)
#define UNITYENGINE_PBDDEFORMER_APPLYIMPULSEALL_OFFSET UNITYSDK_OFFSET(0x1FBC9E50)
#define UNITYENGINE_PBDDEFORMER_APPLYIMPULSE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FBC9E40)
#define UNITYENGINE_PBDDEFORMER_APPLYIMPULSE_OFFSET UNITYSDK_OFFSET(0x1FBC9E30)
#define UNITYENGINE_PBDDEFORMER_BREAKCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1FBC9E70)
#define UNITYENGINE_PBDDEFORMER_GETPARTICLEPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1FBC9E80)
#define UNITYENGINE_PBDDEFORMER_GETPARTICLEPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FBC9EE0)
#define UNITYENGINE_PBDDEFORMER_GETPARTICLEPOSITION_OFFSET UNITYSDK_OFFSET(0x1FBC9E90)
#define UNITYENGINE_PBDDEFORMER_GET_BOXCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x1FBC9840)
#define UNITYENGINE_PBDDEFORMER_GET_CAMERATRANS_OFFSET UNITYSDK_OFFSET(0x1FBC96C0)
#define UNITYENGINE_PBDDEFORMER_GET_CAPSULECOLLIDERS_OFFSET UNITYSDK_OFFSET(0x1FBC9810)
#define UNITYENGINE_PBDDEFORMER_GET_COLLISIONADDITIONALSCOPE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FBC9BB0)
#define UNITYENGINE_PBDDEFORMER_GET_COLLISIONADDITIONALSCOPE_OFFSET UNITYSDK_OFFSET(0x1FBC9B60)
#define UNITYENGINE_PBDDEFORMER_GET_DAMPINGSCALE_OFFSET UNITYSDK_OFFSET(0x1FBC9A10)
#define UNITYENGINE_PBDDEFORMER_GET_DEBUGDRAW_OFFSET UNITYSDK_OFFSET(0x1FBC9A80)
#define UNITYENGINE_PBDDEFORMER_GET_DEFORMASSET_OFFSET UNITYSDK_OFFSET(0x1FBC9550)
#define UNITYENGINE_PBDDEFORMER_GET_DISTANCECOMPLIANCEFACTOR_OFFSET UNITYSDK_OFFSET(0x1FBC9B00)
#define UNITYENGINE_PBDDEFORMER_GET_DISTANCESCALE_OFFSET UNITYSDK_OFFSET(0x1FBC9DC0)
#define UNITYENGINE_PBDDEFORMER_GET_ENABLECOLLISION_OFFSET UNITYSDK_OFFSET(0x1FBC9A60)
#define UNITYENGINE_PBDDEFORMER_GET_ENABLEMANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x1FBC9AC0)
#define UNITYENGINE_PBDDEFORMER_GET_GENERATEDOUBLESIDEDMESH_OFFSET UNITYSDK_OFFSET(0x1FBC9780)
#define UNITYENGINE_PBDDEFORMER_GET_GENERATEVERTEXNORMAL_OFFSET UNITYSDK_OFFSET(0x1FBC97A0)
#define UNITYENGINE_PBDDEFORMER_GET_GRAVITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FBC9900)
#define UNITYENGINE_PBDDEFORMER_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x1FBC98B0)
#define UNITYENGINE_PBDDEFORMER_GET_HOOKS_OFFSET UNITYSDK_OFFSET(0x1FBC97C0)
#define UNITYENGINE_PBDDEFORMER_GET_ITERATION_OFFSET UNITYSDK_OFFSET(0x1FBC9930)
#define UNITYENGINE_PBDDEFORMER_GET_LOCALSIMULATION_OFFSET UNITYSDK_OFFSET(0x1FBC9A30)
#define UNITYENGINE_PBDDEFORMER_GET_MAXCONSTRAINTSCALE_OFFSET UNITYSDK_OFFSET(0x1FBC99B0)
#define UNITYENGINE_PBDDEFORMER_GET_MAXVELOCITY_OFFSET UNITYSDK_OFFSET(0x1FBC99F0)
#define UNITYENGINE_PBDDEFORMER_GET_MESHGENERATIONCURVETYPE_OFFSET UNITYSDK_OFFSET(0x1FBC95A0)
#define UNITYENGINE_PBDDEFORMER_GET_MESHGENERATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1FBC9580)
#define UNITYENGINE_PBDDEFORMER_GET_MINCONSTRAINTSCALE_OFFSET UNITYSDK_OFFSET(0x1FBC9990)
#define UNITYENGINE_PBDDEFORMER_GET_PARTICLESPHERERADIUS_OFFSET UNITYSDK_OFFSET(0x1FBC99D0)
#define UNITYENGINE_PBDDEFORMER_GET_POSTRESPONSESIMULATION_OFFSET UNITYSDK_OFFSET(0x1FBC9B40)
#define UNITYENGINE_PBDDEFORMER_GET_PREVIEWEDITMODE_OFFSET UNITYSDK_OFFSET(0x1FBC9AA0)
#define UNITYENGINE_PBDDEFORMER_GET_RECTANGLEHORIZONTALSEGMENT_OFFSET UNITYSDK_OFFSET(0x1FBC9740)
#define UNITYENGINE_PBDDEFORMER_GET_RECTANGLEVERTICALSEGMENT_OFFSET UNITYSDK_OFFSET(0x1FBC9760)
#define UNITYENGINE_PBDDEFORMER_GET_RIBBONSECTIONDENSITY_OFFSET UNITYSDK_OFFSET(0x1FBC9720)
#define UNITYENGINE_PBDDEFORMER_GET_RIBBONSEGMENTRADIUS_OFFSET UNITYSDK_OFFSET(0x1FBC9700)
#define UNITYENGINE_PBDDEFORMER_GET_RIBBONSEGMENT_OFFSET UNITYSDK_OFFSET(0x1FBC96E0)
#define UNITYENGINE_PBDDEFORMER_GET_RIGIDBODYCOLLISIONNORMAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FBC9D30)
#define UNITYENGINE_PBDDEFORMER_GET_RIGIDBODYCOLLISIONNORMAL_OFFSET UNITYSDK_OFFSET(0x1FBC9CE0)
#define UNITYENGINE_PBDDEFORMER_GET_RIGIDBODYCOLLISIONSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FBC9C30)
#define UNITYENGINE_PBDDEFORMER_GET_RIGIDBODYCOLLISIONSIZE_OFFSET UNITYSDK_OFFSET(0x1FBC9BE0)
#define UNITYENGINE_PBDDEFORMER_GET_RIGIDBODYFIXBOXSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FBC9CB0)
#define UNITYENGINE_PBDDEFORMER_GET_RIGIDBODYFIXBOXSIZE_OFFSET UNITYSDK_OFFSET(0x1FBC9C60)
#define UNITYENGINE_PBDDEFORMER_GET_ROTATIONMETHOD_OFFSET UNITYSDK_OFFSET(0x1FBC9890)
#define UNITYENGINE_PBDDEFORMER_GET_SIMULATERECOVERFRAME_OFFSET UNITYSDK_OFFSET(0x1FBC9D60)
#define UNITYENGINE_PBDDEFORMER_GET_SIMULATING_OFFSET UNITYSDK_OFFSET(0x1FBC9A50)
#define UNITYENGINE_PBDDEFORMER_GET_SPHERECOLLIDERS_OFFSET UNITYSDK_OFFSET(0x1FBC97E0)
#define UNITYENGINE_PBDDEFORMER_GET_STATICBATCHGROUP_OFFSET UNITYSDK_OFFSET(0x1FBC9970)
#define UNITYENGINE_PBDDEFORMER_GET_SUBSTEP_OFFSET UNITYSDK_OFFSET(0x1FBC9950)
#define UNITYENGINE_PBDDEFORMER_GET_TARGETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1FBC9570)
#define UNITYENGINE_PBDDEFORMER_GET_UPDATESTAGE_OFFSET UNITYSDK_OFFSET(0x1FBC9870)
#define UNITYENGINE_PBDDEFORMER_GET_USEDYNAMICCOMPLIANCE_OFFSET UNITYSDK_OFFSET(0x1FBC9B20)
#define UNITYENGINE_PBDDEFORMER_GET_USEORIGINALNORMALFORCOLLISION_OFFSET UNITYSDK_OFFSET(0x1FBC9DA0)
#define UNITYENGINE_PBDDEFORMER_GET_USESTABLECOLLISION_OFFSET UNITYSDK_OFFSET(0x1FBC9D80)
#define UNITYENGINE_PBDDEFORMER_GET_UVAXISSWAP_OFFSET UNITYSDK_OFFSET(0x1FBC96A0)
#define UNITYENGINE_PBDDEFORMER_GET_UVOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FBC9660)
#define UNITYENGINE_PBDDEFORMER_GET_UVOFFSET_OFFSET UNITYSDK_OFFSET(0x1FBC9630)
#define UNITYENGINE_PBDDEFORMER_GET_UVTILLING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FBC95F0)
#define UNITYENGINE_PBDDEFORMER_GET_UVTILLING_OFFSET UNITYSDK_OFFSET(0x1FBC95C0)
#define UNITYENGINE_PBDDEFORMER_GET_VOLUMECOMPLIANCEFACTOR_OFFSET UNITYSDK_OFFSET(0x1FBC9AE0)
#define UNITYENGINE_PBDDEFORMER_GET_VOLUMESCALE_OFFSET UNITYSDK_OFFSET(0x1FBC9DE0)
#define UNITYENGINE_PBDDEFORMER_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1FBC9E10)
#define UNITYENGINE_PBDDEFORMER_RESETSOLVER_OFFSET UNITYSDK_OFFSET(0x1FBC9E20)
#define UNITYENGINE_PBDDEFORMER_SETBOXCOLLIDERDETAILED_OFFSET UNITYSDK_OFFSET(0x1FBC9860)
#define UNITYENGINE_PBDDEFORMER_SETCAPSULECOLLIDERDETAILED_OFFSET UNITYSDK_OFFSET(0x1FBC9830)
#define UNITYENGINE_PBDDEFORMER_SETSPHERECOLLIDERDETAILED_OFFSET UNITYSDK_OFFSET(0x1FBC9800)
#define UNITYENGINE_PBDDEFORMER_SET_BOXCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x1FBC9850)
#define UNITYENGINE_PBDDEFORMER_SET_CAMERATRANS_OFFSET UNITYSDK_OFFSET(0x1FBC96D0)
#define UNITYENGINE_PBDDEFORMER_SET_CAPSULECOLLIDERS_OFFSET UNITYSDK_OFFSET(0x1FBC9820)
#define UNITYENGINE_PBDDEFORMER_SET_COLLISIONADDITIONALSCOPE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FBC9BD0)
#define UNITYENGINE_PBDDEFORMER_SET_COLLISIONADDITIONALSCOPE_OFFSET UNITYSDK_OFFSET(0x1FBC9BC0)
#define UNITYENGINE_PBDDEFORMER_SET_DAMPINGSCALE_OFFSET UNITYSDK_OFFSET(0x1FBC9A20)
#define UNITYENGINE_PBDDEFORMER_SET_DEBUGDRAW_OFFSET UNITYSDK_OFFSET(0x1FBC9A90)
#define UNITYENGINE_PBDDEFORMER_SET_DEFORMASSET_OFFSET UNITYSDK_OFFSET(0x1FBC9560)
#define UNITYENGINE_PBDDEFORMER_SET_DISTANCECOMPLIANCEFACTOR_OFFSET UNITYSDK_OFFSET(0x1FBC9B10)
#define UNITYENGINE_PBDDEFORMER_SET_DISTANCESCALE_OFFSET UNITYSDK_OFFSET(0x1FBC9DD0)
#define UNITYENGINE_PBDDEFORMER_SET_ENABLECOLLISION_OFFSET UNITYSDK_OFFSET(0x1FBC9A70)
#define UNITYENGINE_PBDDEFORMER_SET_ENABLEMANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x1FBC9AD0)
#define UNITYENGINE_PBDDEFORMER_SET_GENERATEDOUBLESIDEDMESH_OFFSET UNITYSDK_OFFSET(0x1FBC9790)
#define UNITYENGINE_PBDDEFORMER_SET_GENERATEVERTEXNORMAL_OFFSET UNITYSDK_OFFSET(0x1FBC97B0)
#define UNITYENGINE_PBDDEFORMER_SET_GRAVITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FBC9920)
#define UNITYENGINE_PBDDEFORMER_SET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x1FBC9910)
#define UNITYENGINE_PBDDEFORMER_SET_HOOKS_OFFSET UNITYSDK_OFFSET(0x1FBC97D0)
#define UNITYENGINE_PBDDEFORMER_SET_ITERATION_OFFSET UNITYSDK_OFFSET(0x1FBC9940)
#define UNITYENGINE_PBDDEFORMER_SET_LOCALSIMULATION_OFFSET UNITYSDK_OFFSET(0x1FBC9A40)
#define UNITYENGINE_PBDDEFORMER_SET_MAXCONSTRAINTSCALE_OFFSET UNITYSDK_OFFSET(0x1FBC99C0)
#define UNITYENGINE_PBDDEFORMER_SET_MAXVELOCITY_OFFSET UNITYSDK_OFFSET(0x1FBC9A00)
#define UNITYENGINE_PBDDEFORMER_SET_MESHGENERATIONCURVETYPE_OFFSET UNITYSDK_OFFSET(0x1FBC95B0)
#define UNITYENGINE_PBDDEFORMER_SET_MESHGENERATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1FBC9590)
#define UNITYENGINE_PBDDEFORMER_SET_MINCONSTRAINTSCALE_OFFSET UNITYSDK_OFFSET(0x1FBC99A0)
#define UNITYENGINE_PBDDEFORMER_SET_PARTICLESPHERERADIUS_OFFSET UNITYSDK_OFFSET(0x1FBC99E0)
#define UNITYENGINE_PBDDEFORMER_SET_POSTRESPONSESIMULATION_OFFSET UNITYSDK_OFFSET(0x1FBC9B50)
#define UNITYENGINE_PBDDEFORMER_SET_PREVIEWEDITMODE_OFFSET UNITYSDK_OFFSET(0x1FBC9AB0)
#define UNITYENGINE_PBDDEFORMER_SET_RECTANGLEHORIZONTALSEGMENT_OFFSET UNITYSDK_OFFSET(0x1FBC9750)
#define UNITYENGINE_PBDDEFORMER_SET_RECTANGLEVERTICALSEGMENT_OFFSET UNITYSDK_OFFSET(0x1FBC9770)
#define UNITYENGINE_PBDDEFORMER_SET_RIBBONSECTIONDENSITY_OFFSET UNITYSDK_OFFSET(0x1FBC9730)
#define UNITYENGINE_PBDDEFORMER_SET_RIBBONSEGMENTRADIUS_OFFSET UNITYSDK_OFFSET(0x1FBC9710)
#define UNITYENGINE_PBDDEFORMER_SET_RIBBONSEGMENT_OFFSET UNITYSDK_OFFSET(0x1FBC96F0)
#define UNITYENGINE_PBDDEFORMER_SET_RIGIDBODYCOLLISIONNORMAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FBC9D50)
#define UNITYENGINE_PBDDEFORMER_SET_RIGIDBODYCOLLISIONNORMAL_OFFSET UNITYSDK_OFFSET(0x1FBC9D40)
#define UNITYENGINE_PBDDEFORMER_SET_RIGIDBODYCOLLISIONSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FBC9C50)
#define UNITYENGINE_PBDDEFORMER_SET_RIGIDBODYCOLLISIONSIZE_OFFSET UNITYSDK_OFFSET(0x1FBC9C40)
#define UNITYENGINE_PBDDEFORMER_SET_RIGIDBODYFIXBOXSIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FBC9CD0)
#define UNITYENGINE_PBDDEFORMER_SET_RIGIDBODYFIXBOXSIZE_OFFSET UNITYSDK_OFFSET(0x1FBC9CC0)
#define UNITYENGINE_PBDDEFORMER_SET_ROTATIONMETHOD_OFFSET UNITYSDK_OFFSET(0x1FBC98A0)
#define UNITYENGINE_PBDDEFORMER_SET_SIMULATERECOVERFRAME_OFFSET UNITYSDK_OFFSET(0x1FBC9D70)
#define UNITYENGINE_PBDDEFORMER_SET_SPHERECOLLIDERS_OFFSET UNITYSDK_OFFSET(0x1FBC97F0)
#define UNITYENGINE_PBDDEFORMER_SET_STATICBATCHGROUP_OFFSET UNITYSDK_OFFSET(0x1FBC9980)
#define UNITYENGINE_PBDDEFORMER_SET_SUBSTEP_OFFSET UNITYSDK_OFFSET(0x1FBC9960)
#define UNITYENGINE_PBDDEFORMER_SET_UPDATESTAGE_OFFSET UNITYSDK_OFFSET(0x1FBC9880)
#define UNITYENGINE_PBDDEFORMER_SET_USEDYNAMICCOMPLIANCE_OFFSET UNITYSDK_OFFSET(0x1FBC9B30)
#define UNITYENGINE_PBDDEFORMER_SET_USEORIGINALNORMALFORCOLLISION_OFFSET UNITYSDK_OFFSET(0x1FBC9DB0)
#define UNITYENGINE_PBDDEFORMER_SET_USESTABLECOLLISION_OFFSET UNITYSDK_OFFSET(0x1FBC9D90)
#define UNITYENGINE_PBDDEFORMER_SET_UVAXISSWAP_OFFSET UNITYSDK_OFFSET(0x1FBC96B0)
#define UNITYENGINE_PBDDEFORMER_SET_UVOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FBC9690)
#define UNITYENGINE_PBDDEFORMER_SET_UVOFFSET_OFFSET UNITYSDK_OFFSET(0x1FBC9670)
#define UNITYENGINE_PBDDEFORMER_SET_UVTILLING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FBC9620)
#define UNITYENGINE_PBDDEFORMER_SET_UVTILLING_OFFSET UNITYSDK_OFFSET(0x1FBC9600)
#define UNITYENGINE_PBDDEFORMER_SET_VOLUMECOMPLIANCEFACTOR_OFFSET UNITYSDK_OFFSET(0x1FBC9AF0)
#define UNITYENGINE_PBDDEFORMER_SET_VOLUMESCALE_OFFSET UNITYSDK_OFFSET(0x1FBC9DF0)
#define UNITYENGINE_PBDDEFORMER_SHOULDGENERATESTATICMESH_OFFSET UNITYSDK_OFFSET(0x1FBC9EF0)
#define UNITYENGINE_PBDDEFORMER_SHOULDSOLVEROTATION_OFFSET UNITYSDK_OFFSET(0x1FBC9F00)
#define UNITYENGINE_PBDDEFORMER_UPDATEINEDITMODE_OFFSET UNITYSDK_OFFSET(0x1FBC9F10)
#define UNITYENGINE_PBDDEFORMER_UPDATEMANUALLY_OFFSET UNITYSDK_OFFSET(0x1FBC9F20)
#define UNITYENGINE_PBDDEFORMER_UPDATETARGETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1FBC9E00)
#define UNITYENGINE_PBDDEFORMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBC9F30)

namespace UnityEngine
{
	inline static constexpr unsigned int PBDDeformer_TypeDefinitionIndex = 19154;

	class PBDDeformer : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER__CTOR_OFFSET))(this);
		}

		::UnityEngine::PBDDeformAsset* get_deformAsset()
		{
			return ((::UnityEngine::PBDDeformAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_DEFORMASSET_OFFSET))(this);
		}

		::System::Void set_deformAsset(::UnityEngine::PBDDeformAsset* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PBDDeformAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_DEFORMASSET_OFFSET))(this, value);
		}

		::UnityEngine::Renderer* get_targetComponent()
		{
			return ((::UnityEngine::Renderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_TARGETCOMPONENT_OFFSET))(this);
		}

		::UnityEngine::PBDMeshGeneartionType get_meshGenerationType()
		{
			return ((::UnityEngine::PBDMeshGeneartionType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_MESHGENERATIONTYPE_OFFSET))(this);
		}

		::System::Void set_meshGenerationType(::UnityEngine::PBDMeshGeneartionType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PBDMeshGeneartionType))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_MESHGENERATIONTYPE_OFFSET))(this, value);
		}

		::UnityEngine::PBDMeshCurveType get_meshGenerationCurveType()
		{
			return ((::UnityEngine::PBDMeshCurveType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_MESHGENERATIONCURVETYPE_OFFSET))(this);
		}

		::System::Void set_meshGenerationCurveType(::UnityEngine::PBDMeshCurveType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PBDMeshCurveType))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_MESHGENERATIONCURVETYPE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_uvTilling()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_UVTILLING_OFFSET))(this);
		}

		::System::Void set_uvTilling(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_UVTILLING_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_uvOffset()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_UVOFFSET_OFFSET))(this);
		}

		::System::Void set_uvOffset(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_UVOFFSET_OFFSET))(this, value);
		}

		::System::Boolean get_uvAxisSwap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_UVAXISSWAP_OFFSET))(this);
		}

		::System::Void set_uvAxisSwap(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_UVAXISSWAP_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_cameraTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_CAMERATRANS_OFFSET))(this);
		}

		::System::Void set_cameraTrans(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_CAMERATRANS_OFFSET))(this, value);
		}

		::System::UInt32 get_ribbonSegment()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_RIBBONSEGMENT_OFFSET))(this);
		}

		::System::Void set_ribbonSegment(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_RIBBONSEGMENT_OFFSET))(this, value);
		}

		::System::Single get_ribbonSegmentRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_RIBBONSEGMENTRADIUS_OFFSET))(this);
		}

		::System::Void set_ribbonSegmentRadius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_RIBBONSEGMENTRADIUS_OFFSET))(this, value);
		}

		::System::Single get_ribbonSectionDensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_RIBBONSECTIONDENSITY_OFFSET))(this);
		}

		::System::Void set_ribbonSectionDensity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_RIBBONSECTIONDENSITY_OFFSET))(this, value);
		}

		::System::UInt32 get_rectangleHorizontalSegment()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_RECTANGLEHORIZONTALSEGMENT_OFFSET))(this);
		}

		::System::Void set_rectangleHorizontalSegment(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_RECTANGLEHORIZONTALSEGMENT_OFFSET))(this, value);
		}

		::System::UInt32 get_rectangleVerticalSegment()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_RECTANGLEVERTICALSEGMENT_OFFSET))(this);
		}

		::System::Void set_rectangleVerticalSegment(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_RECTANGLEVERTICALSEGMENT_OFFSET))(this, value);
		}

		::System::Boolean get_generateDoubleSidedMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_GENERATEDOUBLESIDEDMESH_OFFSET))(this);
		}

		::System::Void set_generateDoubleSidedMesh(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_GENERATEDOUBLESIDEDMESH_OFFSET))(this, value);
		}

		::System::Boolean get_generateVertexNormal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_GENERATEVERTEXNORMAL_OFFSET))(this);
		}

		::System::Void set_generateVertexNormal(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_GENERATEVERTEXNORMAL_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::PBDParticleHook>* get_hooks()
		{
			return ((::Il2CppArray<::UnityEngine::PBDParticleHook>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_HOOKS_OFFSET))(this);
		}

		::System::Void set_hooks(::Il2CppArray<::UnityEngine::PBDParticleHook>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::PBDParticleHook>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_HOOKS_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::SphereCollider*>* get_sphereColliders()
		{
			return ((::Il2CppArray<::UnityEngine::SphereCollider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_SPHERECOLLIDERS_OFFSET))(this);
		}

		::System::Void set_sphereColliders(::Il2CppArray<::UnityEngine::SphereCollider*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::SphereCollider*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_SPHERECOLLIDERS_OFFSET))(this, value);
		}

		::System::Void SetSphereColliderDetailed(::Il2CppArray<::UnityEngine::SphereCollider*>* colliders, ::Il2CppArray<::System::Boolean>* isDynamic)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::SphereCollider*>*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SETSPHERECOLLIDERDETAILED_OFFSET))(this, colliders, isDynamic);
		}

		::Il2CppArray<::UnityEngine::CapsuleCollider*>* get_capsuleColliders()
		{
			return ((::Il2CppArray<::UnityEngine::CapsuleCollider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_CAPSULECOLLIDERS_OFFSET))(this);
		}

		::System::Void set_capsuleColliders(::Il2CppArray<::UnityEngine::CapsuleCollider*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::CapsuleCollider*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_CAPSULECOLLIDERS_OFFSET))(this, value);
		}

		::System::Void SetCapsuleColliderDetailed(::Il2CppArray<::UnityEngine::CapsuleCollider*>* colliders, ::Il2CppArray<::System::Boolean>* isDynamic)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::CapsuleCollider*>*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SETCAPSULECOLLIDERDETAILED_OFFSET))(this, colliders, isDynamic);
		}

		::Il2CppArray<::UnityEngine::BoxCollider*>* get_boxColliders()
		{
			return ((::Il2CppArray<::UnityEngine::BoxCollider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_BOXCOLLIDERS_OFFSET))(this);
		}

		::System::Void set_boxColliders(::Il2CppArray<::UnityEngine::BoxCollider*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::BoxCollider*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_BOXCOLLIDERS_OFFSET))(this, value);
		}

		::System::Void SetBoxColliderDetailed(::Il2CppArray<::UnityEngine::BoxCollider*>* colliders, ::Il2CppArray<::System::Boolean>* isDynamic)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::BoxCollider*>*, ::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SETBOXCOLLIDERDETAILED_OFFSET))(this, colliders, isDynamic);
		}

		::UnityEngine::PBDUpdateStage get_updateStage()
		{
			return ((::UnityEngine::PBDUpdateStage(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_UPDATESTAGE_OFFSET))(this);
		}

		::System::Void set_updateStage(::UnityEngine::PBDUpdateStage value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PBDUpdateStage))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_UPDATESTAGE_OFFSET))(this, value);
		}

		::UnityEngine::PBDRotationMethod get_rotationMethod()
		{
			return ((::UnityEngine::PBDRotationMethod(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_ROTATIONMETHOD_OFFSET))(this);
		}

		::System::Void set_rotationMethod(::UnityEngine::PBDRotationMethod value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PBDRotationMethod))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_ROTATIONMETHOD_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_gravity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_GRAVITY_OFFSET))(this);
		}

		::System::Void set_gravity(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_GRAVITY_OFFSET))(this, value);
		}

		::System::UInt32 get_iteration()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_ITERATION_OFFSET))(this);
		}

		::System::Void set_iteration(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_ITERATION_OFFSET))(this, value);
		}

		::System::UInt32 get_substep()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_SUBSTEP_OFFSET))(this);
		}

		::System::Void set_substep(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_SUBSTEP_OFFSET))(this, value);
		}

		::System::Int32 get_staticBatchGroup()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_STATICBATCHGROUP_OFFSET))(this);
		}

		::System::Void set_staticBatchGroup(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_STATICBATCHGROUP_OFFSET))(this, value);
		}

		::System::Single get_minConstraintScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_MINCONSTRAINTSCALE_OFFSET))(this);
		}

		::System::Void set_minConstraintScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_MINCONSTRAINTSCALE_OFFSET))(this, value);
		}

		::System::Single get_maxConstraintScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_MAXCONSTRAINTSCALE_OFFSET))(this);
		}

		::System::Void set_maxConstraintScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_MAXCONSTRAINTSCALE_OFFSET))(this, value);
		}

		::System::Single get_particleSphereRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_PARTICLESPHERERADIUS_OFFSET))(this);
		}

		::System::Void set_particleSphereRadius(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_PARTICLESPHERERADIUS_OFFSET))(this, value);
		}

		::System::Single get_maxVelocity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_MAXVELOCITY_OFFSET))(this);
		}

		::System::Void set_maxVelocity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_MAXVELOCITY_OFFSET))(this, value);
		}

		::System::Single get_dampingScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_DAMPINGSCALE_OFFSET))(this);
		}

		::System::Void set_dampingScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_DAMPINGSCALE_OFFSET))(this, value);
		}

		::System::Boolean get_localSimulation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_LOCALSIMULATION_OFFSET))(this);
		}

		::System::Void set_localSimulation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_LOCALSIMULATION_OFFSET))(this, value);
		}

		::System::Boolean get_simulating()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_SIMULATING_OFFSET))(this);
		}

		::System::Boolean get_enableCollision()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_ENABLECOLLISION_OFFSET))(this);
		}

		::System::Void set_enableCollision(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_ENABLECOLLISION_OFFSET))(this, value);
		}

		::System::Boolean get_debugDraw()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_DEBUGDRAW_OFFSET))(this);
		}

		::System::Void set_debugDraw(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_DEBUGDRAW_OFFSET))(this, value);
		}

		::System::Boolean get_previewEditMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_PREVIEWEDITMODE_OFFSET))(this);
		}

		::System::Void set_previewEditMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_PREVIEWEDITMODE_OFFSET))(this, value);
		}

		::System::Boolean get_enableManualUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_ENABLEMANUALUPDATE_OFFSET))(this);
		}

		::System::Void set_enableManualUpdate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_ENABLEMANUALUPDATE_OFFSET))(this, value);
		}

		::System::Single get_volumeComplianceFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_VOLUMECOMPLIANCEFACTOR_OFFSET))(this);
		}

		::System::Void set_volumeComplianceFactor(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_VOLUMECOMPLIANCEFACTOR_OFFSET))(this, value);
		}

		::System::Single get_distanceComplianceFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_DISTANCECOMPLIANCEFACTOR_OFFSET))(this);
		}

		::System::Void set_distanceComplianceFactor(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_DISTANCECOMPLIANCEFACTOR_OFFSET))(this, value);
		}

		::System::Boolean get_useDynamicCompliance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_USEDYNAMICCOMPLIANCE_OFFSET))(this);
		}

		::System::Void set_useDynamicCompliance(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_USEDYNAMICCOMPLIANCE_OFFSET))(this, value);
		}

		::System::Boolean get_postResponseSimulation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_POSTRESPONSESIMULATION_OFFSET))(this);
		}

		::System::Void set_postResponseSimulation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_POSTRESPONSESIMULATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_collisionAdditionalScope()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_COLLISIONADDITIONALSCOPE_OFFSET))(this);
		}

		::System::Void set_collisionAdditionalScope(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_COLLISIONADDITIONALSCOPE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_rigidBodyCollisionSize()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_RIGIDBODYCOLLISIONSIZE_OFFSET))(this);
		}

		::System::Void set_rigidBodyCollisionSize(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_RIGIDBODYCOLLISIONSIZE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_rigidBodyFixBoxSize()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_RIGIDBODYFIXBOXSIZE_OFFSET))(this);
		}

		::System::Void set_rigidBodyFixBoxSize(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_RIGIDBODYFIXBOXSIZE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_rigidBodyCollisionNormal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_RIGIDBODYCOLLISIONNORMAL_OFFSET))(this);
		}

		::System::Void set_rigidBodyCollisionNormal(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_RIGIDBODYCOLLISIONNORMAL_OFFSET))(this, value);
		}

		::System::UInt32 get_simulateRecoverFrame()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_SIMULATERECOVERFRAME_OFFSET))(this);
		}

		::System::Void set_simulateRecoverFrame(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_SIMULATERECOVERFRAME_OFFSET))(this, value);
		}

		::System::Boolean get_useStableCollision()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_USESTABLECOLLISION_OFFSET))(this);
		}

		::System::Void set_useStableCollision(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_USESTABLECOLLISION_OFFSET))(this, value);
		}

		::System::Boolean get_useOriginalNormalForCollision()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_USEORIGINALNORMALFORCOLLISION_OFFSET))(this);
		}

		::System::Void set_useOriginalNormalForCollision(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_USEORIGINALNORMALFORCOLLISION_OFFSET))(this, value);
		}

		::System::Single get_distanceScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_DISTANCESCALE_OFFSET))(this);
		}

		::System::Void set_distanceScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_DISTANCESCALE_OFFSET))(this, value);
		}

		::System::Single get_volumeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_VOLUMESCALE_OFFSET))(this);
		}

		::System::Void set_volumeScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_VOLUMESCALE_OFFSET))(this, value);
		}

		::System::Void UpdateTargetComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_UPDATETARGETCOMPONENT_OFFSET))(this);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_ISVISIBLE_OFFSET))(this);
		}

		::System::Void ResetSolver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_RESETSOLVER_OFFSET))(this);
		}

		::System::Void ApplyImpulse(::UnityEngine::Vector3 impulse, ::Il2CppArray<::System::UInt32>* particleIndicies, ::UnityEngine::PBDMassUseType massType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::Il2CppArray<::System::UInt32>*, ::UnityEngine::PBDMassUseType))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_APPLYIMPULSE_OFFSET))(this, impulse, particleIndicies, massType);
		}

		::System::Void ApplyImpulseAll(::UnityEngine::Vector3 impulse, ::System::Single forceDeviation, ::System::Single directionDeviation, ::UnityEngine::PBDMassUseType massType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::PBDMassUseType))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_APPLYIMPULSEALL_OFFSET))(this, impulse, forceDeviation, directionDeviation, massType);
		}

		::System::Void BreakConstraints(::Il2CppArray<::System::UInt32>* constraints)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_BREAKCONSTRAINTS_OFFSET))(this, constraints);
		}

		::Il2CppArray<::UnityEngine::Vector3>* GetParticlePositions()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GETPARTICLEPOSITIONS_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetParticlePosition(::System::UInt32 index)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GETPARTICLEPOSITION_OFFSET))(this, index);
		}

		::System::Boolean ShouldGenerateStaticMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SHOULDGENERATESTATICMESH_OFFSET))(this);
		}

		::System::Boolean ShouldSolveRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SHOULDSOLVEROTATION_OFFSET))(this);
		}

		::System::Void UpdateInEditMode(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_UPDATEINEDITMODE_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateManually(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_UPDATEMANUALLY_OFFSET))(this, deltaTime);
		}

		::System::Void get_uvTilling_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_UVTILLING_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_uvTilling_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_UVTILLING_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_uvOffset_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_UVOFFSET_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_uvOffset_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_UVOFFSET_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_gravity_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_GRAVITY_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_gravity_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_GRAVITY_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_collisionAdditionalScope_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_COLLISIONADDITIONALSCOPE_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_collisionAdditionalScope_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_COLLISIONADDITIONALSCOPE_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_rigidBodyCollisionSize_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_RIGIDBODYCOLLISIONSIZE_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_rigidBodyCollisionSize_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_RIGIDBODYCOLLISIONSIZE_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_rigidBodyFixBoxSize_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_RIGIDBODYFIXBOXSIZE_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_rigidBodyFixBoxSize_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_RIGIDBODYFIXBOXSIZE_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_rigidBodyCollisionNormal_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GET_RIGIDBODYCOLLISIONNORMAL_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_rigidBodyCollisionNormal_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_SET_RIGIDBODYCOLLISIONNORMAL_INJECTED_OFFSET))(this, value);
		}

		::System::Void ApplyImpulse_Injected(::UnityEngine::Vector3& impulse, ::Il2CppArray<::System::UInt32>* particleIndicies, ::UnityEngine::PBDMassUseType massType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::Il2CppArray<::System::UInt32>*, ::UnityEngine::PBDMassUseType))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_APPLYIMPULSE_INJECTED_OFFSET))(this, impulse, particleIndicies, massType);
		}

		::System::Void ApplyImpulseAll_Injected(::UnityEngine::Vector3& impulse, ::System::Single forceDeviation, ::System::Single directionDeviation, ::UnityEngine::PBDMassUseType massType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Single, ::System::Single, ::UnityEngine::PBDMassUseType))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_APPLYIMPULSEALL_INJECTED_OFFSET))(this, impulse, forceDeviation, directionDeviation, massType);
		}

		::System::Void GetParticlePosition_Injected(::System::UInt32 index, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PBDDEFORMER_GETPARTICLEPOSITION_INJECTED_OFFSET))(this, index, ret);
		}
	};
}
