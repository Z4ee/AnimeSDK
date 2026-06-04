#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ColliderDistance2D.h"
#include "unitysdk/UnityEngine/CollisionDetectionMode2D.h"
#include "unitysdk/UnityEngine/Component.h"
#include "unitysdk/UnityEngine/ContactFilter2D.h"
#include "unitysdk/UnityEngine/ContactPoint2D.h"
#include "unitysdk/UnityEngine/ForceMode2D.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit2D.h"
#include "unitysdk/UnityEngine/RigidbodyConstraints2D.h"
#include "unitysdk/UnityEngine/RigidbodyInterpolation2D.h"
#include "unitysdk/UnityEngine/RigidbodySleepMode2D.h"
#include "unitysdk/UnityEngine/RigidbodyType2D.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class PhysicsMaterial2D; }

#define UNITYENGINE_RIGIDBODY2D_ADDFORCEATPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1B325A20)
#define UNITYENGINE_RIGIDBODY2D_ADDFORCEATPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B325A50)
#define UNITYENGINE_RIGIDBODY2D_ADDFORCEATPOSITION_OFFSET UNITYSDK_OFFSET(0x1B3259F0)
#define UNITYENGINE_RIGIDBODY2D_ADDFORCE_1_OFFSET UNITYSDK_OFFSET(0x1B325970)
#define UNITYENGINE_RIGIDBODY2D_ADDFORCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B325990)
#define UNITYENGINE_RIGIDBODY2D_ADDFORCE_OFFSET UNITYSDK_OFFSET(0x1B325950)
#define UNITYENGINE_RIGIDBODY2D_ADDRELATIVEFORCE_1_OFFSET UNITYSDK_OFFSET(0x1B3259C0)
#define UNITYENGINE_RIGIDBODY2D_ADDRELATIVEFORCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3259E0)
#define UNITYENGINE_RIGIDBODY2D_ADDRELATIVEFORCE_OFFSET UNITYSDK_OFFSET(0x1B3259A0)
#define UNITYENGINE_RIGIDBODY2D_ADDTORQUE_1_OFFSET UNITYSDK_OFFSET(0x1B325A70)
#define UNITYENGINE_RIGIDBODY2D_ADDTORQUE_OFFSET UNITYSDK_OFFSET(0x1B325A60)
#define UNITYENGINE_RIGIDBODY2D_CASTARRAY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B326790)
#define UNITYENGINE_RIGIDBODY2D_CASTARRAY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B326750)
#define UNITYENGINE_RIGIDBODY2D_CASTFILTEREDARRAY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3268A0)
#define UNITYENGINE_RIGIDBODY2D_CASTFILTEREDARRAY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B326830)
#define UNITYENGINE_RIGIDBODY2D_CASTFILTEREDLIST_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B326920)
#define UNITYENGINE_RIGIDBODY2D_CASTFILTEREDLIST_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B3268F0)
#define UNITYENGINE_RIGIDBODY2D_CASTLIST_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3267E0)
#define UNITYENGINE_RIGIDBODY2D_CASTLIST_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B3267C0)
#define UNITYENGINE_RIGIDBODY2D_CAST_1_OFFSET UNITYSDK_OFFSET(0x1B326770)
#define UNITYENGINE_RIGIDBODY2D_CAST_2_OFFSET UNITYSDK_OFFSET(0x1B3267A0)
#define UNITYENGINE_RIGIDBODY2D_CAST_3_OFFSET UNITYSDK_OFFSET(0x1B3267F0)
#define UNITYENGINE_RIGIDBODY2D_CAST_4_OFFSET UNITYSDK_OFFSET(0x1B326860)
#define UNITYENGINE_RIGIDBODY2D_CAST_5_OFFSET UNITYSDK_OFFSET(0x1B3268B0)
#define UNITYENGINE_RIGIDBODY2D_CAST_OFFSET UNITYSDK_OFFSET(0x1B326720)
#define UNITYENGINE_RIGIDBODY2D_CLOSESTPOINT_OFFSET UNITYSDK_OFFSET(0x1B3258F0)
#define UNITYENGINE_RIGIDBODY2D_DISTANCE_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3258E0)
#define UNITYENGINE_RIGIDBODY2D_DISTANCE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B325890)
#define UNITYENGINE_RIGIDBODY2D_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1B325770)
#define UNITYENGINE_RIGIDBODY2D_GETATTACHEDCOLLIDERSARRAY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B3266F0)
#define UNITYENGINE_RIGIDBODY2D_GETATTACHEDCOLLIDERSLIST_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B326710)
#define UNITYENGINE_RIGIDBODY2D_GETATTACHEDCOLLIDERS_1_OFFSET UNITYSDK_OFFSET(0x1B326700)
#define UNITYENGINE_RIGIDBODY2D_GETATTACHEDCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x1B3266E0)
#define UNITYENGINE_RIGIDBODY2D_GETCONTACTS_1_OFFSET UNITYSDK_OFFSET(0x1B325DF0)
#define UNITYENGINE_RIGIDBODY2D_GETCONTACTS_2_OFFSET UNITYSDK_OFFSET(0x1B325F40)
#define UNITYENGINE_RIGIDBODY2D_GETCONTACTS_3_OFFSET UNITYSDK_OFFSET(0x1B326080)
#define UNITYENGINE_RIGIDBODY2D_GETCONTACTS_4_OFFSET UNITYSDK_OFFSET(0x1B3261C0)
#define UNITYENGINE_RIGIDBODY2D_GETCONTACTS_5_OFFSET UNITYSDK_OFFSET(0x1B326310)
#define UNITYENGINE_RIGIDBODY2D_GETCONTACTS_6_OFFSET UNITYSDK_OFFSET(0x1B326460)
#define UNITYENGINE_RIGIDBODY2D_GETCONTACTS_7_OFFSET UNITYSDK_OFFSET(0x1B3265A0)
#define UNITYENGINE_RIGIDBODY2D_GETCONTACTS_OFFSET UNITYSDK_OFFSET(0x1B325CA0)
#define UNITYENGINE_RIGIDBODY2D_GETPOINTVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B325BB0)
#define UNITYENGINE_RIGIDBODY2D_GETPOINTVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B325B80)
#define UNITYENGINE_RIGIDBODY2D_GETPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B325AB0)
#define UNITYENGINE_RIGIDBODY2D_GETPOINT_OFFSET UNITYSDK_OFFSET(0x1B325A80)
#define UNITYENGINE_RIGIDBODY2D_GETRELATIVEPOINTVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B325BF0)
#define UNITYENGINE_RIGIDBODY2D_GETRELATIVEPOINTVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B325BC0)
#define UNITYENGINE_RIGIDBODY2D_GETRELATIVEPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B325AF0)
#define UNITYENGINE_RIGIDBODY2D_GETRELATIVEPOINT_OFFSET UNITYSDK_OFFSET(0x1B325AC0)
#define UNITYENGINE_RIGIDBODY2D_GETRELATIVEVECTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B325B70)
#define UNITYENGINE_RIGIDBODY2D_GETRELATIVEVECTOR_OFFSET UNITYSDK_OFFSET(0x1B325B40)
#define UNITYENGINE_RIGIDBODY2D_GETVECTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B325B30)
#define UNITYENGINE_RIGIDBODY2D_GETVECTOR_OFFSET UNITYSDK_OFFSET(0x1B325B00)
#define UNITYENGINE_RIGIDBODY2D_GET_ANGULARDRAG_OFFSET UNITYSDK_OFFSET(0x1B325470)
#define UNITYENGINE_RIGIDBODY2D_GET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B325300)
#define UNITYENGINE_RIGIDBODY2D_GET_ATTACHEDCOLLIDERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B325660)
#define UNITYENGINE_RIGIDBODY2D_GET_BODYTYPE_OFFSET UNITYSDK_OFFSET(0x1B3254B0)
#define UNITYENGINE_RIGIDBODY2D_GET_CENTEROFMASS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3253B0)
#define UNITYENGINE_RIGIDBODY2D_GET_CENTEROFMASS_OFFSET UNITYSDK_OFFSET(0x1B325380)
#define UNITYENGINE_RIGIDBODY2D_GET_COLLISIONDETECTIONMODE_OFFSET UNITYSDK_OFFSET(0x1B325640)
#define UNITYENGINE_RIGIDBODY2D_GET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1B325580)
#define UNITYENGINE_RIGIDBODY2D_GET_DRAG_OFFSET UNITYSDK_OFFSET(0x1B325450)
#define UNITYENGINE_RIGIDBODY2D_GET_FIXEDANGLE_OFFSET UNITYSDK_OFFSET(0x1B325540)
#define UNITYENGINE_RIGIDBODY2D_GET_FREEZEROTATION_OFFSET UNITYSDK_OFFSET(0x1B325560)
#define UNITYENGINE_RIGIDBODY2D_GET_GRAVITYSCALE_OFFSET UNITYSDK_OFFSET(0x1B325490)
#define UNITYENGINE_RIGIDBODY2D_GET_INERTIA_OFFSET UNITYSDK_OFFSET(0x1B325430)
#define UNITYENGINE_RIGIDBODY2D_GET_INTERPOLATION_OFFSET UNITYSDK_OFFSET(0x1B325600)
#define UNITYENGINE_RIGIDBODY2D_GET_ISKINEMATIC_OFFSET UNITYSDK_OFFSET(0x1B325500)
#define UNITYENGINE_RIGIDBODY2D_GET_MASS_OFFSET UNITYSDK_OFFSET(0x1B325340)
#define UNITYENGINE_RIGIDBODY2D_GET_POSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B325140)
#define UNITYENGINE_RIGIDBODY2D_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1B325110)
#define UNITYENGINE_RIGIDBODY2D_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1B325180)
#define UNITYENGINE_RIGIDBODY2D_GET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B325360)
#define UNITYENGINE_RIGIDBODY2D_GET_SIMULATED_OFFSET UNITYSDK_OFFSET(0x1B3255E0)
#define UNITYENGINE_RIGIDBODY2D_GET_SLEEPMODE_OFFSET UNITYSDK_OFFSET(0x1B325620)
#define UNITYENGINE_RIGIDBODY2D_GET_USEAUTOMASS_OFFSET UNITYSDK_OFFSET(0x1B325320)
#define UNITYENGINE_RIGIDBODY2D_GET_USEFULLKINEMATICCONTACTS_OFFSET UNITYSDK_OFFSET(0x1B3254E0)
#define UNITYENGINE_RIGIDBODY2D_GET_VELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3252C0)
#define UNITYENGINE_RIGIDBODY2D_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1B325290)
#define UNITYENGINE_RIGIDBODY2D_GET_WORLDCENTEROFMASS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B325420)
#define UNITYENGINE_RIGIDBODY2D_GET_WORLDCENTEROFMASS_OFFSET UNITYSDK_OFFSET(0x1B3253F0)
#define UNITYENGINE_RIGIDBODY2D_ISAWAKE_OFFSET UNITYSDK_OFFSET(0x1B3255B0)
#define UNITYENGINE_RIGIDBODY2D_ISSLEEPING_OFFSET UNITYSDK_OFFSET(0x1B3255A0)
#define UNITYENGINE_RIGIDBODY2D_ISTOUCHINGLAYERS_1_OFFSET UNITYSDK_OFFSET(0x1B325730)
#define UNITYENGINE_RIGIDBODY2D_ISTOUCHINGLAYERS_OFFSET UNITYSDK_OFFSET(0x1B325720)
#define UNITYENGINE_RIGIDBODY2D_ISTOUCHING_1_OFFSET UNITYSDK_OFFSET(0x1B325680)
#define UNITYENGINE_RIGIDBODY2D_ISTOUCHING_2_OFFSET UNITYSDK_OFFSET(0x1B3256D0)
#define UNITYENGINE_RIGIDBODY2D_ISTOUCHING_ANYCOLLIDERWITHFILTER_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B325710)
#define UNITYENGINE_RIGIDBODY2D_ISTOUCHING_ANYCOLLIDERWITHFILTER_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B325700)
#define UNITYENGINE_RIGIDBODY2D_ISTOUCHING_OFFSET UNITYSDK_OFFSET(0x1B325670)
#define UNITYENGINE_RIGIDBODY2D_ISTOUCHING_OTHERCOLLIDERWITHFILTER_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3256C0)
#define UNITYENGINE_RIGIDBODY2D_ISTOUCHING_OTHERCOLLIDERWITHFILTER_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B3256B0)
#define UNITYENGINE_RIGIDBODY2D_MOVEPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B325220)
#define UNITYENGINE_RIGIDBODY2D_MOVEPOSITION_OFFSET UNITYSDK_OFFSET(0x1B325200)
#define UNITYENGINE_RIGIDBODY2D_MOVEROTATION_1_OFFSET UNITYSDK_OFFSET(0x1B325250)
#define UNITYENGINE_RIGIDBODY2D_MOVEROTATION_ANGLE_OFFSET UNITYSDK_OFFSET(0x1B325240)
#define UNITYENGINE_RIGIDBODY2D_MOVEROTATION_OFFSET UNITYSDK_OFFSET(0x1B325230)
#define UNITYENGINE_RIGIDBODY2D_MOVEROTATION_QUATERNION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B325280)
#define UNITYENGINE_RIGIDBODY2D_MOVEROTATION_QUATERNION_OFFSET UNITYSDK_OFFSET(0x1B325270)
#define UNITYENGINE_RIGIDBODY2D_OVERLAPCOLLIDERARRAY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B325C40)
#define UNITYENGINE_RIGIDBODY2D_OVERLAPCOLLIDERARRAY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B325C30)
#define UNITYENGINE_RIGIDBODY2D_OVERLAPCOLLIDERLIST_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B325C90)
#define UNITYENGINE_RIGIDBODY2D_OVERLAPCOLLIDERLIST_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B325C80)
#define UNITYENGINE_RIGIDBODY2D_OVERLAPCOLLIDER_1_OFFSET UNITYSDK_OFFSET(0x1B325C50)
#define UNITYENGINE_RIGIDBODY2D_OVERLAPCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1B325C00)
#define UNITYENGINE_RIGIDBODY2D_OVERLAPPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B325760)
#define UNITYENGINE_RIGIDBODY2D_OVERLAPPOINT_OFFSET UNITYSDK_OFFSET(0x1B325740)
#define UNITYENGINE_RIGIDBODY2D_SETDRAGBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x1B3254D0)
#define UNITYENGINE_RIGIDBODY2D_SETROTATION_1_OFFSET UNITYSDK_OFFSET(0x1B3251C0)
#define UNITYENGINE_RIGIDBODY2D_SETROTATION_ANGLE_OFFSET UNITYSDK_OFFSET(0x1B3251B0)
#define UNITYENGINE_RIGIDBODY2D_SETROTATION_OFFSET UNITYSDK_OFFSET(0x1B3251A0)
#define UNITYENGINE_RIGIDBODY2D_SETROTATION_QUATERNION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3251F0)
#define UNITYENGINE_RIGIDBODY2D_SETROTATION_QUATERNION_OFFSET UNITYSDK_OFFSET(0x1B3251E0)
#define UNITYENGINE_RIGIDBODY2D_SET_ANGULARDRAG_OFFSET UNITYSDK_OFFSET(0x1B325480)
#define UNITYENGINE_RIGIDBODY2D_SET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1B325310)
#define UNITYENGINE_RIGIDBODY2D_SET_BODYTYPE_OFFSET UNITYSDK_OFFSET(0x1B3254C0)
#define UNITYENGINE_RIGIDBODY2D_SET_CENTEROFMASS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3253E0)
#define UNITYENGINE_RIGIDBODY2D_SET_CENTEROFMASS_OFFSET UNITYSDK_OFFSET(0x1B3253C0)
#define UNITYENGINE_RIGIDBODY2D_SET_COLLISIONDETECTIONMODE_OFFSET UNITYSDK_OFFSET(0x1B325650)
#define UNITYENGINE_RIGIDBODY2D_SET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1B325590)
#define UNITYENGINE_RIGIDBODY2D_SET_DRAG_OFFSET UNITYSDK_OFFSET(0x1B325460)
#define UNITYENGINE_RIGIDBODY2D_SET_FIXEDANGLE_OFFSET UNITYSDK_OFFSET(0x1B325550)
#define UNITYENGINE_RIGIDBODY2D_SET_FREEZEROTATION_OFFSET UNITYSDK_OFFSET(0x1B325570)
#define UNITYENGINE_RIGIDBODY2D_SET_GRAVITYSCALE_OFFSET UNITYSDK_OFFSET(0x1B3254A0)
#define UNITYENGINE_RIGIDBODY2D_SET_INERTIA_OFFSET UNITYSDK_OFFSET(0x1B325440)
#define UNITYENGINE_RIGIDBODY2D_SET_INTERPOLATION_OFFSET UNITYSDK_OFFSET(0x1B325610)
#define UNITYENGINE_RIGIDBODY2D_SET_ISKINEMATIC_OFFSET UNITYSDK_OFFSET(0x1B325520)
#define UNITYENGINE_RIGIDBODY2D_SET_MASS_OFFSET UNITYSDK_OFFSET(0x1B325350)
#define UNITYENGINE_RIGIDBODY2D_SET_POSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B325170)
#define UNITYENGINE_RIGIDBODY2D_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1B325150)
#define UNITYENGINE_RIGIDBODY2D_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1B325190)
#define UNITYENGINE_RIGIDBODY2D_SET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B325370)
#define UNITYENGINE_RIGIDBODY2D_SET_SIMULATED_OFFSET UNITYSDK_OFFSET(0x1B3255F0)
#define UNITYENGINE_RIGIDBODY2D_SET_SLEEPMODE_OFFSET UNITYSDK_OFFSET(0x1B325630)
#define UNITYENGINE_RIGIDBODY2D_SET_USEAUTOMASS_OFFSET UNITYSDK_OFFSET(0x1B325330)
#define UNITYENGINE_RIGIDBODY2D_SET_USEFULLKINEMATICCONTACTS_OFFSET UNITYSDK_OFFSET(0x1B3254F0)
#define UNITYENGINE_RIGIDBODY2D_SET_VELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B3252F0)
#define UNITYENGINE_RIGIDBODY2D_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1B3252D0)
#define UNITYENGINE_RIGIDBODY2D_SLEEP_OFFSET UNITYSDK_OFFSET(0x1B3255C0)
#define UNITYENGINE_RIGIDBODY2D_WAKEUP_OFFSET UNITYSDK_OFFSET(0x1B3255D0)
#define UNITYENGINE_RIGIDBODY2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1B326930)

