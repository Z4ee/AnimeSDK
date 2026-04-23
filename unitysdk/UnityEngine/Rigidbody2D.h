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

#define UNITYENGINE_RIGIDBODY2D_ADDFORCEATPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1A4D7ED0)
#define UNITYENGINE_RIGIDBODY2D_ADDFORCEATPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D7F00)
#define UNITYENGINE_RIGIDBODY2D_ADDFORCEATPOSITION_OFFSET UNITYSDK_OFFSET(0x1A4D7EA0)
#define UNITYENGINE_RIGIDBODY2D_ADDFORCE_1_OFFSET UNITYSDK_OFFSET(0x1A4D7E20)
#define UNITYENGINE_RIGIDBODY2D_ADDFORCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D7E40)
#define UNITYENGINE_RIGIDBODY2D_ADDFORCE_OFFSET UNITYSDK_OFFSET(0x1A4D7E00)
#define UNITYENGINE_RIGIDBODY2D_ADDRELATIVEFORCE_1_OFFSET UNITYSDK_OFFSET(0x1A4D7E70)
#define UNITYENGINE_RIGIDBODY2D_ADDRELATIVEFORCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D7E90)
#define UNITYENGINE_RIGIDBODY2D_ADDRELATIVEFORCE_OFFSET UNITYSDK_OFFSET(0x1A4D7E50)
#define UNITYENGINE_RIGIDBODY2D_ADDTORQUE_1_OFFSET UNITYSDK_OFFSET(0x1A4D7F20)
#define UNITYENGINE_RIGIDBODY2D_ADDTORQUE_OFFSET UNITYSDK_OFFSET(0x1A4D7F10)
#define UNITYENGINE_RIGIDBODY2D_CASTARRAY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D8C40)
#define UNITYENGINE_RIGIDBODY2D_CASTARRAY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4D8C00)
#define UNITYENGINE_RIGIDBODY2D_CASTFILTEREDARRAY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D8D50)
#define UNITYENGINE_RIGIDBODY2D_CASTFILTEREDARRAY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4D8CE0)
#define UNITYENGINE_RIGIDBODY2D_CASTFILTEREDLIST_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D8DD0)
#define UNITYENGINE_RIGIDBODY2D_CASTFILTEREDLIST_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4D8DA0)
#define UNITYENGINE_RIGIDBODY2D_CASTLIST_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D8C90)
#define UNITYENGINE_RIGIDBODY2D_CASTLIST_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4D8C70)
#define UNITYENGINE_RIGIDBODY2D_CAST_1_OFFSET UNITYSDK_OFFSET(0x1A4D8C20)
#define UNITYENGINE_RIGIDBODY2D_CAST_2_OFFSET UNITYSDK_OFFSET(0x1A4D8C50)
#define UNITYENGINE_RIGIDBODY2D_CAST_3_OFFSET UNITYSDK_OFFSET(0x1A4D8CA0)
#define UNITYENGINE_RIGIDBODY2D_CAST_4_OFFSET UNITYSDK_OFFSET(0x1A4D8D10)
#define UNITYENGINE_RIGIDBODY2D_CAST_5_OFFSET UNITYSDK_OFFSET(0x1A4D8D60)
#define UNITYENGINE_RIGIDBODY2D_CAST_OFFSET UNITYSDK_OFFSET(0x1A4D8BD0)
#define UNITYENGINE_RIGIDBODY2D_CLOSESTPOINT_OFFSET UNITYSDK_OFFSET(0x1A4D7DA0)
#define UNITYENGINE_RIGIDBODY2D_DISTANCE_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D7D90)
#define UNITYENGINE_RIGIDBODY2D_DISTANCE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4D7D40)
#define UNITYENGINE_RIGIDBODY2D_DISTANCE_OFFSET UNITYSDK_OFFSET(0x1A4D7C20)
#define UNITYENGINE_RIGIDBODY2D_GETATTACHEDCOLLIDERSARRAY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4D8BA0)
#define UNITYENGINE_RIGIDBODY2D_GETATTACHEDCOLLIDERSLIST_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4D8BC0)
#define UNITYENGINE_RIGIDBODY2D_GETATTACHEDCOLLIDERS_1_OFFSET UNITYSDK_OFFSET(0x1A4D8BB0)
#define UNITYENGINE_RIGIDBODY2D_GETATTACHEDCOLLIDERS_OFFSET UNITYSDK_OFFSET(0x1A4D8B90)
#define UNITYENGINE_RIGIDBODY2D_GETCONTACTS_1_OFFSET UNITYSDK_OFFSET(0x1A4D82A0)
#define UNITYENGINE_RIGIDBODY2D_GETCONTACTS_2_OFFSET UNITYSDK_OFFSET(0x1A4D83F0)
#define UNITYENGINE_RIGIDBODY2D_GETCONTACTS_3_OFFSET UNITYSDK_OFFSET(0x1A4D8530)
#define UNITYENGINE_RIGIDBODY2D_GETCONTACTS_4_OFFSET UNITYSDK_OFFSET(0x1A4D8670)
#define UNITYENGINE_RIGIDBODY2D_GETCONTACTS_5_OFFSET UNITYSDK_OFFSET(0x1A4D87C0)
#define UNITYENGINE_RIGIDBODY2D_GETCONTACTS_6_OFFSET UNITYSDK_OFFSET(0x1A4D8910)
#define UNITYENGINE_RIGIDBODY2D_GETCONTACTS_7_OFFSET UNITYSDK_OFFSET(0x1A4D8A50)
#define UNITYENGINE_RIGIDBODY2D_GETCONTACTS_OFFSET UNITYSDK_OFFSET(0x1A4D8150)
#define UNITYENGINE_RIGIDBODY2D_GETPOINTVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D8060)
#define UNITYENGINE_RIGIDBODY2D_GETPOINTVELOCITY_OFFSET UNITYSDK_OFFSET(0x1A4D8030)
#define UNITYENGINE_RIGIDBODY2D_GETPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D7F60)
#define UNITYENGINE_RIGIDBODY2D_GETPOINT_OFFSET UNITYSDK_OFFSET(0x1A4D7F30)
#define UNITYENGINE_RIGIDBODY2D_GETRELATIVEPOINTVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D80A0)
#define UNITYENGINE_RIGIDBODY2D_GETRELATIVEPOINTVELOCITY_OFFSET UNITYSDK_OFFSET(0x1A4D8070)
#define UNITYENGINE_RIGIDBODY2D_GETRELATIVEPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D7FA0)
#define UNITYENGINE_RIGIDBODY2D_GETRELATIVEPOINT_OFFSET UNITYSDK_OFFSET(0x1A4D7F70)
#define UNITYENGINE_RIGIDBODY2D_GETRELATIVEVECTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D8020)
#define UNITYENGINE_RIGIDBODY2D_GETRELATIVEVECTOR_OFFSET UNITYSDK_OFFSET(0x1A4D7FF0)
#define UNITYENGINE_RIGIDBODY2D_GETVECTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D7FE0)
#define UNITYENGINE_RIGIDBODY2D_GETVECTOR_OFFSET UNITYSDK_OFFSET(0x1A4D7FB0)
#define UNITYENGINE_RIGIDBODY2D_GET_ANGULARDRAG_OFFSET UNITYSDK_OFFSET(0x1A4D7920)
#define UNITYENGINE_RIGIDBODY2D_GET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1A4D77B0)
#define UNITYENGINE_RIGIDBODY2D_GET_ATTACHEDCOLLIDERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A4D7B10)
#define UNITYENGINE_RIGIDBODY2D_GET_BODYTYPE_OFFSET UNITYSDK_OFFSET(0x1A4D7960)
#define UNITYENGINE_RIGIDBODY2D_GET_CENTEROFMASS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D7860)
#define UNITYENGINE_RIGIDBODY2D_GET_CENTEROFMASS_OFFSET UNITYSDK_OFFSET(0x1A4D7830)
#define UNITYENGINE_RIGIDBODY2D_GET_COLLISIONDETECTIONMODE_OFFSET UNITYSDK_OFFSET(0x1A4D7AF0)
#define UNITYENGINE_RIGIDBODY2D_GET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1A4D7A30)
#define UNITYENGINE_RIGIDBODY2D_GET_DRAG_OFFSET UNITYSDK_OFFSET(0x1A4D7900)
#define UNITYENGINE_RIGIDBODY2D_GET_FIXEDANGLE_OFFSET UNITYSDK_OFFSET(0x1A4D79F0)
#define UNITYENGINE_RIGIDBODY2D_GET_FREEZEROTATION_OFFSET UNITYSDK_OFFSET(0x1A4D7A10)
#define UNITYENGINE_RIGIDBODY2D_GET_GRAVITYSCALE_OFFSET UNITYSDK_OFFSET(0x1A4D7940)
#define UNITYENGINE_RIGIDBODY2D_GET_INERTIA_OFFSET UNITYSDK_OFFSET(0x1A4D78E0)
#define UNITYENGINE_RIGIDBODY2D_GET_INTERPOLATION_OFFSET UNITYSDK_OFFSET(0x1A4D7AB0)
#define UNITYENGINE_RIGIDBODY2D_GET_ISKINEMATIC_OFFSET UNITYSDK_OFFSET(0x1A4D79B0)
#define UNITYENGINE_RIGIDBODY2D_GET_MASS_OFFSET UNITYSDK_OFFSET(0x1A4D77F0)
#define UNITYENGINE_RIGIDBODY2D_GET_POSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D75F0)
#define UNITYENGINE_RIGIDBODY2D_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1A4D75C0)
#define UNITYENGINE_RIGIDBODY2D_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1A4D7630)
#define UNITYENGINE_RIGIDBODY2D_GET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A4D7810)
#define UNITYENGINE_RIGIDBODY2D_GET_SIMULATED_OFFSET UNITYSDK_OFFSET(0x1A4D7A90)
#define UNITYENGINE_RIGIDBODY2D_GET_SLEEPMODE_OFFSET UNITYSDK_OFFSET(0x1A4D7AD0)
#define UNITYENGINE_RIGIDBODY2D_GET_USEAUTOMASS_OFFSET UNITYSDK_OFFSET(0x1A4D77D0)
#define UNITYENGINE_RIGIDBODY2D_GET_USEFULLKINEMATICCONTACTS_OFFSET UNITYSDK_OFFSET(0x1A4D7990)
#define UNITYENGINE_RIGIDBODY2D_GET_VELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D7770)
#define UNITYENGINE_RIGIDBODY2D_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1A4D7740)
#define UNITYENGINE_RIGIDBODY2D_GET_WORLDCENTEROFMASS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D78D0)
#define UNITYENGINE_RIGIDBODY2D_GET_WORLDCENTEROFMASS_OFFSET UNITYSDK_OFFSET(0x1A4D78A0)
#define UNITYENGINE_RIGIDBODY2D_ISAWAKE_OFFSET UNITYSDK_OFFSET(0x1A4D7A60)
#define UNITYENGINE_RIGIDBODY2D_ISSLEEPING_OFFSET UNITYSDK_OFFSET(0x1A4D7A50)
#define UNITYENGINE_RIGIDBODY2D_ISTOUCHINGLAYERS_1_OFFSET UNITYSDK_OFFSET(0x1A4D7BE0)
#define UNITYENGINE_RIGIDBODY2D_ISTOUCHINGLAYERS_OFFSET UNITYSDK_OFFSET(0x1A4D7BD0)
#define UNITYENGINE_RIGIDBODY2D_ISTOUCHING_1_OFFSET UNITYSDK_OFFSET(0x1A4D7B30)
#define UNITYENGINE_RIGIDBODY2D_ISTOUCHING_2_OFFSET UNITYSDK_OFFSET(0x1A4D7B80)
#define UNITYENGINE_RIGIDBODY2D_ISTOUCHING_ANYCOLLIDERWITHFILTER_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D7BC0)
#define UNITYENGINE_RIGIDBODY2D_ISTOUCHING_ANYCOLLIDERWITHFILTER_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4D7BB0)
#define UNITYENGINE_RIGIDBODY2D_ISTOUCHING_OFFSET UNITYSDK_OFFSET(0x1A4D7B20)
#define UNITYENGINE_RIGIDBODY2D_ISTOUCHING_OTHERCOLLIDERWITHFILTER_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D7B70)
#define UNITYENGINE_RIGIDBODY2D_ISTOUCHING_OTHERCOLLIDERWITHFILTER_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4D7B60)
#define UNITYENGINE_RIGIDBODY2D_MOVEPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D76D0)
#define UNITYENGINE_RIGIDBODY2D_MOVEPOSITION_OFFSET UNITYSDK_OFFSET(0x1A4D76B0)
#define UNITYENGINE_RIGIDBODY2D_MOVEROTATION_1_OFFSET UNITYSDK_OFFSET(0x1A4D7700)
#define UNITYENGINE_RIGIDBODY2D_MOVEROTATION_ANGLE_OFFSET UNITYSDK_OFFSET(0x1A4D76F0)
#define UNITYENGINE_RIGIDBODY2D_MOVEROTATION_OFFSET UNITYSDK_OFFSET(0x1A4D76E0)
#define UNITYENGINE_RIGIDBODY2D_MOVEROTATION_QUATERNION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D7730)
#define UNITYENGINE_RIGIDBODY2D_MOVEROTATION_QUATERNION_OFFSET UNITYSDK_OFFSET(0x1A4D7720)
#define UNITYENGINE_RIGIDBODY2D_OVERLAPCOLLIDERARRAY_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D80F0)
#define UNITYENGINE_RIGIDBODY2D_OVERLAPCOLLIDERARRAY_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4D80E0)
#define UNITYENGINE_RIGIDBODY2D_OVERLAPCOLLIDERLIST_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D8140)
#define UNITYENGINE_RIGIDBODY2D_OVERLAPCOLLIDERLIST_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A4D8130)
#define UNITYENGINE_RIGIDBODY2D_OVERLAPCOLLIDER_1_OFFSET UNITYSDK_OFFSET(0x1A4D8100)
#define UNITYENGINE_RIGIDBODY2D_OVERLAPCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1A4D80B0)
#define UNITYENGINE_RIGIDBODY2D_OVERLAPPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D7C10)
#define UNITYENGINE_RIGIDBODY2D_OVERLAPPOINT_OFFSET UNITYSDK_OFFSET(0x1A4D7BF0)
#define UNITYENGINE_RIGIDBODY2D_SETDRAGBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x1A4D7980)
#define UNITYENGINE_RIGIDBODY2D_SETROTATION_1_OFFSET UNITYSDK_OFFSET(0x1A4D7670)
#define UNITYENGINE_RIGIDBODY2D_SETROTATION_ANGLE_OFFSET UNITYSDK_OFFSET(0x1A4D7660)
#define UNITYENGINE_RIGIDBODY2D_SETROTATION_OFFSET UNITYSDK_OFFSET(0x1A4D7650)
#define UNITYENGINE_RIGIDBODY2D_SETROTATION_QUATERNION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D76A0)
#define UNITYENGINE_RIGIDBODY2D_SETROTATION_QUATERNION_OFFSET UNITYSDK_OFFSET(0x1A4D7690)
#define UNITYENGINE_RIGIDBODY2D_SET_ANGULARDRAG_OFFSET UNITYSDK_OFFSET(0x1A4D7930)
#define UNITYENGINE_RIGIDBODY2D_SET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1A4D77C0)
#define UNITYENGINE_RIGIDBODY2D_SET_BODYTYPE_OFFSET UNITYSDK_OFFSET(0x1A4D7970)
#define UNITYENGINE_RIGIDBODY2D_SET_CENTEROFMASS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D7890)
#define UNITYENGINE_RIGIDBODY2D_SET_CENTEROFMASS_OFFSET UNITYSDK_OFFSET(0x1A4D7870)
#define UNITYENGINE_RIGIDBODY2D_SET_COLLISIONDETECTIONMODE_OFFSET UNITYSDK_OFFSET(0x1A4D7B00)
#define UNITYENGINE_RIGIDBODY2D_SET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1A4D7A40)
#define UNITYENGINE_RIGIDBODY2D_SET_DRAG_OFFSET UNITYSDK_OFFSET(0x1A4D7910)
#define UNITYENGINE_RIGIDBODY2D_SET_FIXEDANGLE_OFFSET UNITYSDK_OFFSET(0x1A4D7A00)
#define UNITYENGINE_RIGIDBODY2D_SET_FREEZEROTATION_OFFSET UNITYSDK_OFFSET(0x1A4D7A20)
#define UNITYENGINE_RIGIDBODY2D_SET_GRAVITYSCALE_OFFSET UNITYSDK_OFFSET(0x1A4D7950)
#define UNITYENGINE_RIGIDBODY2D_SET_INERTIA_OFFSET UNITYSDK_OFFSET(0x1A4D78F0)
#define UNITYENGINE_RIGIDBODY2D_SET_INTERPOLATION_OFFSET UNITYSDK_OFFSET(0x1A4D7AC0)
#define UNITYENGINE_RIGIDBODY2D_SET_ISKINEMATIC_OFFSET UNITYSDK_OFFSET(0x1A4D79D0)
#define UNITYENGINE_RIGIDBODY2D_SET_MASS_OFFSET UNITYSDK_OFFSET(0x1A4D7800)
#define UNITYENGINE_RIGIDBODY2D_SET_POSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D7620)
#define UNITYENGINE_RIGIDBODY2D_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1A4D7600)
#define UNITYENGINE_RIGIDBODY2D_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1A4D7640)
#define UNITYENGINE_RIGIDBODY2D_SET_SHAREDMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A4D7820)
#define UNITYENGINE_RIGIDBODY2D_SET_SIMULATED_OFFSET UNITYSDK_OFFSET(0x1A4D7AA0)
#define UNITYENGINE_RIGIDBODY2D_SET_SLEEPMODE_OFFSET UNITYSDK_OFFSET(0x1A4D7AE0)
#define UNITYENGINE_RIGIDBODY2D_SET_USEAUTOMASS_OFFSET UNITYSDK_OFFSET(0x1A4D77E0)
#define UNITYENGINE_RIGIDBODY2D_SET_USEFULLKINEMATICCONTACTS_OFFSET UNITYSDK_OFFSET(0x1A4D79A0)
#define UNITYENGINE_RIGIDBODY2D_SET_VELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A4D77A0)
#define UNITYENGINE_RIGIDBODY2D_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x1A4D7780)
#define UNITYENGINE_RIGIDBODY2D_SLEEP_OFFSET UNITYSDK_OFFSET(0x1A4D7A70)
#define UNITYENGINE_RIGIDBODY2D_WAKEUP_OFFSET UNITYSDK_OFFSET(0x1A4D7A80)
#define UNITYENGINE_RIGIDBODY2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4D8DE0)

