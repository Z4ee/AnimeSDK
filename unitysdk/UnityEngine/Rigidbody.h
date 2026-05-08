#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/CollisionDetectionMode.h"
#include "unitysdk/UnityEngine/Component.h"
#include "unitysdk/UnityEngine/ForceMode.h"
#include "unitysdk/UnityEngine/NAPModifyContactConstraints.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/QueryTriggerInteraction.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/RigidbodyConstraints.h"
#include "unitysdk/UnityEngine/RigidbodyInterpolation.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RIGIDBODY_ADDEXPLOSIONFORCE_1_OFFSET UNITYSDK_OFFSET(0x1B7BF290)
#define UNITYENGINE_RIGIDBODY_ADDEXPLOSIONFORCE_2_OFFSET UNITYSDK_OFFSET(0x1B7BF2D0)
#define UNITYENGINE_RIGIDBODY_ADDEXPLOSIONFORCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BF280)
#define UNITYENGINE_RIGIDBODY_ADDEXPLOSIONFORCE_OFFSET UNITYSDK_OFFSET(0x1B7BF270)
#define UNITYENGINE_RIGIDBODY_ADDFORCEATPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1B7BF230)
#define UNITYENGINE_RIGIDBODY_ADDFORCEATPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BF220)
#define UNITYENGINE_RIGIDBODY_ADDFORCEATPOSITION_OFFSET UNITYSDK_OFFSET(0x1B7BF210)
#define UNITYENGINE_RIGIDBODY_ADDFORCE_1_OFFSET UNITYSDK_OFFSET(0x1B7BEF70)
#define UNITYENGINE_RIGIDBODY_ADDFORCE_2_OFFSET UNITYSDK_OFFSET(0x1B7BEFA0)
#define UNITYENGINE_RIGIDBODY_ADDFORCE_3_OFFSET UNITYSDK_OFFSET(0x1B7BEFD0)
#define UNITYENGINE_RIGIDBODY_ADDFORCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BEF60)
#define UNITYENGINE_RIGIDBODY_ADDFORCE_OFFSET UNITYSDK_OFFSET(0x1B7BEF50)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_1_OFFSET UNITYSDK_OFFSET(0x1B7BF020)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_2_OFFSET UNITYSDK_OFFSET(0x1B7BF050)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_3_OFFSET UNITYSDK_OFFSET(0x1B7BF080)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BF010)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_OFFSET UNITYSDK_OFFSET(0x1B7BF000)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_1_OFFSET UNITYSDK_OFFSET(0x1B7BF180)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_2_OFFSET UNITYSDK_OFFSET(0x1B7BF1B0)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_3_OFFSET UNITYSDK_OFFSET(0x1B7BF1E0)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BF170)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_OFFSET UNITYSDK_OFFSET(0x1B7BF160)
#define UNITYENGINE_RIGIDBODY_ADDTORQUE_1_OFFSET UNITYSDK_OFFSET(0x1B7BF0D0)
#define UNITYENGINE_RIGIDBODY_ADDTORQUE_2_OFFSET UNITYSDK_OFFSET(0x1B7BF100)
#define UNITYENGINE_RIGIDBODY_ADDTORQUE_3_OFFSET UNITYSDK_OFFSET(0x1B7BF130)
#define UNITYENGINE_RIGIDBODY_ADDTORQUE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BF0C0)
#define UNITYENGINE_RIGIDBODY_ADDTORQUE_OFFSET UNITYSDK_OFFSET(0x1B7BF0B0)
#define UNITYENGINE_RIGIDBODY_APPLYNAPMODIFYCONTACTCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1B7BEDA0)
#define UNITYENGINE_RIGIDBODY_CLOSESTPOINTONBOUNDS_OFFSET UNITYSDK_OFFSET(0x1B7BF330)
#define UNITYENGINE_RIGIDBODY_GETPOINTVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BEE70)
#define UNITYENGINE_RIGIDBODY_GETPOINTVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B7BEE20)
#define UNITYENGINE_RIGIDBODY_GETRELATIVEPOINTVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BEE10)
#define UNITYENGINE_RIGIDBODY_GETRELATIVEPOINTVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B7BEDC0)
#define UNITYENGINE_RIGIDBODY_GET_ANGULARDRAG_OFFSET UNITYSDK_OFFSET(0x1B7BE750)
#define UNITYENGINE_RIGIDBODY_GET_ANGULARVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BE700)
#define UNITYENGINE_RIGIDBODY_GET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B7BE6B0)
#define UNITYENGINE_RIGIDBODY_GET_BASEVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BEC90)
#define UNITYENGINE_RIGIDBODY_GET_BASEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B7BEC40)
#define UNITYENGINE_RIGIDBODY_GET_CENTEROFMASS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BE910)
#define UNITYENGINE_RIGIDBODY_GET_CENTEROFMASS_OFFSET UNITYSDK_OFFSET(0x1B7BE8C0)
#define UNITYENGINE_RIGIDBODY_GET_COLLISIONDETECTIONMODE_OFFSET UNITYSDK_OFFSET(0x1B7BE8A0)
#define UNITYENGINE_RIGIDBODY_GET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1B7BE860)
#define UNITYENGINE_RIGIDBODY_GET_DETECTCOLLISIONS_OFFSET UNITYSDK_OFFSET(0x1B7BEA90)
#define UNITYENGINE_RIGIDBODY_GET_DRAG_OFFSET UNITYSDK_OFFSET(0x1B7BE730)
#define UNITYENGINE_RIGIDBODY_GET_EVENOUTVELOCITYFORFRAMESKIP_OFFSET UNITYSDK_OFFSET(0x1B7BE820)
#define UNITYENGINE_RIGIDBODY_GET_FREEZEROTATION_OFFSET UNITYSDK_OFFSET(0x1B7BE800)
#define UNITYENGINE_RIGIDBODY_GET_INERTIATENSORROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BE9E0)
#define UNITYENGINE_RIGIDBODY_GET_INERTIATENSORROTATION_OFFSET UNITYSDK_OFFSET(0x1B7BE9A0)
#define UNITYENGINE_RIGIDBODY_GET_INERTIATENSOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BEA60)
#define UNITYENGINE_RIGIDBODY_GET_INERTIATENSOR_OFFSET UNITYSDK_OFFSET(0x1B7BEA10)
#define UNITYENGINE_RIGIDBODY_GET_INTERPOLATION_OFFSET UNITYSDK_OFFSET(0x1B7BEBA0)
#define UNITYENGINE_RIGIDBODY_GET_ISKINEMATIC_OFFSET UNITYSDK_OFFSET(0x1B7BE7E0)
#define UNITYENGINE_RIGIDBODY_GET_MASS_OFFSET UNITYSDK_OFFSET(0x1B7BE770)
#define UNITYENGINE_RIGIDBODY_GET_MAXANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B7BEC00)
#define UNITYENGINE_RIGIDBODY_GET_MAXDEPENETRATIONVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B7BE7C0)
#define UNITYENGINE_RIGIDBODY_GET_NAPMODIFYCONTACT_OFFSET UNITYSDK_OFFSET(0x1B7BE880)
#define UNITYENGINE_RIGIDBODY_GET_NAPSEPARATIONRATIO_OFFSET UNITYSDK_OFFSET(0x1B7BE840)
#define UNITYENGINE_RIGIDBODY_GET_POSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BEB00)
#define UNITYENGINE_RIGIDBODY_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1B7BEAB0)
#define UNITYENGINE_RIGIDBODY_GET_ROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BEB70)
#define UNITYENGINE_RIGIDBODY_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1B7BEB30)
#define UNITYENGINE_RIGIDBODY_GET_SLEEPANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B7BEEC0)
#define UNITYENGINE_RIGIDBODY_GET_SLEEPTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1B7BEBE0)
#define UNITYENGINE_RIGIDBODY_GET_SLEEPVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B7BEEA0)
#define UNITYENGINE_RIGIDBODY_GET_SOLVERITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1B7BEF10)
#define UNITYENGINE_RIGIDBODY_GET_SOLVERITERATIONS_OFFSET UNITYSDK_OFFSET(0x1B7BEBC0)
#define UNITYENGINE_RIGIDBODY_GET_SOLVERVELOCITYITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1B7BEF30)
#define UNITYENGINE_RIGIDBODY_GET_SOLVERVELOCITYITERATIONS_OFFSET UNITYSDK_OFFSET(0x1B7BEE80)
#define UNITYENGINE_RIGIDBODY_GET_USECONEFRICTION_OFFSET UNITYSDK_OFFSET(0x1B7BEEF0)
#define UNITYENGINE_RIGIDBODY_GET_USEGRAVITY_OFFSET UNITYSDK_OFFSET(0x1B7BE7A0)
#define UNITYENGINE_RIGIDBODY_GET_VELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BE680)
#define UNITYENGINE_RIGIDBODY_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1B7BE630)
#define UNITYENGINE_RIGIDBODY_GET_WORLDCENTEROFMASS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BE990)
#define UNITYENGINE_RIGIDBODY_GET_WORLDCENTEROFMASS_OFFSET UNITYSDK_OFFSET(0x1B7BE940)
#define UNITYENGINE_RIGIDBODY_GLOBALLYALLOWINTERPOLOATION_OFFSET UNITYSDK_OFFSET(0x1B7BFB00)
#define UNITYENGINE_RIGIDBODY_INTERNAL_CLOSESTPOINTONBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BF320)
#define UNITYENGINE_RIGIDBODY_INTERNAL_CLOSESTPOINTONBOUNDS_OFFSET UNITYSDK_OFFSET(0x1B7BF310)
#define UNITYENGINE_RIGIDBODY_INTERNAL_SWEEPTESTALL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BF840)
#define UNITYENGINE_RIGIDBODY_INTERNAL_SWEEPTESTALL_OFFSET UNITYSDK_OFFSET(0x1B7BF830)
#define UNITYENGINE_RIGIDBODY_ISDELAYDELETED_OFFSET UNITYSDK_OFFSET(0x1B7BFB10)
#define UNITYENGINE_RIGIDBODY_ISSLEEPING_OFFSET UNITYSDK_OFFSET(0x1B7BED70)
#define UNITYENGINE_RIGIDBODY_MOVEPOSITIONSMOOTH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BECD0)
#define UNITYENGINE_RIGIDBODY_MOVEPOSITIONSMOOTH_OFFSET UNITYSDK_OFFSET(0x1B7BECC0)
#define UNITYENGINE_RIGIDBODY_MOVEPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BED30)
#define UNITYENGINE_RIGIDBODY_MOVEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B7BED20)
#define UNITYENGINE_RIGIDBODY_MOVEROTATIONSMOOTH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BECF0)
#define UNITYENGINE_RIGIDBODY_MOVEROTATIONSMOOTH_OFFSET UNITYSDK_OFFSET(0x1B7BECE0)
#define UNITYENGINE_RIGIDBODY_MOVEROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BED50)
#define UNITYENGINE_RIGIDBODY_MOVEROTATION_OFFSET UNITYSDK_OFFSET(0x1B7BED40)
#define UNITYENGINE_RIGIDBODY_MOVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BED10)
#define UNITYENGINE_RIGIDBODY_MOVE_OFFSET UNITYSDK_OFFSET(0x1B7BED00)
#define UNITYENGINE_RIGIDBODY_RESETCENTEROFMASS_OFFSET UNITYSDK_OFFSET(0x1B7BED90)
#define UNITYENGINE_RIGIDBODY_RESETINERTIATENSOR_OFFSET UNITYSDK_OFFSET(0x1B7BEDB0)
#define UNITYENGINE_RIGIDBODY_SETDENSITY_OFFSET UNITYSDK_OFFSET(0x1B7BE790)
#define UNITYENGINE_RIGIDBODY_SETMAXANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B7BEEE0)
#define UNITYENGINE_RIGIDBODY_SET_ANGULARDRAG_OFFSET UNITYSDK_OFFSET(0x1B7BE760)
#define UNITYENGINE_RIGIDBODY_SET_ANGULARVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BE720)
#define UNITYENGINE_RIGIDBODY_SET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B7BE710)
#define UNITYENGINE_RIGIDBODY_SET_BASEVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BECB0)
#define UNITYENGINE_RIGIDBODY_SET_BASEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B7BECA0)
#define UNITYENGINE_RIGIDBODY_SET_CENTEROFMASS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BE930)
#define UNITYENGINE_RIGIDBODY_SET_CENTEROFMASS_OFFSET UNITYSDK_OFFSET(0x1B7BE920)
#define UNITYENGINE_RIGIDBODY_SET_COLLISIONDETECTIONMODE_OFFSET UNITYSDK_OFFSET(0x1B7BE8B0)
#define UNITYENGINE_RIGIDBODY_SET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1B7BE870)
#define UNITYENGINE_RIGIDBODY_SET_DETECTCOLLISIONS_OFFSET UNITYSDK_OFFSET(0x1B7BEAA0)
#define UNITYENGINE_RIGIDBODY_SET_DRAG_OFFSET UNITYSDK_OFFSET(0x1B7BE740)
#define UNITYENGINE_RIGIDBODY_SET_EVENOUTVELOCITYFORFRAMESKIP_OFFSET UNITYSDK_OFFSET(0x1B7BE830)
#define UNITYENGINE_RIGIDBODY_SET_FREEZEROTATION_OFFSET UNITYSDK_OFFSET(0x1B7BE810)
#define UNITYENGINE_RIGIDBODY_SET_INERTIATENSORROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BEA00)
#define UNITYENGINE_RIGIDBODY_SET_INERTIATENSORROTATION_OFFSET UNITYSDK_OFFSET(0x1B7BE9F0)
#define UNITYENGINE_RIGIDBODY_SET_INERTIATENSOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BEA80)
#define UNITYENGINE_RIGIDBODY_SET_INERTIATENSOR_OFFSET UNITYSDK_OFFSET(0x1B7BEA70)
#define UNITYENGINE_RIGIDBODY_SET_INTERPOLATION_OFFSET UNITYSDK_OFFSET(0x1B7BEBB0)
#define UNITYENGINE_RIGIDBODY_SET_ISKINEMATIC_OFFSET UNITYSDK_OFFSET(0x1B7BE7F0)
#define UNITYENGINE_RIGIDBODY_SET_MASS_OFFSET UNITYSDK_OFFSET(0x1B7BE780)
#define UNITYENGINE_RIGIDBODY_SET_MAXANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B7BEC10)
#define UNITYENGINE_RIGIDBODY_SET_MAXDEPENETRATIONVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B7BE7D0)
#define UNITYENGINE_RIGIDBODY_SET_NAPMODIFYCONTACT_OFFSET UNITYSDK_OFFSET(0x1B7BE890)
#define UNITYENGINE_RIGIDBODY_SET_NAPSEPARATIONRATIO_OFFSET UNITYSDK_OFFSET(0x1B7BE850)
#define UNITYENGINE_RIGIDBODY_SET_POSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BEB20)
#define UNITYENGINE_RIGIDBODY_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1B7BEB10)
#define UNITYENGINE_RIGIDBODY_SET_ROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BEB90)
#define UNITYENGINE_RIGIDBODY_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1B7BEB80)
#define UNITYENGINE_RIGIDBODY_SET_SLEEPANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B7BEED0)
#define UNITYENGINE_RIGIDBODY_SET_SLEEPTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1B7BEBF0)
#define UNITYENGINE_RIGIDBODY_SET_SLEEPVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B7BEEB0)
#define UNITYENGINE_RIGIDBODY_SET_SOLVERITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1B7BEF20)
#define UNITYENGINE_RIGIDBODY_SET_SOLVERITERATIONS_OFFSET UNITYSDK_OFFSET(0x1B7BEBD0)
#define UNITYENGINE_RIGIDBODY_SET_SOLVERVELOCITYITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1B7BEF40)
#define UNITYENGINE_RIGIDBODY_SET_SOLVERVELOCITYITERATIONS_OFFSET UNITYSDK_OFFSET(0x1B7BEE90)
#define UNITYENGINE_RIGIDBODY_SET_USECONEFRICTION_OFFSET UNITYSDK_OFFSET(0x1B7BEF00)
#define UNITYENGINE_RIGIDBODY_SET_USEGRAVITY_OFFSET UNITYSDK_OFFSET(0x1B7BE7B0)
#define UNITYENGINE_RIGIDBODY_SET_VELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BE6A0)
#define UNITYENGINE_RIGIDBODY_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1B7BE690)
#define UNITYENGINE_RIGIDBODY_SLEEP_OFFSET UNITYSDK_OFFSET(0x1B7BED60)
#define UNITYENGINE_RIGIDBODY_SWEEPTESTALL_1_OFFSET UNITYSDK_OFFSET(0x1B7BF930)
#define UNITYENGINE_RIGIDBODY_SWEEPTESTALL_2_OFFSET UNITYSDK_OFFSET(0x1B7BFA20)
#define UNITYENGINE_RIGIDBODY_SWEEPTESTALL_OFFSET UNITYSDK_OFFSET(0x1B7BF850)
#define UNITYENGINE_RIGIDBODY_SWEEPTEST_1_OFFSET UNITYSDK_OFFSET(0x1B7BF430)
#define UNITYENGINE_RIGIDBODY_SWEEPTEST_2_OFFSET UNITYSDK_OFFSET(0x1B7BF580)
#define UNITYENGINE_RIGIDBODY_SWEEPTEST_3_OFFSET UNITYSDK_OFFSET(0x1B7BF6E0)
#define UNITYENGINE_RIGIDBODY_SWEEPTEST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BF420)
#define UNITYENGINE_RIGIDBODY_SWEEPTEST_OFFSET UNITYSDK_OFFSET(0x1B7BF3A0)
#define UNITYENGINE_RIGIDBODY_UPDATEVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B7BEC30)
#define UNITYENGINE_RIGIDBODY_UPDATEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B7BEC20)
#define UNITYENGINE_RIGIDBODY_WAKEUP_OFFSET UNITYSDK_OFFSET(0x1B7BED80)
#define UNITYENGINE_RIGIDBODY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7BFB20)