namespace UnityEngine
{
	inline static constexpr unsigned int Rigidbody2D_TypeDefinitionIndex = 5277;

	class Rigidbody2D : public ::UnityEngine::Component
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_position()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_POSITION_OFFSET))(this, a1);
		}

		::System::Single get_rotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_ROTATION_OFFSET))(this, a1);
		}

		::System::Void SetRotation(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SETROTATION_OFFSET))(this, a1);
		}

		::System::Void SetRotation_Angle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SETROTATION_ANGLE_OFFSET))(this, a1);
		}

		::System::Void SetRotation_1(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SETROTATION_1_OFFSET))(this, a1);
		}

		::System::Void SetRotation_Quaternion(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SETROTATION_QUATERNION_OFFSET))(this, a1);
		}

		::System::Void MovePosition(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_MOVEPOSITION_OFFSET))(this, a1);
		}

		::System::Void MoveRotation(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_MOVEROTATION_OFFSET))(this, a1);
		}

		::System::Void MoveRotation_Angle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_MOVEROTATION_ANGLE_OFFSET))(this, a1);
		}

		::System::Void MoveRotation_1(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_MOVEROTATION_1_OFFSET))(this, a1);
		}

		::System::Void MoveRotation_Quaternion(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_MOVEROTATION_QUATERNION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_velocity()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_VELOCITY_OFFSET))(this);
		}

		::System::Void set_velocity(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_VELOCITY_OFFSET))(this, a1);
		}

		::System::Single get_angularVelocity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_ANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_angularVelocity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_ANGULARVELOCITY_OFFSET))(this, a1);
		}

		::System::Boolean get_useAutoMass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_USEAUTOMASS_OFFSET))(this);
		}

		::System::Void set_useAutoMass(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_USEAUTOMASS_OFFSET))(this, a1);
		}

		::System::Single get_mass()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_MASS_OFFSET))(this);
		}

		::System::Void set_mass(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_MASS_OFFSET))(this, a1);
		}

		::UnityEngine::PhysicsMaterial2D* get_sharedMaterial()
		{
			return ((::UnityEngine::PhysicsMaterial2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_SHAREDMATERIAL_OFFSET))(this);
		}

		::System::Void set_sharedMaterial(::UnityEngine::PhysicsMaterial2D* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PhysicsMaterial2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_SHAREDMATERIAL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_centerOfMass()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_CENTEROFMASS_OFFSET))(this);
		}

		::System::Void set_centerOfMass(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_CENTEROFMASS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_worldCenterOfMass()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_WORLDCENTEROFMASS_OFFSET))(this);
		}

		::System::Single get_inertia()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_INERTIA_OFFSET))(this);
		}

		::System::Void set_inertia(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_INERTIA_OFFSET))(this, a1);
		}

		::System::Single get_drag()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_DRAG_OFFSET))(this);
		}

		::System::Void set_drag(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_DRAG_OFFSET))(this, a1);
		}

		::System::Single get_angularDrag()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_ANGULARDRAG_OFFSET))(this);
		}

		::System::Void set_angularDrag(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_ANGULARDRAG_OFFSET))(this, a1);
		}

		::System::Single get_gravityScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_GRAVITYSCALE_OFFSET))(this);
		}

		::System::Void set_gravityScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_GRAVITYSCALE_OFFSET))(this, a1);
		}

		::UnityEngine::RigidbodyType2D get_bodyType()
		{
			return ((::UnityEngine::RigidbodyType2D(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_BODYTYPE_OFFSET))(this);
		}

		::System::Void set_bodyType(::UnityEngine::RigidbodyType2D a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RigidbodyType2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_BODYTYPE_OFFSET))(this, a1);
		}

		::System::Void SetDragBehaviour(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SETDRAGBEHAVIOUR_OFFSET))(this, a1);
		}

		::System::Boolean get_useFullKinematicContacts()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_USEFULLKINEMATICCONTACTS_OFFSET))(this);
		}

		::System::Void set_useFullKinematicContacts(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_USEFULLKINEMATICCONTACTS_OFFSET))(this, a1);
		}

		::System::Boolean get_isKinematic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_ISKINEMATIC_OFFSET))(this);
		}

		::System::Void set_isKinematic(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_ISKINEMATIC_OFFSET))(this, a1);
		}

		::System::Boolean get_fixedAngle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_FIXEDANGLE_OFFSET))(this);
		}

		::System::Void set_fixedAngle(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_FIXEDANGLE_OFFSET))(this, a1);
		}

		::System::Boolean get_freezeRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_FREEZEROTATION_OFFSET))(this);
		}

		::System::Void set_freezeRotation(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_FREEZEROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::RigidbodyConstraints2D get_constraints()
		{
			return ((::UnityEngine::RigidbodyConstraints2D(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_CONSTRAINTS_OFFSET))(this);
		}

		::System::Void set_constraints(::UnityEngine::RigidbodyConstraints2D a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RigidbodyConstraints2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_CONSTRAINTS_OFFSET))(this, a1);
		}

		::System::Boolean IsSleeping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ISSLEEPING_OFFSET))(this);
		}

		::System::Boolean IsAwake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ISAWAKE_OFFSET))(this);
		}

		::System::Void Sleep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SLEEP_OFFSET))(this);
		}

		::System::Void WakeUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_WAKEUP_OFFSET))(this);
		}

		::System::Boolean get_simulated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_SIMULATED_OFFSET))(this);
		}

		::System::Void set_simulated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_SIMULATED_OFFSET))(this, a1);
		}

		::UnityEngine::RigidbodyInterpolation2D get_interpolation()
		{
			return ((::UnityEngine::RigidbodyInterpolation2D(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_INTERPOLATION_OFFSET))(this);
		}

		::System::Void set_interpolation(::UnityEngine::RigidbodyInterpolation2D a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RigidbodyInterpolation2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_INTERPOLATION_OFFSET))(this, a1);
		}

		::UnityEngine::RigidbodySleepMode2D get_sleepMode()
		{
			return ((::UnityEngine::RigidbodySleepMode2D(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_SLEEPMODE_OFFSET))(this);
		}

		::System::Void set_sleepMode(::UnityEngine::RigidbodySleepMode2D a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RigidbodySleepMode2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_SLEEPMODE_OFFSET))(this, a1);
		}

		::UnityEngine::CollisionDetectionMode2D get_collisionDetectionMode()
		{
			return ((::UnityEngine::CollisionDetectionMode2D(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_COLLISIONDETECTIONMODE_OFFSET))(this);
		}

		::System::Void set_collisionDetectionMode(::UnityEngine::CollisionDetectionMode2D a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CollisionDetectionMode2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_COLLISIONDETECTIONMODE_OFFSET))(this, a1);
		}

		::System::Int32 get_attachedColliderCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_ATTACHEDCOLLIDERCOUNT_OFFSET))(this);
		}

		::System::Boolean IsTouching(::UnityEngine::Collider2D* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ISTOUCHING_OFFSET))(this, a1);
		}

		::System::Boolean IsTouching_1(::UnityEngine::Collider2D* a1, ::UnityEngine::ContactFilter2D a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider2D*, ::UnityEngine::ContactFilter2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ISTOUCHING_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsTouching_OtherColliderWithFilter_Internal(::UnityEngine::Collider2D* a1, ::UnityEngine::ContactFilter2D a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider2D*, ::UnityEngine::ContactFilter2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ISTOUCHING_OTHERCOLLIDERWITHFILTER_INTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsTouching_2(::UnityEngine::ContactFilter2D a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ContactFilter2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ISTOUCHING_2_OFFSET))(this, a1);
		}

		::System::Boolean IsTouching_AnyColliderWithFilter_Internal(::UnityEngine::ContactFilter2D a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ContactFilter2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ISTOUCHING_ANYCOLLIDERWITHFILTER_INTERNAL_OFFSET))(this, a1);
		}

		::System::Boolean IsTouchingLayers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ISTOUCHINGLAYERS_OFFSET))(this);
		}

		::System::Boolean IsTouchingLayers_1(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ISTOUCHINGLAYERS_1_OFFSET))(this, a1);
		}

		::System::Boolean OverlapPoint(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_OVERLAPPOINT_OFFSET))(this, a1);
		}

		::UnityEngine::ColliderDistance2D Distance(::UnityEngine::Collider2D* a1)
		{
			return ((::UnityEngine::ColliderDistance2D(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_DISTANCE_OFFSET))(this, a1);
		}

		::UnityEngine::ColliderDistance2D Distance_Internal(::UnityEngine::Collider2D* a1)
		{
			return ((::UnityEngine::ColliderDistance2D(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_DISTANCE_INTERNAL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 ClosestPoint(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CLOSESTPOINT_OFFSET))(this, a1);
		}

		::System::Void AddForce(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ADDFORCE_OFFSET))(this, a1);
		}

		::System::Void AddForce_1(::UnityEngine::Vector2 a1, ::UnityEngine::ForceMode2D a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::ForceMode2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ADDFORCE_1_OFFSET))(this, a1, a2);
		}

		::System::Void AddRelativeForce(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ADDRELATIVEFORCE_OFFSET))(this, a1);
		}

		::System::Void AddRelativeForce_1(::UnityEngine::Vector2 a1, ::UnityEngine::ForceMode2D a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::ForceMode2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ADDRELATIVEFORCE_1_OFFSET))(this, a1, a2);
		}

		::System::Void AddForceAtPosition(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ADDFORCEATPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Void AddForceAtPosition_1(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::ForceMode2D a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::ForceMode2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ADDFORCEATPOSITION_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddTorque(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ADDTORQUE_OFFSET))(this, a1);
		}

		::System::Void AddTorque_1(::System::Single a1, ::UnityEngine::ForceMode2D a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::ForceMode2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ADDTORQUE_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 GetPoint(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETPOINT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GetRelativePoint(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETRELATIVEPOINT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GetVector(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETVECTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GetRelativeVector(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETRELATIVEVECTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GetPointVelocity(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETPOINTVELOCITY_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GetRelativePointVelocity(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETRELATIVEPOINTVELOCITY_OFFSET))(this, a1);
		}

		::System::Int32 OverlapCollider(::UnityEngine::ContactFilter2D a1, ::Il2CppArray<::UnityEngine::Collider2D*>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_OVERLAPCOLLIDER_OFFSET))(this, a1, a2);
		}

		::System::Int32 OverlapColliderArray_Internal(::UnityEngine::ContactFilter2D a1, ::Il2CppArray<::UnityEngine::Collider2D*>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_OVERLAPCOLLIDERARRAY_INTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Int32 OverlapCollider_1(::UnityEngine::ContactFilter2D a1, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_OVERLAPCOLLIDER_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 OverlapColliderList_Internal(::UnityEngine::ContactFilter2D a1, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_OVERLAPCOLLIDERLIST_INTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetContacts(::Il2CppArray<::UnityEngine::ContactPoint2D>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETCONTACTS_OFFSET))(this, a1);
		}

		::System::Int32 GetContacts_1(::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETCONTACTS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetContacts_2(::UnityEngine::ContactFilter2D a1, ::Il2CppArray<::UnityEngine::ContactPoint2D>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETCONTACTS_2_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetContacts_3(::UnityEngine::ContactFilter2D a1, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETCONTACTS_3_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetContacts_4(::Il2CppArray<::UnityEngine::Collider2D*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETCONTACTS_4_OFFSET))(this, a1);
		}

		::System::Int32 GetContacts_5(::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETCONTACTS_5_OFFSET))(this, a1);
		}

		::System::Int32 GetContacts_6(::UnityEngine::ContactFilter2D a1, ::Il2CppArray<::UnityEngine::Collider2D*>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETCONTACTS_6_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetContacts_7(::UnityEngine::ContactFilter2D a1, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETCONTACTS_7_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetAttachedColliders(::Il2CppArray<::UnityEngine::Collider2D*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETATTACHEDCOLLIDERS_OFFSET))(this, a1);
		}

		::System::Int32 GetAttachedCollidersArray_Internal(::Il2CppArray<::UnityEngine::Collider2D*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETATTACHEDCOLLIDERSARRAY_INTERNAL_OFFSET))(this, a1);
		}

		::System::Int32 GetAttachedColliders_1(::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETATTACHEDCOLLIDERS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetAttachedCollidersList_Internal(::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETATTACHEDCOLLIDERSLIST_INTERNAL_OFFSET))(this, a1);
		}

		::System::Int32 Cast(::UnityEngine::Vector2 a1, ::Il2CppArray<::UnityEngine::RaycastHit2D>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CAST_OFFSET))(this, a1, a2);
		}

		::System::Int32 Cast_1(::UnityEngine::Vector2 a1, ::Il2CppArray<::UnityEngine::RaycastHit2D>* a2, ::System::Single a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::Il2CppArray<::UnityEngine::RaycastHit2D>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CAST_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 CastArray_Internal(::UnityEngine::Vector2 a1, ::System::Single a2, ::Il2CppArray<::UnityEngine::RaycastHit2D>* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CASTARRAY_INTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 Cast_2(::UnityEngine::Vector2 a1, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* a2, ::System::Single a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CAST_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 CastList_Internal(::UnityEngine::Vector2 a1, ::System::Single a2, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CASTLIST_INTERNAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 Cast_3(::UnityEngine::Vector2 a1, ::UnityEngine::ContactFilter2D a2, ::Il2CppArray<::UnityEngine::RaycastHit2D>* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CAST_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 Cast_4(::UnityEngine::Vector2 a1, ::UnityEngine::ContactFilter2D a2, ::Il2CppArray<::UnityEngine::RaycastHit2D>* a3, ::System::Single a4)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::RaycastHit2D>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CAST_4_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 CastFilteredArray_Internal(::UnityEngine::Vector2 a1, ::System::Single a2, ::UnityEngine::ContactFilter2D a3, ::Il2CppArray<::UnityEngine::RaycastHit2D>* a4)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CASTFILTEREDARRAY_INTERNAL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 Cast_5(::UnityEngine::Vector2 a1, ::UnityEngine::ContactFilter2D a2, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* a3, ::System::Single a4)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CAST_5_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 CastFilteredList_Internal(::UnityEngine::Vector2 a1, ::System::Single a2, ::UnityEngine::ContactFilter2D a3, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* a4)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CASTFILTEREDLIST_INTERNAL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void get_position_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_POSITION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_position_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_POSITION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void SetRotation_Quaternion_Injected(::UnityEngine::Quaternion& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SETROTATION_QUATERNION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void MovePosition_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_MOVEPOSITION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void MoveRotation_Quaternion_Injected(::UnityEngine::Quaternion& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_MOVEROTATION_QUATERNION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_velocity_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_VELOCITY_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_velocity_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_VELOCITY_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_centerOfMass_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_CENTEROFMASS_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_centerOfMass_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_CENTEROFMASS_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_worldCenterOfMass_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_WORLDCENTEROFMASS_INJECTED_OFFSET))(this, a1);
		}

		::System::Boolean IsTouching_OtherColliderWithFilter_Internal_Injected(::UnityEngine::Collider2D* a1, ::UnityEngine::ContactFilter2D& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider2D*, ::UnityEngine::ContactFilter2D&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ISTOUCHING_OTHERCOLLIDERWITHFILTER_INTERNAL_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsTouching_AnyColliderWithFilter_Internal_Injected(::UnityEngine::ContactFilter2D& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ContactFilter2D&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ISTOUCHING_ANYCOLLIDERWITHFILTER_INTERNAL_INJECTED_OFFSET))(this, a1);
		}

		::System::Boolean OverlapPoint_Injected(::UnityEngine::Vector2& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_OVERLAPPOINT_INJECTED_OFFSET))(this, a1);
		}

		::System::Void Distance_Internal_Injected(::UnityEngine::Collider2D* a1, ::UnityEngine::ColliderDistance2D& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*, ::UnityEngine::ColliderDistance2D&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_DISTANCE_INTERNAL_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void AddForce_Injected(::UnityEngine::Vector2& a1, ::UnityEngine::ForceMode2D a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::ForceMode2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ADDFORCE_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void AddRelativeForce_Injected(::UnityEngine::Vector2& a1, ::UnityEngine::ForceMode2D a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::ForceMode2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ADDRELATIVEFORCE_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void AddForceAtPosition_Injected(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2& a2, ::UnityEngine::ForceMode2D a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::ForceMode2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ADDFORCEATPOSITION_INJECTED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GetPoint_Injected(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETPOINT_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void GetRelativePoint_Injected(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETRELATIVEPOINT_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void GetVector_Injected(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETVECTOR_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void GetRelativeVector_Injected(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETRELATIVEVECTOR_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void GetPointVelocity_Injected(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETPOINTVELOCITY_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void GetRelativePointVelocity_Injected(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETRELATIVEPOINTVELOCITY_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Int32 OverlapColliderArray_Internal_Injected(::UnityEngine::ContactFilter2D& a1, ::Il2CppArray<::UnityEngine::Collider2D*>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ContactFilter2D&, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_OVERLAPCOLLIDERARRAY_INTERNAL_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Int32 OverlapColliderList_Internal_Injected(::UnityEngine::ContactFilter2D& a1, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ContactFilter2D&, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_OVERLAPCOLLIDERLIST_INTERNAL_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Int32 CastArray_Internal_Injected(::UnityEngine::Vector2& a1, ::System::Single a2, ::Il2CppArray<::UnityEngine::RaycastHit2D>* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Single, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CASTARRAY_INTERNAL_INJECTED_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 CastList_Internal_Injected(::UnityEngine::Vector2& a1, ::System::Single a2, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* a3)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CASTLIST_INTERNAL_INJECTED_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 CastFilteredArray_Internal_Injected(::UnityEngine::Vector2& a1, ::System::Single a2, ::UnityEngine::ContactFilter2D& a3, ::Il2CppArray<::UnityEngine::RaycastHit2D>* a4)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::ContactFilter2D&, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CASTFILTEREDARRAY_INTERNAL_INJECTED_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 CastFilteredList_Internal_Injected(::UnityEngine::Vector2& a1, ::System::Single a2, ::UnityEngine::ContactFilter2D& a3, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* a4)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::ContactFilter2D&, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CASTFILTEREDLIST_INTERNAL_INJECTED_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
