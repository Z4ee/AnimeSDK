#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/CollisionDetectionMode.h"
#include "unitysdk/UnityEngine/Component.h"
#include "unitysdk/UnityEngine/ForceMode.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/QueryTriggerInteraction.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/RigidbodyConstraints.h"
#include "unitysdk/UnityEngine/RigidbodyInterpolation.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RIGIDBODY_ADDEXPLOSIONFORCE_1_OFFSET UNITYSDK_OFFSET(0x1B33F940)
#define UNITYENGINE_RIGIDBODY_ADDEXPLOSIONFORCE_2_OFFSET UNITYSDK_OFFSET(0x1B33F980)
#define UNITYENGINE_RIGIDBODY_ADDEXPLOSIONFORCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33F930)
#define UNITYENGINE_RIGIDBODY_ADDEXPLOSIONFORCE_OFFSET UNITYSDK_OFFSET(0x1B33F920)
#define UNITYENGINE_RIGIDBODY_ADDFORCEATPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1B33F8E0)
#define UNITYENGINE_RIGIDBODY_ADDFORCEATPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33F8D0)
#define UNITYENGINE_RIGIDBODY_ADDFORCEATPOSITION_OFFSET UNITYSDK_OFFSET(0x1B33F8C0)
#define UNITYENGINE_RIGIDBODY_ADDFORCE_1_OFFSET UNITYSDK_OFFSET(0x1B33F620)
#define UNITYENGINE_RIGIDBODY_ADDFORCE_2_OFFSET UNITYSDK_OFFSET(0x1B33F650)
#define UNITYENGINE_RIGIDBODY_ADDFORCE_3_OFFSET UNITYSDK_OFFSET(0x1B33F680)
#define UNITYENGINE_RIGIDBODY_ADDFORCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33F610)
#define UNITYENGINE_RIGIDBODY_ADDFORCE_OFFSET UNITYSDK_OFFSET(0x1B33F600)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_1_OFFSET UNITYSDK_OFFSET(0x1B33F6D0)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_2_OFFSET UNITYSDK_OFFSET(0x1B33F700)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_3_OFFSET UNITYSDK_OFFSET(0x1B33F730)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33F6C0)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_OFFSET UNITYSDK_OFFSET(0x1B33F6B0)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_1_OFFSET UNITYSDK_OFFSET(0x1B33F830)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_2_OFFSET UNITYSDK_OFFSET(0x1B33F860)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_3_OFFSET UNITYSDK_OFFSET(0x1B33F890)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33F820)
#define UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_OFFSET UNITYSDK_OFFSET(0x1B33F810)
#define UNITYENGINE_RIGIDBODY_ADDTORQUE_1_OFFSET UNITYSDK_OFFSET(0x1B33F780)
#define UNITYENGINE_RIGIDBODY_ADDTORQUE_2_OFFSET UNITYSDK_OFFSET(0x1B33F7B0)
#define UNITYENGINE_RIGIDBODY_ADDTORQUE_3_OFFSET UNITYSDK_OFFSET(0x1B33F7E0)
#define UNITYENGINE_RIGIDBODY_ADDTORQUE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33F770)
#define UNITYENGINE_RIGIDBODY_ADDTORQUE_OFFSET UNITYSDK_OFFSET(0x1B33F760)
#define UNITYENGINE_RIGIDBODY_CLOSESTPOINTONBOUNDS_OFFSET UNITYSDK_OFFSET(0x1B33F9E0)
#define UNITYENGINE_RIGIDBODY_GETPOINTVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33F520)
#define UNITYENGINE_RIGIDBODY_GETPOINTVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B33F4D0)
#define UNITYENGINE_RIGIDBODY_GETRELATIVEPOINTVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33F4C0)
#define UNITYENGINE_RIGIDBODY_GETRELATIVEPOINTVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B33F470)
#define UNITYENGINE_RIGIDBODY_GET_ANGULARDRAG_OFFSET UNITYSDK_OFFSET(0x1B33EF70)
#define UNITYENGINE_RIGIDBODY_GET_ANGULARVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33EF20)
#define UNITYENGINE_RIGIDBODY_GET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B33EED0)
#define UNITYENGINE_RIGIDBODY_GET_CENTEROFMASS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33F0D0)
#define UNITYENGINE_RIGIDBODY_GET_CENTEROFMASS_OFFSET UNITYSDK_OFFSET(0x1B33F080)
#define UNITYENGINE_RIGIDBODY_GET_COLLISIONDETECTIONMODE_OFFSET UNITYSDK_OFFSET(0x1B33F060)
#define UNITYENGINE_RIGIDBODY_GET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1B33F040)
#define UNITYENGINE_RIGIDBODY_GET_DETECTCOLLISIONS_OFFSET UNITYSDK_OFFSET(0x1B33F250)
#define UNITYENGINE_RIGIDBODY_GET_DRAG_OFFSET UNITYSDK_OFFSET(0x1B33EF50)
#define UNITYENGINE_RIGIDBODY_GET_FREEZEROTATION_OFFSET UNITYSDK_OFFSET(0x1B33F020)
#define UNITYENGINE_RIGIDBODY_GET_INERTIATENSORROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33F1A0)
#define UNITYENGINE_RIGIDBODY_GET_INERTIATENSORROTATION_OFFSET UNITYSDK_OFFSET(0x1B33F160)
#define UNITYENGINE_RIGIDBODY_GET_INERTIATENSOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33F220)
#define UNITYENGINE_RIGIDBODY_GET_INERTIATENSOR_OFFSET UNITYSDK_OFFSET(0x1B33F1D0)
#define UNITYENGINE_RIGIDBODY_GET_INTERPOLATION_OFFSET UNITYSDK_OFFSET(0x1B33F360)
#define UNITYENGINE_RIGIDBODY_GET_ISKINEMATIC_OFFSET UNITYSDK_OFFSET(0x1B33F000)
#define UNITYENGINE_RIGIDBODY_GET_MASS_OFFSET UNITYSDK_OFFSET(0x1B33EF90)
#define UNITYENGINE_RIGIDBODY_GET_MAXANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B33F3C0)
#define UNITYENGINE_RIGIDBODY_GET_MAXDEPENETRATIONVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B33EFE0)
#define UNITYENGINE_RIGIDBODY_GET_POSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33F2C0)
#define UNITYENGINE_RIGIDBODY_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1B33F270)
#define UNITYENGINE_RIGIDBODY_GET_ROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33F330)
#define UNITYENGINE_RIGIDBODY_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1B33F2F0)
#define UNITYENGINE_RIGIDBODY_GET_SLEEPANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B33F570)
#define UNITYENGINE_RIGIDBODY_GET_SLEEPTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1B33F3A0)
#define UNITYENGINE_RIGIDBODY_GET_SLEEPVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B33F550)
#define UNITYENGINE_RIGIDBODY_GET_SOLVERITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1B33F5C0)
#define UNITYENGINE_RIGIDBODY_GET_SOLVERITERATIONS_OFFSET UNITYSDK_OFFSET(0x1B33F380)
#define UNITYENGINE_RIGIDBODY_GET_SOLVERVELOCITYITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1B33F5E0)
#define UNITYENGINE_RIGIDBODY_GET_SOLVERVELOCITYITERATIONS_OFFSET UNITYSDK_OFFSET(0x1B33F530)
#define UNITYENGINE_RIGIDBODY_GET_USECONEFRICTION_OFFSET UNITYSDK_OFFSET(0x1B33F5A0)
#define UNITYENGINE_RIGIDBODY_GET_USEGRAVITY_OFFSET UNITYSDK_OFFSET(0x1B33EFC0)
#define UNITYENGINE_RIGIDBODY_GET_VELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33EEA0)
#define UNITYENGINE_RIGIDBODY_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1B33EE50)
#define UNITYENGINE_RIGIDBODY_GET_WORLDCENTEROFMASS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33F150)
#define UNITYENGINE_RIGIDBODY_GET_WORLDCENTEROFMASS_OFFSET UNITYSDK_OFFSET(0x1B33F100)
#define UNITYENGINE_RIGIDBODY_INTERNAL_CLOSESTPOINTONBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33F9D0)
#define UNITYENGINE_RIGIDBODY_INTERNAL_CLOSESTPOINTONBOUNDS_OFFSET UNITYSDK_OFFSET(0x1B33F9C0)
#define UNITYENGINE_RIGIDBODY_INTERNAL_SWEEPTESTALL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33FE80)
#define UNITYENGINE_RIGIDBODY_INTERNAL_SWEEPTESTALL_OFFSET UNITYSDK_OFFSET(0x1B33FE70)
#define UNITYENGINE_RIGIDBODY_ISSLEEPING_OFFSET UNITYSDK_OFFSET(0x1B33F430)
#define UNITYENGINE_RIGIDBODY_MOVEPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33F3F0)
#define UNITYENGINE_RIGIDBODY_MOVEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B33F3E0)
#define UNITYENGINE_RIGIDBODY_MOVEROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33F410)
#define UNITYENGINE_RIGIDBODY_MOVEROTATION_OFFSET UNITYSDK_OFFSET(0x1B33F400)
#define UNITYENGINE_RIGIDBODY_RESETCENTEROFMASS_OFFSET UNITYSDK_OFFSET(0x1B33F450)
#define UNITYENGINE_RIGIDBODY_RESETINERTIATENSOR_OFFSET UNITYSDK_OFFSET(0x1B33F460)
#define UNITYENGINE_RIGIDBODY_SETDENSITY_OFFSET UNITYSDK_OFFSET(0x1B33EFB0)
#define UNITYENGINE_RIGIDBODY_SETMAXANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B33F590)
#define UNITYENGINE_RIGIDBODY_SET_ANGULARDRAG_OFFSET UNITYSDK_OFFSET(0x1B33EF80)
#define UNITYENGINE_RIGIDBODY_SET_ANGULARVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33EF40)
#define UNITYENGINE_RIGIDBODY_SET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B33EF30)
#define UNITYENGINE_RIGIDBODY_SET_CENTEROFMASS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33F0F0)
#define UNITYENGINE_RIGIDBODY_SET_CENTEROFMASS_OFFSET UNITYSDK_OFFSET(0x1B33F0E0)
#define UNITYENGINE_RIGIDBODY_SET_COLLISIONDETECTIONMODE_OFFSET UNITYSDK_OFFSET(0x1B33F070)
#define UNITYENGINE_RIGIDBODY_SET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1B33F050)
#define UNITYENGINE_RIGIDBODY_SET_DETECTCOLLISIONS_OFFSET UNITYSDK_OFFSET(0x1B33F260)
#define UNITYENGINE_RIGIDBODY_SET_DRAG_OFFSET UNITYSDK_OFFSET(0x1B33EF60)
#define UNITYENGINE_RIGIDBODY_SET_FREEZEROTATION_OFFSET UNITYSDK_OFFSET(0x1B33F030)
#define UNITYENGINE_RIGIDBODY_SET_INERTIATENSORROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33F1C0)
#define UNITYENGINE_RIGIDBODY_SET_INERTIATENSORROTATION_OFFSET UNITYSDK_OFFSET(0x1B33F1B0)
#define UNITYENGINE_RIGIDBODY_SET_INERTIATENSOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33F240)
#define UNITYENGINE_RIGIDBODY_SET_INERTIATENSOR_OFFSET UNITYSDK_OFFSET(0x1B33F230)
#define UNITYENGINE_RIGIDBODY_SET_INTERPOLATION_OFFSET UNITYSDK_OFFSET(0x1B33F370)
#define UNITYENGINE_RIGIDBODY_SET_ISKINEMATIC_OFFSET UNITYSDK_OFFSET(0x1B33F010)
#define UNITYENGINE_RIGIDBODY_SET_MASS_OFFSET UNITYSDK_OFFSET(0x1B33EFA0)
#define UNITYENGINE_RIGIDBODY_SET_MAXANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B33F3D0)
#define UNITYENGINE_RIGIDBODY_SET_MAXDEPENETRATIONVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B33EFF0)
#define UNITYENGINE_RIGIDBODY_SET_POSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33F2E0)
#define UNITYENGINE_RIGIDBODY_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1B33F2D0)
#define UNITYENGINE_RIGIDBODY_SET_ROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33F350)
#define UNITYENGINE_RIGIDBODY_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1B33F340)
#define UNITYENGINE_RIGIDBODY_SET_SLEEPANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B33F580)
#define UNITYENGINE_RIGIDBODY_SET_SLEEPTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1B33F3B0)
#define UNITYENGINE_RIGIDBODY_SET_SLEEPVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B33F560)
#define UNITYENGINE_RIGIDBODY_SET_SOLVERITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1B33F5D0)
#define UNITYENGINE_RIGIDBODY_SET_SOLVERITERATIONS_OFFSET UNITYSDK_OFFSET(0x1B33F390)
#define UNITYENGINE_RIGIDBODY_SET_SOLVERVELOCITYITERATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1B33F5F0)
#define UNITYENGINE_RIGIDBODY_SET_SOLVERVELOCITYITERATIONS_OFFSET UNITYSDK_OFFSET(0x1B33F540)
#define UNITYENGINE_RIGIDBODY_SET_USECONEFRICTION_OFFSET UNITYSDK_OFFSET(0x1B33F5B0)
#define UNITYENGINE_RIGIDBODY_SET_USEGRAVITY_OFFSET UNITYSDK_OFFSET(0x1B33EFD0)
#define UNITYENGINE_RIGIDBODY_SET_VELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33EEC0)
#define UNITYENGINE_RIGIDBODY_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1B33EEB0)
#define UNITYENGINE_RIGIDBODY_SLEEP_OFFSET UNITYSDK_OFFSET(0x1B33F420)
#define UNITYENGINE_RIGIDBODY_SWEEPTESTALL_1_OFFSET UNITYSDK_OFFSET(0x1B33FF50)
#define UNITYENGINE_RIGIDBODY_SWEEPTESTALL_2_OFFSET UNITYSDK_OFFSET(0x1B340020)
#define UNITYENGINE_RIGIDBODY_SWEEPTESTALL_OFFSET UNITYSDK_OFFSET(0x1B33FE90)
#define UNITYENGINE_RIGIDBODY_SWEEPTEST_1_OFFSET UNITYSDK_OFFSET(0x1B33FAD0)
#define UNITYENGINE_RIGIDBODY_SWEEPTEST_2_OFFSET UNITYSDK_OFFSET(0x1B33FC00)
#define UNITYENGINE_RIGIDBODY_SWEEPTEST_3_OFFSET UNITYSDK_OFFSET(0x1B33FD40)
#define UNITYENGINE_RIGIDBODY_SWEEPTEST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B33FAC0)
#define UNITYENGINE_RIGIDBODY_SWEEPTEST_OFFSET UNITYSDK_OFFSET(0x1B33FA50)
#define UNITYENGINE_RIGIDBODY_WAKEUP_OFFSET UNITYSDK_OFFSET(0x1B33F440)
#define UNITYENGINE_RIGIDBODY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3400E0)

