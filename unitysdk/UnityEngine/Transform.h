#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Component.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RotationOrder.h"
#include "unitysdk/UnityEngine/Space.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define UNITYENGINE_TRANSFORM_DETACHCHILDREN_OFFSET UNITYSDK_OFFSET(0x18A5A940)
#define UNITYENGINE_TRANSFORM_FINDCHILD_OFFSET UNITYSDK_OFFSET(0x18A5AA90)
#define UNITYENGINE_TRANSFORM_FINDRELATIVETRANSFORMWITHPATH_OFFSET UNITYSDK_OFFSET(0x18A5A990)
#define UNITYENGINE_TRANSFORM_FIND_OFFSET UNITYSDK_OFFSET(0x18A5A9A0)
#define UNITYENGINE_TRANSFORM_GETCHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x18A5AB70)
#define UNITYENGINE_TRANSFORM_GETCHILD_OFFSET UNITYSDK_OFFSET(0x18A5AB60)
#define UNITYENGINE_TRANSFORM_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18A5AAE0)
#define UNITYENGINE_TRANSFORM_GETLOCALEULERANGLES_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A58430)
#define UNITYENGINE_TRANSFORM_GETLOCALEULERANGLES_OFFSET UNITYSDK_OFFSET(0x18A583E0)
#define UNITYENGINE_TRANSFORM_GETPARENT_OFFSET UNITYSDK_OFFSET(0x18A58FB0)
#define UNITYENGINE_TRANSFORM_GETROOT_OFFSET UNITYSDK_OFFSET(0x18A5A920)
#define UNITYENGINE_TRANSFORM_GETROTATIONORDERINTERNAL_OFFSET UNITYSDK_OFFSET(0x18A58E20)
#define UNITYENGINE_TRANSFORM_GETSIBLINGINDEX_OFFSET UNITYSDK_OFFSET(0x18A5A980)
#define UNITYENGINE_TRANSFORM_GET_CHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x18A5A930)
#define UNITYENGINE_TRANSFORM_GET_EULERANGLES_OFFSET UNITYSDK_OFFSET(0x18A58480)
#define UNITYENGINE_TRANSFORM_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x18A58BE0)
#define UNITYENGINE_TRANSFORM_GET_HASCHANGED_OFFSET UNITYSDK_OFFSET(0x18A5AA70)
#define UNITYENGINE_TRANSFORM_GET_HIERARCHYCAPACITY_OFFSET UNITYSDK_OFFSET(0x18A5AB80)
#define UNITYENGINE_TRANSFORM_GET_HIERARCHYCOUNT_OFFSET UNITYSDK_OFFSET(0x18A5ABC0)
#define UNITYENGINE_TRANSFORM_GET_LOCALEULERANGLES_OFFSET UNITYSDK_OFFSET(0x18A58640)
#define UNITYENGINE_TRANSFORM_GET_LOCALPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A583B0)
#define UNITYENGINE_TRANSFORM_GET_LOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x18A58360)
#define UNITYENGINE_TRANSFORM_GET_LOCALROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A58DF0)
#define UNITYENGINE_TRANSFORM_GET_LOCALROTATION_OFFSET UNITYSDK_OFFSET(0x18A58740)
#define UNITYENGINE_TRANSFORM_GET_LOCALSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A58EA0)
#define UNITYENGINE_TRANSFORM_GET_LOCALSCALE_OFFSET UNITYSDK_OFFSET(0x18A58E50)
#define UNITYENGINE_TRANSFORM_GET_LOCALTOWORLDMATRIXNOSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A5AD20)
#define UNITYENGINE_TRANSFORM_GET_LOCALTOWORLDMATRIXNOSCALE_OFFSET UNITYSDK_OFFSET(0x18A5ACC0)
#define UNITYENGINE_TRANSFORM_GET_LOCALTOWORLDMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A590B0)
#define UNITYENGINE_TRANSFORM_GET_LOCALTOWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x18A59050)
#define UNITYENGINE_TRANSFORM_GET_LOSSYSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A5AA50)
#define UNITYENGINE_TRANSFORM_GET_LOSSYSCALE_OFFSET UNITYSDK_OFFSET(0x18A5AA00)
#define UNITYENGINE_TRANSFORM_GET_PARENTINTERNAL_OFFSET UNITYSDK_OFFSET(0x18A58EE0)
#define UNITYENGINE_TRANSFORM_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x18A58ED0)
#define UNITYENGINE_TRANSFORM_GET_POSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A58330)
#define UNITYENGINE_TRANSFORM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x18A582E0)
#define UNITYENGINE_TRANSFORM_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x18A58800)
#define UNITYENGINE_TRANSFORM_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x18A5A910)
#define UNITYENGINE_TRANSFORM_GET_ROTATIONORDER_OFFSET UNITYSDK_OFFSET(0x18A58E10)
#define UNITYENGINE_TRANSFORM_GET_ROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A58DD0)
#define UNITYENGINE_TRANSFORM_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x18A58580)
#define UNITYENGINE_TRANSFORM_GET_UP_OFFSET UNITYSDK_OFFSET(0x18A589F0)
#define UNITYENGINE_TRANSFORM_GET_WORLDTOLOCALMATRIXNOSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A5ACB0)
#define UNITYENGINE_TRANSFORM_GET_WORLDTOLOCALMATRIXNOSCALE_OFFSET UNITYSDK_OFFSET(0x18A5AC50)
#define UNITYENGINE_TRANSFORM_GET_WORLDTOLOCALMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A59040)
#define UNITYENGINE_TRANSFORM_GET_WORLDTOLOCALMATRIX_OFFSET UNITYSDK_OFFSET(0x18A58FE0)
#define UNITYENGINE_TRANSFORM_INTERNAL_GETHIERARCHYCAPACITY_OFFSET UNITYSDK_OFFSET(0x18A5AB90)
#define UNITYENGINE_TRANSFORM_INTERNAL_GETHIERARCHYCOUNT_OFFSET UNITYSDK_OFFSET(0x18A5ABD0)
#define UNITYENGINE_TRANSFORM_INTERNAL_LOOKAT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A5A4D0)
#define UNITYENGINE_TRANSFORM_INTERNAL_LOOKAT_OFFSET UNITYSDK_OFFSET(0x18A5A480)
#define UNITYENGINE_TRANSFORM_INTERNAL_SETHIERARCHYCAPACITY_OFFSET UNITYSDK_OFFSET(0x18A5ABB0)
#define UNITYENGINE_TRANSFORM_INVERSETRANSFORMDIRECTION_1_OFFSET UNITYSDK_OFFSET(0x18A5A5B0)
#define UNITYENGINE_TRANSFORM_INVERSETRANSFORMDIRECTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A5A5A0)
#define UNITYENGINE_TRANSFORM_INVERSETRANSFORMDIRECTION_OFFSET UNITYSDK_OFFSET(0x18A5A550)
#define UNITYENGINE_TRANSFORM_INVERSETRANSFORMPOINT_1_OFFSET UNITYSDK_OFFSET(0x18A5A8B0)
#define UNITYENGINE_TRANSFORM_INVERSETRANSFORMPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A5A8A0)
#define UNITYENGINE_TRANSFORM_INVERSETRANSFORMPOINT_OFFSET UNITYSDK_OFFSET(0x18A5A850)
#define UNITYENGINE_TRANSFORM_INVERSETRANSFORMVECTOR_1_OFFSET UNITYSDK_OFFSET(0x18A5A730)
#define UNITYENGINE_TRANSFORM_INVERSETRANSFORMVECTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A5A720)
#define UNITYENGINE_TRANSFORM_INVERSETRANSFORMVECTOR_OFFSET UNITYSDK_OFFSET(0x18A5A6D0)
#define UNITYENGINE_TRANSFORM_ISCHILDOF_OFFSET UNITYSDK_OFFSET(0x18A5AA60)
#define UNITYENGINE_TRANSFORM_ISNONUNIFORMSCALETRANSFORM_OFFSET UNITYSDK_OFFSET(0x18A5ABE0)
#define UNITYENGINE_TRANSFORM_LOOKAT_1_OFFSET UNITYSDK_OFFSET(0x18A5A3F0)
#define UNITYENGINE_TRANSFORM_LOOKAT_2_OFFSET UNITYSDK_OFFSET(0x18A5A3B0)
#define UNITYENGINE_TRANSFORM_LOOKAT_3_OFFSET UNITYSDK_OFFSET(0x18A5A490)
#define UNITYENGINE_TRANSFORM_LOOKAT_OFFSET UNITYSDK_OFFSET(0x18A5A330)
#define UNITYENGINE_TRANSFORM_QUERYRESONANCENONALLOC_OFFSET UNITYSDK_OFFSET(0x18A5AC20)
#define UNITYENGINE_TRANSFORM_QUERYRESONANCE_OFFSET UNITYSDK_OFFSET(0x18A5AC10)
#define UNITYENGINE_TRANSFORM_REGISTERRESONANCE_OFFSET UNITYSDK_OFFSET(0x18A5ABF0)
#define UNITYENGINE_TRANSFORM_RESONATENONALLOC_OFFSET UNITYSDK_OFFSET(0x18A5AC30)
#define UNITYENGINE_TRANSFORM_RESONATE_OFFSET UNITYSDK_OFFSET(0x18A5AC40)
#define UNITYENGINE_TRANSFORM_ROTATEAROUNDINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A59EF0)
#define UNITYENGINE_TRANSFORM_ROTATEAROUNDINTERNAL_OFFSET UNITYSDK_OFFSET(0x18A59EE0)
#define UNITYENGINE_TRANSFORM_ROTATEAROUNDLOCAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A5AB50)
#define UNITYENGINE_TRANSFORM_ROTATEAROUNDLOCAL_OFFSET UNITYSDK_OFFSET(0x18A5AB40)
#define UNITYENGINE_TRANSFORM_ROTATEAROUND_1_OFFSET UNITYSDK_OFFSET(0x18A5AB20)
#define UNITYENGINE_TRANSFORM_ROTATEAROUND_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A5AB30)
#define UNITYENGINE_TRANSFORM_ROTATEAROUND_OFFSET UNITYSDK_OFFSET(0x18A5A060)
#define UNITYENGINE_TRANSFORM_ROTATE_1_OFFSET UNITYSDK_OFFSET(0x18A59C60)
#define UNITYENGINE_TRANSFORM_ROTATE_2_OFFSET UNITYSDK_OFFSET(0x18A59D90)
#define UNITYENGINE_TRANSFORM_ROTATE_3_OFFSET UNITYSDK_OFFSET(0x18A59DC0)
#define UNITYENGINE_TRANSFORM_ROTATE_4_OFFSET UNITYSDK_OFFSET(0x18A59F00)
#define UNITYENGINE_TRANSFORM_ROTATE_5_OFFSET UNITYSDK_OFFSET(0x18A59FC0)
#define UNITYENGINE_TRANSFORM_ROTATE_OFFSET UNITYSDK_OFFSET(0x18A597F0)
#define UNITYENGINE_TRANSFORM_SENDTRANSFORMCHANGEDSCALE_OFFSET UNITYSDK_OFFSET(0x18A5A9F0)
#define UNITYENGINE_TRANSFORM_SETASFIRSTSIBLING_OFFSET UNITYSDK_OFFSET(0x18A5A950)
#define UNITYENGINE_TRANSFORM_SETASLASTSIBLING_OFFSET UNITYSDK_OFFSET(0x18A5A960)
#define UNITYENGINE_TRANSFORM_SETLOCALEULERANGLES_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A58450)
#define UNITYENGINE_TRANSFORM_SETLOCALEULERANGLES_OFFSET UNITYSDK_OFFSET(0x18A58440)
#define UNITYENGINE_TRANSFORM_SETLOCALEULERHINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A58470)
#define UNITYENGINE_TRANSFORM_SETLOCALEULERHINT_OFFSET UNITYSDK_OFFSET(0x18A58460)
#define UNITYENGINE_TRANSFORM_SETPARENT_1_OFFSET UNITYSDK_OFFSET(0x18A58FD0)
#define UNITYENGINE_TRANSFORM_SETPARENT_OFFSET UNITYSDK_OFFSET(0x18A58FC0)
#define UNITYENGINE_TRANSFORM_SETPOSITIONANDROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A590D0)
#define UNITYENGINE_TRANSFORM_SETPOSITIONANDROTATION_OFFSET UNITYSDK_OFFSET(0x18A590C0)
#define UNITYENGINE_TRANSFORM_SETROTATIONORDERINTERNAL_OFFSET UNITYSDK_OFFSET(0x18A58E40)
#define UNITYENGINE_TRANSFORM_SETSIBLINGINDEX_OFFSET UNITYSDK_OFFSET(0x18A5A970)
#define UNITYENGINE_TRANSFORM_SET_EULERANGLES_OFFSET UNITYSDK_OFFSET(0x18A585C0)
#define UNITYENGINE_TRANSFORM_SET_FORWARD_OFFSET UNITYSDK_OFFSET(0x18A58D60)
#define UNITYENGINE_TRANSFORM_SET_HASCHANGED_OFFSET UNITYSDK_OFFSET(0x18A5AA80)
#define UNITYENGINE_TRANSFORM_SET_HIERARCHYCAPACITY_OFFSET UNITYSDK_OFFSET(0x18A5ABA0)
#define UNITYENGINE_TRANSFORM_SET_LOCALEULERANGLES_OFFSET UNITYSDK_OFFSET(0x18A58780)
#define UNITYENGINE_TRANSFORM_SET_LOCALPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A583D0)
#define UNITYENGINE_TRANSFORM_SET_LOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x18A583C0)
#define UNITYENGINE_TRANSFORM_SET_LOCALROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A58E00)
#define UNITYENGINE_TRANSFORM_SET_LOCALROTATION_OFFSET UNITYSDK_OFFSET(0x18A587F0)
#define UNITYENGINE_TRANSFORM_SET_LOCALSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A58EC0)
#define UNITYENGINE_TRANSFORM_SET_LOCALSCALE_OFFSET UNITYSDK_OFFSET(0x18A58EB0)
#define UNITYENGINE_TRANSFORM_SET_PARENTINTERNAL_OFFSET UNITYSDK_OFFSET(0x18A58FA0)
#define UNITYENGINE_TRANSFORM_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x18A58EF0)
#define UNITYENGINE_TRANSFORM_SET_POSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A58350)
#define UNITYENGINE_TRANSFORM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x18A58340)
#define UNITYENGINE_TRANSFORM_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x18A58980)
#define UNITYENGINE_TRANSFORM_SET_ROTATIONORDER_OFFSET UNITYSDK_OFFSET(0x18A58E30)
#define UNITYENGINE_TRANSFORM_SET_ROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A58DE0)
#define UNITYENGINE_TRANSFORM_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x18A58630)
#define UNITYENGINE_TRANSFORM_SET_UP_OFFSET UNITYSDK_OFFSET(0x18A58B70)
#define UNITYENGINE_TRANSFORM_TRANSFORMDIRECTION_1_OFFSET UNITYSDK_OFFSET(0x18A5A4F0)
#define UNITYENGINE_TRANSFORM_TRANSFORMDIRECTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A5A4E0)
#define UNITYENGINE_TRANSFORM_TRANSFORMDIRECTION_OFFSET UNITYSDK_OFFSET(0x18A59220)
#define UNITYENGINE_TRANSFORM_TRANSFORMPOINT_1_OFFSET UNITYSDK_OFFSET(0x18A5A7F0)
#define UNITYENGINE_TRANSFORM_TRANSFORMPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A5A7E0)
#define UNITYENGINE_TRANSFORM_TRANSFORMPOINT_OFFSET UNITYSDK_OFFSET(0x18A5A790)
#define UNITYENGINE_TRANSFORM_TRANSFORMVECTOR_1_OFFSET UNITYSDK_OFFSET(0x18A5A670)
#define UNITYENGINE_TRANSFORM_TRANSFORMVECTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A5A660)
#define UNITYENGINE_TRANSFORM_TRANSFORMVECTOR_OFFSET UNITYSDK_OFFSET(0x18A5A610)
#define UNITYENGINE_TRANSFORM_TRANSLATE_1_OFFSET UNITYSDK_OFFSET(0x18A59270)
#define UNITYENGINE_TRANSFORM_TRANSLATE_2_OFFSET UNITYSDK_OFFSET(0x18A59330)
#define UNITYENGINE_TRANSFORM_TRANSLATE_3_OFFSET UNITYSDK_OFFSET(0x18A59480)
#define UNITYENGINE_TRANSFORM_TRANSLATE_4_OFFSET UNITYSDK_OFFSET(0x18A59570)
#define UNITYENGINE_TRANSFORM_TRANSLATE_5_OFFSET UNITYSDK_OFFSET(0x18A59690)
#define UNITYENGINE_TRANSFORM_TRANSLATE_OFFSET UNITYSDK_OFFSET(0x18A590E0)
#define UNITYENGINE_TRANSFORM_UNREGISTERRESONANCE_OFFSET UNITYSDK_OFFSET(0x18A5AC00)
#define UNITYENGINE_TRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x18A582D0)

