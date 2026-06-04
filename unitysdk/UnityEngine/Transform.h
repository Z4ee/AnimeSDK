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

#define UNITYENGINE_TRANSFORM_DETACHCHILDREN_OFFSET UNITYSDK_OFFSET(0x1B2E2C40)
#define UNITYENGINE_TRANSFORM_FINDCHILD_OFFSET UNITYSDK_OFFSET(0x1B2E2DA0)
#define UNITYENGINE_TRANSFORM_FINDRELATIVETRANSFORMWITHPATH_OFFSET UNITYSDK_OFFSET(0x1B2E2CA0)
#define UNITYENGINE_TRANSFORM_FIND_OFFSET UNITYSDK_OFFSET(0x1B2E2CB0)
#define UNITYENGINE_TRANSFORM_GETCHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x1B2E2E80)
#define UNITYENGINE_TRANSFORM_GETCHILD_OFFSET UNITYSDK_OFFSET(0x1B2E2E70)
#define UNITYENGINE_TRANSFORM_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B2E2DF0)
#define UNITYENGINE_TRANSFORM_GETLOCALEULERANGLES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E0810)
#define UNITYENGINE_TRANSFORM_GETLOCALEULERANGLES_OFFSET UNITYSDK_OFFSET(0x1B2E07C0)
#define UNITYENGINE_TRANSFORM_GETPARENT_OFFSET UNITYSDK_OFFSET(0x1B2E1330)
#define UNITYENGINE_TRANSFORM_GETROOT_OFFSET UNITYSDK_OFFSET(0x1B2E2C20)
#define UNITYENGINE_TRANSFORM_GETROTATIONORDERINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B2E11A0)
#define UNITYENGINE_TRANSFORM_GETSIBLINGINDEXBYCLIENT_OFFSET UNITYSDK_OFFSET(0x1B2E2C80)
#define UNITYENGINE_TRANSFORM_GETSIBLINGINDEX_OFFSET UNITYSDK_OFFSET(0x1B2E2C90)
#define UNITYENGINE_TRANSFORM_GET_CHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x1B2E2C30)
#define UNITYENGINE_TRANSFORM_GET_EULERANGLES_OFFSET UNITYSDK_OFFSET(0x1B2E0860)
#define UNITYENGINE_TRANSFORM_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x1B2E0F80)
#define UNITYENGINE_TRANSFORM_GET_HASCHANGED_OFFSET UNITYSDK_OFFSET(0x1B2E2D80)
#define UNITYENGINE_TRANSFORM_GET_HIERARCHYCAPACITY_OFFSET UNITYSDK_OFFSET(0x1B2E2E90)
#define UNITYENGINE_TRANSFORM_GET_HIERARCHYCOUNT_OFFSET UNITYSDK_OFFSET(0x1B2E2ED0)
#define UNITYENGINE_TRANSFORM_GET_LOCALEULERANGLES_OFFSET UNITYSDK_OFFSET(0x1B2E0A20)
#define UNITYENGINE_TRANSFORM_GET_LOCALPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E0790)
#define UNITYENGINE_TRANSFORM_GET_LOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x1B2E0740)
#define UNITYENGINE_TRANSFORM_GET_LOCALROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E1170)
#define UNITYENGINE_TRANSFORM_GET_LOCALROTATION_OFFSET UNITYSDK_OFFSET(0x1B2E0B20)
#define UNITYENGINE_TRANSFORM_GET_LOCALSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E1220)
#define UNITYENGINE_TRANSFORM_GET_LOCALSCALE_OFFSET UNITYSDK_OFFSET(0x1B2E11D0)
#define UNITYENGINE_TRANSFORM_GET_LOCALTOWORLDMATRIXNOSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E3030)
#define UNITYENGINE_TRANSFORM_GET_LOCALTOWORLDMATRIXNOSCALE_OFFSET UNITYSDK_OFFSET(0x1B2E2FD0)
#define UNITYENGINE_TRANSFORM_GET_LOCALTOWORLDMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E1430)
#define UNITYENGINE_TRANSFORM_GET_LOCALTOWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x1B2E13D0)
#define UNITYENGINE_TRANSFORM_GET_LOSSYSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E2D60)
#define UNITYENGINE_TRANSFORM_GET_LOSSYSCALE_OFFSET UNITYSDK_OFFSET(0x1B2E2D10)
#define UNITYENGINE_TRANSFORM_GET_PARENTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B2E1260)
#define UNITYENGINE_TRANSFORM_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1B2E1250)
#define UNITYENGINE_TRANSFORM_GET_POSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E0710)
#define UNITYENGINE_TRANSFORM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1B2E06C0)
#define UNITYENGINE_TRANSFORM_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1B2E0BE0)
#define UNITYENGINE_TRANSFORM_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x1B2E2C10)
#define UNITYENGINE_TRANSFORM_GET_ROTATIONORDER_OFFSET UNITYSDK_OFFSET(0x1B2E1190)
#define UNITYENGINE_TRANSFORM_GET_ROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E1150)
#define UNITYENGINE_TRANSFORM_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1B2E0960)
#define UNITYENGINE_TRANSFORM_GET_UP_OFFSET UNITYSDK_OFFSET(0x1B2E0DB0)
#define UNITYENGINE_TRANSFORM_GET_WORLDTOLOCALMATRIXNOSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E2FC0)
#define UNITYENGINE_TRANSFORM_GET_WORLDTOLOCALMATRIXNOSCALE_OFFSET UNITYSDK_OFFSET(0x1B2E2F60)
#define UNITYENGINE_TRANSFORM_GET_WORLDTOLOCALMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E13C0)
#define UNITYENGINE_TRANSFORM_GET_WORLDTOLOCALMATRIX_OFFSET UNITYSDK_OFFSET(0x1B2E1360)
#define UNITYENGINE_TRANSFORM_INTERNAL_GETHIERARCHYCAPACITY_OFFSET UNITYSDK_OFFSET(0x1B2E2EA0)
#define UNITYENGINE_TRANSFORM_INTERNAL_GETHIERARCHYCOUNT_OFFSET UNITYSDK_OFFSET(0x1B2E2EE0)
#define UNITYENGINE_TRANSFORM_INTERNAL_LOOKAT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E27D0)
#define UNITYENGINE_TRANSFORM_INTERNAL_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1B2E2780)
#define UNITYENGINE_TRANSFORM_INTERNAL_SETHIERARCHYCAPACITY_OFFSET UNITYSDK_OFFSET(0x1B2E2EC0)
#define UNITYENGINE_TRANSFORM_INVERSETRANSFORMDIRECTION_1_OFFSET UNITYSDK_OFFSET(0x1B2E28B0)
#define UNITYENGINE_TRANSFORM_INVERSETRANSFORMDIRECTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E28A0)
#define UNITYENGINE_TRANSFORM_INVERSETRANSFORMDIRECTION_OFFSET UNITYSDK_OFFSET(0x1B2E2850)
#define UNITYENGINE_TRANSFORM_INVERSETRANSFORMPOINT_1_OFFSET UNITYSDK_OFFSET(0x1B2E2BB0)
#define UNITYENGINE_TRANSFORM_INVERSETRANSFORMPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E2BA0)
#define UNITYENGINE_TRANSFORM_INVERSETRANSFORMPOINT_OFFSET UNITYSDK_OFFSET(0x1B2E2B50)
#define UNITYENGINE_TRANSFORM_INVERSETRANSFORMVECTOR_1_OFFSET UNITYSDK_OFFSET(0x1B2E2A30)
#define UNITYENGINE_TRANSFORM_INVERSETRANSFORMVECTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E2A20)
#define UNITYENGINE_TRANSFORM_INVERSETRANSFORMVECTOR_OFFSET UNITYSDK_OFFSET(0x1B2E29D0)
#define UNITYENGINE_TRANSFORM_ISCHILDOF_OFFSET UNITYSDK_OFFSET(0x1B2E2D70)
#define UNITYENGINE_TRANSFORM_ISNONUNIFORMSCALETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B2E2EF0)
#define UNITYENGINE_TRANSFORM_LOOKAT_1_OFFSET UNITYSDK_OFFSET(0x1B2E26F0)
#define UNITYENGINE_TRANSFORM_LOOKAT_2_OFFSET UNITYSDK_OFFSET(0x1B2E26B0)
#define UNITYENGINE_TRANSFORM_LOOKAT_3_OFFSET UNITYSDK_OFFSET(0x1B2E2790)
#define UNITYENGINE_TRANSFORM_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1B2E2630)
#define UNITYENGINE_TRANSFORM_QUERYRESONANCENONALLOC_OFFSET UNITYSDK_OFFSET(0x1B2E2F30)
#define UNITYENGINE_TRANSFORM_QUERYRESONANCE_OFFSET UNITYSDK_OFFSET(0x1B2E2F20)
#define UNITYENGINE_TRANSFORM_REGISTERRESONANCE_OFFSET UNITYSDK_OFFSET(0x1B2E2F00)
#define UNITYENGINE_TRANSFORM_RESONATENONALLOC_OFFSET UNITYSDK_OFFSET(0x1B2E2F40)
#define UNITYENGINE_TRANSFORM_RESONATE_OFFSET UNITYSDK_OFFSET(0x1B2E2F50)
#define UNITYENGINE_TRANSFORM_ROTATEAROUNDINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E2220)
#define UNITYENGINE_TRANSFORM_ROTATEAROUNDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B2E2210)
#define UNITYENGINE_TRANSFORM_ROTATEAROUNDLOCAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E2E60)
#define UNITYENGINE_TRANSFORM_ROTATEAROUNDLOCAL_OFFSET UNITYSDK_OFFSET(0x1B2E2E50)
#define UNITYENGINE_TRANSFORM_ROTATEAROUND_1_OFFSET UNITYSDK_OFFSET(0x1B2E2E30)
#define UNITYENGINE_TRANSFORM_ROTATEAROUND_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E2E40)
#define UNITYENGINE_TRANSFORM_ROTATEAROUND_OFFSET UNITYSDK_OFFSET(0x1B2E2390)
#define UNITYENGINE_TRANSFORM_ROTATE_1_OFFSET UNITYSDK_OFFSET(0x1B2E1F90)
#define UNITYENGINE_TRANSFORM_ROTATE_2_OFFSET UNITYSDK_OFFSET(0x1B2E20C0)
#define UNITYENGINE_TRANSFORM_ROTATE_3_OFFSET UNITYSDK_OFFSET(0x1B2E20F0)
#define UNITYENGINE_TRANSFORM_ROTATE_4_OFFSET UNITYSDK_OFFSET(0x1B2E2230)
#define UNITYENGINE_TRANSFORM_ROTATE_5_OFFSET UNITYSDK_OFFSET(0x1B2E22F0)
#define UNITYENGINE_TRANSFORM_ROTATE_OFFSET UNITYSDK_OFFSET(0x1B2E1B20)
#define UNITYENGINE_TRANSFORM_SENDTRANSFORMCHANGEDSCALE_OFFSET UNITYSDK_OFFSET(0x1B2E2D00)
#define UNITYENGINE_TRANSFORM_SETASFIRSTSIBLING_OFFSET UNITYSDK_OFFSET(0x1B2E2C50)
#define UNITYENGINE_TRANSFORM_SETASLASTSIBLING_OFFSET UNITYSDK_OFFSET(0x1B2E2C60)
#define UNITYENGINE_TRANSFORM_SETLOCALEULERANGLES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E0830)
#define UNITYENGINE_TRANSFORM_SETLOCALEULERANGLES_OFFSET UNITYSDK_OFFSET(0x1B2E0820)
#define UNITYENGINE_TRANSFORM_SETLOCALEULERHINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E0850)
#define UNITYENGINE_TRANSFORM_SETLOCALEULERHINT_OFFSET UNITYSDK_OFFSET(0x1B2E0840)
#define UNITYENGINE_TRANSFORM_SETPARENT_1_OFFSET UNITYSDK_OFFSET(0x1B2E1350)
#define UNITYENGINE_TRANSFORM_SETPARENT_OFFSET UNITYSDK_OFFSET(0x1B2E1340)
#define UNITYENGINE_TRANSFORM_SETPOSITIONANDROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E1450)
#define UNITYENGINE_TRANSFORM_SETPOSITIONANDROTATION_OFFSET UNITYSDK_OFFSET(0x1B2E1440)
#define UNITYENGINE_TRANSFORM_SETROTATIONORDERINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B2E11C0)
#define UNITYENGINE_TRANSFORM_SETSIBLINGINDEX_OFFSET UNITYSDK_OFFSET(0x1B2E2C70)
#define UNITYENGINE_TRANSFORM_SET_EULERANGLES_OFFSET UNITYSDK_OFFSET(0x1B2E09A0)
#define UNITYENGINE_TRANSFORM_SET_FORWARD_OFFSET UNITYSDK_OFFSET(0x1B2E10E0)
#define UNITYENGINE_TRANSFORM_SET_HASCHANGED_OFFSET UNITYSDK_OFFSET(0x1B2E2D90)
#define UNITYENGINE_TRANSFORM_SET_HIERARCHYCAPACITY_OFFSET UNITYSDK_OFFSET(0x1B2E2EB0)
#define UNITYENGINE_TRANSFORM_SET_LOCALEULERANGLES_OFFSET UNITYSDK_OFFSET(0x1B2E0B60)
#define UNITYENGINE_TRANSFORM_SET_LOCALPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E07B0)
#define UNITYENGINE_TRANSFORM_SET_LOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x1B2E07A0)
#define UNITYENGINE_TRANSFORM_SET_LOCALROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E1180)
#define UNITYENGINE_TRANSFORM_SET_LOCALROTATION_OFFSET UNITYSDK_OFFSET(0x1B2E0BD0)
#define UNITYENGINE_TRANSFORM_SET_LOCALSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E1240)
#define UNITYENGINE_TRANSFORM_SET_LOCALSCALE_OFFSET UNITYSDK_OFFSET(0x1B2E1230)
#define UNITYENGINE_TRANSFORM_SET_PARENTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1B2E1320)
#define UNITYENGINE_TRANSFORM_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x1B2E1270)
#define UNITYENGINE_TRANSFORM_SET_POSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E0730)
#define UNITYENGINE_TRANSFORM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1B2E0720)
#define UNITYENGINE_TRANSFORM_SET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1B2E0D40)
#define UNITYENGINE_TRANSFORM_SET_ROTATIONORDER_OFFSET UNITYSDK_OFFSET(0x1B2E11B0)
#define UNITYENGINE_TRANSFORM_SET_ROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E1160)
#define UNITYENGINE_TRANSFORM_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1B2E0A10)
#define UNITYENGINE_TRANSFORM_SET_UP_OFFSET UNITYSDK_OFFSET(0x1B2E0F10)
#define UNITYENGINE_TRANSFORM_TRANSFORMDIRECTION_1_OFFSET UNITYSDK_OFFSET(0x1B2E27F0)
#define UNITYENGINE_TRANSFORM_TRANSFORMDIRECTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E27E0)
#define UNITYENGINE_TRANSFORM_TRANSFORMDIRECTION_OFFSET UNITYSDK_OFFSET(0x1B2E1560)
#define UNITYENGINE_TRANSFORM_TRANSFORMPOINT_1_OFFSET UNITYSDK_OFFSET(0x1B2E2AF0)
#define UNITYENGINE_TRANSFORM_TRANSFORMPOINT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E2AE0)
#define UNITYENGINE_TRANSFORM_TRANSFORMPOINT_OFFSET UNITYSDK_OFFSET(0x1B2E2A90)
#define UNITYENGINE_TRANSFORM_TRANSFORMVECTOR_1_OFFSET UNITYSDK_OFFSET(0x1B2E2970)
#define UNITYENGINE_TRANSFORM_TRANSFORMVECTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2E2960)
#define UNITYENGINE_TRANSFORM_TRANSFORMVECTOR_OFFSET UNITYSDK_OFFSET(0x1B2E2910)
#define UNITYENGINE_TRANSFORM_TRANSLATE_1_OFFSET UNITYSDK_OFFSET(0x1B2E15B0)
#define UNITYENGINE_TRANSFORM_TRANSLATE_2_OFFSET UNITYSDK_OFFSET(0x1B2E1670)
#define UNITYENGINE_TRANSFORM_TRANSLATE_3_OFFSET UNITYSDK_OFFSET(0x1B2E17C0)
#define UNITYENGINE_TRANSFORM_TRANSLATE_4_OFFSET UNITYSDK_OFFSET(0x1B2E18B0)
#define UNITYENGINE_TRANSFORM_TRANSLATE_5_OFFSET UNITYSDK_OFFSET(0x1B2E19C0)
#define UNITYENGINE_TRANSFORM_TRANSLATE_OFFSET UNITYSDK_OFFSET(0x1B2E1460)
#define UNITYENGINE_TRANSFORM_UNREGISTERRESONANCE_OFFSET UNITYSDK_OFFSET(0x1B2E2F10)
#define UNITYENGINE_TRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2E06B0)

