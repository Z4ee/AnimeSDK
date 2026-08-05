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

#define UNITYENGINE_RIGIDBODY_ADDEXPLOSIONFORCE_1_OFFSET UNITYSDK_OFFSET(0x1EDAA4A0)
#define UNITYENGINE_RIGIDBODY_ADDEXPLOSIONFORCE_2_OFFSET UNITYSDK_OFFSET(0x1EDAA4E0)
#define UNITYENGINE_RIGIDBODY_ADDEXPLOSIONFORCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDAA490)
#define UNITYENGINE_RIGIDBODY_ADDEXPLOSIONFORCE_OFFSET UNITYSDK_OFFSET(0x1EDAA480)
#define UNITYENGINE_RIGIDBODY_ADDFORCEATPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1EDAA440)
#define UNITYENGINE_RIGIDBODY_ADDFORCEATPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDAA430)
#define UNITYENGINE_RIGIDBODY_ADDFORCEATPOSITION_OFFSET UNITYSDK_OFFSET(0x1EDAA420)
#define UNITYENGINE_RIGIDBODY_ADDFORCE_1_OFFSET UNITYSDK_OFFSET(0x1EDAA180)
#define UNITYENGINE_RIGIDBODY_ADDFORCE_2_OFFSET UNITYSDK_OFFSET(0x1EDAA1B0)
#define UNITYENGINE_RIGIDBODY_ADDFORCE_3_OFFSET UNITYSDK_OFFSET(0x1EDAA1E0)
#define UNITYENGINE_RIGIDBODY_ADDFORCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDAA170)
#define UNITYENGINE_RIGIDBODY_ADDFORCE_OFFSET UNITYSDK_OFFSET(0x1EDAA160)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_1_OFFSET UNITYSDK_OFFSET(0x1EDAA230)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_2_OFFSET UNITYSDK_OFFSET(0x1EDAA260)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_3_OFFSET UNITYSDK_OFFSET(0x1EDAA290)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDAA220)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_OFFSET UNITYSDK_OFFSET(0x1EDAA210)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_1_OFFSET UNITYSDK_OFFSET(0x1EDAA390)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_2_OFFSET UNITYSDK_OFFSET(0x1EDAA3C0)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_3_OFFSET UNITYSDK_OFFSET(0x1EDAA3F0)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDAA380)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_OFFSET UNITYSDK_OFFSET(0x1EDAA370)
#define UNITYENGINE_RIGIDBODY_ADDTORQUE_1_OFFSET UNITYSDK_OFFSET(0x1EDAA2E0)
#define UNITYENGINE_RIGIDBODY_ADDTORQUE_2_OFFSET UNITYSDK_OFFSET(0x1EDAA310)
#define UNITYENGINE_RIGIDBODY_ADDTORQUE_3_OFFSET UNITYSDK_OFFSET(0x1EDAA340)
#define UNITYENGINE_RIGIDBODY_ADDTORQUE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDAA2D0)
#define UNITYENGINE_RIGIDBODY_ADDTORQUE_OFFSET UNITYSDK_OFFSET(0x1EDAA2C0)
#define UNITYENGINE_RIGIDBODY_APPLYNAPMODIFYCONTACTCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1EDA9FB0)
#define UNITYENGINE_RIGIDBODY_CLOSESTPOINTONBOUNDS_OFFSET UNITYSDK_OFFSET(0x1EDAA540)
#define UNITYENGINE_RIGIDBODY_GETPOINTVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDAA080)
#define UNITYENGINE_RIGIDBODY_GETPOINTVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EDAA030)
#define UNITYENGINE_RIGIDBODY_GETRELATIVEPOINTVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDAA020)
#define UNITYENGINE_RIGIDBODY_GETRELATIVEPOINTVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EDA9FD0)
#define UNITYENGINE_RIGIDBODY_GET_ANGULARDRAG_OFFSET UNITYSDK_OFFSET(0x1EDA9940)
#define UNITYENGINE_RIGIDBODY_GET_ANGULARVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA98F0)
#define UNITYENGINE_RIGIDBODY_GET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EDA98A0)
#define UNITYENGINE_RIGIDBODY_GET_BASEVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA9E80)
#define UNITYENGINE_RIGIDBODY_GET_BASEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EDA9E30)
#define UNITYENGINE_RIGIDBODY_GET_CENTEROFMASS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA9B00)
#define UNITYENGINE_RIGIDBODY_GET_CENTEROFMASS_OFFSET UNITYSDK_OFFSET(0x1EDA9AB0)
#define UNITYENGINE_RIGIDBODY_GET_COLLISIONDETECTIONMODE_OFFSET UNITYSDK_OFFSET(0x1EDA9A90)
#define UNITYENGINE_RIGIDBODY_GET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1EDA9A50)
#define UNITYENGINE_RIGIDBODY_GET_DETECTCOLLISIONS_OFFSET UNITYSDK_OFFSET(0x1EDA9C80)
#define UNITYENGINE_RIGIDBODY_GET_DRAG_OFFSET UNITYSDK_OFFSET(0x1EDA9920)
#define UNITYENGINE_RIGIDBODY_GET_EVENOUTVELOCITYFORFRAMESKIP_OFFSET UNITYSDK_OFFSET(0x1EDA9A10)
#define UNITYENGINE_RIGIDBODY_GET_FREEZEROTATION_OFFSET UNITYSDK_OFFSET(0x1EDA99F0)
#define UNITYENGINE_RIGIDBODY_GET_INERTIATENSORROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA9BD0)
#define UNITYENGINE_RIGIDBODY_GET_INERTIATENSORROTATION_OFFSET UNITYSDK_OFFSET(0x1EDA9B90)
#define UNITYENGINE_RIGIDBODY_GET_INERTIATENSOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA9C50)
#define UNITYENGINE_RIGIDBODY_GET_INERTIATENSOR_OFFSET UNITYSDK_OFFSET(0x1EDA9C00)
#define UNITYENGINE_RIGIDBODY_GET_INTERPOLATION_OFFSET UNITYSDK_OFFSET(0x1EDA9D90)
#define UNITYENGINE_RIGIDBODY_GET_ISKINEMATIC_OFFSET UNITYSDK_OFFSET(0x1EDA99D0)
#define UNITYENGINE_RIGIDBODY_GET_MASS_OFFSET UNITYSDK_OFFSET(0x1EDA9960)
#define UNITYENGINE_RIGIDBODY_GET_MAXANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EDA9DF0)
#define UNITYENGINE_RIGIDBODY_GET_MAXDEPENETRATIONVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EDA99B0)
#define UNITYENGINE_RIGIDBODY_GET_NAPMODIFYCONTACT_OFFSET UNITYSDK_OFFSET(0x1EDA9A70)
#define UNITYENGINE_RIGIDBODY_GET_NAPSEPARATIONRATIO_OFFSET UNITYSDK_OFFSET(0x1EDA9A30)
#define UNITYENGINE_RIGIDBODY_GET_POSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA9CF0)
#define UNITYENGINE_RIGIDBODY_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1EDA9CA0)
#define UNITYENGINE_RIGIDBODY_GET_ROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA9D60)
#define UNITYENGINE_RIGIDBODY_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1EDA9D20)
#define UNITYENGINE_RIGIDBODY_GET_SLEEPANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EDAA0D0)
#define UNITYENGINE_RIGIDBODY_GET_SLEEPTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1EDA9DD0)
#define UNITYENGINE_RIGIDBODY_GET_SLEEPVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EDAA0B0)
#define UNITYENGINE_RIGIDBODY_GET_SOLVERITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1EDAA120)
#define UNITYENGINE_RIGIDBODY_GET_SOLVERITERATIONS_OFFSET UNITYSDK_OFFSET(0x1EDA9DB0)
#define UNITYENGINE_RIGIDBODY_GET_SOLVERVELOCITYITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1EDAA140)
#define UNITYENGINE_RIGIDBODY_GET_SOLVERVELOCITYITERATIONS_OFFSET UNITYSDK_OFFSET(0x1EDAA090)
#define UNITYENGINE_RIGIDBODY_GET_USECONEFRICTION_OFFSET UNITYSDK_OFFSET(0x1EDAA100)
#define UNITYENGINE_RIGIDBODY_GET_USEGRAVITY_OFFSET UNITYSDK_OFFSET(0x1EDA9990)
#define UNITYENGINE_RIGIDBODY_GET_VELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA9870)
#define UNITYENGINE_RIGIDBODY_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1EDA9820)
#define UNITYENGINE_RIGIDBODY_GET_WORLDCENTEROFMASS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA9B80)
#define UNITYENGINE_RIGIDBODY_GET_WORLDCENTEROFMASS_OFFSET UNITYSDK_OFFSET(0x1EDA9B30)
#define UNITYENGINE_RIGIDBODY_GLOBALLYALLOWINTERPOLOATION_OFFSET UNITYSDK_OFFSET(0x1EDAAC30)
#define UNITYENGINE_RIGIDBODY_INTERNAL_CLOSESTPOINTONBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDAA530)
#define UNITYENGINE_RIGIDBODY_INTERNAL_CLOSESTPOINTONBOUNDS_OFFSET UNITYSDK_OFFSET(0x1EDAA520)
#define UNITYENGINE_RIGIDBODY_INTERNAL_SWEEPTESTALL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDAA9B0)
#define UNITYENGINE_RIGIDBODY_INTERNAL_SWEEPTESTALL_OFFSET UNITYSDK_OFFSET(0x1EDAA9A0)
#define UNITYENGINE_RIGIDBODY_ISDELAYDELETED_OFFSET UNITYSDK_OFFSET(0x1EDAAC40)
#define UNITYENGINE_RIGIDBODY_ISSLEEPING_OFFSET UNITYSDK_OFFSET(0x1EDA9F80)
#define UNITYENGINE_RIGIDBODY_MOVEPOSITIONSMOOTH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA9EC0)
#define UNITYENGINE_RIGIDBODY_MOVEPOSITIONSMOOTH_OFFSET UNITYSDK_OFFSET(0x1EDA9EB0)
#define UNITYENGINE_RIGIDBODY_MOVEPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA9F40)
#define UNITYENGINE_RIGIDBODY_MOVEPOSITION_OFFSET UNITYSDK_OFFSET(0x1EDA9F30)
#define UNITYENGINE_RIGIDBODY_MOVEROTATIONSMOOTH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA9EE0)
#define UNITYENGINE_RIGIDBODY_MOVEROTATIONSMOOTH_OFFSET UNITYSDK_OFFSET(0x1EDA9ED0)
#define UNITYENGINE_RIGIDBODY_MOVEROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA9F60)
#define UNITYENGINE_RIGIDBODY_MOVEROTATION_OFFSET UNITYSDK_OFFSET(0x1EDA9F50)
#define UNITYENGINE_RIGIDBODY_MOVESMOOTH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA9F00)
#define UNITYENGINE_RIGIDBODY_MOVESMOOTH_OFFSET UNITYSDK_OFFSET(0x1EDA9EF0)
#define UNITYENGINE_RIGIDBODY_MOVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA9F20)
#define UNITYENGINE_RIGIDBODY_MOVE_OFFSET UNITYSDK_OFFSET(0x1EDA9F10)
#define UNITYENGINE_RIGIDBODY_RESETCENTEROFMASS_OFFSET UNITYSDK_OFFSET(0x1EDA9FA0)
#define UNITYENGINE_RIGIDBODY_RESETINERTIATENSOR_OFFSET UNITYSDK_OFFSET(0x1EDA9FC0)
#define UNITYENGINE_RIGIDBODY_SETDENSITY_OFFSET UNITYSDK_OFFSET(0x1EDA9980)
#define UNITYENGINE_RIGIDBODY_SETMAXANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EDAA0F0)
#define UNITYENGINE_RIGIDBODY_SET_ANGULARDRAG_OFFSET UNITYSDK_OFFSET(0x1EDA9950)
#define UNITYENGINE_RIGIDBODY_SET_ANGULARVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA9910)
#define UNITYENGINE_RIGIDBODY_SET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EDA9900)
#define UNITYENGINE_RIGIDBODY_SET_BASEVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA9EA0)
#define UNITYENGINE_RIGIDBODY_SET_BASEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EDA9E90)
#define UNITYENGINE_RIGIDBODY_SET_CENTEROFMASS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA9B20)
#define UNITYENGINE_RIGIDBODY_SET_CENTEROFMASS_OFFSET UNITYSDK_OFFSET(0x1EDA9B10)
#define UNITYENGINE_RIGIDBODY_SET_COLLISIONDETECTIONMODE_OFFSET UNITYSDK_OFFSET(0x1EDA9AA0)
#define UNITYENGINE_RIGIDBODY_SET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1EDA9A60)
#define UNITYENGINE_RIGIDBODY_SET_DETECTCOLLISIONS_OFFSET UNITYSDK_OFFSET(0x1EDA9C90)
#define UNITYENGINE_RIGIDBODY_SET_DRAG_OFFSET UNITYSDK_OFFSET(0x1EDA9930)
#define UNITYENGINE_RIGIDBODY_SET_EVENOUTVELOCITYFORFRAMESKIP_OFFSET UNITYSDK_OFFSET(0x1EDA9A20)
#define UNITYENGINE_RIGIDBODY_SET_FREEZEROTATION_OFFSET UNITYSDK_OFFSET(0x1EDA9A00)
#define UNITYENGINE_RIGIDBODY_SET_INERTIATENSORROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA9BF0)
#define UNITYENGINE_RIGIDBODY_SET_INERTIATENSORROTATION_OFFSET UNITYSDK_OFFSET(0x1EDA9BE0)
#define UNITYENGINE_RIGIDBODY_SET_INERTIATENSOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA9C70)
#define UNITYENGINE_RIGIDBODY_SET_INERTIATENSOR_OFFSET UNITYSDK_OFFSET(0x1EDA9C60)
#define UNITYENGINE_RIGIDBODY_SET_INTERPOLATION_OFFSET UNITYSDK_OFFSET(0x1EDA9DA0)
#define UNITYENGINE_RIGIDBODY_SET_ISKINEMATIC_OFFSET UNITYSDK_OFFSET(0x1EDA99E0)
#define UNITYENGINE_RIGIDBODY_SET_MASS_OFFSET UNITYSDK_OFFSET(0x1EDA9970)
#define UNITYENGINE_RIGIDBODY_SET_MAXANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EDA9E00)
#define UNITYENGINE_RIGIDBODY_SET_MAXDEPENETRATIONVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EDA99C0)
#define UNITYENGINE_RIGIDBODY_SET_NAPMODIFYCONTACT_OFFSET UNITYSDK_OFFSET(0x1EDA9A80)
#define UNITYENGINE_RIGIDBODY_SET_NAPSEPARATIONRATIO_OFFSET UNITYSDK_OFFSET(0x1EDA9A40)
#define UNITYENGINE_RIGIDBODY_SET_POSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA9D10)
#define UNITYENGINE_RIGIDBODY_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1EDA9D00)
#define UNITYENGINE_RIGIDBODY_SET_ROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA9D80)
#define UNITYENGINE_RIGIDBODY_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1EDA9D70)
#define UNITYENGINE_RIGIDBODY_SET_SLEEPANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EDAA0E0)
#define UNITYENGINE_RIGIDBODY_SET_SLEEPTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1EDA9DE0)
#define UNITYENGINE_RIGIDBODY_SET_SLEEPVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EDAA0C0)
#define UNITYENGINE_RIGIDBODY_SET_SOLVERITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1EDAA130)
#define UNITYENGINE_RIGIDBODY_SET_SOLVERITERATIONS_OFFSET UNITYSDK_OFFSET(0x1EDA9DC0)
#define UNITYENGINE_RIGIDBODY_SET_SOLVERVELOCITYITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1EDAA150)
#define UNITYENGINE_RIGIDBODY_SET_SOLVERVELOCITYITERATIONS_OFFSET UNITYSDK_OFFSET(0x1EDAA0A0)
#define UNITYENGINE_RIGIDBODY_SET_USECONEFRICTION_OFFSET UNITYSDK_OFFSET(0x1EDAA110)
#define UNITYENGINE_RIGIDBODY_SET_USEGRAVITY_OFFSET UNITYSDK_OFFSET(0x1EDA99A0)
#define UNITYENGINE_RIGIDBODY_SET_VELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA9890)
#define UNITYENGINE_RIGIDBODY_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1EDA9880)
#define UNITYENGINE_RIGIDBODY_SLEEP_OFFSET UNITYSDK_OFFSET(0x1EDA9F70)
#define UNITYENGINE_RIGIDBODY_SWEEPTESTALL_1_OFFSET UNITYSDK_OFFSET(0x1EDAAA80)
#define UNITYENGINE_RIGIDBODY_SWEEPTESTALL_2_OFFSET UNITYSDK_OFFSET(0x1EDAAB60)
#define UNITYENGINE_RIGIDBODY_SWEEPTESTALL_OFFSET UNITYSDK_OFFSET(0x1EDAA9C0)
#define UNITYENGINE_RIGIDBODY_SWEEPTEST_1_OFFSET UNITYSDK_OFFSET(0x1EDAA640)
#define UNITYENGINE_RIGIDBODY_SWEEPTEST_2_OFFSET UNITYSDK_OFFSET(0x1EDAA760)
#define UNITYENGINE_RIGIDBODY_SWEEPTEST_3_OFFSET UNITYSDK_OFFSET(0x1EDAA880)
#define UNITYENGINE_RIGIDBODY_SWEEPTEST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDAA630)
#define UNITYENGINE_RIGIDBODY_SWEEPTEST_OFFSET UNITYSDK_OFFSET(0x1EDAA5B0)
#define UNITYENGINE_RIGIDBODY_UPDATEVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1EDA9E20)
#define UNITYENGINE_RIGIDBODY_UPDATEVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EDA9E10)
#define UNITYENGINE_RIGIDBODY_WAKEUP_OFFSET UNITYSDK_OFFSET(0x1EDA9F90)
#define UNITYENGINE_RIGIDBODY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDAAC50)

namespace UnityEngine
{
	inline static constexpr unsigned int Rigidbody_TypeDefinitionIndex = 7791;

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

		::System::Void MoveSmooth(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_MOVESMOOTH_OFFSET))(this, position, rot);
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

		::System::Void MoveSmooth_Injected(::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_MOVESMOOTH_INJECTED_OFFSET))(this, position, rot);
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