namespace UnityEngine
{
	inline static constexpr unsigned int Transform_TypeDefinitionIndex = 4214;

	class Transform : public ::UnityEngine::Component
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_POSITION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_localPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_LOCALPOSITION_OFFSET))(this);
		}

		::System::Void set_localPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_LOCALPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 GetLocalEulerAngles(::UnityEngine::RotationOrder order)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::RotationOrder))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GETLOCALEULERANGLES_OFFSET))(this, order);
		}

		::System::Void SetLocalEulerAngles(::UnityEngine::Vector3 euler, ::UnityEngine::RotationOrder order)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::RotationOrder))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SETLOCALEULERANGLES_OFFSET))(this, euler, order);
		}

		::System::Void SetLocalEulerHint(::UnityEngine::Vector3 euler)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SETLOCALEULERHINT_OFFSET))(this, euler);
		}

		::UnityEngine::Vector3 get_eulerAngles()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_EULERANGLES_OFFSET))(this);
		}

		::System::Void set_eulerAngles(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_EULERANGLES_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_localEulerAngles()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_LOCALEULERANGLES_OFFSET))(this);
		}

		::System::Void set_localEulerAngles(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_LOCALEULERANGLES_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_right()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_RIGHT_OFFSET))(this);
		}

		::System::Void set_right(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_RIGHT_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_up()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_UP_OFFSET))(this);
		}

		::System::Void set_up(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_UP_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_forward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_FORWARD_OFFSET))(this);
		}

		::System::Void set_forward(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_FORWARD_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_ROTATION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_localRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_LOCALROTATION_OFFSET))(this);
		}

		::System::Void set_localRotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_LOCALROTATION_OFFSET))(this, value);
		}

		::UnityEngine::RotationOrder get_rotationOrder()
		{
			return ((::UnityEngine::RotationOrder(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_ROTATIONORDER_OFFSET))(this);
		}

		::System::Void set_rotationOrder(::UnityEngine::RotationOrder value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RotationOrder))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_ROTATIONORDER_OFFSET))(this, value);
		}

		::System::Int32 GetRotationOrderInternal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GETROTATIONORDERINTERNAL_OFFSET))(this);
		}

		::System::Void SetRotationOrderInternal(::UnityEngine::RotationOrder rotationOrder)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RotationOrder))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SETROTATIONORDERINTERNAL_OFFSET))(this, rotationOrder);
		}

		::UnityEngine::Vector3 get_localScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_LOCALSCALE_OFFSET))(this);
		}

		::System::Void set_localScale(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_LOCALSCALE_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_parent()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_PARENT_OFFSET))(this);
		}

		::System::Void set_parent(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_PARENT_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_parentInternal()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_PARENTINTERNAL_OFFSET))(this);
		}

		::System::Void set_parentInternal(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_PARENTINTERNAL_OFFSET))(this, value);
		}

		::UnityEngine::Transform* GetParent()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GETPARENT_OFFSET))(this);
		}

		::System::Void SetParent(::UnityEngine::Transform* p)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SETPARENT_OFFSET))(this, p);
		}

		::System::Void SetParent_1(::UnityEngine::Transform* parent, ::System::Boolean worldPositionStays)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SETPARENT_1_OFFSET))(this, parent, worldPositionStays);
		}

		::UnityEngine::Matrix4x4 get_worldToLocalMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_WORLDTOLOCALMATRIX_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 get_localToWorldMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_LOCALTOWORLDMATRIX_OFFSET))(this);
		}

		::System::Void SetPositionAndRotation(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SETPOSITIONANDROTATION_OFFSET))(this, position, rotation);
		}

		::System::Void Translate(::UnityEngine::Vector3 translation, ::UnityEngine::Space relativeTo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Space))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSLATE_OFFSET))(this, translation, relativeTo);
		}

		::System::Void Translate_1(::UnityEngine::Vector3 translation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSLATE_1_OFFSET))(this, translation);
		}

		::System::Void Translate_2(::System::Single x, ::System::Single y, ::System::Single z, ::UnityEngine::Space relativeTo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Space))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSLATE_2_OFFSET))(this, x, y, z, relativeTo);
		}

		::System::Void Translate_3(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSLATE_3_OFFSET))(this, x, y, z);
		}

		::System::Void Translate_4(::UnityEngine::Vector3 translation, ::UnityEngine::Transform* relativeTo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSLATE_4_OFFSET))(this, translation, relativeTo);
		}

		::System::Void Translate_5(::System::Single x, ::System::Single y, ::System::Single z, ::UnityEngine::Transform* relativeTo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSLATE_5_OFFSET))(this, x, y, z, relativeTo);
		}

		::System::Void Rotate(::UnityEngine::Vector3 eulers, ::UnityEngine::Space relativeTo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Space))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ROTATE_OFFSET))(this, eulers, relativeTo);
		}

		::System::Void Rotate_1(::UnityEngine::Vector3 eulers)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ROTATE_1_OFFSET))(this, eulers);
		}

		::System::Void Rotate_2(::System::Single xAngle, ::System::Single yAngle, ::System::Single zAngle, ::UnityEngine::Space relativeTo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Space))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ROTATE_2_OFFSET))(this, xAngle, yAngle, zAngle, relativeTo);
		}

		::System::Void Rotate_3(::System::Single xAngle, ::System::Single yAngle, ::System::Single zAngle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ROTATE_3_OFFSET))(this, xAngle, yAngle, zAngle);
		}

		::System::Void RotateAroundInternal(::UnityEngine::Vector3 axis, ::System::Single angle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ROTATEAROUNDINTERNAL_OFFSET))(this, axis, angle);
		}

		::System::Void Rotate_4(::UnityEngine::Vector3 axis, ::System::Single angle, ::UnityEngine::Space relativeTo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Space))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ROTATE_4_OFFSET))(this, axis, angle, relativeTo);
		}

		::System::Void Rotate_5(::UnityEngine::Vector3 axis, ::System::Single angle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ROTATE_5_OFFSET))(this, axis, angle);
		}

		::System::Void RotateAround(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 axis, ::System::Single angle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ROTATEAROUND_OFFSET))(this, point, axis, angle);
		}

		::System::Void LookAt(::UnityEngine::Transform* target, ::UnityEngine::Vector3 worldUp)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_LOOKAT_OFFSET))(this, target, worldUp);
		}

		::System::Void LookAt_1(::UnityEngine::Transform* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_LOOKAT_1_OFFSET))(this, target);
		}

		::System::Void LookAt_2(::UnityEngine::Vector3 worldPosition, ::UnityEngine::Vector3 worldUp)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_LOOKAT_2_OFFSET))(this, worldPosition, worldUp);
		}

		::System::Void LookAt_3(::UnityEngine::Vector3 worldPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_LOOKAT_3_OFFSET))(this, worldPosition);
		}

		::System::Void Internal_LookAt(::UnityEngine::Vector3 worldPosition, ::UnityEngine::Vector3 worldUp)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_INTERNAL_LOOKAT_OFFSET))(this, worldPosition, worldUp);
		}

		::UnityEngine::Vector3 TransformDirection(::UnityEngine::Vector3 direction)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSFORMDIRECTION_OFFSET))(this, direction);
		}

		::UnityEngine::Vector3 TransformDirection_1(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSFORMDIRECTION_1_OFFSET))(this, x, y, z);
		}

		::UnityEngine::Vector3 InverseTransformDirection(::UnityEngine::Vector3 direction)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_INVERSETRANSFORMDIRECTION_OFFSET))(this, direction);
		}

		::UnityEngine::Vector3 InverseTransformDirection_1(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_INVERSETRANSFORMDIRECTION_1_OFFSET))(this, x, y, z);
		}

		::UnityEngine::Vector3 TransformVector(::UnityEngine::Vector3 vector)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSFORMVECTOR_OFFSET))(this, vector);
		}

		::UnityEngine::Vector3 TransformVector_1(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSFORMVECTOR_1_OFFSET))(this, x, y, z);
		}

		::UnityEngine::Vector3 InverseTransformVector(::UnityEngine::Vector3 vector)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_INVERSETRANSFORMVECTOR_OFFSET))(this, vector);
		}

		::UnityEngine::Vector3 InverseTransformVector_1(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_INVERSETRANSFORMVECTOR_1_OFFSET))(this, x, y, z);
		}

		::UnityEngine::Vector3 TransformPoint(::UnityEngine::Vector3 position)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSFORMPOINT_OFFSET))(this, position);
		}

		::UnityEngine::Vector3 TransformPoint_1(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSFORMPOINT_1_OFFSET))(this, x, y, z);
		}

		::UnityEngine::Vector3 InverseTransformPoint(::UnityEngine::Vector3 position)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_INVERSETRANSFORMPOINT_OFFSET))(this, position);
		}

		::UnityEngine::Vector3 InverseTransformPoint_1(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_INVERSETRANSFORMPOINT_1_OFFSET))(this, x, y, z);
		}

		::UnityEngine::Transform* get_root()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_ROOT_OFFSET))(this);
		}

		::UnityEngine::Transform* GetRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GETROOT_OFFSET))(this);
		}

		::System::Int32 get_childCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_CHILDCOUNT_OFFSET))(this);
		}

		::System::Void DetachChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_DETACHCHILDREN_OFFSET))(this);
		}

		::System::Void SetAsFirstSibling()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SETASFIRSTSIBLING_OFFSET))(this);
		}

		::System::Void SetAsLastSibling()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SETASLASTSIBLING_OFFSET))(this);
		}

		::System::Void SetSiblingIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SETSIBLINGINDEX_OFFSET))(this, index);
		}

		::System::Int32 GetSiblingIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GETSIBLINGINDEX_OFFSET))(this);
		}

		static ::UnityEngine::Transform* FindRelativeTransformWithPath(::UnityEngine::Transform* transform, ::System::String* path, ::System::Boolean isActiveOnly)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_FINDRELATIVETRANSFORMWITHPATH_OFFSET))(transform, path, isActiveOnly);
		}

		::UnityEngine::Transform* Find(::System::String* n)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_FIND_OFFSET))(this, n);
		}

		::System::Void SendTransformChangedScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SENDTRANSFORMCHANGEDSCALE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_lossyScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_LOSSYSCALE_OFFSET))(this);
		}

		::System::Boolean IsChildOf(::UnityEngine::Transform* parent)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ISCHILDOF_OFFSET))(this, parent);
		}

		::System::Boolean get_hasChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_HASCHANGED_OFFSET))(this);
		}

		::System::Void set_hasChanged(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_HASCHANGED_OFFSET))(this, value);
		}

		::UnityEngine::Transform* FindChild(::System::String* n)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_FINDCHILD_OFFSET))(this, n);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void RotateAround_1(::UnityEngine::Vector3 axis, ::System::Single angle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ROTATEAROUND_1_OFFSET))(this, axis, angle);
		}

		::System::Void RotateAroundLocal(::UnityEngine::Vector3 axis, ::System::Single angle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ROTATEAROUNDLOCAL_OFFSET))(this, axis, angle);
		}

		::UnityEngine::Transform* GetChild(::System::Int32 index)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GETCHILD_OFFSET))(this, index);
		}

		::System::Int32 GetChildCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GETCHILDCOUNT_OFFSET))(this);
		}

		::System::Int32 get_hierarchyCapacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_HIERARCHYCAPACITY_OFFSET))(this);
		}

		::System::Void set_hierarchyCapacity(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_HIERARCHYCAPACITY_OFFSET))(this, value);
		}

		::System::Int32 internal_getHierarchyCapacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_INTERNAL_GETHIERARCHYCAPACITY_OFFSET))(this);
		}

		::System::Void internal_setHierarchyCapacity(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_INTERNAL_SETHIERARCHYCAPACITY_OFFSET))(this, value);
		}

		::System::Int32 get_hierarchyCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_HIERARCHYCOUNT_OFFSET))(this);
		}

		::System::Int32 internal_getHierarchyCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_INTERNAL_GETHIERARCHYCOUNT_OFFSET))(this);
		}

		::System::Boolean IsNonUniformScaleTransform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ISNONUNIFORMSCALETRANSFORM_OFFSET))(this);
		}

		::System::Void RegisterResonance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_REGISTERRESONANCE_OFFSET))(this);
		}

		::System::Void UnregisterResonance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_UNREGISTERRESONANCE_OFFSET))(this);
		}

		static ::Il2CppArray<::UnityEngine::Transform*>* QueryResonance()
		{
			return ((::Il2CppArray<::UnityEngine::Transform*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_QUERYRESONANCE_OFFSET))();
		}

		static ::System::Void QueryResonanceNonAlloc(::Il2CppArray<::UnityEngine::Transform*>* transforms)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_QUERYRESONANCENONALLOC_OFFSET))(transforms);
		}

		static ::System::Void ResonateNonAlloc(::Il2CppArray<::UnityEngine::Transform*>* list)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_RESONATENONALLOC_OFFSET))(list);
		}

		static ::Il2CppArray<::UnityEngine::Transform*>* Resonate()
		{
			return ((::Il2CppArray<::UnityEngine::Transform*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_RESONATE_OFFSET))();
		}

		::UnityEngine::Matrix4x4 get_worldToLocalMatrixNoScale()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_WORLDTOLOCALMATRIXNOSCALE_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 get_localToWorldMatrixNoScale()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_LOCALTOWORLDMATRIXNOSCALE_OFFSET))(this);
		}

		::System::Void get_position_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_POSITION_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_position_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_POSITION_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_localPosition_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_LOCALPOSITION_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_localPosition_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_LOCALPOSITION_INJECTED_OFFSET))(this, value);
		}

		::System::Void GetLocalEulerAngles_Injected(::UnityEngine::RotationOrder order, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RotationOrder, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GETLOCALEULERANGLES_INJECTED_OFFSET))(this, order, ret);
		}

		::System::Void SetLocalEulerAngles_Injected(::UnityEngine::Vector3& euler, ::UnityEngine::RotationOrder order)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::RotationOrder))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SETLOCALEULERANGLES_INJECTED_OFFSET))(this, euler, order);
		}

		::System::Void SetLocalEulerHint_Injected(::UnityEngine::Vector3& euler)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SETLOCALEULERHINT_INJECTED_OFFSET))(this, euler);
		}

		::System::Void get_rotation_Injected(::UnityEngine::Quaternion& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_ROTATION_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_rotation_Injected(::UnityEngine::Quaternion& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_ROTATION_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_localRotation_Injected(::UnityEngine::Quaternion& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_LOCALROTATION_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_localRotation_Injected(::UnityEngine::Quaternion& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_LOCALROTATION_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_localScale_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_LOCALSCALE_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_localScale_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_LOCALSCALE_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_worldToLocalMatrix_Injected(::UnityEngine::Matrix4x4& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_WORLDTOLOCALMATRIX_INJECTED_OFFSET))(this, ret);
		}

		::System::Void get_localToWorldMatrix_Injected(::UnityEngine::Matrix4x4& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_LOCALTOWORLDMATRIX_INJECTED_OFFSET))(this, ret);
		}

		::System::Void SetPositionAndRotation_Injected(::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SETPOSITIONANDROTATION_INJECTED_OFFSET))(this, position, rotation);
		}

		::System::Void RotateAroundInternal_Injected(::UnityEngine::Vector3& axis, ::System::Single angle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ROTATEAROUNDINTERNAL_INJECTED_OFFSET))(this, axis, angle);
		}

		::System::Void Internal_LookAt_Injected(::UnityEngine::Vector3& worldPosition, ::UnityEngine::Vector3& worldUp)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_INTERNAL_LOOKAT_INJECTED_OFFSET))(this, worldPosition, worldUp);
		}

		::System::Void TransformDirection_Injected(::UnityEngine::Vector3& direction, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSFORMDIRECTION_INJECTED_OFFSET))(this, direction, ret);
		}

		::System::Void InverseTransformDirection_Injected(::UnityEngine::Vector3& direction, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_INVERSETRANSFORMDIRECTION_INJECTED_OFFSET))(this, direction, ret);
		}

		::System::Void TransformVector_Injected(::UnityEngine::Vector3& vector, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSFORMVECTOR_INJECTED_OFFSET))(this, vector, ret);
		}

		::System::Void InverseTransformVector_Injected(::UnityEngine::Vector3& vector, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_INVERSETRANSFORMVECTOR_INJECTED_OFFSET))(this, vector, ret);
		}

		::System::Void TransformPoint_Injected(::UnityEngine::Vector3& position, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSFORMPOINT_INJECTED_OFFSET))(this, position, ret);
		}

		::System::Void InverseTransformPoint_Injected(::UnityEngine::Vector3& position, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_INVERSETRANSFORMPOINT_INJECTED_OFFSET))(this, position, ret);
		}

		::System::Void get_lossyScale_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_LOSSYSCALE_INJECTED_OFFSET))(this, ret);
		}

		::System::Void RotateAround_Injected(::UnityEngine::Vector3& axis, ::System::Single angle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ROTATEAROUND_INJECTED_OFFSET))(this, axis, angle);
		}

		::System::Void RotateAroundLocal_Injected(::UnityEngine::Vector3& axis, ::System::Single angle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ROTATEAROUNDLOCAL_INJECTED_OFFSET))(this, axis, angle);
		}

		::System::Void get_worldToLocalMatrixNoScale_Injected(::UnityEngine::Matrix4x4& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_WORLDTOLOCALMATRIXNOSCALE_INJECTED_OFFSET))(this, ret);
		}

		::System::Void get_localToWorldMatrixNoScale_Injected(::UnityEngine::Matrix4x4& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_LOCALTOWORLDMATRIXNOSCALE_INJECTED_OFFSET))(this, ret);
		}
	};
}