namespace UnityEngine
{
	inline static constexpr unsigned int Transform_TypeDefinitionIndex = 4390;

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

		::System::Void set_position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_POSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_localPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_LOCALPOSITION_OFFSET))(this);
		}

		::System::Void set_localPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_LOCALPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetLocalEulerAngles(::UnityEngine::RotationOrder a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::RotationOrder))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GETLOCALEULERANGLES_OFFSET))(this, a1);
		}

		::System::Void SetLocalEulerAngles(::UnityEngine::Vector3 a1, ::UnityEngine::RotationOrder a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::RotationOrder))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SETLOCALEULERANGLES_OFFSET))(this, a1, a2);
		}

		::System::Void SetLocalEulerHint(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SETLOCALEULERHINT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_eulerAngles()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_EULERANGLES_OFFSET))(this);
		}

		::System::Void set_eulerAngles(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_EULERANGLES_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_localEulerAngles()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_LOCALEULERANGLES_OFFSET))(this);
		}

		::System::Void set_localEulerAngles(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_LOCALEULERANGLES_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_right()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_RIGHT_OFFSET))(this);
		}

		::System::Void set_right(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_RIGHT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_up()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_UP_OFFSET))(this);
		}

		::System::Void set_up(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_UP_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_forward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_FORWARD_OFFSET))(this);
		}

		::System::Void set_forward(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_FORWARD_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_rotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_ROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_localRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_LOCALROTATION_OFFSET))(this);
		}

		::System::Void set_localRotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_LOCALROTATION_OFFSET))(this, a1);
		}

		::UnityEngine::RotationOrder get_rotationOrder()
		{
			return ((::UnityEngine::RotationOrder(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_ROTATIONORDER_OFFSET))(this);
		}

		::System::Void set_rotationOrder(::UnityEngine::RotationOrder a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RotationOrder))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_ROTATIONORDER_OFFSET))(this, a1);
		}

		::System::Int32 GetRotationOrderInternal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GETROTATIONORDERINTERNAL_OFFSET))(this);
		}

		::System::Void SetRotationOrderInternal(::UnityEngine::RotationOrder a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RotationOrder))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SETROTATIONORDERINTERNAL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_localScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_LOCALSCALE_OFFSET))(this);
		}

		::System::Void set_localScale(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_LOCALSCALE_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_parent()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_PARENT_OFFSET))(this);
		}

		::System::Void set_parent(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_PARENT_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_parentInternal()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_PARENTINTERNAL_OFFSET))(this);
		}

		::System::Void set_parentInternal(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_PARENTINTERNAL_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* GetParent()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GETPARENT_OFFSET))(this);
		}

		::System::Void SetParent(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SETPARENT_OFFSET))(this, a1);
		}

		::System::Void SetParent_1(::UnityEngine::Transform* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SETPARENT_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Matrix4x4 get_worldToLocalMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_WORLDTOLOCALMATRIX_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 get_localToWorldMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_LOCALTOWORLDMATRIX_OFFSET))(this);
		}

		::System::Void SetPositionAndRotation(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SETPOSITIONANDROTATION_OFFSET))(this, a1, a2);
		}

		::System::Void Translate(::UnityEngine::Vector3 a1, ::UnityEngine::Space a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Space))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSLATE_OFFSET))(this, a1, a2);
		}

		::System::Void Translate_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSLATE_1_OFFSET))(this, a1);
		}

		::System::Void Translate_2(::System::Single a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Space a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Space))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSLATE_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Translate_3(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSLATE_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Translate_4(::UnityEngine::Vector3 a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSLATE_4_OFFSET))(this, a1, a2);
		}

		::System::Void Translate_5(::System::Single a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSLATE_5_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Rotate(::UnityEngine::Vector3 a1, ::UnityEngine::Space a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Space))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ROTATE_OFFSET))(this, a1, a2);
		}

		::System::Void Rotate_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ROTATE_1_OFFSET))(this, a1);
		}

		::System::Void Rotate_2(::System::Single a1, ::System::Single a2, ::System::Single a3, ::UnityEngine::Space a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Space))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ROTATE_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Rotate_3(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ROTATE_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RotateAroundInternal(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ROTATEAROUNDINTERNAL_OFFSET))(this, a1, a2);
		}

		::System::Void Rotate_4(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Space a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Space))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ROTATE_4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Rotate_5(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ROTATE_5_OFFSET))(this, a1, a2);
		}

		::System::Void RotateAround(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ROTATEAROUND_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LookAt(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_LOOKAT_OFFSET))(this, a1, a2);
		}

		::System::Void LookAt_1(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_LOOKAT_1_OFFSET))(this, a1);
		}

		::System::Void LookAt_2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_LOOKAT_2_OFFSET))(this, a1, a2);
		}

		::System::Void LookAt_3(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_LOOKAT_3_OFFSET))(this, a1);
		}

		::System::Void Internal_LookAt(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_INTERNAL_LOOKAT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 TransformDirection(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSFORMDIRECTION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 TransformDirection_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSFORMDIRECTION_1_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 InverseTransformDirection(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_INVERSETRANSFORMDIRECTION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 InverseTransformDirection_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_INVERSETRANSFORMDIRECTION_1_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 TransformVector(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSFORMVECTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 TransformVector_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSFORMVECTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 InverseTransformVector(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_INVERSETRANSFORMVECTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 InverseTransformVector_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_INVERSETRANSFORMVECTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 TransformPoint(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSFORMPOINT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 TransformPoint_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSFORMPOINT_1_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 InverseTransformPoint(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_INVERSETRANSFORMPOINT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 InverseTransformPoint_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_INVERSETRANSFORMPOINT_1_OFFSET))(this, a1, a2, a3);
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

		::System::Void SetSiblingIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SETSIBLINGINDEX_OFFSET))(this, a1);
		}

		::System::Int32 GetSiblingIndexByClient()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GETSIBLINGINDEXBYCLIENT_OFFSET))(this);
		}

		::System::Int32 GetSiblingIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GETSIBLINGINDEX_OFFSET))(this);
		}

		static ::UnityEngine::Transform* FindRelativeTransformWithPath(::UnityEngine::Transform* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_FINDRELATIVETRANSFORMWITHPATH_OFFSET))(a1, a2, a3);
		}

		::UnityEngine::Transform* Find(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_FIND_OFFSET))(this, a1);
		}

		::System::Void SendTransformChangedScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SENDTRANSFORMCHANGEDSCALE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_lossyScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_LOSSYSCALE_OFFSET))(this);
		}

		::System::Boolean IsChildOf(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ISCHILDOF_OFFSET))(this, a1);
		}

		::System::Boolean get_hasChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_HASCHANGED_OFFSET))(this);
		}

		::System::Void set_hasChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_HASCHANGED_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* FindChild(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_FINDCHILD_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void RotateAround_1(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ROTATEAROUND_1_OFFSET))(this, a1, a2);
		}

		::System::Void RotateAroundLocal(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ROTATEAROUNDLOCAL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Transform* GetChild(::System::Int32 a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GETCHILD_OFFSET))(this, a1);
		}

		::System::Int32 GetChildCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GETCHILDCOUNT_OFFSET))(this);
		}

		::System::Int32 get_hierarchyCapacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_HIERARCHYCAPACITY_OFFSET))(this);
		}

		::System::Void set_hierarchyCapacity(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_HIERARCHYCAPACITY_OFFSET))(this, a1);
		}

		::System::Int32 internal_getHierarchyCapacity()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_INTERNAL_GETHIERARCHYCAPACITY_OFFSET))(this);
		}

		::System::Void internal_setHierarchyCapacity(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_INTERNAL_SETHIERARCHYCAPACITY_OFFSET))(this, a1);
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

		static ::System::Void QueryResonanceNonAlloc(::Il2CppArray<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_QUERYRESONANCENONALLOC_OFFSET))(a1);
		}

		static ::System::Void ResonateNonAlloc(::Il2CppArray<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_RESONATENONALLOC_OFFSET))(a1);
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

		::System::Void get_position_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_POSITION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_position_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_POSITION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_localPosition_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_LOCALPOSITION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_localPosition_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_LOCALPOSITION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void GetLocalEulerAngles_Injected(::UnityEngine::RotationOrder a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RotationOrder, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GETLOCALEULERANGLES_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void SetLocalEulerAngles_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::RotationOrder a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::RotationOrder))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SETLOCALEULERANGLES_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void SetLocalEulerHint_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SETLOCALEULERHINT_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_rotation_Injected(::UnityEngine::Quaternion& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_ROTATION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_rotation_Injected(::UnityEngine::Quaternion& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_ROTATION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_localRotation_Injected(::UnityEngine::Quaternion& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_LOCALROTATION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_localRotation_Injected(::UnityEngine::Quaternion& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_LOCALROTATION_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_localScale_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_LOCALSCALE_INJECTED_OFFSET))(this, a1);
		}

		::System::Void set_localScale_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SET_LOCALSCALE_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_worldToLocalMatrix_Injected(::UnityEngine::Matrix4x4& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_WORLDTOLOCALMATRIX_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_localToWorldMatrix_Injected(::UnityEngine::Matrix4x4& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_LOCALTOWORLDMATRIX_INJECTED_OFFSET))(this, a1);
		}

		::System::Void SetPositionAndRotation_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::Quaternion& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_SETPOSITIONANDROTATION_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void RotateAroundInternal_Injected(::UnityEngine::Vector3& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ROTATEAROUNDINTERNAL_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void Internal_LookAt_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_INTERNAL_LOOKAT_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void TransformDirection_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSFORMDIRECTION_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void InverseTransformDirection_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_INVERSETRANSFORMDIRECTION_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void TransformVector_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSFORMVECTOR_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void InverseTransformVector_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_INVERSETRANSFORMVECTOR_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void TransformPoint_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_TRANSFORMPOINT_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void InverseTransformPoint_Injected(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_INVERSETRANSFORMPOINT_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void get_lossyScale_Injected(::UnityEngine::Vector3& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_LOSSYSCALE_INJECTED_OFFSET))(this, a1);
		}

		::System::Void RotateAround_Injected(::UnityEngine::Vector3& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ROTATEAROUND_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void RotateAroundLocal_Injected(::UnityEngine::Vector3& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_ROTATEAROUNDLOCAL_INJECTED_OFFSET))(this, a1, a2);
		}

		::System::Void get_worldToLocalMatrixNoScale_Injected(::UnityEngine::Matrix4x4& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_WORLDTOLOCALMATRIXNOSCALE_INJECTED_OFFSET))(this, a1);
		}

		::System::Void get_localToWorldMatrixNoScale_Injected(::UnityEngine::Matrix4x4& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORM_GET_LOCALTOWORLDMATRIXNOSCALE_INJECTED_OFFSET))(this, a1);
		}
	};
}