namespace UnityEngine
{
	inline static constexpr unsigned int Rigidbody_TypeDefinitionIndex = 5301;

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

		::System::Void set_velocity(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_VELOCITY_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_angularVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_ANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_angularVelocity(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_ANGULARVELOCITY_OFFSET))(this, a1);
		}

		::System::Single get_drag()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_DRAG_OFFSET))(this);
		}

		::System::Void set_drag(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_DRAG_OFFSET))(this, a1);
		}

		::System::Single get_angularDrag()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_ANGULARDRAG_OFFSET))(this);
		}

		::System::Void set_angularDrag(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_ANGULARDRAG_OFFSET))(this, a1);
		}

		::System::Single get_mass()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_MASS_OFFSET))(this);
		}

		::System::Void set_mass(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_MASS_OFFSET))(this, a1);
		}

		::System::Void SetDensity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SETDENSITY_OFFSET))(this, a1);
		}

		::System::Boolean get_useGravity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_USEGRAVITY_OFFSET))(this);
		}

		::System::Void set_useGravity(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_USEGRAVITY_OFFSET))(this, a1);
		}

		::System::Single get_maxDepenetrationVelocity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_MAXDEPENETRATIONVELOCITY_OFFSET))(this);
		}

		::System::Void set_maxDepenetrationVelocity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_MAXDEPENETRATIONVELOCITY_OFFSET))(this, a1);
		}

		::System::Boolean get_isKinematic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_ISKINEMATIC_OFFSET))(this);
		}

		::System::Void set_isKinematic(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_ISKINEMATIC_OFFSET))(this, a1);
		}

		::System::Boolean get_freezeRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_FREEZEROTATION_OFFSET))(this);
		}

		::System::Void set_freezeRotation(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_FREEZEROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::RigidbodyConstraints get_constraints()
		{
			return ((::UnityEngine::RigidbodyConstraints(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_CONSTRAINTS_OFFSET))(this);
		}

		::System::Void set_constraints(::UnityEngine::RigidbodyConstraints a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RigidbodyConstraints))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_CONSTRAINTS_OFFSET))(this, a1);
		}

		::UnityEngine::CollisionDetectionMode get_collisionDetectionMode()
		{
			return ((::UnityEngine::CollisionDetectionMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_COLLISIONDETECTIONMODE_OFFSET))(this);
		}

		::System::Void set_collisionDetectionMode(::UnityEngine::CollisionDetectionMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CollisionDetectionMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_COLLISIONDETECTIONMODE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_centerOfMass()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_CENTEROFMASS_OFFSET))(this);
		}

		::System::Void set_centerOfMass(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_CENTEROFMASS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_worldCenterOfMass()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_WORLDCENTEROFMASS_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_inertiaTensorRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_INERTIATENSORROTATION_OFFSET))(this);
		}

		::System::Void set_inertiaTensorRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_INERTIATENSORROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_inertiaTensor()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_INERTIATENSOR_OFFSET))(this);
		}

		::System::Void set_inertiaTensor(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_INERTIATENSOR_OFFSET))(this, a1);
		}

		::System::Boolean get_detectCollisions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_DETECTCOLLISIONS_OFFSET))(this);
		}

		::System::Void set_detectCollisions(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_DETECTCOLLISIONS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_POSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_ROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::RigidbodyInterpolation get_interpolation()
		{
			return ((::UnityEngine::RigidbodyInterpolation(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_INTERPOLATION_OFFSET))(this);
		}

		::System::Void set_interpolation(::UnityEngine::RigidbodyInterpolation a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RigidbodyInterpolation))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_INTERPOLATION_OFFSET))(this, a1);
		}

		::System::Int32 get_solverIterations()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_SOLVERITERATIONS_OFFSET))(this);
		}

		::System::Void set_solverIterations(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_SOLVERITERATIONS_OFFSET))(this, a1);
		}

		::System::Single get_sleepThreshold()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_SLEEPTHRESHOLD_OFFSET))(this);
		}

		::System::Void set_sleepThreshold(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_SLEEPTHRESHOLD_OFFSET))(this, a1);
		}

		::System::Single get_maxAngularVelocity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_MAXANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_maxAngularVelocity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_MAXANGULARVELOCITY_OFFSET))(this, a1);
		}

		::System::Void MovePosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_MOVEPOSITION_OFFSET))(this, a1);
		}

		::System::Void MoveRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_MOVEROTATION_OFFSET))(this, a1);
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

		::System::Void ResetInertiaTensor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_RESETINERTIATENSOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetRelativePointVelocity(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GETRELATIVEPOINTVELOCITY_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetPointVelocity(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GETPOINTVELOCITY_OFFSET))(this, a1);
		}

		::System::Int32 get_solverVelocityIterations()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_SOLVERVELOCITYITERATIONS_OFFSET))(this);
		}

		::System::Void set_solverVelocityIterations(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_SOLVERVELOCITYITERATIONS_OFFSET))(this, a1);
		}

		::System::Single get_sleepVelocity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_SLEEPVELOCITY_OFFSET))(this);
		}

		::System::Void set_sleepVelocity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_SLEEPVELOCITY_OFFSET))(this, a1);
		}

		::System::Single get_sleepAngularVelocity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_SLEEPANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_sleepAngularVelocity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_SLEEPANGULARVELOCITY_OFFSET))(this, a1);
		}

		::System::Void SetMaxAngularVelocity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SETMAXANGULARVELOCITY_OFFSET))(this, a1);
		}

		::System::Boolean get_useConeFriction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_USECONEFRICTION_OFFSET))(this);
		}

		::System::Void set_useConeFriction(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_USECONEFRICTION_OFFSET))(this, a1);
		}

		::System::Int32 get_solverIterationCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_SOLVERITERATIONCOUNT_OFFSET))(this);
		}

		::System::Void set_solverIterationCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_SOLVERITERATIONCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_solverVelocityIterationCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_SOLVERVELOCITYITERATIONCOUNT_OFFSET))(this);
		}

		::System::Void set_solverVelocityIterationCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_SOLVERVELOCITYITERATIONCOUNT_OFFSET))(this, a1);
		}

		::System::Void AddForce(::UnityEngine::Vector3 a1, ::UnityEngine::ForceMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDFORCE_OFFSET))(this, a1, a2);
		}

		::System::Void AddForce_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDFORCE_1_OFFSET))(this, a1);
		}

		::System::Void AddForce_2(::System::Single a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::ForceMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDFORCE_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AddForce_3(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDFORCE_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddRelativeForce(::UnityEngine::Vector3 a1, ::UnityEngine::ForceMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_OFFSET))(this, a1, a2);
		}

		::System::Void AddRelativeForce_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_1_OFFSET))(this, a1);
		}

		::System::Void AddRelativeForce_2(::System::Single a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::ForceMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AddRelativeForce_3(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddTorque(::UnityEngine::Vector3 a1, ::UnityEngine::ForceMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDTORQUE_OFFSET))(this, a1, a2);
		}

		::System::Void AddTorque_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDTORQUE_1_OFFSET))(this, a1);
		}

		::System::Void AddTorque_2(::System::Single a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::ForceMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDTORQUE_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AddTorque_3(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDTORQUE_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddRelativeTorque(::UnityEngine::Vector3 a1, ::UnityEngine::ForceMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_OFFSET))(this, a1, a2);
		}

		::System::Void AddRelativeTorque_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_1_OFFSET))(this, a1);
		}

		::System::Void AddRelativeTorque_2(::System::Single a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::ForceMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AddRelativeTorque_3(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddForceAtPosition(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::ForceMode a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDFORCEATPOSITION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddForceAtPosition_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDFORCEATPOSITION_1_OFFSET))(this, a1, a2);
		}

		::System::Void AddExplosionForce(::System::Single a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::ForceMode a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDEXPLOSIONFORCE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void AddExplosionForce_1(::System::Single a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDEXPLOSIONFORCE_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void AddExplosionForce_2(::System::Single a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDEXPLOSIONFORCE_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Internal_ClosestPointOnBounds(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2, ::System::Single& a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_INTERNAL_CLOSESTPOINTONBOUNDS_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 ClosestPointOnBounds(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_CLOSESTPOINTONBOUNDS_OFFSET))(this, a1);
		}

		::UnityEngine::RaycastHit SweepTest(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::QueryTriggerInteraction a3, ::System::Boolean& a4)
		{
			return ((::UnityEngine::RaycastHit(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SWEEPTEST_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean SweepTest_1(::UnityEngine::Vector3 a1, ::UnityEngine::RaycastHit& a2, ::System::Single a3, ::UnityEngine::QueryTriggerInteraction a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SWEEPTEST_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean SweepTest_2(::UnityEngine::Vector3 a1, ::UnityEngine::RaycastHit& a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SWEEPTEST_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean SweepTest_3(::UnityEngine::Vector3 a1, ::UnityEngine::RaycastHit& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SWEEPTEST_3_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::UnityEngine::RaycastHit>* Internal_SweepTestAll(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::QueryTriggerInteraction a3)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_INTERNAL_SWEEPTESTALL_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::UnityEngine::RaycastHit>* SweepTestAll(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::QueryTriggerInteraction a3)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SWEEPTESTALL_OFFSET))(this, a1, a2, a3);
		}

		::Il2CppArray<::UnityEngine::RaycastHit>* SweepTestAll_1(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SWEEPTESTALL_1_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::UnityEngine::RaycastHit>* SweepTestAll_2(::UnityEngine::Vector3 a1)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SWEEPTESTALL_2_OFFSET))(this, a1);
		}

		::System::Void get_velocity_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_VELOCITY_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_velocity_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_VELOCITY_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_angularVelocity_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_ANGULARVELOCITY_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_angularVelocity_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_ANGULARVELOCITY_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_centerOfMass_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_CENTEROFMASS_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_centerOfMass_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_CENTEROFMASS_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_worldCenterOfMass_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_WORLDCENTEROFMASS_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_inertiaTensorRotation_Injected(::UnityEngine::Quaternion& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_INERTIATENSORROTATION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_inertiaTensorRotation_Injected(::UnityEngine::Quaternion& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_INERTIATENSORROTATION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_inertiaTensor_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_INERTIATENSOR_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_inertiaTensor_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_INERTIATENSOR_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_position_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_POSITION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_position_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_POSITION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_rotation_Injected(::UnityEngine::Quaternion& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GET_ROTATION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_rotation_Injected(::UnityEngine::Quaternion& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SET_ROTATION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void MovePosition_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_MOVEPOSITION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void MoveRotation_Injected(::UnityEngine::Quaternion& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_MOVEROTATION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void GetRelativePointVelocity_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GETRELATIVEPOINTVELOCITY_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void GetPointVelocity_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_GETPOINTVELOCITY_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void AddForce_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::ForceMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDFORCE_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void AddRelativeForce_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::ForceMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVEFORCE_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void AddTorque_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::ForceMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDTORQUE_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void AddRelativeTorque_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::ForceMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDRELATIVETORQUE_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void AddForceAtPosition_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::UnityEngine::ForceMode a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDFORCEATPOSITION_INJECTED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddExplosionForce_Injected(::System::Single a1, ::UnityEngine::Vector3& a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::ForceMode a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::System::Single, ::System::Single, ::UnityEngine::ForceMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_ADDEXPLOSIONFORCE_INJECTED_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Internal_ClosestPointOnBounds_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2, ::System::Single& a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_INTERNAL_CLOSESTPOINTONBOUNDS_INJECTED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SweepTest_Injected(::UnityEngine::Vector3& a1, ::System::Single a2, ::UnityEngine::QueryTriggerInteraction a3, ::System::Boolean& a4, ::UnityEngine::RaycastHit& a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::QueryTriggerInteraction, ::System::Boolean&, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_SWEEPTEST_INJECTED_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Il2CppArray<::UnityEngine::RaycastHit>* Internal_SweepTestAll_Injected(::UnityEngine::Vector3& a1, ::System::Single a2, ::UnityEngine::QueryTriggerInteraction a3)
		{
			return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::QueryTriggerInteraction))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY_INTERNAL_SWEEPTESTALL_INJECTED_OFFSET))(this, a1, a2, a3);
		}
	};
}