namespace UnityEngine
{
	inline static constexpr unsigned int Rigidbody_TypeDefinitionIndex = 7667;

	class Rigidbody : public ::UnityEngine::Component
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_velocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_VELOCITY_OFFSET))(this);
		}

		::System::Void set_velocity(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_VELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_angularVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_ANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_angularVelocity(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_ANGULARVELOCITY_OFFSET))(this, value);
		}

		::System::Single get_drag()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_DRAG_OFFSET))(this);
		}

		::System::Void set_drag(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_DRAG_OFFSET))(this, value);
		}

		::System::Single get_angularDrag()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_ANGULARDRAG_OFFSET))(this);
		}

		::System::Void set_angularDrag(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_ANGULARDRAG_OFFSET))(this, value);
		}

		::System::Single get_mass()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_MASS_OFFSET))(this);
		}

		::System::Void set_mass(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_MASS_OFFSET))(this, value);
		}

		::System::Void SetDensity(::System::Single density)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SETDENSITY_OFFSET))(this, density);
		}

		::System::Boolean get_useGravity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_USEGRAVITY_OFFSET))(this);
		}

		::System::Void set_useGravity(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_USEGRAVITY_OFFSET))(this, value);
		}

		::System::Single get_maxDepenetrationVelocity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_MAXDEPENETRATIONVELOCITY_OFFSET))(this);
		}

		::System::Void set_maxDepenetrationVelocity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_MAXDEPENETRATIONVELOCITY_OFFSET))(this, value);
		}

		::System::Boolean get_isKinematic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_ISKINEMATIC_OFFSET))(this);
		}

		::System::Void set_isKinematic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_ISKINEMATIC_OFFSET))(this, value);
		}

		::System::Boolean get_freezeRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_FREEZEROTATION_OFFSET))(this);
		}

		::System::Void set_freezeRotation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_FREEZEROTATION_OFFSET))(this, value);
		}

		::System::Boolean get_evenOutVelocityForFrameSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_EVENOUTVELOCITYFORFRAMESKIP_OFFSET))(this);
		}

		::System::Void set_evenOutVelocityForFrameSkip(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_EVENOUTVELOCITYFORFRAMESKIP_OFFSET))(this, value);
		}

		::System::Boolean get_napSeparationRatio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_NAPSEPARATIONRATIO_OFFSET))(this);
		}

		::System::Void set_napSeparationRatio(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_NAPSEPARATIONRATIO_OFFSET))(this, value);
		}

		::UnityEngine::RigidbodyConstraints get_constraints()
		{
			return ((::UnityEngine::RigidbodyConstraints(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_CONSTRAINTS_OFFSET))(this);
		}

		::System::Void set_constraints(::UnityEngine::RigidbodyConstraints value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RigidbodyConstraints))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_CONSTRAINTS_OFFSET))(this, value);
		}

		::UnityEngine::NAPModifyContactConstraints get_napModifyContact()
		{
			return ((::UnityEngine::NAPModifyContactConstraints(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_NAPMODIFYCONTACT_OFFSET))(this);
		}

		::System::Void set_napModifyContact(::UnityEngine::NAPModifyContactConstraints value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPModifyContactConstraints))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_NAPMODIFYCONTACT_OFFSET))(this, value);
		}

		::UnityEngine::CollisionDetectionMode get_collisionDetectionMode()
		{
			return ((::UnityEngine::CollisionDetectionMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_COLLISIONDETECTIONMODE_OFFSET))(this);
		}

		::System::Void set_collisionDetectionMode(::UnityEngine::CollisionDetectionMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CollisionDetectionMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_COLLISIONDETECTIONMODE_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_centerOfMass()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_CENTEROFMASS_OFFSET))(this);
		}

		::System::Void set_centerOfMass(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_CENTEROFMASS_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_worldCenterOfMass()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_WORLDCENTEROFMASS_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_inertiaTensorRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_INERTIATENSORROTATION_OFFSET))(this);
		}

		::System::Void set_inertiaTensorRotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_INERTIATENSORROTATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_inertiaTensor()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_INERTIATENSOR_OFFSET))(this);
		}

		::System::Void set_inertiaTensor(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_INERTIATENSOR_OFFSET))(this, value);
		}

		::System::Boolean get_detectCollisions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_DETECTCOLLISIONS_OFFSET))(this);
		}

		::System::Void set_detectCollisions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_DETECTCOLLISIONS_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_POSITION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_ROTATION_OFFSET))(this, value);
		}

		::UnityEngine::RigidbodyInterpolation get_interpolation()
		{
			return ((::UnityEngine::RigidbodyInterpolation(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_INTERPOLATION_OFFSET))(this);
		}

		::System::Void set_interpolation(::UnityEngine::RigidbodyInterpolation value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RigidbodyInterpolation))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_INTERPOLATION_OFFSET))(this, value);
		}

		::System::Int32 get_solverIterations()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_SOLVERITERATIONS_OFFSET))(this);
		}

		::System::Void set_solverIterations(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_SOLVERITERATIONS_OFFSET))(this, value);
		}

		::System::Single get_sleepThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_SLEEPTHRESHOLD_OFFSET))(this);
		}

		::System::Void set_sleepThreshold(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_SLEEPTHRESHOLD_OFFSET))(this, value);
		}

		::System::Single get_maxAngularVelocity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_MAXANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_maxAngularVelocity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_MAXANGULARVELOCITY_OFFSET))(this, value);
		}

		::System::Void UpdateVelocity(::UnityEngine::Vector3 velocity)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_UPDATEVELOCITY_OFFSET))(this, velocity);
		}

		::UnityEngine::Vector3 get_baseVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_BASEVELOCITY_OFFSET))(this);
		}

		::System::Void set_baseVelocity(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_BASEVELOCITY_OFFSET))(this, value);
		}

		::System::Void MovePositionSmooth(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_MOVEPOSITIONSMOOTH_OFFSET))(this, position);
		}

		::System::Void MoveRotationSmooth(::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_MOVEROTATIONSMOOTH_OFFSET))(this, rot);
		}

		::System::Void Move(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_MOVE_OFFSET))(this, position, rot);
		}

		::System::Void MovePosition(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_MOVEPOSITION_OFFSET))(this, position);
		}

		::System::Void MoveRotation(::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_MOVEROTATION_OFFSET))(this, rot);
		}

		::System::Void Sleep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SLEEP_OFFSET))(this);
		}

		::System::Boolean IsSleeping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ISSLEEPING_OFFSET))(this);
		}

		::System::Void WakeUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_WAKEUP_OFFSET))(this);
		}

		::System::Void ResetCenterOfMass()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_RESETCENTEROFMASS_OFFSET))(this);
		}

		::System::Void ApplyNapModifyContactConstraints(::System::Int32 flags, ::System::Single separationRatio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_APPLYNAPMODIFYCONTACTCONSTRAINTS_OFFSET))(this, flags, separationRatio);
		}

		::System::Void ResetInertiaTensor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_RESETINERTIATENSOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetRelativePointVelocity(::UnityEngine::Vector3 relativePoint)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GETRELATIVEPOINTVELOCITY_OFFSET))(this, relativePoint);
		}

		::UnityEngine::Vector3 GetPointVelocity(::UnityEngine::Vector3 worldPoint)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GETPOINTVELOCITY_OFFSET))(this, worldPoint);
		}

		::System::Int32 get_solverVelocityIterations()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_SOLVERVELOCITYITERATIONS_OFFSET))(this);
		}

		::System::Void set_solverVelocityIterations(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_SOLVERVELOCITYITERATIONS_OFFSET))(this, value);
		}

		::System::Single get_sleepVelocity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_SLEEPVELOCITY_OFFSET))(this);
		}

		::System::Void set_sleepVelocity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_SLEEPVELOCITY_OFFSET))(this, value);
		}

		::System::Single get_sleepAngularVelocity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_SLEEPANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_sleepAngularVelocity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_SLEEPANGULARVELOCITY_OFFSET))(this, value);
		}

		::System::Void SetMaxAngularVelocity(::System::Single a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SETMAXANGULARVELOCITY_OFFSET))(this, a);
		}

		::System::Boolean get_useConeFriction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_USECONEFRICTION_OFFSET))(this);
		}

		::System::Void set_useConeFriction(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_USECONEFRICTION_OFFSET))(this, value);
		}

		::System::Int32 get_solverIterationCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_SOLVERITERATIONCOUNT_OFFSET))(this);
		}

		::System::Void set_solverIterationCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_SOLVERITERATIONCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_solverVelocityIterationCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_SOLVERVELOCITYITERATIONCOUNT_OFFSET))(this);
		}

		::System::Void set_solverVelocityIterationCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_SOLVERVELOCITYITERATIONCOUNT_OFFSET))(this, value);
		}

		::System::Void AddForce(::UnityEngine::Vector3 force, ::UnityEngine::ForceMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDFORCE_OFFSET))(this, force, mode);
		}

		::System::Void AddForce_1(::UnityEngine::Vector3 force)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDFORCE_1_OFFSET))(this, force);
		}

		::System::Void AddForce_2(::System::Single x, ::System::Single y, ::System::Single z, ::UnityEngine::ForceMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDFORCE_2_OFFSET))(this, x, y, z, mode);
		}

		::System::Void AddForce_3(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDFORCE_3_OFFSET))(this, x, y, z);
		}

		::System::Void AddRelativeForce(::UnityEngine::Vector3 force, ::UnityEngine::ForceMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_OFFSET))(this, force, mode);
		}

		::System::Void AddRelativeForce_1(::UnityEngine::Vector3 force)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_1_OFFSET))(this, force);
		}

		::System::Void AddRelativeForce_2(::System::Single x, ::System::Single y, ::System::Single z, ::UnityEngine::ForceMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_2_OFFSET))(this, x, y, z, mode);
		}

		::System::Void AddRelativeForce_3(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_3_OFFSET))(this, x, y, z);
		}

		::System::Void AddTorque(::UnityEngine::Vector3 torque, ::UnityEngine::ForceMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDTORQUE_OFFSET))(this, torque, mode);
		}

		::System::Void AddTorque_1(::UnityEngine::Vector3 torque)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDTORQUE_1_OFFSET))(this, torque);
		}

		::System::Void AddTorque_2(::System::Single x, ::System::Single y, ::System::Single z, ::UnityEngine::ForceMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDTORQUE_2_OFFSET))(this, x, y, z, mode);
		}

		::System::Void AddTorque_3(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDTORQUE_3_OFFSET))(this, x, y, z);
		}

		::System::Void AddRelativeTorque(::UnityEngine::Vector3 torque, ::UnityEngine::ForceMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_OFFSET))(this, torque, mode);
		}

		::System::Void AddRelativeTorque_1(::UnityEngine::Vector3 torque)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_1_OFFSET))(this, torque);
		}

		::System::Void AddRelativeTorque_2(::System::Single x, ::System::Single y, ::System::Single z, ::UnityEngine::ForceMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_2_OFFSET))(this, x, y, z, mode);
		}

		::System::Void AddRelativeTorque_3(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_3_OFFSET))(this, x, y, z);
		}

		::System::Void AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position, ::UnityEngine::ForceMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDFORCEATPOSITION_OFFSET))(this, force, position, mode);
		}

		::System::Void AddForceAtPosition_1(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDFORCEATPOSITION_1_OFFSET))(this, force, position);
		}

		::System::Void AddExplosionForce(::System::Single explosionForce, ::UnityEngine::Vector3 explosionPosition, ::System::Single explosionRadius, ::System::Single upwardsModifier, ::UnityEngine::ForceMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDEXPLOSIONFORCE_OFFSET))(this, explosionForce, explosionPosition, explosionRadius, upwardsModifier, mode);
		}

		::System::Void AddExplosionForce_1(::System::Single explosionForce, ::UnityEngine::Vector3 explosionPosition, ::System::Single explosionRadius, ::System::Single upwardsModifier)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDEXPLOSIONFORCE_1_OFFSET))(this, explosionForce, explosionPosition, explosionRadius, upwardsModifier);
		}

		::System::Void AddExplosionForce_2(::System::Single explosionForce, ::UnityEngine::Vector3 explosionPosition, ::System::Single explosionRadius)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDEXPLOSIONFORCE_2_OFFSET))(this, explosionForce, explosionPosition, explosionRadius);
		}

		::System::Void Internal_ClosestPointOnBounds(::UnityEngine::Vector3 point, ::UnityEngine::Vector3& outPos, ::System::Single& distance)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_INTERNAL_CLOSESTPOINTONBOUNDS_OFFSET))(this, point, outPos, distance);
		}

		::UnityEngine::Vector3 ClosestPointOnBounds(::UnityEngine::Vector3 position)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_CLOSESTPOINTONBOUNDS_OFFSET))(this, position);
		}

		::UnityEngine::RaycastHit SweepTest(::UnityEngine::Vector3 direction, ::System::Single maxDistance, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean& hasHit)
		{
			return ((::UnityEngine::RaycastHit(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SWEEPTEST_OFFSET))(this, direction, maxDistance, queryTriggerInteraction, hasHit);
		}

		::System::Boolean SweepTest_1(::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SWEEPTEST_1_OFFSET))(this, direction, hitInfo, maxDistance, queryTriggerInteraction);
		}

		::System::Boolean SweepTest_2(::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo, ::System::Single maxDistance)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SWEEPTEST_2_OFFSET))(this, direction, hitInfo, maxDistance);
		}

		::System::Boolean SweepTest_3(::UnityEngine::Vector3 direction, ::UnityEngine::RaycastHit& hitInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SWEEPTEST_3_OFFSET))(this, direction, hitInfo);
		}

		::Il2CppArray<::UnityEngine::RaycastHit>* Internal_SweepTestAll(::UnityEngine::Vector3 direction, ::System::Single maxDistance, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_INTERNAL_SWEEPTESTALL_OFFSET))(this, direction, maxDistance, queryTriggerInteraction);
		}

		::Il2CppArray<::UnityEngine::RaycastHit>* SweepTestAll(::UnityEngine::Vector3 direction, ::System::Single maxDistance, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SWEEPTESTALL_OFFSET))(this, direction, maxDistance, queryTriggerInteraction);
		}

		::Il2CppArray<::UnityEngine::RaycastHit>* SweepTestAll_1(::UnityEngine::Vector3 direction, ::System::Single maxDistance)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SWEEPTESTALL_1_OFFSET))(this, direction, maxDistance);
		}

		::Il2CppArray<::UnityEngine::RaycastHit>* SweepTestAll_2(::UnityEngine::Vector3 direction)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SWEEPTESTALL_2_OFFSET))(this, direction);
		}

		static ::System::Void GloballyAllowInterpoloation(::System::Boolean allow)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GLOBALLYALLOWINTERPOLOATION_OFFSET))(allow);
		}

		::System::Boolean IsDelayDeleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ISDELAYDELETED_OFFSET))(this);
		}

		::System::Void get_velocity_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_VELOCITY_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_velocity_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_VELOCITY_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_angularVelocity_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_ANGULARVELOCITY_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_angularVelocity_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_ANGULARVELOCITY_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_centerOfMass_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_CENTEROFMASS_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_centerOfMass_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_CENTEROFMASS_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_worldCenterOfMass_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_WORLDCENTEROFMASS_INJECTED_OFFSET))(this, ret);
		}

		::System::Void get_inertiaTensorRotation_Injected(::UnityEngine::Quaternion& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_INERTIATENSORROTATION_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_inertiaTensorRotation_Injected(::UnityEngine::Quaternion& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_INERTIATENSORROTATION_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_inertiaTensor_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_INERTIATENSOR_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_inertiaTensor_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_INERTIATENSOR_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_position_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_POSITION_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_position_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_POSITION_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_rotation_Injected(::UnityEngine::Quaternion& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_ROTATION_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_rotation_Injected(::UnityEngine::Quaternion& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_ROTATION_INJECTED_OFFSET))(this, value);
		}

		::System::Void UpdateVelocity_Injected(::UnityEngine::Vector3& velocity)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_UPDATEVELOCITY_INJECTED_OFFSET))(this, velocity);
		}

		::System::Void get_baseVelocity_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_BASEVELOCITY_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_baseVelocity_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_BASEVELOCITY_INJECTED_OFFSET))(this, value);
		}

		::System::Void MovePositionSmooth_Injected(::UnityEngine::Vector3& position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_MOVEPOSITIONSMOOTH_INJECTED_OFFSET))(this, position);
		}

		::System::Void MoveRotationSmooth_Injected(::UnityEngine::Quaternion& rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_MOVEROTATIONSMOOTH_INJECTED_OFFSET))(this, rot);
		}

		::System::Void Move_Injected(::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_MOVE_INJECTED_OFFSET))(this, position, rot);
		}

		::System::Void MovePosition_Injected(::UnityEngine::Vector3& position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_MOVEPOSITION_INJECTED_OFFSET))(this, position);
		}

		::System::Void MoveRotation_Injected(::UnityEngine::Quaternion& rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_MOVEROTATION_INJECTED_OFFSET))(this, rot);
		}

		::System::Void GetRelativePointVelocity_Injected(::UnityEngine::Vector3& relativePoint, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GETRELATIVEPOINTVELOCITY_INJECTED_OFFSET))(this, relativePoint, ret);
		}

		::System::Void GetPointVelocity_Injected(::UnityEngine::Vector3& worldPoint, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GETPOINTVELOCITY_INJECTED_OFFSET))(this, worldPoint, ret);
		}

		::System::Void AddForce_Injected(::UnityEngine::Vector3& force, ::UnityEngine::ForceMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDFORCE_INJECTED_OFFSET))(this, force, mode);
		}

		::System::Void AddRelativeForce_Injected(::UnityEngine::Vector3& force, ::UnityEngine::ForceMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_INJECTED_OFFSET))(this, force, mode);
		}

		::System::Void AddTorque_Injected(::UnityEngine::Vector3& torque, ::UnityEngine::ForceMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDTORQUE_INJECTED_OFFSET))(this, torque, mode);
		}

		::System::Void AddRelativeTorque_Injected(::UnityEngine::Vector3& torque, ::UnityEngine::ForceMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_INJECTED_OFFSET))(this, torque, mode);
		}

		::System::Void AddForceAtPosition_Injected(::UnityEngine::Vector3& force, ::UnityEngine::Vector3& position, ::UnityEngine::ForceMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDFORCEATPOSITION_INJECTED_OFFSET))(this, force, position, mode);
		}

		::System::Void AddExplosionForce_Injected(::System::Single explosionForce, ::UnityEngine::Vector3& explosionPosition, ::System::Single explosionRadius, ::System::Single upwardsModifier, ::UnityEngine::ForceMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::System::Single, ::System::Single, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDEXPLOSIONFORCE_INJECTED_OFFSET))(this, explosionForce, explosionPosition, explosionRadius, upwardsModifier, mode);
		}

		::System::Void Internal_ClosestPointOnBounds_Injected(::UnityEngine::Vector3& point, ::UnityEngine::Vector3& outPos, ::System::Single& distance)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_INTERNAL_CLOSESTPOINTONBOUNDS_INJECTED_OFFSET))(this, point, outPos, distance);
		}

		::System::Void SweepTest_Injected(::UnityEngine::Vector3& direction, ::System::Single maxDistance, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::System::Boolean& hasHit, ::UnityEngine::RaycastHit& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean&, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SWEEPTEST_INJECTED_OFFSET))(this, direction, maxDistance, queryTriggerInteraction, hasHit, ret);
		}

		::Il2CppArray<::UnityEngine::RaycastHit>* Internal_SweepTestAll_Injected(::UnityEngine::Vector3& direction, ::System::Single maxDistance, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_INTERNAL_SWEEPTESTALL_INJECTED_OFFSET))(this, direction, maxDistance, queryTriggerInteraction);
		}
	};
}