namespace UnityEngine
{
	inline static constexpr unsigned int Rigidbody2D_TypeDefinitionIndex = 5201;

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

		::System::Void set_position(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_POSITION_OFFSET))(this, value);
		}

		::System::Single get_rotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_ROTATION_OFFSET))(this, value);
		}

		::System::Void SetRotation(::System::Single angle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SETROTATION_OFFSET))(this, angle);
		}

		::System::Void SetRotation_Angle(::System::Single angle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SETROTATION_ANGLE_OFFSET))(this, angle);
		}

		::System::Void SetRotation_1(::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SETROTATION_1_OFFSET))(this, rotation);
		}

		::System::Void SetRotation_Quaternion(::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SETROTATION_QUATERNION_OFFSET))(this, rotation);
		}

		::System::Void MovePosition(::UnityEngine::Vector2 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_MOVEPOSITION_OFFSET))(this, position);
		}

		::System::Void MoveRotation(::System::Single angle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_MOVEROTATION_OFFSET))(this, angle);
		}

		::System::Void MoveRotation_Angle(::System::Single angle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_MOVEROTATION_ANGLE_OFFSET))(this, angle);
		}

		::System::Void MoveRotation_1(::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_MOVEROTATION_1_OFFSET))(this, rotation);
		}

		::System::Void MoveRotation_Quaternion(::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_MOVEROTATION_QUATERNION_OFFSET))(this, rotation);
		}

		::UnityEngine::Vector2 get_velocity()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_VELOCITY_OFFSET))(this);
		}

		::System::Void set_velocity(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_VELOCITY_OFFSET))(this, value);
		}

		::System::Single get_angularVelocity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_ANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_angularVelocity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_ANGULARVELOCITY_OFFSET))(this, value);
		}

		::System::Boolean get_useAutoMass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_USEAUTOMASS_OFFSET))(this);
		}

		::System::Void set_useAutoMass(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_USEAUTOMASS_OFFSET))(this, value);
		}

		::System::Single get_mass()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_MASS_OFFSET))(this);
		}

		::System::Void set_mass(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_MASS_OFFSET))(this, value);
		}

		::UnityEngine::PhysicsMaterial2D* get_sharedMaterial()
		{
			return ((::UnityEngine::PhysicsMaterial2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_SHAREDMATERIAL_OFFSET))(this);
		}

		::System::Void set_sharedMaterial(::UnityEngine::PhysicsMaterial2D* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PhysicsMaterial2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_SHAREDMATERIAL_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_centerOfMass()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_CENTEROFMASS_OFFSET))(this);
		}

		::System::Void set_centerOfMass(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_CENTEROFMASS_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_worldCenterOfMass()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_WORLDCENTEROFMASS_OFFSET))(this);
		}

		::System::Single get_inertia()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_INERTIA_OFFSET))(this);
		}

		::System::Void set_inertia(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_INERTIA_OFFSET))(this, value);
		}

		::System::Single get_drag()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_DRAG_OFFSET))(this);
		}

		::System::Void set_drag(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_DRAG_OFFSET))(this, value);
		}

		::System::Single get_angularDrag()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_ANGULARDRAG_OFFSET))(this);
		}

		::System::Void set_angularDrag(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_ANGULARDRAG_OFFSET))(this, value);
		}

		::System::Single get_gravityScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_GRAVITYSCALE_OFFSET))(this);
		}

		::System::Void set_gravityScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_GRAVITYSCALE_OFFSET))(this, value);
		}

		::UnityEngine::RigidbodyType2D get_bodyType()
		{
			return ((::UnityEngine::RigidbodyType2D(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_BODYTYPE_OFFSET))(this);
		}

		::System::Void set_bodyType(::UnityEngine::RigidbodyType2D value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RigidbodyType2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_BODYTYPE_OFFSET))(this, value);
		}

		::System::Void SetDragBehaviour(::System::Boolean dragged)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SETDRAGBEHAVIOUR_OFFSET))(this, dragged);
		}

		::System::Boolean get_useFullKinematicContacts()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_USEFULLKINEMATICCONTACTS_OFFSET))(this);
		}

		::System::Void set_useFullKinematicContacts(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_USEFULLKINEMATICCONTACTS_OFFSET))(this, value);
		}

		::System::Boolean get_isKinematic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_ISKINEMATIC_OFFSET))(this);
		}

		::System::Void set_isKinematic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_ISKINEMATIC_OFFSET))(this, value);
		}

		::System::Boolean get_fixedAngle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_FIXEDANGLE_OFFSET))(this);
		}

		::System::Void set_fixedAngle(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_FIXEDANGLE_OFFSET))(this, value);
		}

		::System::Boolean get_freezeRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_FREEZEROTATION_OFFSET))(this);
		}

		::System::Void set_freezeRotation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_FREEZEROTATION_OFFSET))(this, value);
		}

		::UnityEngine::RigidbodyConstraints2D get_constraints()
		{
			return ((::UnityEngine::RigidbodyConstraints2D(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_CONSTRAINTS_OFFSET))(this);
		}

		::System::Void set_constraints(::UnityEngine::RigidbodyConstraints2D value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RigidbodyConstraints2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_CONSTRAINTS_OFFSET))(this, value);
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

		::System::Void set_simulated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_SIMULATED_OFFSET))(this, value);
		}

		::UnityEngine::RigidbodyInterpolation2D get_interpolation()
		{
			return ((::UnityEngine::RigidbodyInterpolation2D(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_INTERPOLATION_OFFSET))(this);
		}

		::System::Void set_interpolation(::UnityEngine::RigidbodyInterpolation2D value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RigidbodyInterpolation2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_INTERPOLATION_OFFSET))(this, value);
		}

		::UnityEngine::RigidbodySleepMode2D get_sleepMode()
		{
			return ((::UnityEngine::RigidbodySleepMode2D(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_SLEEPMODE_OFFSET))(this);
		}

		::System::Void set_sleepMode(::UnityEngine::RigidbodySleepMode2D value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RigidbodySleepMode2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_SLEEPMODE_OFFSET))(this, value);
		}

		::UnityEngine::CollisionDetectionMode2D get_collisionDetectionMode()
		{
			return ((::UnityEngine::CollisionDetectionMode2D(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_COLLISIONDETECTIONMODE_OFFSET))(this);
		}

		::System::Void set_collisionDetectionMode(::UnityEngine::CollisionDetectionMode2D value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CollisionDetectionMode2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_COLLISIONDETECTIONMODE_OFFSET))(this, value);
		}

		::System::Int32 get_attachedColliderCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_ATTACHEDCOLLIDERCOUNT_OFFSET))(this);
		}

		::System::Boolean IsTouching(::UnityEngine::Collider2D* collider)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ISTOUCHING_OFFSET))(this, collider);
		}

		::System::Boolean IsTouching_1(::UnityEngine::Collider2D* collider, ::UnityEngine::ContactFilter2D contactFilter)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider2D*, ::UnityEngine::ContactFilter2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ISTOUCHING_1_OFFSET))(this, collider, contactFilter);
		}

		::System::Boolean IsTouching_OtherColliderWithFilter_Internal(::UnityEngine::Collider2D* collider, ::UnityEngine::ContactFilter2D contactFilter)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider2D*, ::UnityEngine::ContactFilter2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ISTOUCHING_OTHERCOLLIDERWITHFILTER_INTERNAL_OFFSET))(this, collider, contactFilter);
		}

		::System::Boolean IsTouching_2(::UnityEngine::ContactFilter2D contactFilter)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ContactFilter2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ISTOUCHING_2_OFFSET))(this, contactFilter);
		}

		::System::Boolean IsTouching_AnyColliderWithFilter_Internal(::UnityEngine::ContactFilter2D contactFilter)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ContactFilter2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ISTOUCHING_ANYCOLLIDERWITHFILTER_INTERNAL_OFFSET))(this, contactFilter);
		}

		::System::Boolean IsTouchingLayers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ISTOUCHINGLAYERS_OFFSET))(this);
		}

		::System::Boolean IsTouchingLayers_1(::System::Int32 layerMask)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ISTOUCHINGLAYERS_1_OFFSET))(this, layerMask);
		}

		::System::Boolean OverlapPoint(::UnityEngine::Vector2 point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_OVERLAPPOINT_OFFSET))(this, point);
		}

		::UnityEngine::ColliderDistance2D Distance(::UnityEngine::Collider2D* collider)
		{
			return ((::UnityEngine::ColliderDistance2D(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_DISTANCE_OFFSET))(this, collider);
		}

		::UnityEngine::ColliderDistance2D Distance_Internal(::UnityEngine::Collider2D* collider)
		{
			return ((::UnityEngine::ColliderDistance2D(*)(::PVOID, ::UnityEngine::Collider2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_DISTANCE_INTERNAL_OFFSET))(this, collider);
		}

		::UnityEngine::Vector2 ClosestPoint(::UnityEngine::Vector2 position)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CLOSESTPOINT_OFFSET))(this, position);
		}

		::System::Void AddForce(::UnityEngine::Vector2 force)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ADDFORCE_OFFSET))(this, force);
		}

		::System::Void AddForce_1(::UnityEngine::Vector2 force, ::UnityEngine::ForceMode2D mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::ForceMode2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ADDFORCE_1_OFFSET))(this, force, mode);
		}

		::System::Void AddRelativeForce(::UnityEngine::Vector2 relativeForce)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ADDRELATIVEFORCE_OFFSET))(this, relativeForce);
		}

		::System::Void AddRelativeForce_1(::UnityEngine::Vector2 relativeForce, ::UnityEngine::ForceMode2D mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::ForceMode2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ADDRELATIVEFORCE_1_OFFSET))(this, relativeForce, mode);
		}

		::System::Void AddForceAtPosition(::UnityEngine::Vector2 force, ::UnityEngine::Vector2 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ADDFORCEATPOSITION_OFFSET))(this, force, position);
		}

		::System::Void AddForceAtPosition_1(::UnityEngine::Vector2 force, ::UnityEngine::Vector2 position, ::UnityEngine::ForceMode2D mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::ForceMode2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ADDFORCEATPOSITION_1_OFFSET))(this, force, position, mode);
		}

		::System::Void AddTorque(::System::Single torque)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ADDTORQUE_OFFSET))(this, torque);
		}

		::System::Void AddTorque_1(::System::Single torque, ::UnityEngine::ForceMode2D mode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::ForceMode2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ADDTORQUE_1_OFFSET))(this, torque, mode);
		}

		::UnityEngine::Vector2 GetPoint(::UnityEngine::Vector2 point)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETPOINT_OFFSET))(this, point);
		}

		::UnityEngine::Vector2 GetRelativePoint(::UnityEngine::Vector2 relativePoint)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETRELATIVEPOINT_OFFSET))(this, relativePoint);
		}

		::UnityEngine::Vector2 GetVector(::UnityEngine::Vector2 vector)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETVECTOR_OFFSET))(this, vector);
		}

		::UnityEngine::Vector2 GetRelativeVector(::UnityEngine::Vector2 relativeVector)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETRELATIVEVECTOR_OFFSET))(this, relativeVector);
		}

		::UnityEngine::Vector2 GetPointVelocity(::UnityEngine::Vector2 point)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETPOINTVELOCITY_OFFSET))(this, point);
		}

		::UnityEngine::Vector2 GetRelativePointVelocity(::UnityEngine::Vector2 relativePoint)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETRELATIVEPOINTVELOCITY_OFFSET))(this, relativePoint);
		}

		::System::Int32 OverlapCollider(::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_OVERLAPCOLLIDER_OFFSET))(this, contactFilter, results);
		}

		::System::Int32 OverlapColliderArray_Internal(::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_OVERLAPCOLLIDERARRAY_INTERNAL_OFFSET))(this, contactFilter, results);
		}

		::System::Int32 OverlapCollider_1(::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_OVERLAPCOLLIDER_1_OFFSET))(this, contactFilter, results);
		}

		::System::Int32 OverlapColliderList_Internal(::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_OVERLAPCOLLIDERLIST_INTERNAL_OFFSET))(this, contactFilter, results);
		}

		::System::Int32 GetContacts(::Il2CppArray<::UnityEngine::ContactPoint2D>* contacts)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETCONTACTS_OFFSET))(this, contacts);
		}

		::System::Int32 GetContacts_1(::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>* contacts)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETCONTACTS_1_OFFSET))(this, contacts);
		}

		::System::Int32 GetContacts_2(::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::ContactPoint2D>* contacts)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETCONTACTS_2_OFFSET))(this, contactFilter, contacts);
		}

		::System::Int32 GetContacts_3(::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>* contacts)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::ContactPoint2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETCONTACTS_3_OFFSET))(this, contactFilter, contacts);
		}

		::System::Int32 GetContacts_4(::Il2CppArray<::UnityEngine::Collider2D*>* colliders)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETCONTACTS_4_OFFSET))(this, colliders);
		}

		::System::Int32 GetContacts_5(::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* colliders)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETCONTACTS_5_OFFSET))(this, colliders);
		}

		::System::Int32 GetContacts_6(::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::Collider2D*>* colliders)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETCONTACTS_6_OFFSET))(this, contactFilter, colliders);
		}

		::System::Int32 GetContacts_7(::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* colliders)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETCONTACTS_7_OFFSET))(this, contactFilter, colliders);
		}

		::System::Int32 GetAttachedColliders(::Il2CppArray<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETATTACHEDCOLLIDERS_OFFSET))(this, results);
		}

		::System::Int32 GetAttachedCollidersArray_Internal(::Il2CppArray<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETATTACHEDCOLLIDERSARRAY_INTERNAL_OFFSET))(this, results);
		}

		::System::Int32 GetAttachedColliders_1(::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETATTACHEDCOLLIDERS_1_OFFSET))(this, results);
		}

		::System::Int32 GetAttachedCollidersList_Internal(::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETATTACHEDCOLLIDERSLIST_INTERNAL_OFFSET))(this, results);
		}

		::System::Int32 Cast(::UnityEngine::Vector2 direction, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CAST_OFFSET))(this, direction, results);
		}

		::System::Int32 Cast_1(::UnityEngine::Vector2 direction, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results, ::System::Single distance)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::Il2CppArray<::UnityEngine::RaycastHit2D>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CAST_1_OFFSET))(this, direction, results, distance);
		}

		::System::Int32 CastArray_Internal(::UnityEngine::Vector2 direction, ::System::Single distance, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CASTARRAY_INTERNAL_OFFSET))(this, direction, distance, results);
		}

		::System::Int32 Cast_2(::UnityEngine::Vector2 direction, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* results, ::System::Single distance)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CAST_2_OFFSET))(this, direction, results, distance);
		}

		::System::Int32 CastList_Internal(::UnityEngine::Vector2 direction, ::System::Single distance, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CASTLIST_INTERNAL_OFFSET))(this, direction, distance, results);
		}

		::System::Int32 Cast_3(::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CAST_3_OFFSET))(this, direction, contactFilter, results);
		}

		::System::Int32 Cast_4(::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results, ::System::Single distance)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::RaycastHit2D>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CAST_4_OFFSET))(this, direction, contactFilter, results, distance);
		}

		::System::Int32 CastFilteredArray_Internal(::UnityEngine::Vector2 direction, ::System::Single distance, ::UnityEngine::ContactFilter2D contactFilter, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::ContactFilter2D, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CASTFILTEREDARRAY_INTERNAL_OFFSET))(this, direction, distance, contactFilter, results);
		}

		::System::Int32 Cast_5(::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* results, ::System::Single distance)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CAST_5_OFFSET))(this, direction, contactFilter, results, distance);
		}

		::System::Int32 CastFilteredList_Internal(::UnityEngine::Vector2 direction, ::System::Single distance, ::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::ContactFilter2D, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CASTFILTEREDLIST_INTERNAL_OFFSET))(this, direction, distance, contactFilter, results);
		}

		::System::Void get_position_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_POSITION_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_position_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_POSITION_INJECTED_OFFSET))(this, value);
		}

		::System::Void SetRotation_Quaternion_Injected(::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SETROTATION_QUATERNION_INJECTED_OFFSET))(this, rotation);
		}

		::System::Void MovePosition_Injected(::UnityEngine::Vector2& position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_MOVEPOSITION_INJECTED_OFFSET))(this, position);
		}

		::System::Void MoveRotation_Quaternion_Injected(::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_MOVEROTATION_QUATERNION_INJECTED_OFFSET))(this, rotation);
		}

		::System::Void get_velocity_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_VELOCITY_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_velocity_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_VELOCITY_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_centerOfMass_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_CENTEROFMASS_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_centerOfMass_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_SET_CENTEROFMASS_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_worldCenterOfMass_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GET_WORLDCENTEROFMASS_INJECTED_OFFSET))(this, ret);
		}

		::System::Boolean IsTouching_OtherColliderWithFilter_Internal_Injected(::UnityEngine::Collider2D* collider, ::UnityEngine::ContactFilter2D& contactFilter)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider2D*, ::UnityEngine::ContactFilter2D&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ISTOUCHING_OTHERCOLLIDERWITHFILTER_INTERNAL_INJECTED_OFFSET))(this, collider, contactFilter);
		}

		::System::Boolean IsTouching_AnyColliderWithFilter_Internal_Injected(::UnityEngine::ContactFilter2D& contactFilter)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ContactFilter2D&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ISTOUCHING_ANYCOLLIDERWITHFILTER_INTERNAL_INJECTED_OFFSET))(this, contactFilter);
		}

		::System::Boolean OverlapPoint_Injected(::UnityEngine::Vector2& point)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_OVERLAPPOINT_INJECTED_OFFSET))(this, point);
		}

		::System::Void Distance_Internal_Injected(::UnityEngine::Collider2D* collider, ::UnityEngine::ColliderDistance2D& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider2D*, ::UnityEngine::ColliderDistance2D&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_DISTANCE_INTERNAL_INJECTED_OFFSET))(this, collider, ret);
		}

		::System::Void AddForce_Injected(::UnityEngine::Vector2& force, ::UnityEngine::ForceMode2D mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::ForceMode2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ADDFORCE_INJECTED_OFFSET))(this, force, mode);
		}

		::System::Void AddRelativeForce_Injected(::UnityEngine::Vector2& relativeForce, ::UnityEngine::ForceMode2D mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::ForceMode2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ADDRELATIVEFORCE_INJECTED_OFFSET))(this, relativeForce, mode);
		}

		::System::Void AddForceAtPosition_Injected(::UnityEngine::Vector2& force, ::UnityEngine::Vector2& position, ::UnityEngine::ForceMode2D mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::UnityEngine::ForceMode2D))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_ADDFORCEATPOSITION_INJECTED_OFFSET))(this, force, position, mode);
		}

		::System::Void GetPoint_Injected(::UnityEngine::Vector2& point, ::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETPOINT_INJECTED_OFFSET))(this, point, ret);
		}

		::System::Void GetRelativePoint_Injected(::UnityEngine::Vector2& relativePoint, ::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETRELATIVEPOINT_INJECTED_OFFSET))(this, relativePoint, ret);
		}

		::System::Void GetVector_Injected(::UnityEngine::Vector2& vector, ::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETVECTOR_INJECTED_OFFSET))(this, vector, ret);
		}

		::System::Void GetRelativeVector_Injected(::UnityEngine::Vector2& relativeVector, ::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETRELATIVEVECTOR_INJECTED_OFFSET))(this, relativeVector, ret);
		}

		::System::Void GetPointVelocity_Injected(::UnityEngine::Vector2& point, ::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETPOINTVELOCITY_INJECTED_OFFSET))(this, point, ret);
		}

		::System::Void GetRelativePointVelocity_Injected(::UnityEngine::Vector2& relativePoint, ::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_GETRELATIVEPOINTVELOCITY_INJECTED_OFFSET))(this, relativePoint, ret);
		}

		::System::Int32 OverlapColliderArray_Internal_Injected(::UnityEngine::ContactFilter2D& contactFilter, ::Il2CppArray<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ContactFilter2D&, ::Il2CppArray<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_OVERLAPCOLLIDERARRAY_INTERNAL_INJECTED_OFFSET))(this, contactFilter, results);
		}

		::System::Int32 OverlapColliderList_Internal_Injected(::UnityEngine::ContactFilter2D& contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ContactFilter2D&, ::System::Collections::Generic::List_1<::UnityEngine::Collider2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_OVERLAPCOLLIDERLIST_INTERNAL_INJECTED_OFFSET))(this, contactFilter, results);
		}

		::System::Int32 CastArray_Internal_Injected(::UnityEngine::Vector2& direction, ::System::Single distance, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Single, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CASTARRAY_INTERNAL_INJECTED_OFFSET))(this, direction, distance, results);
		}

		::System::Int32 CastList_Internal_Injected(::UnityEngine::Vector2& direction, ::System::Single distance, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CASTLIST_INTERNAL_INJECTED_OFFSET))(this, direction, distance, results);
		}

		::System::Int32 CastFilteredArray_Internal_Injected(::UnityEngine::Vector2& direction, ::System::Single distance, ::UnityEngine::ContactFilter2D& contactFilter, ::Il2CppArray<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::ContactFilter2D&, ::Il2CppArray<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CASTFILTEREDARRAY_INTERNAL_INJECTED_OFFSET))(this, direction, distance, contactFilter, results);
		}

		::System::Int32 CastFilteredList_Internal_Injected(::UnityEngine::Vector2& direction, ::System::Single distance, ::UnityEngine::ContactFilter2D& contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* results)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2&, ::System::Single, ::UnityEngine::ContactFilter2D&, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RIGIDBODY2D_CASTFILTEREDLIST_INTERNAL_INJECTED_OFFSET))(this, direction, distance, contactFilter, results);
		}
	};
}
